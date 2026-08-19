#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0101[4096] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5,
    0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0,
    0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0,
    60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 67, 0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 79,
    0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0,
    101, 102, 0, 0, 0, 103, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 128, 0, 129,
    0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0,
    144, 0, 0, 145, 0, 146, 0, 147, 148, 149, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189,
    0, 0, 190, 0, 0, 0, 0, 191, 0, 192, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 197, 0, 198, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209,
    0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224,
    0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0,
    0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237,
    0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 246, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 265, 266, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0,
    0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 304, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0,
    0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0,
    0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 361, 0, 362, 0, 363, 364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0,
    371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 391, 0, 392,
    0, 393, 0, 394, 0, 395, 0, 396, 397, 0, 398, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0,
    414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420,
    0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 425, 0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0, 0, 430, 0, 0,
    431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 436, 0, 0, 0, 437, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 444, 0, 445,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 449, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 459, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0,
    0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    473, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478,
    0, 479, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    496, 0, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0,
    503, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0,
    0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0,
    0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0,
    0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0,
    537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549,
};
void recomp_unit_0101_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,29,5,16,31,6 fprs=12,13,14,20 gpr_occ=3000 fpr_occ=1422 gpr_total=4211 fpr_total=2141
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_31 = ctx.gpr[31];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[29] = aot_gpr_29; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[31] = aot_gpr_31; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_31 = ctx.gpr[31]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08998000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0101[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08998000;
    case 2u: goto L_08998014;
    case 3u: goto L_08998028;
    case 4u: goto L_08998064;
    case 5u: goto L_0899807C;
    case 6u: goto L_08998084;
    case 7u: goto L_08998088;
    case 8u: goto L_089980B0;
    case 9u: goto L_089980C0;
    case 10u: goto L_089980D0;
    case 11u: goto L_08998118;
    case 12u: goto L_089981F0;
    case 13u: goto L_089981F8;
    case 14u: goto L_0899820C;
    case 15u: goto L_08998220;
    case 16u: goto L_08998244;
    case 17u: goto L_08998258;
    case 18u: goto L_08998298;
    case 19u: goto L_089982B8;
    case 20u: goto L_08998348;
    case 21u: goto L_0899835C;
    case 22u: goto L_0899836C;
    case 23u: goto L_089983B4;
    case 24u: goto L_0899848C;
    case 25u: goto L_08998494;
    case 26u: goto L_089984A8;
    case 27u: goto L_089984BC;
    case 28u: goto L_089984E0;
    case 29u: goto L_089984F4;
    case 30u: goto L_08998534;
    case 31u: goto L_08998554;
    case 32u: goto L_089985E4;
    case 33u: goto L_089985F8;
    case 34u: goto L_08998608;
    case 35u: goto L_08998650;
    case 36u: goto L_08998710;
    case 37u: goto L_08998718;
    case 38u: goto L_0899872C;
    case 39u: goto L_08998740;
    case 40u: goto L_08998758;
    case 41u: goto L_0899876C;
    case 42u: goto L_089987AC;
    case 43u: goto L_089987C0;
    case 44u: goto L_08998850;
    case 45u: goto L_08998864;
    case 46u: goto L_08998874;
    case 47u: goto L_089988BC;
    case 48u: goto L_0899895C;
    case 49u: goto L_08998960;
    case 50u: goto L_08998A10;
    case 51u: goto L_08998AC4;
    case 52u: goto L_08998B08;
    case 53u: goto L_08998B18;
    case 54u: goto L_08998B28;
    case 55u: goto L_08998B70;
    case 56u: goto L_08998B98;
    case 57u: goto L_08998BB4;
    case 58u: goto L_08998BCC;
    case 59u: goto L_08998BE4;
    case 60u: goto L_08998C00;
    case 61u: goto L_08998C18;
    case 62u: goto L_08998C20;
    case 63u: goto L_08998C28;
    case 64u: goto L_08998C40;
    case 65u: goto L_08998C48;
    case 66u: goto L_08998C50;
    case 67u: goto L_08998C84;
    case 68u: goto L_08998C90;
    case 69u: goto L_08998CA4;
    case 70u: goto L_08998CC4;
    case 71u: goto L_08998CD0;
    case 72u: goto L_08998D08;
    case 73u: goto L_08998D14;
    case 74u: goto L_08998D28;
    case 75u: goto L_08998D30;
    case 76u: goto L_08998D50;
    case 77u: goto L_08998D5C;
    case 78u: goto L_08998D6C;
    case 79u: goto L_08998D7C;
    case 80u: goto L_08998D88;
    case 81u: goto L_08998D98;
    case 82u: goto L_08998DA4;
    case 83u: goto L_08998DB0;
    case 84u: goto L_08998DB8;
    case 85u: goto L_08998DC0;
    case 86u: goto L_08998DD8;
    case 87u: goto L_08998DE4;
    case 88u: goto L_08998E18;
    case 89u: goto L_08998E24;
    case 90u: goto L_08998E30;
    case 91u: goto L_08998E38;
    case 92u: goto L_08998E80;
    case 93u: goto L_08998E8C;
    case 94u: goto L_08998EA0;
    case 95u: goto L_08998EAC;
    case 96u: goto L_08998EB8;
    case 97u: goto L_08998EC4;
    case 98u: goto L_08998ED0;
    case 99u: goto L_08998EDC;
    case 100u: goto L_08998EE8;
    case 101u: goto L_08998F00;
    case 102u: goto L_08998F04;
    case 103u: goto L_08998F14;
    case 104u: goto L_08998F18;
    case 105u: goto L_08998F24;
    case 106u: goto L_08998F2C;
    case 107u: goto L_08998F40;
    case 108u: goto L_08998F44;
    case 109u: goto L_08998F4C;
    case 110u: goto L_08998F8C;
    case 111u: goto L_08998F9C;
    case 112u: goto L_08998FA4;
    case 113u: goto L_08998FC8;
    case 114u: goto L_08998FEC;
    case 115u: goto L_08999014;
    case 116u: goto L_08999040;
    case 117u: goto L_0899905C;
    case 118u: goto L_0899906C;
    case 119u: goto L_089990E0;
    case 120u: goto L_089990EC;
    case 121u: goto L_08999108;
    case 122u: goto L_08999128;
    case 123u: goto L_0899912C;
    case 124u: goto L_08999134;
    case 125u: goto L_0899914C;
    case 126u: goto L_0899915C;
    case 127u: goto L_0899916C;
    case 128u: goto L_08999174;
    case 129u: goto L_0899917C;
    case 130u: goto L_08999184;
    case 131u: goto L_08999198;
    case 132u: goto L_089991A8;
    case 133u: goto L_089991B0;
    case 134u: goto L_089991B8;
    case 135u: goto L_089991C0;
    case 136u: goto L_089991C4;
    case 137u: goto L_089991D4;
    case 138u: goto L_0899923C;
    case 139u: goto L_08999250;
    case 140u: goto L_08999254;
    case 141u: goto L_0899925C;
    case 142u: goto L_08999264;
    case 143u: goto L_0899926C;
    case 144u: goto L_08999280;
    case 145u: goto L_0899928C;
    case 146u: goto L_08999294;
    case 147u: goto L_0899929C;
    case 148u: goto L_089992A0;
    case 149u: goto L_089992A4;
    case 150u: goto L_089992AC;
    case 151u: goto L_089992B0;
    case 152u: goto L_0899932C;
    case 153u: goto L_0899935C;
    case 154u: goto L_08999374;
    case 155u: goto L_08999390;
    case 156u: goto L_089993BC;
    case 157u: goto L_089993D0;
    case 158u: goto L_089993F0;
    case 159u: goto L_08999434;
    case 160u: goto L_0899943C;
    case 161u: goto L_0899949C;
    case 162u: goto L_089994CC;
    case 163u: goto L_0899952C;
    case 164u: goto L_08999548;
    case 165u: goto L_08999588;
    case 166u: goto L_089995BC;
    case 167u: goto L_089995C8;
    case 168u: goto L_089995DC;
    case 169u: goto L_089995E8;
    case 170u: goto L_0899961C;
    case 171u: goto L_08999628;
    case 172u: goto L_08999630;
    case 173u: goto L_0899963C;
    case 174u: goto L_08999650;
    case 175u: goto L_08999658;
    case 176u: goto L_08999660;
    case 177u: goto L_08999668;
    case 178u: goto L_08999670;
    case 179u: goto L_0899967C;
    case 180u: goto L_089996A0;
    case 181u: goto L_089996B4;
    case 182u: goto L_089996C0;
    case 183u: goto L_089996C8;
    case 184u: goto L_089996E8;
    case 185u: goto L_08999718;
    case 186u: goto L_08999748;
    case 187u: goto L_0899974C;
    case 188u: goto L_08999758;
    case 189u: goto L_0899977C;
    case 190u: goto L_08999788;
    case 191u: goto L_0899979C;
    case 192u: goto L_089997A4;
    case 193u: goto L_089997AC;
    case 194u: goto L_089997BC;
    case 195u: goto L_089997C8;
    case 196u: goto L_089997D8;
    case 197u: goto L_089997DC;
    case 198u: goto L_089997E4;
    case 199u: goto L_08999918;
    case 200u: goto L_08999938;
    case 201u: goto L_08999940;
    case 202u: goto L_0899999C;
    case 203u: goto L_089999AC;
    case 204u: goto L_089999B8;
    case 205u: goto L_089999C4;
    case 206u: goto L_089999D0;
    case 207u: goto L_089999DC;
    case 208u: goto L_089999E8;
    case 209u: goto L_089999FC;
    case 210u: goto L_08999A04;
    case 211u: goto L_08999A18;
    case 212u: goto L_08999A24;
    case 213u: goto L_08999A34;
    case 214u: goto L_08999A48;
    case 215u: goto L_08999A60;
    case 216u: goto L_08999AE0;
    case 217u: goto L_08999AFC;
    case 218u: goto L_08999B60;
    case 219u: goto L_08999BB4;
    case 220u: goto L_08999C38;
    case 221u: goto L_08999C4C;
    case 222u: goto L_08999C54;
    case 223u: goto L_08999C64;
    case 224u: goto L_08999C7C;
    case 225u: goto L_08999C90;
    case 226u: goto L_08999C9C;
    case 227u: goto L_08999CB0;
    case 228u: goto L_08999CE4;
    case 229u: goto L_08999CF8;
    case 230u: goto L_08999D28;
    case 231u: goto L_08999D8C;
    case 232u: goto L_08999DB8;
    case 233u: goto L_08999DE0;
    case 234u: goto L_08999E04;
    case 235u: goto L_08999E4C;
    case 236u: goto L_08999E70;
    case 237u: goto L_08999E7C;
    case 238u: goto L_08999E84;
    case 239u: goto L_08999E90;
    case 240u: goto L_08999EA8;
    case 241u: goto L_08999EB4;
    case 242u: goto L_08999EBC;
    case 243u: goto L_08999EC8;
    case 244u: goto L_08999F3C;
    case 245u: goto L_08999F60;
    case 246u: goto L_08999F8C;
    case 247u: goto L_08999F90;
    case 248u: goto L_08999FF0;
    case 249u: goto L_0899A020;
    case 250u: goto L_0899A0B0;
    case 251u: goto L_0899A138;
    case 252u: goto L_0899A144;
    case 253u: goto L_0899A1C0;
    case 254u: goto L_0899A1D8;
    case 255u: goto L_0899A1E8;
    case 256u: goto L_0899A298;
    case 257u: goto L_0899A2F8;
    case 258u: goto L_0899A330;
    case 259u: goto L_0899A348;
    case 260u: goto L_0899A354;
    case 261u: goto L_0899A390;
    case 262u: goto L_0899A3C8;
    case 263u: goto L_0899A3D8;
    case 264u: goto L_0899A3E0;
    case 265u: goto L_0899A3E8;
    case 266u: goto L_0899A3EC;
    case 267u: goto L_0899A438;
    case 268u: goto L_0899A450;
    case 269u: goto L_0899A45C;
    case 270u: goto L_0899A498;
    case 271u: goto L_0899A4A8;
    case 272u: goto L_0899A588;
    case 273u: goto L_0899A590;
    case 274u: goto L_0899A630;
    case 275u: goto L_0899A638;
    case 276u: goto L_0899A648;
    case 277u: goto L_0899A650;
    case 278u: goto L_0899A654;
    case 279u: goto L_0899A67C;
    case 280u: goto L_0899A6A8;
    case 281u: goto L_0899A6B0;
    case 282u: goto L_0899A744;
    case 283u: goto L_0899A784;
    case 284u: goto L_0899A78C;
    case 285u: goto L_0899A794;
    case 286u: goto L_0899A7CC;
    case 287u: goto L_0899A7E4;
    case 288u: goto L_0899A80C;
    case 289u: goto L_0899A820;
    case 290u: goto L_0899A844;
    case 291u: goto L_0899A868;
    case 292u: goto L_0899A8A8;
    case 293u: goto L_0899A8B8;
    case 294u: goto L_0899A8D0;
    case 295u: goto L_0899A8EC;
    case 296u: goto L_0899A90C;
    case 297u: goto L_0899A92C;
    case 298u: goto L_0899A934;
    case 299u: goto L_0899A9FC;
    case 300u: goto L_0899AA24;
    case 301u: goto L_0899AA34;
    case 302u: goto L_0899AA3C;
    case 303u: goto L_0899AA44;
    case 304u: goto L_0899AA50;
    case 305u: goto L_0899AA54;
    case 306u: goto L_0899AA68;
    case 307u: goto L_0899AAE8;
    case 308u: goto L_0899AB04;
    case 309u: goto L_0899AB20;
    case 310u: goto L_0899AB3C;
    case 311u: goto L_0899AB4C;
    case 312u: goto L_0899AB54;
    case 313u: goto L_0899AB5C;
    case 314u: goto L_0899AB74;
    case 315u: goto L_0899AB8C;
    case 316u: goto L_0899ABA4;
    case 317u: goto L_0899ABBC;
    case 318u: goto L_0899ABD4;
    case 319u: goto L_0899ABEC;
    case 320u: goto L_0899AC04;
    case 321u: goto L_0899AC1C;
    case 322u: goto L_0899AC34;
    case 323u: goto L_0899AC4C;
    case 324u: goto L_0899AC64;
    case 325u: goto L_0899ACAC;
    case 326u: goto L_0899ACE4;
    case 327u: goto L_0899AD30;
    case 328u: goto L_0899AD5C;
    case 329u: goto L_0899AD64;
    case 330u: goto L_0899AD80;
    case 331u: goto L_0899AD9C;
    case 332u: goto L_0899ADA4;
    case 333u: goto L_0899ADAC;
    case 334u: goto L_0899ADB0;
    case 335u: goto L_0899ADEC;
    case 336u: goto L_0899AE60;
    case 337u: goto L_0899AEA4;
    case 338u: goto L_0899AEBC;
    case 339u: goto L_0899AEC4;
    case 340u: goto L_0899AF34;
    case 341u: goto L_0899AF3C;
    case 342u: goto L_0899AF44;
    case 343u: goto L_0899AF50;
    case 344u: goto L_0899AF58;
    case 345u: goto L_0899AF94;
    case 346u: goto L_0899AFE8;
    case 347u: goto L_0899AFF4;
    case 348u: goto L_0899B010;
    case 349u: goto L_0899B018;
    case 350u: goto L_0899B020;
    case 351u: goto L_0899B048;
    case 352u: goto L_0899B09C;
    case 353u: goto L_0899B0BC;
    case 354u: goto L_0899B0E0;
    case 355u: goto L_0899B0F8;
    case 356u: goto L_0899B100;
    case 357u: goto L_0899B124;
    case 358u: goto L_0899B150;
    case 359u: goto L_0899B158;
    case 360u: goto L_0899B17C;
    case 361u: goto L_0899B184;
    case 362u: goto L_0899B18C;
    case 363u: goto L_0899B194;
    case 364u: goto L_0899B198;
    case 365u: goto L_0899B1A8;
    case 366u: goto L_0899B1B4;
    case 367u: goto L_0899B1BC;
    case 368u: goto L_0899B1D8;
    case 369u: goto L_0899B1E8;
    case 370u: goto L_0899B1F4;
    case 371u: goto L_0899B200;
    case 372u: goto L_0899B208;
    case 373u: goto L_0899B210;
    case 374u: goto L_0899B218;
    case 375u: goto L_0899B220;
    case 376u: goto L_0899B228;
    case 377u: goto L_0899B244;
    case 378u: goto L_0899B250;
    case 379u: goto L_0899B258;
    case 380u: goto L_0899B298;
    case 381u: goto L_0899B2A0;
    case 382u: goto L_0899B2A8;
    case 383u: goto L_0899B2C0;
    case 384u: goto L_0899B2D0;
    case 385u: goto L_0899B2E0;
    case 386u: goto L_0899B310;
    case 387u: goto L_0899B324;
    case 388u: goto L_0899B340;
    case 389u: goto L_0899B35C;
    case 390u: goto L_0899B370;
    case 391u: goto L_0899B374;
    case 392u: goto L_0899B37C;
    case 393u: goto L_0899B384;
    case 394u: goto L_0899B38C;
    case 395u: goto L_0899B394;
    case 396u: goto L_0899B39C;
    case 397u: goto L_0899B3A0;
    case 398u: goto L_0899B3A8;
    case 399u: goto L_0899B3B0;
    case 400u: goto L_0899B3C4;
    case 401u: goto L_0899B400;
    case 402u: goto L_0899B40C;
    case 403u: goto L_0899B420;
    case 404u: goto L_0899B44C;
    case 405u: goto L_0899B458;
    case 406u: goto L_0899B490;
    case 407u: goto L_0899B49C;
    case 408u: goto L_0899B4B0;
    case 409u: goto L_0899B4C0;
    case 410u: goto L_0899B4CC;
    case 411u: goto L_0899B4E0;
    case 412u: goto L_0899B4EC;
    case 413u: goto L_0899B4F8;
    case 414u: goto L_0899B500;
    case 415u: goto L_0899B508;
    case 416u: goto L_0899B524;
    case 417u: goto L_0899B530;
    case 418u: goto L_0899B564;
    case 419u: goto L_0899B570;
    case 420u: goto L_0899B57C;
    case 421u: goto L_0899B584;
    case 422u: goto L_0899B610;
    case 423u: goto L_0899B61C;
    case 424u: goto L_0899B62C;
    case 425u: goto L_0899B630;
    case 426u: goto L_0899B640;
    case 427u: goto L_0899B64C;
    case 428u: goto L_0899B65C;
    case 429u: goto L_0899B668;
    case 430u: goto L_0899B674;
    case 431u: goto L_0899B680;
    case 432u: goto L_0899B68C;
    case 433u: goto L_0899B698;
    case 434u: goto L_0899B6A4;
    case 435u: goto L_0899B6BC;
    case 436u: goto L_0899B6C0;
    case 437u: goto L_0899B6D0;
    case 438u: goto L_0899B6D4;
    case 439u: goto L_0899B6E0;
    case 440u: goto L_0899B6E8;
    case 441u: goto L_0899B728;
    case 442u: goto L_0899B74C;
    case 443u: goto L_0899B770;
    case 444u: goto L_0899B774;
    case 445u: goto L_0899B77C;
    case 446u: goto L_0899B860;
    case 447u: goto L_0899B8D8;
    case 448u: goto L_0899B8E8;
    case 449u: goto L_0899B8F4;
    case 450u: goto L_0899B924;
    case 451u: goto L_0899B948;
    case 452u: goto L_0899B954;
    case 453u: goto L_0899B96C;
    case 454u: goto L_0899B978;
    case 455u: goto L_0899B988;
    case 456u: goto L_0899B9A4;
    case 457u: goto L_0899B9AC;
    case 458u: goto L_0899B9BC;
    case 459u: goto L_0899B9C8;
    case 460u: goto L_0899B9CC;
    case 461u: goto L_0899B9D8;
    case 462u: goto L_0899B9F8;
    case 463u: goto L_0899BA24;
    case 464u: goto L_0899BA40;
    case 465u: goto L_0899BA48;
    case 466u: goto L_0899BA58;
    case 467u: goto L_0899BA70;
    case 468u: goto L_0899BA7C;
    case 469u: goto L_0899BAEC;
    case 470u: goto L_0899BB08;
    case 471u: goto L_0899BB40;
    case 472u: goto L_0899BB78;
    case 473u: goto L_0899BB80;
    case 474u: goto L_0899BB84;
    case 475u: goto L_0899BBB8;
    case 476u: goto L_0899BBC0;
    case 477u: goto L_0899BBF4;
    case 478u: goto L_0899BBFC;
    case 479u: goto L_0899BC04;
    case 480u: goto L_0899BC0C;
    case 481u: goto L_0899BC14;
    case 482u: goto L_0899BC1C;
    case 483u: goto L_0899BC24;
    case 484u: goto L_0899BC2C;
    case 485u: goto L_0899BC34;
    case 486u: goto L_0899BC3C;
    case 487u: goto L_0899BC4C;
    case 488u: goto L_0899BC54;
    case 489u: goto L_0899BC70;
    case 490u: goto L_0899BC88;
    case 491u: goto L_0899BC98;
    case 492u: goto L_0899BCB4;
    case 493u: goto L_0899BCD0;
    case 494u: goto L_0899BCD8;
    case 495u: goto L_0899BCE8;
    case 496u: goto L_0899BD00;
    case 497u: goto L_0899BD0C;
    case 498u: goto L_0899BD18;
    case 499u: goto L_0899BD24;
    case 500u: goto L_0899BD34;
    case 501u: goto L_0899BD54;
    case 502u: goto L_0899BD68;
    case 503u: goto L_0899BD80;
    case 504u: goto L_0899BD88;
    case 505u: goto L_0899BD90;
    case 506u: goto L_0899BDA8;
    case 507u: goto L_0899BDB0;
    case 508u: goto L_0899BDC8;
    case 509u: goto L_0899BDD0;
    case 510u: goto L_0899BDE8;
    case 511u: goto L_0899BDF0;
    case 512u: goto L_0899BE08;
    case 513u: goto L_0899BE10;
    case 514u: goto L_0899BE28;
    case 515u: goto L_0899BE30;
    case 516u: goto L_0899BE48;
    case 517u: goto L_0899BE50;
    case 518u: goto L_0899BE68;
    case 519u: goto L_0899BE70;
    case 520u: goto L_0899BE88;
    case 521u: goto L_0899BE90;
    case 522u: goto L_0899BEA8;
    case 523u: goto L_0899BEB0;
    case 524u: goto L_0899BEC8;
    case 525u: goto L_0899BED0;
    case 526u: goto L_0899BEE8;
    case 527u: goto L_0899BEF0;
    case 528u: goto L_0899BF08;
    case 529u: goto L_0899BF10;
    case 530u: goto L_0899BF28;
    case 531u: goto L_0899BF30;
    case 532u: goto L_0899BF48;
    case 533u: goto L_0899BF50;
    case 534u: goto L_0899BF68;
    case 535u: goto L_0899BF70;
    case 536u: goto L_0899BF78;
    case 537u: goto L_0899BF80;
    case 538u: goto L_0899BF98;
    case 539u: goto L_0899BFA0;
    case 540u: goto L_0899BFA8;
    case 541u: goto L_0899BFB0;
    case 542u: goto L_0899BFB8;
    case 543u: goto L_0899BFC0;
    case 544u: goto L_0899BFCC;
    case 545u: goto L_0899BFD4;
    case 546u: goto L_0899BFE0;
    case 547u: goto L_0899BFE8;
    case 548u: goto L_0899BFF4;
    case 549u: goto L_0899BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08998000:
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08998014u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998014u) goto L_08998014;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998014:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_31 = (0x08998028u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998028u) goto L_08998028;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998028:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[22]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[22] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[23]);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (aot_gpr_4 & 255u);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08998064u);
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998064u) goto L_08998064;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998064:
    aot_fpr_12 = ctx.fpr[28] - ctx.fpr[22];
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
      if (branch_taken) {
          goto L_08998084;
      }
      goto L_0899807C;
    }
L_0899807C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08998088;
      }
      goto L_08998084;
    }
L_08998084:
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    goto L_08998088;
L_08998088:
    ctx.gpr[8] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (0u | 62u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089980B0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089980B0u) goto L_089980B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089980B0:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 32 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0100_entry, 100u, 1010u, 0x08997FC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_089980C0;
    }
L_089980C0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (0u | 83u);
    aot_gpr_31 = (0x089980D0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089980D0u) goto L_089980D0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089980D0:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998118:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_31);
    aot_gpr_4 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (14673u << 16u);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 255u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (15523u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (16128u << 16u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_16 = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_089981F0;
L_089981F0:
    aot_gpr_31 = (0x089981F8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089981F8u) goto L_089981F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089981F8:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x0899820Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899820Cu) goto L_0899820C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899820C:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08998220u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998220u) goto L_08998220;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998220:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x08998244u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998244u) goto L_08998244;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998244:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x08998258u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998258u) goto L_08998258;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998258:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08998298u);
    aot_gpr_16 = (aot_gpr_5 & 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998298u) goto L_08998298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998298:
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x089982B8u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089982B8u) goto L_089982B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089982B8:
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (0u | 62u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08998348u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998348u) goto L_08998348;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998348:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 45 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_089981F0;
      }
      goto L_0899835C;
    }
L_0899835C:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (0u | 81u);
    aot_gpr_31 = (0x0899836Cu);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899836Cu) goto L_0899836C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899836C:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089983B4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_5);
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), aot_gpr_31);
    aot_gpr_4 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48819u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (14673u << 16u);
    aot_gpr_4 = (16051u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 46871u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_5 = (0u | 255u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_5));
    aot_gpr_4 = (15395u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (16128u << 16u);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    aot_gpr_4 = (16256u << 16u);
    aot_gpr_16 = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_0899848C;
L_0899848C:
    aot_gpr_31 = (0x08998494u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998494u) goto L_08998494;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998494:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x089984A8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089984A8u) goto L_089984A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089984A8:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x089984BCu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089984BCu) goto L_089984BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089984BC:
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_31 = (0x089984E0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089984E0u) goto L_089984E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089984E0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x089984F4u);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089984F4u) goto L_089984F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089984F4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x08998534u);
    aot_gpr_16 = (aot_gpr_5 & 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998534u) goto L_08998534;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998534:
    aot_gpr_4 = (15651u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x08998554u);
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998554u) goto L_08998554;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998554:
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (0u | 62u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x089985E4u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089985E4u) goto L_089985E4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089985E4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 20 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0899848C;
      }
      goto L_089985F8;
    }
L_089985F8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (0u | 81u);
    aot_gpr_31 = (0x08998608u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998608u) goto L_08998608;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998608:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998650:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), ctx.gpr[30]);
    ctx.gpr[30] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), aot_gpr_5);
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), aot_gpr_31);
    aot_gpr_4 = (0u | 128u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (48035u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15267u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[23] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13788)));
    aot_gpr_4 = (48163u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[22] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13792)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[21] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13780)));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13784)));
    aot_gpr_4 = (16192u << 16u);
    aot_gpr_16 = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    goto L_08998710;
L_08998710:
    aot_gpr_31 = (0x08998718u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), aot_gpr_16);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998718u) goto L_08998718;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998718:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x0899872Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899872Cu) goto L_0899872C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899872C:
    aot_fpr_12 = ctx.fpr[28] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_gpr_31 = (0x08998740u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998740u) goto L_08998740;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998740:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    aot_gpr_31 = (0x08998758u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998758u) goto L_08998758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998758:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    aot_gpr_31 = (0x0899876Cu);
    aot_gpr_6 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899876Cu) goto L_0899876C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899876C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 + ctx.gpr[20]);
    ctx.gpr[7] = (aot_gpr_6 < ctx.gpr[20] ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[7] = (aot_gpr_4 + ctx.gpr[21]);
    aot_gpr_16 = (aot_gpr_6 | 0u);
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(60), aot_gpr_16);
    aot_gpr_5 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-13800), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_31 = (0x089987ACu);
    aot_gpr_16 = (aot_gpr_5 & 3u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089987ACu) goto L_089987AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089987AC:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[22];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_31 = (0x089987C0u);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089987C0u) goto L_089987C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089987C0:
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[24];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(48)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(49)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(50)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_fpr_13 = ctx.fpr[24] + aot_fpr_13;
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (aot_gpr_16 | 0u);
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(aot_gpr_4));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (0u | 22u);
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(aot_gpr_6));
    ctx.gpr[9] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(60)));
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08998850u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998850u) goto L_08998850;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998850:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(56)));
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08998710;
      }
      goto L_08998864;
    }
L_08998864:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (0u | 40u);
    aot_gpr_31 = (0x08998874u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998874u) goto L_08998874;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998874:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089988BC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-320));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_4);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.fpr[30] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15395u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08998960;
      }
      goto L_0899895C;
    }
L_0899895C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08998960;
L_08998960:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_16 = (0u | 0u);
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (17536u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-8224));
    aot_gpr_5 = (15820u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_4);
    aot_gpr_4 = (2247u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-12320));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (16320u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[23] = (0u | 1000u);
    goto L_08998A10;
L_08998A10:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_16);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (17332u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16704u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[26];
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08998AC4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998AC4u) goto L_08998AC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998AC4:
    aot_fpr_12 = ctx.fpr[24] - aot_fpr_20;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u | 79u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_gpr_31 = (0x08998B08u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998B08u) goto L_08998B08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998B08:
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_16) < 12 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08998A10;
      }
      goto L_08998B18;
    }
L_08998B18:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (0u | 39u);
    aot_gpr_31 = (0x08998B28u);
    aot_gpr_6 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0018_entry, 18u, 46u, 0x0884C57Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08998B28u) goto L_08998B28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998B28:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(252), aot_run_words);
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
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998B70:
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(16);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(32);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(48);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vtfm_ct<0u, 36u, 1u, 3u, 3u>();
    ctx.execute_vfpu_vec3_ct<0u, 0u, 7u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998B98:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998BB4:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998BCC:
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998BE4:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998C00:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[0])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08998C20;
      }
      goto L_08998C18;
    }
L_08998C18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08998C20;
      }
      goto L_08998C20;
    }
L_08998C20:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998C28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[0])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08998C48;
      }
      goto L_08998C40;
    }
L_08998C40:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08998C48;
      }
      goto L_08998C48;
    }
L_08998C48:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998C50:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.gpr[10] = (17530u << 16u);
    ctx.gpr[9] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[8] = (20224u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[18])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[10]);
      if (branch_taken) {
          goto L_08998C90;
      }
      goto L_08998C84;
    }
L_08998C84:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_08998CA4;
      }
      goto L_08998C90;
    }
L_08998C90:
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[18];
    ctx.gpr[11] = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[11]);
    goto L_08998CA4;
L_08998CA4:
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[8] = (ctx.gpr[11] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[3] = (ctx.gpr[11] < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[8] << 2u);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.gpr[2] = (aot_gpr_5 + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08998CD0;
      }
      goto L_08998CC4;
    }
L_08998CC4:
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_08998CD0;
L_08998CD0:
    ctx.gpr[3] = (ctx.gpr[9] << 2u);
    ctx.gpr[12] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[3] = (aot_gpr_5 + ctx.gpr[3]);
    ctx.gpr[12] = (ctx.gpr[12] << 2u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (aot_gpr_5 + ctx.gpr[12]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[18])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_08998D14;
      }
      goto L_08998D08;
    }
L_08998D08:
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
      if (branch_taken) {
          goto L_08998D28;
      }
      goto L_08998D14;
    }
L_08998D14:
    ctx.fpr[19] = ctx.fpr[16] - ctx.fpr[18];
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    goto L_08998D28;
L_08998D28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08998D6C;
      }
      goto L_08998D30;
    }
L_08998D30:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[16]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[18])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
        goto L_08998D5C;
    }
    goto L_08998D50;
L_08998D50:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08998D6C;
      }
      goto L_08998D5C;
    }
L_08998D5C:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[2] = (ctx.gpr[3] + ctx.gpr[2]);
    goto L_08998D6C;
L_08998D6C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[18])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[18];
        goto L_08998D88;
    }
    goto L_08998D7C;
L_08998D7C:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08998D98;
      }
      goto L_08998D88;
    }
L_08998D88:
    ctx.gpr[3] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[3] = (ctx.gpr[12] + ctx.gpr[3]);
    goto L_08998D98;
L_08998D98:
    ctx.gpr[12] = (aot_gpr_6 < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[12] == 0u) {
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
        goto L_08998E38;
    }
    goto L_08998DA4;
L_08998DA4:
    ctx.gpr[12] = (0u | 1u);
    ctx.gpr[13] = (ctx.gpr[2] < static_cast<std::uint32_t>(76) ? 1u : 0u);
    ctx.gpr[14] = (32768u << 16u);
    goto L_08998DB0;
L_08998DB0:
    if (ctx.gpr[13] == 0u) {
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
        goto L_08998E38;
    }
    goto L_08998DB8;
L_08998DB8:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
        goto L_08998E38;
    }
    goto L_08998DC0;
L_08998DC0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[2] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[2] = (ctx.gpr[2] >> 2u);
    ctx.gpr[2] = (ctx.gpr[11] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
      if (branch_taken) {
          goto L_08998DE4;
      }
      goto L_08998DD8;
    }
L_08998DD8:
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    goto L_08998DE4;
L_08998DE4:
    ctx.gpr[2] = (ctx.gpr[9] << 2u);
    ctx.gpr[13] = (ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (aot_gpr_5 + ctx.gpr[2]);
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_gpr_5 + ctx.gpr[13]);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[15] - aot_fpr_14;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[18])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[18];
        goto L_08998E24;
    }
    goto L_08998E18;
L_08998E18:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08998E30;
      }
      goto L_08998E24;
    }
L_08998E24:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[14]);
    goto L_08998E30;
L_08998E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[2] < static_cast<std::uint32_t>(76) ? 1u : 0u);
      if (branch_taken) {
          goto L_08998DB0;
      }
      goto L_08998E38;
    }
L_08998E38:
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[19] < ctx.fpr[18])) ? 0x00800000u : 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-3));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + ctx.gpr[8]);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08998E8C;
      }
      goto L_08998E80;
    }
L_08998E80:
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_08998EA0;
      }
      goto L_08998E8C;
    }
L_08998E8C:
    ctx.fpr[18] = ctx.fpr[19] - ctx.fpr[18];
    aot_gpr_5 = (32768u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    goto L_08998EA0;
L_08998EA0:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
      if (branch_taken) {
          goto L_08998EB8;
      }
      goto L_08998EAC;
    }
L_08998EAC:
    ctx.gpr[7] = (20352u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[18];
    goto L_08998EB8;
L_08998EB8:
    ctx.fpr[19] = std::bit_cast<float>(aot_gpr_5);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
      if (branch_taken) {
          goto L_08998ED0;
      }
      goto L_08998EC4;
    }
L_08998EC4:
    aot_gpr_5 = (20352u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[18];
    goto L_08998ED0;
L_08998ED0:
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
      if (branch_taken) {
          goto L_08998EE8;
      }
      goto L_08998EDC;
    }
L_08998EDC:
    aot_gpr_5 = (20352u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[2];
    goto L_08998EE8;
L_08998EE8:
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[19];
    ctx.fpr[18] = ctx.fpr[19] / ctx.fpr[18];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08998F04;
      }
      goto L_08998F00;
    }
L_08998F00:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08998F04;
L_08998F04:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[18] < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08998F18;
      }
      goto L_08998F14;
    }
L_08998F14:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08998F18;
L_08998F18:
    aot_gpr_5 = (ctx.gpr[3] < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    ctx.fpr[19] = aot_fpr_12 - ctx.fpr[18];
        goto L_08998F2C;
    }
    goto L_08998F24;
L_08998F24:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[19] = aot_fpr_12 - ctx.fpr[18];
    goto L_08998F2C;
L_08998F2C:
    aot_gpr_5 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[15])) && ctx.fpr[17] == ctx.fpr[15])) ? 0x00800000u : 0u);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = ctx.fpr[19]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08998F44;
      }
      goto L_08998F40;
    }
L_08998F40:
    aot_gpr_5 = (0u | 1u);
    goto L_08998F44;
L_08998F44:
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (16448u << 16u);
      if (branch_taken) {
          goto L_08998F8C;
      }
      goto L_08998F4C;
    }
L_08998F4C:
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_5);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08998F9C;
      }
      goto L_08998F8C;
    }
L_08998F8C:
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[15];
    { const float fs = ctx.fpr[18]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[15] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08998F9C;
L_08998F9C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998FA4:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998FC8:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08998FEC:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999014:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_gpr_5);
    ctx.execute_vfpu_unary_ct<64u, 0u, 1u, 21u>();
    ctx.execute_vfpu_vec3_ct<0u, 32u, 64u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<32u, 0u, 1u, 20u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999040:
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.fpr[0] = std::bit_cast<float>(aot_gpr_4);
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899905C:
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
    ctx.gpr[2] = (aot_gpr_4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899906C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_14)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089990E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08999128;
      }
      goto L_089990EC;
    }
L_089990EC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08999128;
      }
      goto L_08999108;
    }
L_08999108:
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(1929))))));
    aot_gpr_6 = (aot_gpr_5 << 5u);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 - aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0899912C;
      }
      goto L_08999128;
    }
L_08999128:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899912C;
L_0899912C:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999134:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7580)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_0899914C;
    }
L_0899914C:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_gpr_4 = (2236u << 16u);
      if (branch_taken) {
          goto L_089991B8;
      }
      goto L_0899915C;
    }
L_0899915C:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_0899916C;
    }
L_0899916C:
    aot_gpr_31 = (0x08999174u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999174u) goto L_08999174;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999174:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_0899917C;
    }
L_0899917C:
    aot_gpr_31 = (0x08999184u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999184u) goto L_08999184;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999184:
    aot_gpr_4 = (ctx.gpr[2] + static_cast<std::uint32_t>(2228));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (0u | 55u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_08999198;
    }
L_08999198:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_089991A8;
    }
L_089991A8:
    aot_gpr_31 = (0x089991B0u);
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089991B0u) goto L_089991B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089991B0:
    { const bool branch_taken = aot_gpr_16 != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089991C0;
      }
      goto L_089991B8;
    }
L_089991B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089991C4;
      }
      goto L_089991C0;
    }
L_089991C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089991C4;
L_089991C4:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089991D4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(252), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(256), ctx.gpr[18]);
    ctx.gpr[18] = (aot_gpr_6 | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1929))))));
    aot_gpr_5 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(260), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_4 = (ctx.gpr[18] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const std::uint32_t aot_run_words[4]{ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(264), aot_run_words); }
    aot_gpr_31 = (0x0899923Cu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1396));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0143_entry, 143u, 159u, 0x08A40D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899923Cu) goto L_0899923C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899923C:
    aot_gpr_4 = (17036u << 16u);
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08999254;
      }
      goto L_08999250;
    }
L_08999250:
    ctx.gpr[19] = (0u | 2u);
    goto L_08999254;
L_08999254:
    aot_gpr_31 = (0x0899925Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899925Cu) goto L_0899925C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899925C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089992B0;
      }
      goto L_08999264;
    }
L_08999264:
    aot_gpr_31 = (0x0899926Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899926Cu) goto L_0899926C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899926C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(3262))))));
    aot_gpr_5 = (aot_gpr_5 & 8u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_089992A0;
      }
      goto L_08999280;
    }
L_08999280:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1152)));
    if (aot_gpr_5 == 0u) {
    aot_gpr_4 = (ctx.gpr[20] & 255u);
        goto L_089992A4;
    }
    goto L_0899928C;
L_0899928C:
    aot_gpr_31 = (0x08999294u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999294u) goto L_08999294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_089992A4;
      }
      goto L_0899929C;
    }
L_0899929C:
    ctx.gpr[20] = (0u | 1u);
    goto L_089992A0;
L_089992A0:
    aot_gpr_4 = (ctx.gpr[20] & 255u);
    goto L_089992A4;
L_089992A4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089992B0;
      }
      goto L_089992AC;
    }
L_089992AC:
    ctx.gpr[19] = (0u | 1u);
    goto L_089992B0;
L_089992B0:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_5 = (16153u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 39322u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[19] << 5u);
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(5240));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08999374;
      }
      goto L_0899932C;
    }
L_0899932C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13696)));
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_13;
    aot_fpr_13 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
        goto L_0899935C;
    }
    goto L_0899935C;
L_0899935C:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08999374;
L_08999374:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (16140u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_089993D0;
      }
      goto L_08999390;
    }
L_08999390:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13692)));
    aot_fpr_13 = ctx.fpr[22] - aot_fpr_13;
    aot_fpr_14 = ctx.fpr[22] - aot_fpr_14;
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089993BC;
    }
    goto L_089993BC;
L_089993BC:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_089993D0;
L_089993D0:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_31 = (0x089993F0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089993F0u) goto L_089993F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089993F0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    aot_gpr_31 = (0x08999434u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999434u) goto L_08999434;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899949C;
      }
      goto L_0899943C;
    }
L_0899943C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(160));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13752)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0899949Cu);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899949Cu) goto L_0899949C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899949C:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(240), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      ctx.gpr[20] = aot_run_words[6];
      ctx.gpr[21] = aot_run_words[7];
      ctx.gpr[22] = aot_run_words[8];
      aot_gpr_31 = aot_run_words[9];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089994CC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_31);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(296)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0899952Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899952Cu) goto L_0899952C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899952C:
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13596)));
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999548:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[7]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
    aot_gpr_31 = (0x08999588u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999588u) goto L_08999588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999588:
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[15];
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_31 = (0x089995BCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089995BCu) goto L_089995BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089995BC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089995C8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089995C8u) goto L_089995C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089995C8:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_089995E8;
      }
      goto L_089995DC;
    }
L_089995DC:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 + aot_fpr_12;
    goto L_089995E8;
L_089995E8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_6 = (aot_gpr_4 << 8u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (0u | 58u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(1914)));
    goto L_0899961C;
L_0899961C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999668;
      }
      goto L_08999628;
    }
L_08999628:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08999668;
      }
      goto L_08999630;
    }
L_08999630:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1784)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999658;
      }
      goto L_0899963C;
    }
L_0899963C:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1784)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2228));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08999658;
      }
      goto L_08999650;
    }
L_08999650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08999660;
      }
      goto L_08999658;
    }
L_08999658:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(4));
    goto L_08999660;
L_08999660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_direct_load16(aot_gpr_6 + static_cast<std::uint32_t>(1914)));
      if (branch_taken) {
          goto L_0899961C;
      }
      goto L_08999668;
    }
L_08999668:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08999758;
      }
      goto L_08999670;
    }
L_08999670:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(1784)));
    aot_gpr_31 = (0x0899967Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 54u, 0x08A1C648u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899967Cu) goto L_0899967C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899967C:
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x089996A0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089996A0u) goto L_089996A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089996A0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_089996C0;
      }
      goto L_089996B4;
    }
L_089996B4:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_089996C0;
L_089996C0:
    aot_gpr_31 = (0x089996C8u);
    aot_fpr_12 = aot_fpr_20 - aot_fpr_12;
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x089996C8u) goto L_089996C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089996C8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    aot_gpr_4 = (16329u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08999758;
      }
      goto L_089996E8;
    }
L_089996E8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    aot_gpr_4 = (16288u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08999758;
      }
      goto L_08999718;
    }
L_08999718:
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (15692u << 16u);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899974C;
      }
      goto L_08999748;
    }
L_08999748:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899974C;
L_0899974C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_31 = (0x08999758u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999758u) goto L_08999758;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999758:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[19] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899977C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089997A4;
      }
      goto L_08999788;
    }
L_08999788:
    aot_gpr_6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[7] = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_089997AC;
      }
      goto L_0899979C;
    }
L_0899979C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089997BC;
      }
      goto L_089997A4;
    }
L_089997A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089997DC;
      }
      goto L_089997AC;
    }
L_089997AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    goto L_089997BC;
L_089997BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089997D8;
      }
      goto L_089997C8;
    }
L_089997C8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(28)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_089997DC;
      }
      goto L_089997D8;
    }
L_089997D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089997DC;
L_089997DC:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_089997E4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
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
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 4u);
    aot_mem.aot_direct_store16(aot_gpr_4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (49024u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(164), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (0u | 9u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(172), aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(176), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (15630u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 64053u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (16880u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(aot_gpr_5));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(162), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(133), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(134), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (0u | 3u);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(116), aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_4 + static_cast<std::uint32_t>(228), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_6 = (0u | 0u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(528));
    goto L_08999918;
L_08999918:
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(592), 0u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::int32_t>(aot_gpr_6) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08999918;
      }
      goto L_08999938;
    }
L_08999938:
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999940:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6640)));
    { const std::uint32_t aot_run_words[7]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(6672));
    ctx.gpr[18] = (ctx.gpr[28] + static_cast<std::uint32_t>(6688));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(6704));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_5 | 0u);
    ctx.gpr[21] = (aot_gpr_6 | 0u);
    ctx.gpr[20] = (ctx.gpr[7] | 0u);
    ctx.gpr[11] = (ctx.gpr[8] | 0u);
    ctx.gpr[30] = (ctx.gpr[9] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_31);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_089999AC;
      }
      goto L_0899999C;
    }
L_0899999C:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6640), aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_089999AC;
L_089999AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6644)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089999C4;
      }
      goto L_089999B8;
    }
L_089999B8:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6644), aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_089999C4;
L_089999C4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6648)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_089999DC;
      }
      goto L_089999D0;
    }
L_089999D0:
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6648), aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_089999DC;
L_089999DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6652)));
    if (aot_gpr_4 != 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6656)));
        goto L_089999FC;
    }
    goto L_089999E8;
L_089999E8:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6652), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6656)));
    goto L_089999FC;
L_089999FC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[11]);
      if (branch_taken) {
          goto L_08999A18;
      }
      goto L_08999A04;
    }
L_08999A04:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), ctx.gpr[11]);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6656), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6724), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08999A18;
L_08999A18:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6660)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08999A34;
      }
      goto L_08999A24;
    }
L_08999A24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6660), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08999A34;
L_08999A34:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2068)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08999A60;
      }
      goto L_08999A48;
    }
L_08999A48:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08999A60;
L_08999A60:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6728)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6720)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08999AE0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(208));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 381u, 0x08A1A87Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999AE0u) goto L_08999AE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999AE0:
    ctx.gpr[23] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6724)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08999AFCu);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(204));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 381u, 0x08A1A87Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999AFCu) goto L_08999AFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999AFC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6720), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6724), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6728), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(72), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
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
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999B60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-128));
    aot_gpr_6 = (17036u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(108), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_6 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    { const bool branch_taken = aot_gpr_4 == 0u;
    ctx.gpr[18] = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_08999DE0;
      }
      goto L_08999BB4;
    }
L_08999BB4:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (15948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16671u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16648u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[22] = aot_fpr_12 + aot_fpr_13;
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    aot_gpr_31 = (0x08999C38u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999C38u) goto L_08999C38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999C38:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13516)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13520)));
    aot_gpr_5 = (ctx.gpr[3] | 0u);
    aot_gpr_31 = (0x08999C4Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999C4Cu) goto L_08999C4C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999C4C:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
        goto L_08999C64;
    }
    goto L_08999C54;
L_08999C54:
    aot_gpr_4 = (15107u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4719u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    goto L_08999C64;
L_08999C64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_gpr_31 = (0x08999C7Cu);
    aot_fpr_12 = aot_fpr_14 - ctx.fpr[15];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999C7Cu) goto L_08999C7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999C7C:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[24])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08999C9C;
      }
      goto L_08999C90;
    }
L_08999C90:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08999C9C;
L_08999C9C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(312)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08999CE4;
      }
      goto L_08999CB0;
    }
L_08999CB0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(312)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08999D28;
      }
      goto L_08999CE4;
    }
L_08999CE4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08999D28;
      }
      goto L_08999CF8;
    }
L_08999CF8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(308)));
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[22];
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_fpr_12 = ctx.fpr[16] + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08999D28;
L_08999D28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16095u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26355u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(312)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x08999D8Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 347u, 0x089A6CACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999D8Cu) goto L_08999D8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999D8C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    aot_gpr_31 = (0x08999DB8u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0136_entry, 136u, 69u, 0x08A2456Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999DB8u) goto L_08999DB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999DB8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x08999DE0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999DE0u) goto L_08999DE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999DE0:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999E04:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16179u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(68), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), aot_gpr_31);
    aot_gpr_31 = (0x08999E4Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08998FC8;
L_08999E4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 & 4095u);
    aot_gpr_5 = (15049u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_5 = (aot_gpr_5 | 4059u);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08999E7C;
      }
      goto L_08999E70;
    }
L_08999E70:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08999E7C;
L_08999E7C:
    aot_gpr_31 = (0x08999E84u);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08998FA4;
L_08999E84:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_gpr_31 = (0x08999E90u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08998FC8;
L_08999E90:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_gpr_4 & 4095u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08999EB4;
      }
      goto L_08999EA8;
    }
L_08999EA8:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08999EB4;
L_08999EB4:
    aot_gpr_31 = (0x08999EBCu);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08998FC8;
L_08999EBC:
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_gpr_31 = (0x08999EC8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08998FA4;
L_08999EC8:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16512u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x08999F3Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999F3Cu) goto L_08999F3C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999F3C:
    { std::uint32_t aot_run_words[7]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      aot_gpr_16 = aot_run_words[4];
      ctx.gpr[17] = aot_run_words[5];
      aot_gpr_31 = aot_run_words[6];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999F60:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_gpr_16);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(116)));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (0u | 3u);
    { const std::uint32_t aot_run_words[3]{ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(84), aot_run_words); }
    { const bool branch_taken = ctx.gpr[7] == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08999F90;
      }
      goto L_08999F8C;
    }
L_08999F8C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(116), aot_gpr_5);
    goto L_08999F90;
L_08999F90:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x08999FF0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08999FF0u) goto L_08999FF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08999FF0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x0899A020u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A020u) goto L_0899A020;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A020:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A0B0:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    aot_gpr_6 = (2236u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_6 + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(464));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(472)));
    ctx.gpr[7] = (16512u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.gpr[7]);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0899A138u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A138u) goto L_0899A138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A138:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A144:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-112));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(432));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(408)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(200)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0899A1C0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0136_entry, 136u, 69u, 0x08A2456Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A1C0u) goto L_0899A1C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A1C0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(200)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_31 = (0x0899A1D8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A1D8u) goto L_0899A1D8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A1D8:
    ctx.gpr[18] = (aot_gpr_16 + static_cast<std::uint32_t>(96));
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(448));
    aot_gpr_31 = (0x0899A1E8u);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A1E8u) goto L_0899A1E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A1E8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(96), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      ctx.gpr[18] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A298:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    aot_gpr_5 = (aot_mem.aot_direct_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_5 << 8u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (2238u << 16u);
    aot_gpr_5 = (ctx.gpr[7] + aot_gpr_5);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-6992));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(163)));
    aot_gpr_6 = (16696u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(228), aot_run_words); }
    { const std::uint32_t aot_run_words[3]{ctx.gpr[18], ctx.gpr[19], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(244), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0899A650;
      }
      goto L_0899A2F8;
    }
L_0899A2F8:
    aot_gpr_4 = (2236u << 16u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_16;
    // nop
      if (branch_taken) {
          goto L_0899A390;
      }
      goto L_0899A330;
    }
L_0899A330:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 1u);
        goto L_0899A354;
    }
    goto L_0899A348;
L_0899A348:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u - aot_gpr_4);
      if (branch_taken) {
          goto L_0899A354;
      }
      goto L_0899A354;
    }
L_0899A354:
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A3C8;
      }
      goto L_0899A390;
    }
L_0899A390:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0899A3C8;
L_0899A3C8:
    ctx.gpr[18] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A648;
      }
      goto L_0899A3D8;
    }
L_0899A3D8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A3E8;
      }
      goto L_0899A3E0;
    }
L_0899A3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0899A3EC;
      }
      goto L_0899A3E8;
    }
L_0899A3E8:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0899A3EC;
L_0899A3EC:
    aot_gpr_4 = (17008u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_31 = (0x0899A438u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A438u) goto L_0899A438;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A438:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0899A45C;
      }
      goto L_0899A450;
    }
L_0899A450:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_0899A45C;
L_0899A45C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (ctx.gpr[19] << 6u);
    aot_gpr_5 = (ctx.gpr[19] << 4u);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = aot_fpr_13 / ctx.fpr[15];
    aot_gpr_31 = (0x0899A498u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    goto L_08998FC8;
L_0899A498:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(124)));
    aot_gpr_31 = (0x0899A4A8u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[22];
    goto L_08998FA4;
L_0899A4A8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(112));
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_6 = (16076u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_gpr_31 = (0x0899A588u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A588u) goto L_0899A588;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A588:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A638;
      }
      goto L_0899A590;
    }
L_0899A590:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (16560u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (16204u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (16396u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(32));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(163), static_cast<std::uint8_t>(0u));
    aot_gpr_31 = (0x0899A630u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0105_entry, 105u, 6u, 0x089A8094u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A630u) goto L_0899A630;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899A654;
      }
      goto L_0899A638;
    }
L_0899A638:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899A3D8;
      }
      goto L_0899A648;
    }
L_0899A648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A654;
      }
      goto L_0899A650;
    }
L_0899A650:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899A654;
L_0899A654:
    { std::uint32_t aot_run_words[8]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(224), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      aot_gpr_31 = aot_run_words[7];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A67C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    ctx.gpr[19] = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0899A78C;
      }
      goto L_0899A6A8;
    }
L_0899A6A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A78C;
      }
      goto L_0899A6B0;
    }
L_0899A6B0:
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13640)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0899A744u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A744u) goto L_0899A744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A744:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    aot_gpr_4 = (48949u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 1153u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899A794;
      }
      goto L_0899A784;
    }
L_0899A784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A80C;
      }
      goto L_0899A78C;
    }
L_0899A78C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899A8EC;
      }
      goto L_0899A794;
    }
L_0899A794:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16181u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 1153u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899A7E4;
      }
      goto L_0899A7CC;
    }
L_0899A7CC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899A7E4;
L_0899A7E4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899A844;
      }
      goto L_0899A80C;
    }
L_0899A80C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899A844;
      }
      goto L_0899A820;
    }
L_0899A820:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0899A844;
L_0899A844:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13644)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0899A868u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A868u) goto L_0899A868;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A868:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13636)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899A8D0;
      }
      goto L_0899A8A8;
    }
L_0899A8A8:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899A8D0;
      }
      goto L_0899A8B8;
    }
L_0899A8B8:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0899A8D0;
L_0899A8D0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[2] = (0u | 1u);
    goto L_0899A8EC;
L_0899A8EC:
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(160), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      ctx.gpr[18] = aot_run_words[3];
      ctx.gpr[19] = aot_run_words[4];
      aot_gpr_31 = aot_run_words[5];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A90C:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_gpr_4 = (aot_gpr_6 | 0u);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(184), aot_gpr_31);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0899AA3C;
      }
      goto L_0899A92C;
    }
L_0899A92C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AA3C;
      }
      goto L_0899A934;
    }
L_0899A934:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13616)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_6);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13612)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_29 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_31 = (0x0899A9FCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899A9FCu) goto L_0899A9FC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899A9FC:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (0x0899AA24u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AA24u) goto L_0899AA24;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AA24:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AA44;
      }
      goto L_0899AA34;
    }
L_0899AA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AA50;
      }
      goto L_0899AA3C;
    }
L_0899AA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899AA54;
      }
      goto L_0899AA44;
    }
L_0899AA44:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13608)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899AA50;
L_0899AA50:
    ctx.gpr[2] = (0u | 1u);
    goto L_0899AA54;
L_0899AA54:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(176), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AA68:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(240), ctx.gpr[23]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(196), ctx.gpr[8]);
    ctx.gpr[23] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(232), ctx.gpr[21]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[2] = (16880u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(244), ctx.gpr[30]);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.gpr[30] = (0u | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 15u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[8]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(236), ctx.gpr[22]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(248), aot_gpr_31);
    aot_gpr_31 = (0x0899AAE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AAE8u) goto L_0899AAE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AAE8:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    aot_gpr_5 = (17948u << 16u);
    ctx.gpr[20] = (0u | 0u);
    aot_gpr_5 = (aot_gpr_5 | 16384u);
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_0899AD9C;
      }
      goto L_0899AB04;
    }
L_0899AB04:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    goto L_0899AB20;
L_0899AB20:
    aot_gpr_16 = (ctx.gpr[20] << 2u);
    aot_gpr_16 = (aot_gpr_29 + aot_gpr_16);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_6 = (aot_gpr_6 & 2048u);
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0899AB4C;
      }
      goto L_0899AB3C;
    }
L_0899AB3C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(76)));
    aot_gpr_4 = (aot_gpr_4 & 2048u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0899AB54;
      }
      goto L_0899AB4C;
    }
L_0899AB4C:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_4 = (aot_gpr_5 & 255u);
    goto L_0899AB54;
L_0899AB54:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD80;
      }
      goto L_0899AB5C;
    }
L_0899AB5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899AD80;
      }
      goto L_0899AB74;
    }
L_0899AB74:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899AB8C;
    }
L_0899AB8C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899ABA4;
    }
L_0899ABA4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899ABBC;
    }
L_0899ABBC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899ABD4;
    }
L_0899ABD4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(226)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899ABEC;
    }
L_0899ABEC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899AC04;
    }
L_0899AC04:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899AC1C;
    }
L_0899AC1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899AC34;
    }
L_0899AC34:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AC64;
      }
      goto L_0899AC4C;
    }
L_0899AC4C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_mem.aot_direct_load16(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899AD80;
      }
      goto L_0899AC64;
    }
L_0899AC64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13632)));
    aot_fpr_12 = aot_fpr_12 - ctx.fpr[24];
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) & 0x7FFFFFFFu);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899AD80;
      }
      goto L_0899ACAC;
    }
L_0899ACAC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_31 = (0x0899ACE4u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    goto L_08998B70;
L_0899ACE4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_31 = (0x0899AD30u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AD30u) goto L_0899AD30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AD30:
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_gpr_31 = (0x0899AD5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AD5Cu) goto L_0899AD5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AD5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AD80;
      }
      goto L_0899AD64;
    }
L_0899AD64:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13632)));
    aot_fpr_20 = aot_fpr_12 - ctx.fpr[24];
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) & 0x7FFFFFFFu);
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0899AD80;
L_0899AD80:
    aot_gpr_4 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (aot_gpr_4 << 16u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(80))))));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AB20;
      }
      goto L_0899AD9C;
    }
L_0899AD9C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899ADAC;
      }
      goto L_0899ADA4;
    }
L_0899ADA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0899ADB0;
      }
      goto L_0899ADAC;
    }
L_0899ADAC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0899ADB0;
L_0899ADB0:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(200), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      aot_gpr_16 = aot_run_words[3];
      ctx.gpr[17] = aot_run_words[4];
      ctx.gpr[18] = aot_run_words[5];
      ctx.gpr[19] = aot_run_words[6];
      ctx.gpr[20] = aot_run_words[7];
      ctx.gpr[21] = aot_run_words[8];
      ctx.gpr[22] = aot_run_words[9];
      ctx.gpr[23] = aot_run_words[10];
      ctx.gpr[30] = aot_run_words[11];
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899ADEC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(140), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[17] = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_4 = (17204u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_gpr_4 = (16192u << 16u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(112), aot_run_words); }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(164), aot_gpr_31);
    goto L_0899AE60;
L_0899AE60:
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(296)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[30];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_vrot_ct<1u, 64u, 2u, 4u>();
    ctx.execute_vfpu_vec3_ct<0u, 33u, 1u, 1u, 3u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0899AEA4u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AEA4u) goto L_0899AEA4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AEA4:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899AEC4;
      }
      goto L_0899AEBC;
    }
L_0899AEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF58;
      }
      goto L_0899AEC4;
    }
L_0899AEC4:
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-13596)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0899AF34u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AF34u) goto L_0899AF34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AF34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899AF44;
      }
      goto L_0899AF3C;
    }
L_0899AF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AEBC;
      }
      goto L_0899AF44;
    }
L_0899AF44:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    aot_gpr_31 = (0x0899AF50u);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AF50u) goto L_0899AF50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AF50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899AE60;
      }
      goto L_0899AF58;
    }
L_0899AF58:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(116), aot_run_words);
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
      aot_gpr_31 = aot_run_words[12];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AF94:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[4]{std::bit_cast<std::uint32_t>(aot_fpr_20), aot_gpr_16, ctx.gpr[17], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), 0u);
    aot_gpr_31 = (0x0899AFE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899AFE8u) goto L_0899AFE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899AFE8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0E0;
      }
      goto L_0899AFF4;
    }
L_0899AFF4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B0E0;
      }
      goto L_0899B010;
    }
L_0899B010:
    aot_gpr_31 = (0x0899B018u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B018u) goto L_0899B018;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B018:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0899B048;
      }
      goto L_0899B020;
    }
L_0899B020:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (65528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
      if (branch_taken) {
          goto L_0899B0E0;
      }
      goto L_0899B048;
    }
L_0899B048:
    aot_gpr_4 = (2246u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2032)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(2032));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_31 = (0x0899B09Cu);
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8896)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 122u, 0x08890830u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B09Cu) goto L_0899B09C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B09C:
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[0] + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_20 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B0E0;
      }
      goto L_0899B0BC;
    }
L_0899B0BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    aot_gpr_5 = (4u << 16u);
    aot_gpr_4 = (aot_gpr_4 | aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), aot_gpr_4);
    aot_gpr_4 = (65528u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_5 & aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), aot_gpr_4);
    goto L_0899B0E0;
L_0899B0E0:
    { std::uint32_t aot_run_words[4]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(80), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      aot_gpr_16 = aot_run_words[1];
      ctx.gpr[17] = aot_run_words[2];
      aot_gpr_31 = aot_run_words[3];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B0F8:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B100:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_5 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), aot_gpr_31);
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0899B18C;
      }
      goto L_0899B124;
    }
L_0899B124:
    aot_gpr_4 = (50619u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 32768u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_4 = (aot_gpr_29 | 0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_gpr_31 = (0x0899B150u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B150u) goto L_0899B150;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B150:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B184;
      }
      goto L_0899B158;
    }
L_0899B158:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B194;
      }
      goto L_0899B17C;
    }
L_0899B17C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B198;
      }
      goto L_0899B184;
    }
L_0899B184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B198;
      }
      goto L_0899B18C;
    }
L_0899B18C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B198;
      }
      goto L_0899B194;
    }
L_0899B194:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899B198;
L_0899B198:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B1A8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B1BC;
      }
      goto L_0899B1B4;
    }
L_0899B1B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0899B250;
      }
      goto L_0899B1BC;
    }
L_0899B1BC:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 6u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B228;
      }
      goto L_0899B1D8;
    }
L_0899B1D8:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(236)));
    aot_gpr_5 = (aot_gpr_5 & 256u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(2228)));
      if (branch_taken) {
          goto L_0899B218;
      }
      goto L_0899B1E8;
    }
L_0899B1E8:
    aot_gpr_6 = (0u | 58u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    aot_gpr_5 = (0u | 0u);
      if (branch_taken) {
          goto L_0899B200;
      }
      goto L_0899B1F4;
    }
L_0899B1F4:
    aot_gpr_6 = (0u | 57u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 & 255u);
      if (branch_taken) {
          goto L_0899B208;
      }
      goto L_0899B200;
    }
L_0899B200:
    aot_gpr_5 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    goto L_0899B208;
L_0899B208:
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B218;
      }
      goto L_0899B210;
    }
L_0899B210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0899B220;
      }
      goto L_0899B218;
    }
L_0899B218:
    ctx.gpr[2] = (aot_gpr_4 ^ 68u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_0899B220;
L_0899B220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B250;
      }
      goto L_0899B228;
    }
L_0899B228:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_5 = (aot_gpr_5 & 14u);
    aot_gpr_5 = (aot_gpr_5 ^ 4u);
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_5 & 255u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B250;
      }
      goto L_0899B244;
    }
L_0899B244:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(617))))));
    ctx.gpr[2] = (aot_gpr_4 & 4u);
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_0899B250;
L_0899B250:
    jump_target = aot_gpr_31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B258:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_gpr_4 | 0u);
    aot_gpr_4 = (ctx.gpr[7] & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_5 | 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_6 | 0u);
      if (branch_taken) {
          goto L_0899B2E0;
      }
      goto L_0899B298;
    }
L_0899B298:
    aot_gpr_31 = (0x0899B2A0u);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B2A0u) goto L_0899B2A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B2A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B2E0;
      }
      goto L_0899B2A8;
    }
L_0899B2A8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3236)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_13)) && aot_fpr_14 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3232)));
      if (branch_taken) {
          goto L_0899B2D0;
      }
      goto L_0899B2C0;
    }
L_0899B2C0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B2E0;
      }
      goto L_0899B2D0;
    }
L_0899B2D0:
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3236)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0899B324;
      }
      goto L_0899B2E0;
    }
L_0899B2E0:
    aot_gpr_4 = (16262u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 2706u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16327u << 16u);
    aot_mem.aot_direct_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_4 | 61926u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_gpr_4 = (0u | 45u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_0899B324;
      }
      goto L_0899B310;
    }
L_0899B310:
    aot_gpr_4 = (16136u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 18043u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0899B324;
      }
      goto L_0899B324;
    }
L_0899B324:
    { std::uint32_t aot_run_words[5]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words);
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
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B340:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_gpr_16);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(12), aot_gpr_31);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_16 = (aot_gpr_5 | 0u);
      if (branch_taken) {
          goto L_0899B3B0;
      }
      goto L_0899B35C;
    }
L_0899B35C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_gpr_5 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_5 == aot_gpr_6;
    aot_mem.aot_direct_store8(aot_gpr_29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0899B37C;
      }
      goto L_0899B370;
    }
L_0899B370:
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    goto L_0899B374;
L_0899B374:
    { const bool branch_taken = aot_gpr_5 != aot_gpr_6;
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0899B374;
      }
      goto L_0899B37C;
    }
L_0899B37C:
    if (ctx.gpr[17] == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_0899B3A0;
    }
    goto L_0899B384;
L_0899B384:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_0899B3A0;
    }
    goto L_0899B38C;
L_0899B38C:
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_gpr_16 & 1u);
        goto L_0899B3A0;
    }
    goto L_0899B394;
L_0899B394:
    aot_gpr_31 = (0x0899B39Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B39Cu) goto L_0899B39C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B39C:
    aot_gpr_4 = (aot_gpr_16 & 1u);
    goto L_0899B3A0;
L_0899B3A0:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B3B0;
      }
      goto L_0899B3A8;
    }
L_0899B3A8:
    aot_gpr_31 = (0x0899B3B0u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B3B0u) goto L_0899B3B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B3B0:
    { std::uint32_t aot_run_words[3]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(4), aot_run_words);
      aot_gpr_16 = aot_run_words[0];
      ctx.gpr[17] = aot_run_words[1];
      aot_gpr_31 = aot_run_words[2];
    }
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B3C4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    ctx.gpr[11] = (20224u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (17530u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[11] = (16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[1])) ? 0x00800000u : 0u);
    ctx.gpr[9] = (0u | 10u);
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[11]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_gpr_31);
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0899B40C;
      }
      goto L_0899B400;
    }
L_0899B400:
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_0899B420;
      }
      goto L_0899B40C;
    }
L_0899B40C:
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[1];
    ctx.gpr[2] = (32768u << 16u);
    aot_fpr_13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_13));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_0899B420;
L_0899B420:
    { const std::uint32_t dividend = ctx.gpr[10]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[10] = (ctx.gpr[2] << 3u);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[2] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-9));
    ctx.gpr[3] = (ctx.gpr[10] << 2u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[2] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.gpr[3] = (aot_gpr_5 + ctx.gpr[3]);
      if (branch_taken) {
          goto L_0899B458;
      }
      goto L_0899B44C;
    }
L_0899B44C:
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_0899B458;
L_0899B458:
    ctx.gpr[12] = (ctx.gpr[8] << 2u);
    ctx.gpr[13] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10));
    ctx.gpr[12] = (aot_gpr_5 + ctx.gpr[12]);
    ctx.gpr[13] = (ctx.gpr[13] << 2u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_gpr_5 + ctx.gpr[13]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = aot_fpr_14 - aot_fpr_13;
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[1])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
      if (branch_taken) {
          goto L_0899B49C;
      }
      goto L_0899B490;
    }
L_0899B490:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_0899B4B0;
      }
      goto L_0899B49C;
    }
L_0899B49C:
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[1];
    ctx.gpr[14] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[14] = (ctx.gpr[3] + ctx.gpr[14]);
    goto L_0899B4B0;
L_0899B4B0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[1])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[12] = (ctx.gpr[14] | 0u);
      if (branch_taken) {
          goto L_0899B4CC;
      }
      goto L_0899B4C0;
    }
L_0899B4C0:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0899B4E0;
      }
      goto L_0899B4CC;
    }
L_0899B4CC:
    aot_fpr_14 = aot_fpr_14 - ctx.fpr[1];
    ctx.gpr[3] = (32768u << 16u);
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[13] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[3] = (ctx.gpr[13] + ctx.gpr[3]);
    goto L_0899B4E0;
L_0899B4E0:
    ctx.gpr[13] = (aot_gpr_6 < ctx.gpr[3] ? 1u : 0u);
    if (ctx.gpr[13] == 0u) {
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
        goto L_0899B584;
    }
    goto L_0899B4EC;
L_0899B4EC:
    ctx.gpr[13] = (0u | 1u);
    ctx.gpr[14] = (ctx.gpr[14] < static_cast<std::uint32_t>(76) ? 1u : 0u);
    ctx.gpr[15] = (32768u << 16u);
    goto L_0899B4F8;
L_0899B4F8:
    if (ctx.gpr[14] == 0u) {
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
        goto L_0899B584;
    }
    goto L_0899B500;
L_0899B500:
    if (ctx.gpr[11] != ctx.gpr[13]) {
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
        goto L_0899B584;
    }
    goto L_0899B508;
L_0899B508:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(10));
    ctx.gpr[12] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    { const std::uint32_t dividend = ctx.gpr[12]; const std::uint32_t divisor = ctx.gpr[9]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[12] = (ctx.lo);
    ctx.gpr[12] = (ctx.gpr[2] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0899B530;
      }
      goto L_0899B524;
    }
L_0899B524:
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    goto L_0899B530;
L_0899B530:
    ctx.gpr[12] = (ctx.gpr[8] << 2u);
    ctx.gpr[14] = (ctx.gpr[8] + static_cast<std::uint32_t>(-10));
    ctx.gpr[12] = (aot_gpr_5 + ctx.gpr[12]);
    ctx.gpr[14] = (ctx.gpr[14] << 2u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (aot_gpr_5 + ctx.gpr[14]);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = aot_fpr_14 - aot_fpr_13;
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] < ctx.fpr[1])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_14 = ctx.fpr[15] - ctx.fpr[1];
        goto L_0899B570;
    }
    goto L_0899B564;
L_0899B564:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
      if (branch_taken) {
          goto L_0899B57C;
      }
      goto L_0899B570;
    }
L_0899B570:
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    ctx.gpr[12] = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[15]);
    goto L_0899B57C;
L_0899B57C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[14] = (ctx.gpr[12] < static_cast<std::uint32_t>(76) ? 1u : 0u);
      if (branch_taken) {
          goto L_0899B4F8;
      }
      goto L_0899B584;
    }
L_0899B584:
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (ctx.gpr[11] << 2u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[11] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[11] << 2u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(5));
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[12]);
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(6));
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[4])));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9));
    ctx.gpr[10] = (aot_gpr_5 + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[10]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0899B61C;
      }
      goto L_0899B610;
    }
L_0899B610:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    goto L_0899B61C;
L_0899B61C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[4] <= ctx.fpr[2])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B630;
      }
      goto L_0899B62C;
    }
L_0899B62C:
    ctx.gpr[12] = (0u | 0u);
    goto L_0899B630;
L_0899B630:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[3] < ctx.fpr[1])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[1] = ctx.fpr[3] - ctx.fpr[1];
        goto L_0899B64C;
    }
    goto L_0899B640;
L_0899B640:
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0899B65C;
      }
      goto L_0899B64C;
    }
L_0899B64C:
    ctx.gpr[9] = (32768u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_0899B65C;
L_0899B65C:
    ctx.fpr[4] = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[4])));
      if (branch_taken) {
          goto L_0899B674;
      }
      goto L_0899B668;
    }
L_0899B668:
    ctx.gpr[10] = (20352u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[1];
    goto L_0899B674;
L_0899B674:
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[3])));
      if (branch_taken) {
          goto L_0899B68C;
      }
      goto L_0899B680;
    }
L_0899B680:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[1];
    goto L_0899B68C;
L_0899B68C:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) >= 0;
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[1])));
      if (branch_taken) {
          goto L_0899B6A4;
      }
      goto L_0899B698;
    }
L_0899B698:
    ctx.gpr[9] = (20352u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[5];
    goto L_0899B6A4;
L_0899B6A4:
    ctx.fpr[3] = ctx.fpr[4] - ctx.fpr[3];
    ctx.fpr[1] = ctx.fpr[3] / ctx.fpr[1];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[1] <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B6C0;
      }
      goto L_0899B6BC;
    }
L_0899B6BC:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899B6C0;
L_0899B6C0:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[1] < ctx.fpr[2])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B6D4;
      }
      goto L_0899B6D0;
    }
L_0899B6D0:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_0899B6D4;
L_0899B6D4:
    aot_gpr_6 = (ctx.gpr[3] < aot_gpr_6 ? 1u : 0u);
    if (aot_gpr_6 == 0u) {
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_0899B6E8;
    }
    goto L_0899B6E0;
L_0899B6E0:
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_0899B6E8;
L_0899B6E8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[17] = aot_fpr_12 - ctx.fpr[1];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[3] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (0u | 0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_14)) && aot_fpr_12 == aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
      if (branch_taken) {
          goto L_0899B774;
      }
      goto L_0899B728;
    }
L_0899B728:
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_gpr_5 + ctx.gpr[9]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[19])) && ctx.fpr[18] == ctx.fpr[19])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B774;
      }
      goto L_0899B74C;
    }
L_0899B74C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-7));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(ctx.fpr[18]) || std::isnan(ctx.fpr[19])) && ctx.fpr[18] == ctx.fpr[19])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899B774;
      }
      goto L_0899B770;
    }
L_0899B770:
    aot_gpr_6 = (0u | 1u);
    goto L_0899B774;
L_0899B774:
    { const bool branch_taken = aot_gpr_6 != 0u;
    aot_gpr_6 = (16448u << 16u);
      if (branch_taken) {
          goto L_0899B860;
      }
      goto L_0899B77C;
    }
L_0899B77C:
    ctx.fpr[18] = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[19];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-7));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[16];
    { const float fs = ctx.fpr[0]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0899B8D8;
      }
      goto L_0899B860;
    }
L_0899B860:
    aot_fpr_12 = aot_fpr_13 - aot_fpr_14;
    { const float fs = ctx.fpr[1]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_gpr_6 + static_cast<std::uint32_t>(-8));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_gpr_5 + ctx.gpr[8]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_gpr_6 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    { const float fs = ctx.fpr[1]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_6 = (aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_gpr_6 + static_cast<std::uint32_t>(-7));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(3));
    ctx.gpr[7] = (aot_gpr_5 + ctx.gpr[7]);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_6);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    { const float fs = ctx.fpr[1]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899B8D8;
L_0899B8D8:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_gpr_31 = (0x0899B8E8u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(2032));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899B8E8u) goto L_0899B8E8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B8E8:
    aot_gpr_31 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    jump_target = aot_gpr_31;
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899B8F4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6732)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[4]{aot_gpr_16, ctx.gpr[17], ctx.gpr[18], aot_gpr_31};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(120), aot_run_words); }
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_0899B948;
      }
      goto L_0899B924;
    }
L_0899B924:
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6732), aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6752), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (17948u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 16384u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6756), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6760), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_0899B948;
L_0899B948:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6736)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B96C;
      }
      goto L_0899B954;
    }
L_0899B954:
    aot_gpr_4 = (0u | 1u);
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6736), aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(ctx.gpr[28] + static_cast<std::uint32_t>(6768), aot_run_words); }
    goto L_0899B96C;
L_0899B96C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899B988;
      }
      goto L_0899B978;
    }
L_0899B978:
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(32304));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(1984)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(112), aot_gpr_4);
    goto L_0899B988;
L_0899B988:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(172)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(176), aot_gpr_4);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899B9AC;
      }
      goto L_0899B9A4;
    }
L_0899B9A4:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(176), aot_gpr_4);
    goto L_0899B9AC;
L_0899B9AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(176)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899B9C8;
      }
      goto L_0899B9BC;
    }
L_0899B9BC:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(aot_gpr_4));
      if (branch_taken) {
          goto L_0899B9CC;
      }
      goto L_0899B9C8;
    }
L_0899B9C8:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(161), static_cast<std::uint8_t>(0u));
    goto L_0899B9CC;
L_0899B9CC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0899BD18;
      }
      goto L_0899B9D8;
    }
L_0899B9D8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    if (aot_gpr_4 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
        goto L_0899BC54;
    }
    goto L_0899B9F8;
L_0899B9F8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899BA48;
      }
      goto L_0899BA24;
    }
L_0899BA24:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899BA48;
      }
      goto L_0899BA40;
    }
L_0899BA40:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0899BA7C;
      }
      goto L_0899BA48;
    }
L_0899BA48:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0899BA58u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BA58u) goto L_0899BA58;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BA58:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0899BA7C;
      }
      goto L_0899BA70;
    }
L_0899BA70:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_0899BA7C;
L_0899BA7C:
    aot_fpr_13 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_14;
    aot_fpr_12 = std::sqrt(aot_fpr_12);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_13)) && aot_fpr_12 == aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
        goto L_0899BB08;
    }
    goto L_0899BAEC;
L_0899BAEC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_fpr_13 = aot_fpr_13 / aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_12 = aot_fpr_14 / aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    goto L_0899BB08;
L_0899BB08:
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(320));
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_20 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_20 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(36)));
    aot_fpr_14 = std::bit_cast<float>(0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = aot_fpr_20 + aot_fpr_12;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
        goto L_0899BB84;
    }
    goto L_0899BB40;
L_0899BB40:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (16256u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = std::sqrt(aot_fpr_13);
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 / ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0899BB78;
    }
    goto L_0899BB78;
L_0899BB78:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (16229u << 16u);
      if (branch_taken) {
          goto L_0899BBC0;
      }
      goto L_0899BB80;
    }
L_0899BB80:
    { const float fs = aot_fpr_20; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    goto L_0899BB84;
L_0899BB84:
    aot_gpr_4 = (16128u << 16u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = std::sqrt(aot_fpr_13);
    aot_gpr_4 = (16358u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = aot_fpr_20 / ctx.fpr[15];
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
        goto L_0899BBB8;
    }
    goto L_0899BBB8;
L_0899BBB8:
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20) ^ 0x80000000u);
    aot_gpr_4 = (16229u << 16u);
    goto L_0899BBC0;
L_0899BBC0:
    aot_gpr_4 = (aot_gpr_4 | 7864u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(116)));
    aot_gpr_5 = (0u | 3u);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_13; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_0899BC4C;
      }
      goto L_0899BBF4;
    }
L_0899BBF4:
    aot_gpr_31 = (0x0899BBFCu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BBFCu) goto L_0899BBFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BBFC:
    aot_gpr_31 = (0x0899BC04u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 252u, 0x0898CB7Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BC04u) goto L_0899BC04;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BC04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC3C;
      }
      goto L_0899BC0C;
    }
L_0899BC0C:
    aot_gpr_31 = (0x0899BC14u);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BC14u) goto L_0899BC14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BC14:
    aot_gpr_31 = (0x0899BC1Cu);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 148u, 0x0898C6D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BC1Cu) goto L_0899BC1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BC1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC3C;
      }
      goto L_0899BC24;
    }
L_0899BC24:
    aot_gpr_31 = (0x0899BC2Cu);
    aot_gpr_4 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_0898B428, 97u, 0x0898B428u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BC2Cu) goto L_0899BC2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BC2C:
    aot_gpr_31 = (0x0899BC34u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0098_entry, 98u, 200u, 0x0898C924u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BC34u) goto L_0899BC34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BC34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC4C;
      }
      goto L_0899BC3C;
    }
L_0899BC3C:
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_0899BC4C;
L_0899BC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BD24;
      }
      goto L_0899BC54;
    }
L_0899BC54:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 6u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC88;
      }
      goto L_0899BC70;
    }
L_0899BC70:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899BC98;
      }
      goto L_0899BC88;
    }
L_0899BC88:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
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
    goto L_0899BC98;
L_0899BC98:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899BCD8;
      }
      goto L_0899BCB4;
    }
L_0899BCB4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_12)) && aot_fpr_13 == aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_0899BCD8;
      }
      goto L_0899BCD0;
    }
L_0899BCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0899BD0C;
      }
      goto L_0899BCD8;
    }
L_0899BCD8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_gpr_31 = (0x0899BCE8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BCE8u) goto L_0899BCE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BCE8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_0899BD0C;
      }
      goto L_0899BD00;
    }
L_0899BD00:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_0899BD0C;
L_0899BD0C:
    aot_fpr_20 = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_0899BD24;
      }
      goto L_0899BD18;
    }
L_0899BD18:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(416));
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
    goto L_0899BD24;
L_0899BD24:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (0u | 4u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_0899BD54;
      }
      goto L_0899BD34;
    }
L_0899BD34:
    aot_fpr_12 = std::bit_cast<float>(0u);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(64), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_0899BD54;
L_0899BD54:
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_16 + static_cast<std::uint32_t>(0))))));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 13u, 0x0899C074u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BD68;
    }
L_0899BD68:
    aot_gpr_4 = (aot_gpr_4 << 2u);
    ctx.gpr[1] = (2232u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + aot_gpr_4);
    ctx.gpr[1] = (aot_mem.aot_direct_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-4728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BD80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BD88;
    }
L_0899BD88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BD90;
    }
L_0899BD90:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BDA8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08999B60;
L_0899BDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BDB0;
    }
L_0899BDB0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BDC8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 107u, 0x0899C6A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BDC8u) goto L_0899BDC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BDC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BDD0;
    }
L_0899BDD0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BDE8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 582u, 0x0899F9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BDE8u) goto L_0899BDE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BDE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BDF0;
    }
L_0899BDF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BE08u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 316u, 0x0899DFE4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BE08u) goto L_0899BE08;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BE08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BE10;
    }
L_0899BE10:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BE28u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0103_entry, 103u, 479u, 0x089A341Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BE28u) goto L_0899BE28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BE28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BE30;
    }
L_0899BE30:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BE48u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 582u, 0x0899F9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BE48u) goto L_0899BE48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BE50;
    }
L_0899BE50:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BE68u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0899A0B0;
L_0899BE68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BE70;
    }
L_0899BE70:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BE88u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_0899A144;
L_0899BE88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BE90;
    }
L_0899BE90:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BEA8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 107u, 0x0899C6A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BEA8u) goto L_0899BEA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BEB0;
    }
L_0899BEB0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BEC8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08999E04;
L_0899BEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BED0;
    }
L_0899BED0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BEE8u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 46u, 0x089A46F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BEE8u) goto L_0899BEE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BEF0;
    }
L_0899BEF0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BF08u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    goto L_08999F60;
L_0899BF08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BF10;
    }
L_0899BF10:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BF28u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0103_entry, 103u, 275u, 0x089A1AB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BF28u) goto L_0899BF28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BF28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BF30;
    }
L_0899BF30:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BF48u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0103_entry, 103u, 423u, 0x089A2AF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BF48u) goto L_0899BF48;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BF48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BF50;
    }
L_0899BF50:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BF68u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0103_entry, 103u, 382u, 0x089A264Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BF68u) goto L_0899BF68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BF70;
    }
L_0899BF70:
    aot_gpr_31 = (0x0899BF78u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 87u, 0x089A4EA0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BF78u) goto L_0899BF78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BF78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BF80;
    }
L_0899BF80:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(316)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_31 = (0x0899BF98u);
    aot_gpr_5 = (aot_gpr_29 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 26u, 0x089A4314u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BF98u) goto L_0899BF98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BF98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFA0;
    }
L_0899BFA0:
    aot_gpr_31 = (0x0899BFA8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 214u, 0x089A5EF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BFA8u) goto L_0899BFA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BFA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFB0;
    }
L_0899BFB0:
    aot_gpr_31 = (0x0899BFB8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    goto L_0899A298;
L_0899BFB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFC0;
    }
L_0899BFC0:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899BFCCu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 496u, 0x08A1EC30u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BFCCu) goto L_0899BFCC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFD4;
    }
L_0899BFD4:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899BFE0u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 597u, 0x08A1F8D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BFE0u) goto L_0899BFE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BFE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFE8;
    }
L_0899BFE8:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_31 = (0x0899BFF4u);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0135_entry, 135u, 12u, 0x08A20118u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x0899BFF4u) goto L_0899BFF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_0899BFF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0102_entry, 102u, 14u, 0x0899C0CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_0899BFFC;
    }
L_0899BFFC:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.pc = 0x0899C000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0101(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0101_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_101(Runtime &runtime) {
    runtime.register_generated_unit(101u, 0x08998000u, 16384u, &recomp_unit_0101, &recomp_unit_0101_entry);
    runtime.register_function(0x08998000u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998014u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998028u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998064u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899807Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998084u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998088u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089980D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998118u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089981F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899820Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998220u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998244u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998258u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998298u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089982B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998348u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899835Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899836Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089983B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899848Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998494u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089984F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998534u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998554u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089985E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089985F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998608u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998650u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998710u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998718u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899872Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998740u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998758u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899876Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089987C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998850u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998864u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998874u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089988BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899895Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998960u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998A10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998AC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998B98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998BE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998C90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998CD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D6Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998D98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998DE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998E8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998ED0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EDCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998EE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998F9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08998FECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999014u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999040u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899905Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899906Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089990ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999108u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999128u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899912Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999134u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899914Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899915Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899916Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999174u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899917Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999184u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999198u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089991D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899923Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999250u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999254u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899925Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999264u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899926Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999280u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899928Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999294u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899929Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089992B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899932Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899935Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999374u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999390u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089993F0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999434u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899943Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899949Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089994CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899952Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999548u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999588u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089995E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899961Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999628u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999630u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899963Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999650u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999658u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999660u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999668u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999670u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899967Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089996E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999718u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999748u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899974Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999758u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899977Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999788u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899979Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089997E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999918u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999938u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999940u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899999Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999DCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x089999FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999A60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999AFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999B60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999BB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C38u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999C9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999CF8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999D8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999DE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999E90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999EC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999F90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x08999FF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A020u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A0B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A138u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A144u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A1E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A298u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A2F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A330u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A348u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A354u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A390u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A3ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A438u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A450u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A45Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A498u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A4A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A588u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A590u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A630u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A638u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A648u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A650u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A654u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A67Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A6B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A744u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A784u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A78Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A794u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A7E4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A80Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A820u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A844u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A868u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8B8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A8ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A90Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A92Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A934u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899A9FCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AA68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AAE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB20u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB74u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AB8Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ABECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AC64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ACE4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD5Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD64u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AD9Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899ADECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AE60u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEA4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEBCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AEC4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF44u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AF94u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899AFF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B010u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B018u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B020u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B048u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B09Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B0F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B100u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B124u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B150u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B158u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B17Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B184u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B18Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B194u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B198u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1B4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B1F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B200u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B208u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B210u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B218u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B220u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B228u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B244u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B250u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B258u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B298u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B2E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B310u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B324u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B340u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B35Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B370u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B374u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B37Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B384u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B38Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B394u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B39Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3A0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3A8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B3C4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B400u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B40Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B420u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B44Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B458u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B490u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B49Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4B0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4ECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B4F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B500u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B508u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B524u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B530u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B564u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B570u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B57Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B584u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B610u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B61Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B62Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B630u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B640u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B64Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B65Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B668u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B674u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B680u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B68Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B698u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6C0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6D0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6D4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6E0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B6E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B728u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B74Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B770u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B774u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B77Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B860u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8E8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B8F4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B924u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B948u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B954u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B96Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B978u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B988u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9A4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9ACu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9BCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9C8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9CCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9D8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899B9F8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA58u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BA7Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BAECu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB40u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BB84u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BBFCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC04u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC14u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC1Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC2Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC3Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC4Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BC98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCB4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCD8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BCE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD00u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD0Cu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD18u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD24u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD34u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD54u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BD90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDD0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BDF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE88u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BE90u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEC8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BED0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BEF0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF08u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF10u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF28u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF30u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF48u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF50u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF68u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF70u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF78u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF80u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BF98u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFA0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFA8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFB0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFB8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFC0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFCCu, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFD4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFE0u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFE8u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFF4u, &recomp_unit_0101, "recomp_unit_0101");
    runtime.register_function(0x0899BFFCu, &recomp_unit_0101, "recomp_unit_0101");
}
} // namespace psprecomp
