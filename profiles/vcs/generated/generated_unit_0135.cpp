#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0135[4096] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 16, 0, 17, 0, 18, 0, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0,
    0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41,
    0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 55,
    0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 65, 66, 0, 0, 0, 0, 0, 67, 68,
    0, 69, 0, 0, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 83, 0, 0,
    84, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 90, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0,
    95, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0,
    0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119,
    0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 133, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 150, 0, 0, 0, 151, 0, 152, 0,
    0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159,
    0, 0, 160, 161, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 167, 168, 0, 169, 0, 0, 170,
    0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0,
    182, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0,
    0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201,
    0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211,
    0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0,
    0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    232, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0,
    0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 248, 249, 0, 250, 0, 0,
    0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 256, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0,
    260, 0, 0, 0, 0, 261, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 264, 265, 0, 266, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0,
    269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274,
    0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280,
    0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0,
    0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294,
    0, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 311, 0, 0, 312, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0,
    321, 0, 322, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0,
    0, 0, 0, 0, 0, 0, 332, 333, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344,
    0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 354, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 366,
    0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0,
    370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0,
    0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 383, 0,
    384, 0, 0, 0, 0, 0, 385, 386, 0, 0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393,
    0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399,
    0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0,
    0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 449, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0,
    0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 477, 0,
    478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 480, 0, 481, 0, 0, 482, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0,
    487, 0, 488, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 498,
    0, 499, 0, 500, 0, 501, 0, 0, 502, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 511, 512, 0, 513, 0,
    514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 0, 524, 0, 525,
};
void recomp_unit_0135_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
// PSPRECOMP_AOT_REGCACHE_BEGIN
// PSPRECOMP_AOT_REGCACHE_META gprs=4,5,16,29,28,6 fprs=12,13,14,20 gpr_occ=3434 fpr_occ=1259 gpr_total=4481 fpr_total=1705
    std::uint32_t aot_gpr_4 = ctx.gpr[4];
    std::uint32_t aot_gpr_5 = ctx.gpr[5];
    std::uint32_t aot_gpr_16 = ctx.gpr[16];
    std::uint32_t aot_gpr_29 = ctx.gpr[29];
    std::uint32_t aot_gpr_28 = ctx.gpr[28];
    std::uint32_t aot_gpr_6 = ctx.gpr[6];
    float aot_fpr_12 = ctx.fpr[12];
    float aot_fpr_13 = ctx.fpr[13];
    float aot_fpr_14 = ctx.fpr[14];
    float aot_fpr_20 = ctx.fpr[20];
    bool aot_regcache_valid = true;
#define AOT_REGCACHE_SYNC_OUT() do { if (aot_regcache_valid) { ctx.gpr[4] = aot_gpr_4; ctx.gpr[5] = aot_gpr_5; ctx.gpr[16] = aot_gpr_16; ctx.gpr[29] = aot_gpr_29; ctx.gpr[28] = aot_gpr_28; ctx.gpr[6] = aot_gpr_6; ctx.fpr[12] = aot_fpr_12; ctx.fpr[13] = aot_fpr_13; ctx.fpr[14] = aot_fpr_14; ctx.fpr[20] = aot_fpr_20; } } while (false)
#define AOT_REGCACHE_SYNC_IN() do { if (aot_regcache_valid) { aot_gpr_4 = ctx.gpr[4]; aot_gpr_5 = ctx.gpr[5]; aot_gpr_16 = ctx.gpr[16]; aot_gpr_29 = ctx.gpr[29]; aot_gpr_28 = ctx.gpr[28]; aot_gpr_6 = ctx.gpr[6]; aot_fpr_12 = ctx.fpr[12]; aot_fpr_13 = ctx.fpr[13]; aot_fpr_14 = ctx.fpr[14]; aot_fpr_20 = ctx.fpr[20]; } } while (false)
// PSPRECOMP_AOT_REGCACHE_END
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A20000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0135[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A20000;
    case 2u: goto L_08A2001C;
    case 3u: goto L_08A20028;
    case 4u: goto L_08A20038;
    case 5u: goto L_08A20040;
    case 6u: goto L_08A20058;
    case 7u: goto L_08A20068;
    case 8u: goto L_08A20070;
    case 9u: goto L_08A20088;
    case 10u: goto L_08A200CC;
    case 11u: goto L_08A200D0;
    case 12u: goto L_08A20118;
    case 13u: goto L_08A20174;
    case 14u: goto L_08A20194;
    case 15u: goto L_08A201F0;
    case 16u: goto L_08A20208;
    case 17u: goto L_08A20210;
    case 18u: goto L_08A20218;
    case 19u: goto L_08A20228;
    case 20u: goto L_08A20234;
    case 21u: goto L_08A20254;
    case 22u: goto L_08A20258;
    case 23u: goto L_08A20298;
    case 24u: goto L_08A2031C;
    case 25u: goto L_08A20390;
    case 26u: goto L_08A203AC;
    case 27u: goto L_08A203BC;
    case 28u: goto L_08A203D4;
    case 29u: goto L_08A203E0;
    case 30u: goto L_08A203E8;
    case 31u: goto L_08A20408;
    case 32u: goto L_08A2041C;
    case 33u: goto L_08A20434;
    case 34u: goto L_08A20440;
    case 35u: goto L_08A20458;
    case 36u: goto L_08A20464;
    case 37u: goto L_08A2046C;
    case 38u: goto L_08A20488;
    case 39u: goto L_08A2049C;
    case 40u: goto L_08A204B4;
    case 41u: goto L_08A204FC;
    case 42u: goto L_08A20504;
    case 43u: goto L_08A2050C;
    case 44u: goto L_08A20524;
    case 45u: goto L_08A20530;
    case 46u: goto L_08A20538;
    case 47u: goto L_08A20574;
    case 48u: goto L_08A205C8;
    case 49u: goto L_08A20624;
    case 50u: goto L_08A2063C;
    case 51u: goto L_08A20650;
    case 52u: goto L_08A20654;
    case 53u: goto L_08A2065C;
    case 54u: goto L_08A20664;
    case 55u: goto L_08A2067C;
    case 56u: goto L_08A20688;
    case 57u: goto L_08A20690;
    case 58u: goto L_08A206C8;
    case 59u: goto L_08A2071C;
    case 60u: goto L_08A20764;
    case 61u: goto L_08A2076C;
    case 62u: goto L_08A2079C;
    case 63u: goto L_08A207A4;
    case 64u: goto L_08A207CC;
    case 65u: goto L_08A207DC;
    case 66u: goto L_08A207E0;
    case 67u: goto L_08A207F8;
    case 68u: goto L_08A207FC;
    case 69u: goto L_08A20804;
    case 70u: goto L_08A20814;
    case 71u: goto L_08A20818;
    case 72u: goto L_08A208BC;
    case 73u: goto L_08A20900;
    case 74u: goto L_08A2090C;
    case 75u: goto L_08A20948;
    case 76u: goto L_08A20980;
    case 77u: goto L_08A209A8;
    case 78u: goto L_08A209E8;
    case 79u: goto L_08A20A14;
    case 80u: goto L_08A20A1C;
    case 81u: goto L_08A20A5C;
    case 82u: goto L_08A20A6C;
    case 83u: goto L_08A20A74;
    case 84u: goto L_08A20A80;
    case 85u: goto L_08A20A90;
    case 86u: goto L_08A20A9C;
    case 87u: goto L_08A20AB8;
    case 88u: goto L_08A20AC0;
    case 89u: goto L_08A20AE8;
    case 90u: goto L_08A20AEC;
    case 91u: goto L_08A20B34;
    case 92u: goto L_08A20B7C;
    case 93u: goto L_08A20B9C;
    case 94u: goto L_08A20BE8;
    case 95u: goto L_08A20C00;
    case 96u: goto L_08A20C08;
    case 97u: goto L_08A20C10;
    case 98u: goto L_08A20C24;
    case 99u: goto L_08A20C6C;
    case 100u: goto L_08A20CA0;
    case 101u: goto L_08A20CC4;
    case 102u: goto L_08A20D1C;
    case 103u: goto L_08A20D2C;
    case 104u: goto L_08A20D70;
    case 105u: goto L_08A20D84;
    case 106u: goto L_08A20D8C;
    case 107u: goto L_08A20D94;
    case 108u: goto L_08A20DA8;
    case 109u: goto L_08A20DC4;
    case 110u: goto L_08A20DCC;
    case 111u: goto L_08A20DE0;
    case 112u: goto L_08A20DE4;
    case 113u: goto L_08A20E64;
    case 114u: goto L_08A20E70;
    case 115u: goto L_08A20E78;
    case 116u: goto L_08A20E8C;
    case 117u: goto L_08A20ED8;
    case 118u: goto L_08A20EE0;
    case 119u: goto L_08A20EFC;
    case 120u: goto L_08A20F04;
    case 121u: goto L_08A20F0C;
    case 122u: goto L_08A20F94;
    case 123u: goto L_08A20FA0;
    case 124u: goto L_08A20FAC;
    case 125u: goto L_08A20FC8;
    case 126u: goto L_08A20FD0;
    case 127u: goto L_08A20FEC;
    case 128u: goto L_08A20FF4;
    case 129u: goto L_08A20FFC;
    case 130u: goto L_08A2106C;
    case 131u: goto L_08A210AC;
    case 132u: goto L_08A210C0;
    case 133u: goto L_08A210CC;
    case 134u: goto L_08A210D4;
    case 135u: goto L_08A210E4;
    case 136u: goto L_08A21100;
    case 137u: goto L_08A21108;
    case 138u: goto L_08A2111C;
    case 139u: goto L_08A21130;
    case 140u: goto L_08A2114C;
    case 141u: goto L_08A21158;
    case 142u: goto L_08A211A0;
    case 143u: goto L_08A211A4;
    case 144u: goto L_08A211D8;
    case 145u: goto L_08A2122C;
    case 146u: goto L_08A2124C;
    case 147u: goto L_08A212A8;
    case 148u: goto L_08A212C8;
    case 149u: goto L_08A212D8;
    case 150u: goto L_08A212E0;
    case 151u: goto L_08A212F0;
    case 152u: goto L_08A212F8;
    case 153u: goto L_08A2130C;
    case 154u: goto L_08A21374;
    case 155u: goto L_08A21380;
    case 156u: goto L_08A21394;
    case 157u: goto L_08A213B0;
    case 158u: goto L_08A213F4;
    case 159u: goto L_08A213FC;
    case 160u: goto L_08A21408;
    case 161u: goto L_08A2140C;
    case 162u: goto L_08A21414;
    case 163u: goto L_08A21420;
    case 164u: goto L_08A21428;
    case 165u: goto L_08A2143C;
    case 166u: goto L_08A21458;
    case 167u: goto L_08A21464;
    case 168u: goto L_08A21468;
    case 169u: goto L_08A21470;
    case 170u: goto L_08A2147C;
    case 171u: goto L_08A21484;
    case 172u: goto L_08A2148C;
    case 173u: goto L_08A214A0;
    case 174u: goto L_08A214B0;
    case 175u: goto L_08A214E0;
    case 176u: goto L_08A215CC;
    case 177u: goto L_08A215F4;
    case 178u: goto L_08A21648;
    case 179u: goto L_08A21674;
    case 180u: goto L_08A216AC;
    case 181u: goto L_08A216EC;
    case 182u: goto L_08A21700;
    case 183u: goto L_08A21710;
    case 184u: goto L_08A21718;
    case 185u: goto L_08A21728;
    case 186u: goto L_08A2172C;
    case 187u: goto L_08A21744;
    case 188u: goto L_08A2174C;
    case 189u: goto L_08A2175C;
    case 190u: goto L_08A2176C;
    case 191u: goto L_08A21788;
    case 192u: goto L_08A21794;
    case 193u: goto L_08A217B8;
    case 194u: goto L_08A217BC;
    case 195u: goto L_08A217FC;
    case 196u: goto L_08A2184C;
    case 197u: goto L_08A2186C;
    case 198u: goto L_08A218C8;
    case 199u: goto L_08A218E4;
    case 200u: goto L_08A218F4;
    case 201u: goto L_08A218FC;
    case 202u: goto L_08A2190C;
    case 203u: goto L_08A21914;
    case 204u: goto L_08A21928;
    case 205u: goto L_08A21990;
    case 206u: goto L_08A2199C;
    case 207u: goto L_08A219B0;
    case 208u: goto L_08A219CC;
    case 209u: goto L_08A219E8;
    case 210u: goto L_08A219F0;
    case 211u: goto L_08A219FC;
    case 212u: goto L_08A21A04;
    case 213u: goto L_08A21A10;
    case 214u: goto L_08A21A1C;
    case 215u: goto L_08A21A30;
    case 216u: goto L_08A21A4C;
    case 217u: goto L_08A21A54;
    case 218u: goto L_08A21A5C;
    case 219u: goto L_08A21A68;
    case 220u: goto L_08A21A70;
    case 221u: goto L_08A21A84;
    case 222u: goto L_08A21AA0;
    case 223u: goto L_08A21AA8;
    case 224u: goto L_08A21AB0;
    case 225u: goto L_08A21ABC;
    case 226u: goto L_08A21C0C;
    case 227u: goto L_08A21C30;
    case 228u: goto L_08A21C60;
    case 229u: goto L_08A21C98;
    case 230u: goto L_08A21CE0;
    case 231u: goto L_08A21CF4;
    case 232u: goto L_08A21D00;
    case 233u: goto L_08A21D08;
    case 234u: goto L_08A21D18;
    case 235u: goto L_08A21D34;
    case 236u: goto L_08A21D3C;
    case 237u: goto L_08A21D4C;
    case 238u: goto L_08A21D5C;
    case 239u: goto L_08A21D78;
    case 240u: goto L_08A21D84;
    case 241u: goto L_08A21DA8;
    case 242u: goto L_08A21DAC;
    case 243u: goto L_08A21DE8;
    case 244u: goto L_08A21EA8;
    case 245u: goto L_08A21EBC;
    case 246u: goto L_08A21EC4;
    case 247u: goto L_08A21ED4;
    case 248u: goto L_08A21EE8;
    case 249u: goto L_08A21EEC;
    case 250u: goto L_08A21EF4;
    case 251u: goto L_08A21F04;
    case 252u: goto L_08A21F14;
    case 253u: goto L_08A21F28;
    case 254u: goto L_08A21F30;
    case 255u: goto L_08A21F40;
    case 256u: goto L_08A21F54;
    case 257u: goto L_08A21F58;
    case 258u: goto L_08A21F60;
    case 259u: goto L_08A21F70;
    case 260u: goto L_08A21F80;
    case 261u: goto L_08A21F94;
    case 262u: goto L_08A21F9C;
    case 263u: goto L_08A21FAC;
    case 264u: goto L_08A21FC0;
    case 265u: goto L_08A21FC4;
    case 266u: goto L_08A21FCC;
    case 267u: goto L_08A21FDC;
    case 268u: goto L_08A21FE4;
    case 269u: goto L_08A22000;
    case 270u: goto L_08A2201C;
    case 271u: goto L_08A22054;
    case 272u: goto L_08A22060;
    case 273u: goto L_08A22070;
    case 274u: goto L_08A2207C;
    case 275u: goto L_08A2208C;
    case 276u: goto L_08A22098;
    case 277u: goto L_08A220A4;
    case 278u: goto L_08A220AC;
    case 279u: goto L_08A220C0;
    case 280u: goto L_08A220FC;
    case 281u: goto L_08A22108;
    case 282u: goto L_08A22120;
    case 283u: goto L_08A22138;
    case 284u: goto L_08A2215C;
    case 285u: goto L_08A22168;
    case 286u: goto L_08A2218C;
    case 287u: goto L_08A22198;
    case 288u: goto L_08A221AC;
    case 289u: goto L_08A221B4;
    case 290u: goto L_08A221C4;
    case 291u: goto L_08A221D0;
    case 292u: goto L_08A221E4;
    case 293u: goto L_08A221EC;
    case 294u: goto L_08A221FC;
    case 295u: goto L_08A22208;
    case 296u: goto L_08A2221C;
    case 297u: goto L_08A22224;
    case 298u: goto L_08A22238;
    case 299u: goto L_08A22268;
    case 300u: goto L_08A22294;
    case 301u: goto L_08A222B8;
    case 302u: goto L_08A222C0;
    case 303u: goto L_08A222C8;
    case 304u: goto L_08A2232C;
    case 305u: goto L_08A223EC;
    case 306u: goto L_08A223F4;
    case 307u: goto L_08A22424;
    case 308u: goto L_08A2242C;
    case 309u: goto L_08A22430;
    case 310u: goto L_08A22454;
    case 311u: goto L_08A22490;
    case 312u: goto L_08A2249C;
    case 313u: goto L_08A224A0;
    case 314u: goto L_08A224DC;
    case 315u: goto L_08A22504;
    case 316u: goto L_08A225A4;
    case 317u: goto L_08A22654;
    case 318u: goto L_08A22660;
    case 319u: goto L_08A2266C;
    case 320u: goto L_08A22674;
    case 321u: goto L_08A22680;
    case 322u: goto L_08A22688;
    case 323u: goto L_08A2268C;
    case 324u: goto L_08A226B8;
    case 325u: goto L_08A226E0;
    case 326u: goto L_08A226F0;
    case 327u: goto L_08A22718;
    case 328u: goto L_08A22734;
    case 329u: goto L_08A22740;
    case 330u: goto L_08A22750;
    case 331u: goto L_08A22778;
    case 332u: goto L_08A22798;
    case 333u: goto L_08A2279C;
    case 334u: goto L_08A227A4;
    case 335u: goto L_08A227AC;
    case 336u: goto L_08A227B8;
    case 337u: goto L_08A227C0;
    case 338u: goto L_08A227CC;
    case 339u: goto L_08A227D4;
    case 340u: goto L_08A227E0;
    case 341u: goto L_08A22814;
    case 342u: goto L_08A22848;
    case 343u: goto L_08A22850;
    case 344u: goto L_08A2287C;
    case 345u: goto L_08A22890;
    case 346u: goto L_08A2289C;
    case 347u: goto L_08A228C4;
    case 348u: goto L_08A228EC;
    case 349u: goto L_08A22920;
    case 350u: goto L_08A22954;
    case 351u: goto L_08A2295C;
    case 352u: goto L_08A22988;
    case 353u: goto L_08A2299C;
    case 354u: goto L_08A229A8;
    case 355u: goto L_08A229AC;
    case 356u: goto L_08A229B8;
    case 357u: goto L_08A229D4;
    case 358u: goto L_08A229E0;
    case 359u: goto L_08A229EC;
    case 360u: goto L_08A229F8;
    case 361u: goto L_08A22A00;
    case 362u: goto L_08A22A24;
    case 363u: goto L_08A22A2C;
    case 364u: goto L_08A22A58;
    case 365u: goto L_08A22A78;
    case 366u: goto L_08A22A7C;
    case 367u: goto L_08A22A88;
    case 368u: goto L_08A22A90;
    case 369u: goto L_08A22AF4;
    case 370u: goto L_08A22B00;
    case 371u: goto L_08A22BD4;
    case 372u: goto L_08A22C2C;
    case 373u: goto L_08A22C58;
    case 374u: goto L_08A22C78;
    case 375u: goto L_08A22C84;
    case 376u: goto L_08A22C90;
    case 377u: goto L_08A22CA0;
    case 378u: goto L_08A22CAC;
    case 379u: goto L_08A22CBC;
    case 380u: goto L_08A22CC8;
    case 381u: goto L_08A22CD8;
    case 382u: goto L_08A22CE4;
    case 383u: goto L_08A22CF8;
    case 384u: goto L_08A22D00;
    case 385u: goto L_08A22D18;
    case 386u: goto L_08A22D1C;
    case 387u: goto L_08A22D30;
    case 388u: goto L_08A22D44;
    case 389u: goto L_08A22D4C;
    case 390u: goto L_08A22D5C;
    case 391u: goto L_08A22DD4;
    case 392u: goto L_08A22DE8;
    case 393u: goto L_08A22DFC;
    case 394u: goto L_08A22E0C;
    case 395u: goto L_08A22E20;
    case 396u: goto L_08A22EB8;
    case 397u: goto L_08A22ECC;
    case 398u: goto L_08A22EF4;
    case 399u: goto L_08A22EFC;
    case 400u: goto L_08A22F0C;
    case 401u: goto L_08A22F78;
    case 402u: goto L_08A22FB4;
    case 403u: goto L_08A22FC0;
    case 404u: goto L_08A22FD4;
    case 405u: goto L_08A22FE0;
    case 406u: goto L_08A23044;
    case 407u: goto L_08A230C8;
    case 408u: goto L_08A230F8;
    case 409u: goto L_08A23120;
    case 410u: goto L_08A2312C;
    case 411u: goto L_08A2317C;
    case 412u: goto L_08A231AC;
    case 413u: goto L_08A23268;
    case 414u: goto L_08A232E0;
    case 415u: goto L_08A232F0;
    case 416u: goto L_08A23304;
    case 417u: goto L_08A23318;
    case 418u: goto L_08A23338;
    case 419u: goto L_08A23340;
    case 420u: goto L_08A23354;
    case 421u: goto L_08A23398;
    case 422u: goto L_08A233A0;
    case 423u: goto L_08A23414;
    case 424u: goto L_08A23440;
    case 425u: goto L_08A2344C;
    case 426u: goto L_08A2348C;
    case 427u: goto L_08A23498;
    case 428u: goto L_08A234AC;
    case 429u: goto L_08A234B8;
    case 430u: goto L_08A23514;
    case 431u: goto L_08A23528;
    case 432u: goto L_08A23564;
    case 433u: goto L_08A2358C;
    case 434u: goto L_08A235A4;
    case 435u: goto L_08A235AC;
    case 436u: goto L_08A23620;
    case 437u: goto L_08A2364C;
    case 438u: goto L_08A23684;
    case 439u: goto L_08A236B4;
    case 440u: goto L_08A236E0;
    case 441u: goto L_08A236F8;
    case 442u: goto L_08A23724;
    case 443u: goto L_08A23754;
    case 444u: goto L_08A23810;
    case 445u: goto L_08A23888;
    case 446u: goto L_08A2389C;
    case 447u: goto L_08A238A8;
    case 448u: goto L_08A238D0;
    case 449u: goto L_08A23904;
    case 450u: goto L_08A23918;
    case 451u: goto L_08A23924;
    case 452u: goto L_08A23934;
    case 453u: goto L_08A23948;
    case 454u: goto L_08A23958;
    case 455u: goto L_08A2399C;
    case 456u: goto L_08A239A8;
    case 457u: goto L_08A239B4;
    case 458u: goto L_08A239C0;
    case 459u: goto L_08A239C8;
    case 460u: goto L_08A239D0;
    case 461u: goto L_08A239DC;
    case 462u: goto L_08A23A20;
    case 463u: goto L_08A23A28;
    case 464u: goto L_08A23A60;
    case 465u: goto L_08A23A74;
    case 466u: goto L_08A23BDC;
    case 467u: goto L_08A23BF0;
    case 468u: goto L_08A23BFC;
    case 469u: goto L_08A23C64;
    case 470u: goto L_08A23C78;
    case 471u: goto L_08A23C84;
    case 472u: goto L_08A23CB4;
    case 473u: goto L_08A23CC8;
    case 474u: goto L_08A23CD8;
    case 475u: goto L_08A23D68;
    case 476u: goto L_08A23D70;
    case 477u: goto L_08A23D78;
    case 478u: goto L_08A23D80;
    case 479u: goto L_08A23DA4;
    case 480u: goto L_08A23DA8;
    case 481u: goto L_08A23DB0;
    case 482u: goto L_08A23DBC;
    case 483u: goto L_08A23DC8;
    case 484u: goto L_08A23DD4;
    case 485u: goto L_08A23DEC;
    case 486u: goto L_08A23DF4;
    case 487u: goto L_08A23E00;
    case 488u: goto L_08A23E08;
    case 489u: goto L_08A23E10;
    case 490u: goto L_08A23E18;
    case 491u: goto L_08A23E24;
    case 492u: goto L_08A23E2C;
    case 493u: goto L_08A23E38;
    case 494u: goto L_08A23E44;
    case 495u: goto L_08A23E50;
    case 496u: goto L_08A23E68;
    case 497u: goto L_08A23E70;
    case 498u: goto L_08A23E7C;
    case 499u: goto L_08A23E84;
    case 500u: goto L_08A23E8C;
    case 501u: goto L_08A23E94;
    case 502u: goto L_08A23EA0;
    case 503u: goto L_08A23EA8;
    case 504u: goto L_08A23EB4;
    case 505u: goto L_08A23F28;
    case 506u: goto L_08A23F30;
    case 507u: goto L_08A23F38;
    case 508u: goto L_08A23F4C;
    case 509u: goto L_08A23F54;
    case 510u: goto L_08A23F60;
    case 511u: goto L_08A23F6C;
    case 512u: goto L_08A23F70;
    case 513u: goto L_08A23F78;
    case 514u: goto L_08A23F80;
    case 515u: goto L_08A23F88;
    case 516u: goto L_08A23F90;
    case 517u: goto L_08A23F98;
    case 518u: goto L_08A23FA0;
    case 519u: goto L_08A23FB0;
    case 520u: goto L_08A23FB8;
    case 521u: goto L_08A23FD4;
    case 522u: goto L_08A23FE0;
    case 523u: goto L_08A23FE8;
    case 524u: goto L_08A23FF4;
    case 525u: goto L_08A23FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        AOT_REGCACHE_SYNC_OUT(); return;
    }
    }
L_08A20000:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7024)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7024), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7448)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 647u, 0x08A1FFB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A2001C;
    }
L_08A2001C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7448)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7024), aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 647u, 0x08A1FFB8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A20028;
    }
L_08A20028:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[26])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7428)));
        goto L_08A20040;
    }
    goto L_08A20038;
L_08A20038:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A20088;
      }
      goto L_08A20040;
    }
L_08A20040:
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7424)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7424)));
        goto L_08A20058;
    }
    goto L_08A20058;
L_08A20058:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7428)));
        goto L_08A20070;
    }
    goto L_08A20068;
L_08A20068:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20088;
      }
      goto L_08A20070;
    }
L_08A20070:
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7424)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7424)));
        goto L_08A20088;
    }
    goto L_08A20088;
L_08A20088:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[28] / aot_fpr_12;
    aot_gpr_4 = (49435u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A200CCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 471u, 0x08A1AF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A200CCu) goto L_08A200CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A200CC:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A200D0;
L_08A200D0:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(612), aot_run_words);
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
      ctx.gpr[31] = aot_run_words[15];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20118:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-2848));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2772), aot_run_words); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_6 == 0u;
    aot_gpr_5 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A20210;
      }
      goto L_08A20174;
    }
L_08A20174:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20210;
      }
      goto L_08A20194;
    }
L_08A20194:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2752), aot_gpr_5);
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_gpr_16 | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12], ctx.gpr[13]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A201F0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 515u, 0x08A1B674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A201F0u) goto L_08A201F0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A201F0:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7028)));
    aot_gpr_4 = (0u | 50u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[7] = (aot_gpr_28 + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A20218;
      }
      goto L_08A20208;
    }
L_08A20208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20228;
      }
      goto L_08A20210;
    }
L_08A20210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A20AEC;
      }
      goto L_08A20218;
    }
L_08A20218:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7028), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7400)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7032), aot_gpr_5);
    goto L_08A20228;
L_08A20228:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7584)));
    if (aot_gpr_5 != aot_gpr_4) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2764), ctx.gpr[7]);
        goto L_08A20258;
    }
    goto L_08A20234;
L_08A20234:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2764), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2756), aot_gpr_6);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7608)));
    ctx.gpr[8] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7764)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < ctx.gpr[8] ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2764)));
        goto L_08A20818;
    }
    goto L_08A20254;
L_08A20254:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2764), ctx.gpr[7]);
    goto L_08A20258;
L_08A20258:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2756), aot_gpr_6);
    aot_mem.aot_direct_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2760), ctx.gpr[7]);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7584), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7604), aot_gpr_6);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7704));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(8));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7600), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7400)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7032), aot_gpr_4);
    aot_gpr_4 = (2279u << 16u);
    ctx.gpr[31] = (0x08A20298u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(25248));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 546u, 0x08A1B9ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20298u) goto L_08A20298;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20298:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2416), 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2420), 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7392)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7380)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7392)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2424));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A2031Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2031Cu) goto L_08A2031C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2031C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7388)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7376)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7388)));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(2426));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(880));
    aot_gpr_5 = (0u | 1u);
    ctx.gpr[7] = (0u | 127u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[31] = (0x08A20390u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0037_entry, 37u, 287u, 0x08899758u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20390u) goto L_08A20390;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20390:
    aot_gpr_4 = (0u | 0u);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2748), static_cast<std::uint16_t>(aot_gpr_4));
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2424))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16230u << 16u);
      if (branch_taken) {
          goto L_08A2041C;
      }
      goto L_08A203AC;
    }
L_08A203AC:
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (aot_gpr_29 | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2748))))));
    goto L_08A203BC;
L_08A203BC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(368)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2748), static_cast<std::uint16_t>(ctx.gpr[19]));
        goto L_08A20408;
    }
    goto L_08A203D4;
L_08A203D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(368)));
    ctx.gpr[31] = (0x08A203E0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 405u, 0x08A1AA20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A203E0u) goto L_08A203E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A203E0:
    if (ctx.gpr[2] == 0u) {
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2748), static_cast<std::uint16_t>(ctx.gpr[19]));
        goto L_08A20408;
    }
    goto L_08A203E8;
L_08A203E8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(368)));
    aot_gpr_5 = (ctx.gpr[19] << 2u);
    aot_gpr_6 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (aot_gpr_6 << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1392), aot_gpr_4);
    aot_mem.aot_direct_store16(aot_gpr_29 + static_cast<std::uint32_t>(2748), static_cast<std::uint16_t>(ctx.gpr[19]));
    goto L_08A20408;
L_08A20408:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2424))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A203BC;
      }
      goto L_08A2041C;
    }
L_08A2041C:
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2426))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_gpr_4 = (16230u << 16u);
      if (branch_taken) {
          goto L_08A2049C;
      }
      goto L_08A20434;
    }
L_08A20434:
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_16 = (aot_gpr_29 | 0u);
    goto L_08A20440;
L_08A20440:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(880)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A20488;
      }
      goto L_08A20458;
    }
L_08A20458:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(880)));
    ctx.gpr[31] = (0x08A20464u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 405u, 0x08A1AA20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20464u) goto L_08A20464;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20464:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20488;
      }
      goto L_08A2046C;
    }
L_08A2046C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(880)));
    aot_gpr_5 = (ctx.gpr[30] << 2u);
    aot_gpr_6 = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (aot_gpr_6 << 16u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 16u));
    aot_gpr_5 = (aot_gpr_29 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(1904), aot_gpr_4);
    goto L_08A20488;
L_08A20488:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2426))))));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A20440;
      }
      goto L_08A2049C;
    }
L_08A2049C:
    ctx.gpr[22] = (0u | 0u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2748))))));
    aot_gpr_5 = (0u | 0u);
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2744), aot_gpr_5);
      if (branch_taken) {
          goto L_08A207F8;
      }
      goto L_08A204B4;
    }
L_08A204B4:
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(2464));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(2528));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(2448));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(2432));
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-12032));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2736), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2740), aot_gpr_5);
    ctx.gpr[20] = (aot_gpr_29 | 0u);
    goto L_08A204FC;
L_08A204FC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2050C;
      }
      goto L_08A20504;
    }
L_08A20504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A207FC;
      }
      goto L_08A2050C;
    }
L_08A2050C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1392)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    if (((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2744)));
        goto L_08A207E0;
    }
    goto L_08A20524;
L_08A20524:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x08A20530u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 405u, 0x08A1AA20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20530u) goto L_08A20530;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20530:
    if (ctx.gpr[2] == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2744)));
        goto L_08A207E0;
    }
    goto L_08A20538;
L_08A20538:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1392)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1392)));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(2512));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A20574u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 350u, 0x08A1A5F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20574u) goto L_08A20574;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20574:
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1392)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[28] = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[31] = (0x08A205C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A205C8u) goto L_08A205C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A205C8:
    aot_fpr_14 = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[24] + aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2456)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2456), std::bit_cast<std::uint32_t>(aot_fpr_14));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x08A20624u);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20624u) goto L_08A20624;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20624:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) & 0x7FFFFFFFu);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7372)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A207DC;
      }
      goto L_08A2063C;
    }
L_08A2063C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2744)));
    ctx.gpr[17] = (aot_gpr_4 | 0u);
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 << 2u);
      if (branch_taken) {
          goto L_08A207DC;
      }
      goto L_08A20650;
    }
L_08A20650:
    aot_gpr_16 = (aot_gpr_29 + aot_gpr_16);
    goto L_08A20654;
L_08A20654:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20664;
      }
      goto L_08A2065C;
    }
L_08A2065C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A207DC;
      }
      goto L_08A20664;
    }
L_08A20664:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1904)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(40)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A207CC;
      }
      goto L_08A2067C;
    }
L_08A2067C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1904)));
    ctx.gpr[31] = (0x08A20688u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 405u, 0x08A1AA20u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20688u) goto L_08A20688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20688:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A207CC;
      }
      goto L_08A20690;
    }
L_08A20690:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1904)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1904)));
    aot_gpr_4 = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A206C8u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 350u, 0x08A1A5F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A206C8u) goto L_08A206C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A206C8:
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1904)));
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(86))))));
    aot_gpr_5 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(24)));
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(20)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(16));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[28] = aot_fpr_12 - aot_fpr_13;
    ctx.gpr[31] = (0x08A2071Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2071Cu) goto L_08A2071C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2071C:
    aot_fpr_14 = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[24] + aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2472)));
    aot_fpr_14 = ctx.fpr[15] - aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2472), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A20764u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20764u) goto L_08A20764;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A207CC;
      }
      goto L_08A2076C;
    }
L_08A2076C:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A2079Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2079Cu) goto L_08A2079C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2079C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A207CC;
      }
      goto L_08A207A4;
    }
L_08A207A4:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2736)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2740)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[22] = (0u | 1u);
    goto L_08A207CC;
L_08A207CC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A20654;
      }
      goto L_08A207DC;
    }
L_08A207DC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2744)));
    goto L_08A207E0;
L_08A207E0:
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_29 + static_cast<std::uint32_t>(2748))))));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_4) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2744), aot_gpr_4);
      if (branch_taken) {
          goto L_08A204FC;
      }
      goto L_08A207F8;
    }
L_08A207F8:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A207FC;
L_08A207FC:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20814;
      }
      goto L_08A20804;
    }
L_08A20804:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2760)));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A20AEC;
      }
      goto L_08A20814;
    }
L_08A20814:
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2764)));
    goto L_08A20818;
L_08A20818:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2756)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_gpr_4 = (aot_gpr_4 - aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_13;
    aot_gpr_4 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-12032));
    aot_gpr_4 = (aot_gpr_5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
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
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7396)));
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_5);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[31] = (0x08A208BCu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A208BCu) goto L_08A208BC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A208BC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7396)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (16384u << 16u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20900u);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20900u) goto L_08A20900;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20900:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(-7596)));
    if (aot_gpr_4 != 0u) {
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
        goto L_08A209E8;
    }
    goto L_08A2090C;
L_08A2090C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_20; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(2768), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (17287u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[24] = aot_fpr_13 / aot_fpr_12;
    ctx.gpr[31] = (0x08A20948u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20948u) goto L_08A20948;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20948:
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = ctx.fpr[0] + ctx.fpr[26];
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(240)));
    aot_fpr_13 = aot_fpr_13 - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[31] = (0x08A20980u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20980u) goto L_08A20980;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20980:
    aot_fpr_14 = ctx.fpr[0] + ctx.fpr[26];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(260)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(244)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] + aot_fpr_12;
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (0x08A209A8u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 417u, 0x08A1AAA8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A209A8u) goto L_08A209A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A209A8:
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[26];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(264)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(248)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_20 + aot_fpr_12;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(2544), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(2544));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2768)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A209E8;
L_08A209E8:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(2752)));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    aot_gpr_5 = (0u | 22u);
    aot_gpr_6 = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A20A14u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 517u, 0x08A1B7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20A14u) goto L_08A20A14;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20A14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20A74;
      }
      goto L_08A20A1C;
    }
L_08A20A1C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A20A5Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20A5Cu) goto L_08A20A5C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20A5C:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20A80;
      }
      goto L_08A20A6C;
    }
L_08A20A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20A9C;
      }
      goto L_08A20A74;
    }
L_08A20A74:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A20AEC;
      }
      goto L_08A20A80;
    }
L_08A20A80:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7032)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7032), aot_gpr_5);
      if (branch_taken) {
          goto L_08A20AC0;
      }
      goto L_08A20A90;
    }
L_08A20A90:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[18]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A20AEC;
      }
      goto L_08A20A9C;
    }
L_08A20A9C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7032)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7032), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7400)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20AC0;
      }
      goto L_08A20AB8;
    }
L_08A20AB8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7400)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7032), aot_gpr_4);
    goto L_08A20AC0;
L_08A20AC0:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x08A20AE8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 471u, 0x08A1AF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20AE8u) goto L_08A20AE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20AE8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A20AEC;
L_08A20AEC:
    { std::uint32_t aot_run_words[16]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(2772), aot_run_words);
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
      ctx.gpr[31] = aot_run_words[15];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(2848));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20B34:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-432));
    { const std::uint32_t aot_run_words[11]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A20C08;
      }
      goto L_08A20B7C;
    }
L_08A20B7C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20C08;
      }
      goto L_08A20B9C;
    }
L_08A20B9C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(164));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12], ctx.gpr[13]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A20BE8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 515u, 0x08A1B674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20BE8u) goto L_08A20BE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20BE8:
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    ctx.gpr[18] = (0u | 3u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7584)));
    aot_gpr_5 = (0u | 51u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A20C24;
      }
      goto L_08A20C00;
    }
L_08A20C00:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7608)));
      if (branch_taken) {
          goto L_08A20C10;
      }
      goto L_08A20C08;
    }
L_08A20C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A211A4;
      }
      goto L_08A20C10;
    }
L_08A20C10:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7764)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20DE4;
      }
      goto L_08A20C24;
    }
L_08A20C24:
    aot_gpr_4 = (aot_gpr_28 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 51u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7584), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7604), ctx.gpr[17]);
    aot_gpr_4 = (ctx.gpr[18] << 2u);
    aot_gpr_5 = (2234u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(7704));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[17] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7600), aot_gpr_4);
    aot_gpr_4 = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7368)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D84;
      }
      goto L_08A20C6C;
    }
L_08A20C6C:
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7364)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_20 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7360)));
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[31] = (0x08A20CA0u);
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20CA0u) goto L_08A20CA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20CA0:
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[24] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7360)));
    ctx.gpr[31] = (0x08A20CC4u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20CC4u) goto L_08A20CC4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20CC4:
    aot_fpr_12 = ctx.fpr[26] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    aot_gpr_5 = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A20D1Cu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20D1Cu) goto L_08A20D1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20D1C:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D70;
      }
      goto L_08A20D2C;
    }
L_08A20D2C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_28 + static_cast<std::uint32_t>(7040));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7048)));
    aot_gpr_5 = (16384u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7048), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20D84;
      }
      goto L_08A20D70;
    }
L_08A20D70:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7368)));
    aot_gpr_5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20C6C;
      }
      goto L_08A20D84;
    }
L_08A20D84:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20DCC;
      }
      goto L_08A20D8C;
    }
L_08A20D8C:
    ctx.gpr[31] = (0x08A20D94u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20D94u) goto L_08A20D94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20D94:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7572)));
    ctx.gpr[31] = (0x08A20DA8u);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7576)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A20DA8u) goto L_08A20DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A20DA8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A20DE0;
      }
      goto L_08A20DC4;
    }
L_08A20DC4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A20DE0;
      }
      goto L_08A20DCC;
    }
L_08A20DCC:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_28 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A211A4;
      }
      goto L_08A20DE0;
    }
L_08A20DE0:
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-7356), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A20DE4;
L_08A20DE4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_gpr_5 = (ctx.gpr[17] - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_13;
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7040));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (17036u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_5);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(208));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A20E78;
      }
      goto L_08A20E64;
    }
L_08A20E64:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(-7356)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20E8C;
      }
      goto L_08A20E70;
    }
L_08A20E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2106C;
      }
      goto L_08A20E78;
    }
L_08A20E78:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_28 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A211A4;
      }
      goto L_08A20E8C;
    }
L_08A20E8C:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
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
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7348)));
    aot_fpr_12 = ctx.fpr[22] / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7348)));
        goto L_08A20EE0;
    }
    goto L_08A20ED8;
L_08A20ED8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A20F0C;
      }
      goto L_08A20EE0;
    }
L_08A20EE0:
    aot_fpr_12 = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_08A20F04;
      }
      goto L_08A20EFC;
    }
L_08A20EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A20F0C;
      }
      goto L_08A20F04;
    }
L_08A20F04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7348)));
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_12;
    goto L_08A20F0C;
L_08A20F0C:
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_gpr_4 = (17287u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 / aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7344)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7336)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A2106C;
      }
      goto L_08A20F94;
    }
L_08A20F94:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7060)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A20FAC;
      }
      goto L_08A20FA0;
    }
L_08A20FA0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7060), aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7344)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7064), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A20FAC;
L_08A20FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7336)));
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(0u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    if (!((ctx.fcr31 & 0x00800000u) != 0u)) {
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7336)));
        goto L_08A20FD0;
    }
    goto L_08A20FC8;
L_08A20FC8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A20FFC;
      }
      goto L_08A20FD0;
    }
L_08A20FD0:
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_08A20FF4;
      }
      goto L_08A20FEC;
    }
L_08A20FEC:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          goto L_08A20FFC;
      }
      goto L_08A20FF4;
    }
L_08A20FF4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7336)));
    aot_fpr_12 = aot_fpr_20 / aot_fpr_12;
    goto L_08A20FFC;
L_08A20FFC:
    aot_gpr_4 = (17204u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_gpr_4 = (17287u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_14 - aot_fpr_12;
    aot_gpr_4 = (16457u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7064)));
    ctx.fpr[16] = ctx.fpr[22] - ctx.fpr[15];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[15] + ctx.fpr[22];
    goto L_08A2106C;
L_08A2106C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A210ACu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A210ACu) goto L_08A210AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A210AC:
    aot_gpr_4 = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7036)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_5 = (0u | 1u);
      if (branch_taken) {
          goto L_08A210CC;
      }
      goto L_08A210C0;
    }
L_08A210C0:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7036), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7352)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7056), aot_gpr_5);
    goto L_08A210CC;
L_08A210CC:
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21130;
      }
      goto L_08A210D4;
    }
L_08A210D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7056)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7056), aot_gpr_5);
      if (branch_taken) {
          goto L_08A2111C;
      }
      goto L_08A210E4;
    }
L_08A210E4:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (0u | 23u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x08A21100u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 517u, 0x08A1B7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21100u) goto L_08A21100;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21100:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21158;
      }
      goto L_08A21108;
    }
L_08A21108:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_28 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A211A4;
      }
      goto L_08A2111C;
    }
L_08A2111C:
    aot_gpr_4 = (0u | 1u);
    aot_gpr_5 = (aot_gpr_28 + ctx.gpr[18]);
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(aot_gpr_4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A211A4;
      }
      goto L_08A21130;
    }
L_08A21130:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7056)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7056), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7352)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A210E4;
      }
      goto L_08A2114C;
    }
L_08A2114C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7352)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7056), aot_gpr_4);
      if (branch_taken) {
          goto L_08A210E4;
      }
      goto L_08A21158;
    }
L_08A21158:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = ctx.fpr[22] / aot_fpr_12;
    aot_gpr_4 = (49435u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 13107u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16672u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A211A0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 471u, 0x08A1AF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A211A0u) goto L_08A211A0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A211A0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A211A4;
L_08A211A4:
    { std::uint32_t aot_run_words[11]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(384), aot_run_words);
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
      ctx.gpr[31] = aot_run_words[10];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A211D8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-592));
    { const std::uint32_t aot_run_words[14]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(532), aot_run_words); }
    aot_gpr_16 = (2236u << 16u);
    aot_gpr_16 = (aot_gpr_16 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_gpr_6 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A212F0;
      }
      goto L_08A2122C;
    }
L_08A2122C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_6 + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A212F0;
      }
      goto L_08A2124C;
    }
L_08A2124C:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_6);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(84));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[11] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(224));
    aot_gpr_4 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12], ctx.gpr[13]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A212A8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 515u, 0x08A1B674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A212A8u) goto L_08A212A8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A212A8:
    ctx.gpr[30] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7328)));
    ctx.gpr[19] = (0u | 1u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A212E0;
      }
      goto L_08A212C8;
    }
L_08A212C8:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7584)));
    aot_gpr_4 = (0u | 54u);
    { const bool branch_taken = aot_gpr_6 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A2130C;
      }
      goto L_08A212D8;
    }
L_08A212D8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7608)));
      if (branch_taken) {
          goto L_08A212F8;
      }
      goto L_08A212E0;
    }
L_08A212E0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A212F0;
    }
L_08A212F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A212F8;
    }
L_08A212F8:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7764)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_gpr_6 = (aot_gpr_6 < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = aot_gpr_6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21484;
      }
      goto L_08A2130C;
    }
L_08A2130C:
    aot_gpr_16 = (aot_gpr_28 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7584), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7604), ctx.gpr[30]);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7704));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(24));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[30] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7600), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    aot_gpr_4 = (aot_gpr_5 | 0u);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A21374u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21374u) goto L_08A21374;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21374:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A213FC;
      }
      goto L_08A21380;
    }
L_08A21380:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A21394u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21394u) goto L_08A21394;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21394:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[19] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7572)));
    ctx.gpr[18] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A213B0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A213B0u) goto L_08A213B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A213B0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_5 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_gpr_5 = (17036u << 16u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_5);
      if (branch_taken) {
          goto L_08A21408;
      }
      goto L_08A213F4;
    }
L_08A213F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A2140C;
      }
      goto L_08A213FC;
    }
L_08A213FC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A21408;
    }
L_08A21408:
    aot_gpr_4 = (0u | 0u);
    goto L_08A2140C;
L_08A2140C:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21420;
      }
      goto L_08A21414;
    }
L_08A21414:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7072)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7072), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A21420;
L_08A21420:
    ctx.gpr[31] = (0x08A21428u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21428u) goto L_08A21428;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21428:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2143Cu);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2143Cu) goto L_08A2143C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2143C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21464;
      }
      goto L_08A21458;
    }
L_08A21458:
    aot_gpr_4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A21468;
      }
      goto L_08A21464;
    }
L_08A21464:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A21468;
L_08A21468:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2147C;
      }
      goto L_08A21470;
    }
L_08A21470:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7332), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A2147C;
L_08A2147C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A214E0;
      }
      goto L_08A21484;
    }
L_08A21484:
    ctx.gpr[31] = (0x08A2148Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 443u, 0x08A1E670u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2148Cu) goto L_08A2148C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2148C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7296)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[0] < aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A214B0;
      }
      goto L_08A214A0;
    }
L_08A214A0:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A214B0;
    }
L_08A214B0:
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(256));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_4 = (16128u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[30]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    aot_gpr_4 = (17036u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A214E0;
L_08A214E0:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_gpr_5 = (ctx.gpr[30] - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_fpr_20 = aot_fpr_20 / aot_fpr_13;
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(144));
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
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7332)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7324)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7320)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A215CCu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A215CCu) goto L_08A215CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A215CC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7316)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A215F4u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A215F4u) goto L_08A215F4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A215F4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7304)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = aot_fpr_20 - ctx.fpr[26];
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7072)));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A21648u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21648u) goto L_08A21648;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21648:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7308)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[31] = (0x08A21674u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 418u, 0x08A1AACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21674u) goto L_08A21674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21674:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7312)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A216ACu);
    aot_gpr_5 = (ctx.gpr[20] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A216ACu) goto L_08A216AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A216AC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A216ECu);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A216ECu) goto L_08A216EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A216EC:
    ctx.gpr[30] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7068)));
    { const bool branch_taken = aot_gpr_5 != 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A21700;
    }
L_08A21700:
    aot_gpr_5 = (0u | 1u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7068), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7300)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7076), aot_gpr_5);
    goto L_08A21710;
L_08A21710:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2176C;
      }
      goto L_08A21718;
    }
L_08A21718:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7076)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_5 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7076), aot_gpr_6);
      if (branch_taken) {
          goto L_08A2175C;
      }
      goto L_08A21728;
    }
L_08A21728:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_4);
    goto L_08A2172C;
L_08A2172C:
    aot_gpr_5 = (0u | 26u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x08A21744u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 517u, 0x08A1B7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21744u) goto L_08A21744;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21744:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(528)));
      if (branch_taken) {
          goto L_08A21794;
      }
      goto L_08A2174C;
    }
L_08A2174C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A2175C;
    }
L_08A2175C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(6));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A217BC;
      }
      goto L_08A2176C;
    }
L_08A2176C:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7076)));
    aot_gpr_6 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7076), aot_gpr_6);
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7300)));
    aot_gpr_5 = (static_cast<std::int32_t>(aot_gpr_6) < static_cast<std::int32_t>(aot_gpr_5) ? 1u : 0u);
    if (aot_gpr_5 == 0u) {
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(528), aot_gpr_4);
        goto L_08A2172C;
    }
    goto L_08A21788;
L_08A21788:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7300)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7076), aot_gpr_5);
      if (branch_taken) {
          goto L_08A21728;
      }
      goto L_08A21794;
    }
L_08A21794:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_5 = (16544u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_gpr_5 = (ctx.gpr[23] | 0u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A217B8u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 471u, 0x08A1AF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A217B8u) goto L_08A217B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A217B8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08A217BC;
L_08A217BC:
    { std::uint32_t aot_run_words[14]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(532), aot_run_words);
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
      ctx.gpr[31] = aot_run_words[13];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A217FC:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-528));
    { const std::uint32_t aot_run_words[13]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words); }
    aot_gpr_5 = (2236u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(32304));
    aot_mem.aot_direct_store8(aot_gpr_5 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = aot_gpr_5 == 0u;
    ctx.gpr[23] = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A2190C;
      }
      goto L_08A2184C;
    }
L_08A2184C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2190C;
      }
      goto L_08A2186C;
    }
L_08A2186C:
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(144));
    ctx.gpr[2] = (aot_gpr_29 + static_cast<std::uint32_t>(160));
    ctx.gpr[3] = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    ctx.gpr[12] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.gpr[13] = (aot_gpr_29 + static_cast<std::uint32_t>(196));
    ctx.gpr[14] = (aot_gpr_29 + static_cast<std::uint32_t>(208));
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    { const std::uint32_t aot_run_words[4]{ctx.gpr[2], ctx.gpr[3], ctx.gpr[12], ctx.gpr[13]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A218C8u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), ctx.gpr[14]);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 515u, 0x08A1B674u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A218C8u) goto L_08A218C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A218C8:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7288)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_12)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A218FC;
      }
      goto L_08A218E4;
    }
L_08A218E4:
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7584)));
    aot_gpr_4 = (0u | 55u);
    { const bool branch_taken = aot_gpr_5 != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A21928;
      }
      goto L_08A218F4;
    }
L_08A218F4:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7608)));
      if (branch_taken) {
          goto L_08A21914;
      }
      goto L_08A218FC;
    }
L_08A218FC:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21DAC;
      }
      goto L_08A2190C;
    }
L_08A2190C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21DAC;
      }
      goto L_08A21914;
    }
L_08A21914:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7764)));
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-1));
    aot_gpr_5 = (aot_gpr_5 < aot_gpr_6 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21ABC;
      }
      goto L_08A21928;
    }
L_08A21928:
    aot_gpr_16 = (aot_gpr_28 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7584), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7604), ctx.gpr[20]);
    aot_gpr_4 = (2234u << 16u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(7704));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(28));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_gpr_4 = (ctx.gpr[20] + aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7600), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A21990u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21990u) goto L_08A21990;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21990:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A219F0;
      }
      goto L_08A2199C;
    }
L_08A2199C:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7084), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x08A219B0u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A219B0u) goto L_08A219B0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A219B0:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7572)));
    aot_gpr_16 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7576)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A219CCu);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A219CCu) goto L_08A219CC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A219CC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A219FC;
      }
      goto L_08A219E8;
    }
L_08A219E8:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A219FC;
      }
      goto L_08A219F0;
    }
L_08A219F0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21DAC;
      }
      goto L_08A219FC;
    }
L_08A219FC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A10;
      }
      goto L_08A21A04;
    }
L_08A21A04:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7084)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7084), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A21A10;
L_08A21A10:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7088), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.gpr[31] = (0x08A21A1Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21A1Cu) goto L_08A21A1C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21A1C:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A21A30u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21A30u) goto L_08A21A30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21A30:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21A54;
      }
      goto L_08A21A4C;
    }
L_08A21A4C:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21A54;
      }
      goto L_08A21A54;
    }
L_08A21A54:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A68;
      }
      goto L_08A21A5C;
    }
L_08A21A5C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7088)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7088), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A21A68;
L_08A21A68:
    ctx.gpr[31] = (0x08A21A70u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21A70u) goto L_08A21A70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21A70:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A21A84u);
    aot_gpr_6 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21A84u) goto L_08A21A84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21A84:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21AA8;
      }
      goto L_08A21AA0;
    }
L_08A21AA0:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21AA8;
      }
      goto L_08A21AA8;
    }
L_08A21AA8:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21ABC;
      }
      goto L_08A21AB0;
    }
L_08A21AB0:
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A21ABC;
L_08A21ABC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_gpr_5 = (ctx.gpr[20] - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    ctx.fpr[22] = ctx.fpr[22] / aot_fpr_13;
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
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
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_20 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_20 - ctx.fpr[22];
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (49152u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_20;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7088)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7292)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<1u>(aot_gpr_6);
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7284)));
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
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
    aot_gpr_16 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7280)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A21C0Cu);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21C0Cu) goto L_08A21C0C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21C0C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7276)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A21C30u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21C30u) goto L_08A21C30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21C30:
    aot_fpr_12 = std::bit_cast<float>(ctx.gpr[20]);
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7604)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7600)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7268)));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.gpr[31] = (0x08A21C60u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 418u, 0x08A1AACCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21C60u) goto L_08A21C60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21C60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7272)));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
      const std::uint32_t vfpu_address = aot_gpr_16 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A21C98u);
    aot_gpr_5 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21C98u) goto L_08A21C98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21C98:
    aot_gpr_4 = (17036u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), aot_gpr_4);
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(304));
    aot_gpr_4 = (ctx.gpr[19] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    { const std::uint32_t aot_run_words[4]{0u, 0u, 0u, 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A21CE0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21CE0u) goto L_08A21CE0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21CE0:
    ctx.gpr[21] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(8068), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7080)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21D00;
      }
      goto L_08A21CF4;
    }
L_08A21CF4:
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7080), aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7264)));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7092), aot_gpr_4);
    goto L_08A21D00;
L_08A21D00:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D5C;
      }
      goto L_08A21D08;
    }
L_08A21D08:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7092)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = aot_gpr_4 == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7092), aot_gpr_5);
      if (branch_taken) {
          goto L_08A21D4C;
      }
      goto L_08A21D18;
    }
L_08A21D18:
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (0u | 27u);
    aot_gpr_6 = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A21D34u);
    ctx.gpr[8] = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 517u, 0x08A1B7BCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21D34u) goto L_08A21D34;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21D34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D84;
      }
      goto L_08A21D3C;
    }
L_08A21D3C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21DAC;
      }
      goto L_08A21D4C;
    }
L_08A21D4C:
    aot_gpr_4 = (aot_gpr_28 + static_cast<std::uint32_t>(7));
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(-7596), static_cast<std::uint8_t>(ctx.gpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21DAC;
      }
      goto L_08A21D5C;
    }
L_08A21D5C:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7092)));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7092), aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7264)));
    aot_gpr_4 = (static_cast<std::int32_t>(aot_gpr_5) < static_cast<std::int32_t>(aot_gpr_4) ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D18;
      }
      goto L_08A21D78;
    }
L_08A21D78:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7264)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(7092), aot_gpr_4);
      if (branch_taken) {
          goto L_08A21D18;
      }
      goto L_08A21D84;
    }
L_08A21D84:
    aot_fpr_12 = std::bit_cast<float>(0u);
    aot_gpr_4 = (16544u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A21DA8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 471u, 0x08A1AF14u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21DA8u) goto L_08A21DA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21DA8:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_08A21DAC;
L_08A21DAC:
    { std::uint32_t aot_run_words[13]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words);
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
      ctx.gpr[31] = aot_run_words[12];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21DE8:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-96));
    { const std::uint32_t aot_run_words[10]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(160)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(16)));
    aot_fpr_13 = aot_fpr_14 / aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(164)));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(160)));
    aot_fpr_12 = ctx.fpr[16] - aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[17] = ctx.fpr[15] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = aot_fpr_13 / ctx.fpr[18];
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) & 0x7FFFFFFFu);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(160)));
    ctx.fpr[19] = ctx.fpr[16] - ctx.fpr[19];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[0] = ctx.fpr[15] + aot_fpr_12;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(24)));
    ctx.fpr[2] = aot_fpr_12 / ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]) & 0x7FFFFFFFu);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(160)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[17]), std::bit_cast<std::uint32_t>(ctx.fpr[0]), std::bit_cast<std::uint32_t>(ctx.fpr[15])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A21EC4;
      }
      goto L_08A21EA8;
    }
L_08A21EA8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[15] <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21EC4;
      }
      goto L_08A21EBC;
    }
L_08A21EBC:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21EEC;
      }
      goto L_08A21EC4;
    }
L_08A21EC4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21EEC;
      }
      goto L_08A21ED4;
    }
L_08A21ED4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21EEC;
      }
      goto L_08A21EE8;
    }
L_08A21EE8:
    aot_gpr_4 = (0u | 1u);
    goto L_08A21EEC;
L_08A21EEC:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F04;
      }
      goto L_08A21EF4;
    }
L_08A21EF4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(64)));
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08A21F04;
L_08A21F04:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21F30;
      }
      goto L_08A21F14;
    }
L_08A21F14:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21F30;
      }
      goto L_08A21F28;
    }
L_08A21F28:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21F58;
      }
      goto L_08A21F30;
    }
L_08A21F30:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F58;
      }
      goto L_08A21F40;
    }
L_08A21F40:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21F58;
      }
      goto L_08A21F54;
    }
L_08A21F54:
    aot_gpr_4 = (0u | 1u);
    goto L_08A21F58;
L_08A21F58:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F70;
      }
      goto L_08A21F60;
    }
L_08A21F60:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(68)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A21F70;
L_08A21F70:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21F9C;
      }
      goto L_08A21F80;
    }
L_08A21F80:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21F9C;
      }
      goto L_08A21F94;
    }
L_08A21F94:
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A21FC4;
      }
      goto L_08A21F9C;
    }
L_08A21F9C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A21FC4;
      }
      goto L_08A21FAC;
    }
L_08A21FAC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A21FC4;
      }
      goto L_08A21FC0;
    }
L_08A21FC0:
    aot_gpr_4 = (0u | 1u);
    goto L_08A21FC4;
L_08A21FC4:
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21FDC;
      }
      goto L_08A21FCC;
    }
L_08A21FCC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(72)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A21FDC;
L_08A21FDC:
    ctx.gpr[31] = (0x08A21FE4u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A21FE4u) goto L_08A21FE4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A21FE4:
    aot_fpr_12 = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] + aot_fpr_12;
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[31] = (0x08A22000u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22000u) goto L_08A22000;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22000:
    aot_fpr_14 = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[22] + aot_fpr_14;
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(4)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x08A2201Cu);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2201Cu) goto L_08A2201C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2201C:
    aot_fpr_13 = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[22] + aot_fpr_13;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(8)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(aot_fpr_13)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A22060;
      }
      goto L_08A22054;
    }
L_08A22054:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08A22060;
L_08A22060:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A2207C;
      }
      goto L_08A22070;
    }
L_08A22070:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(20)));
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A2207C;
L_08A2207C:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[22])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22098;
      }
      goto L_08A2208C;
    }
L_08A2208C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(24)));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_12) ^ 0x80000000u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A22098;
L_08A22098:
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A220A4u);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A220A4u) goto L_08A220A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A220A4:
    ctx.gpr[31] = (0x08A220ACu);
    ctx.gpr[17] = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(168)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A220ACu) goto L_08A220AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A220AC:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    aot_gpr_5 = (0u | 0u);
    aot_gpr_6 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A220C0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_6) >> 31u));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A220C0u) goto L_08A220C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A220C0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    aot_gpr_5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    aot_gpr_4 = (ctx.gpr[2] >> 31u);
    aot_gpr_4 = (ctx.gpr[1] | aot_gpr_4);
    ctx.gpr[7] = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7252)));
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7256)));
    ctx.gpr[8] = (aot_gpr_4 + aot_gpr_6);
    ctx.gpr[9] = (ctx.gpr[8] < aot_gpr_6 ? 1u : 0u);
    aot_gpr_4 = (ctx.gpr[9] + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_4 + ctx.gpr[7]);
    aot_gpr_4 = (ctx.gpr[8] | 0u);
    aot_gpr_4 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 2u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A2215C;
      }
      goto L_08A220FC;
    }
L_08A220FC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x08A22108u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22108u) goto L_08A22108;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22108:
    aot_fpr_12 = ctx.fpr[22] - ctx.fpr[24];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + aot_fpr_12;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x08A22120u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22120u) goto L_08A22120;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22120:
    aot_fpr_13 = ctx.fpr[26] - ctx.fpr[28];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[28] + aot_fpr_13;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x08A22138u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22138u) goto L_08A22138;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22138:
    aot_fpr_12 = ctx.fpr[30] - ctx.fpr[26];
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[26] + aot_fpr_12;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(aot_fpr_12)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(32), aot_run_words); }
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2215Cu);
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2215Cu) goto L_08A2215C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2215C:
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A22168u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22168u) goto L_08A22168;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22168:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A22198;
      }
      goto L_08A2218C;
    }
L_08A2218C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
      if (branch_taken) {
          goto L_08A221B4;
      }
      goto L_08A22198;
    }
L_08A22198:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A221B4;
      }
      goto L_08A221AC;
    }
L_08A221AC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_13));
    goto L_08A221B4;
L_08A221B4:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 <= ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A221D0;
      }
      goto L_08A221C4;
    }
L_08A221C4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08A221EC;
      }
      goto L_08A221D0;
    }
L_08A221D0:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_14 < ctx.fpr[15])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A221EC;
      }
      goto L_08A221E4;
    }
L_08A221E4:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_fpr_14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_08A221EC;
L_08A221EC:
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] <= ctx.fpr[17])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22208;
      }
      goto L_08A221FC;
    }
L_08A221FC:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_08A22224;
      }
      goto L_08A22208;
    }
L_08A22208:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]) ^ 0x80000000u);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[16] < ctx.fpr[17])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22224;
      }
      goto L_08A2221C;
    }
L_08A2221C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08A22224;
L_08A22224:
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(80));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    { const float fs = aot_fpr_14; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.gpr[31] = (0x08A22238u);
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22238u) goto L_08A22238;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22238:
    { std::uint32_t aot_run_words[10]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(48), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      ctx.fpr[24] = std::bit_cast<float>(aot_run_words[2]);
      ctx.fpr[26] = std::bit_cast<float>(aot_run_words[3]);
      ctx.fpr[28] = std::bit_cast<float>(aot_run_words[4]);
      ctx.fpr[30] = std::bit_cast<float>(aot_run_words[5]);
      aot_gpr_16 = aot_run_words[6];
      ctx.gpr[17] = aot_run_words[7];
      ctx.gpr[18] = aot_run_words[8];
      ctx.gpr[31] = aot_run_words[9];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22268:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-48));
    { const std::uint32_t aot_run_words[6]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words); }
    aot_gpr_16 = (aot_gpr_4 | 0u);
    aot_gpr_5 = (0u | 0u);
    ctx.gpr[31] = (0x08A22294u);
    aot_gpr_6 = (0u | 2912u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22294u) goto L_08A22294;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22294:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2544), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1980), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2065), static_cast<std::uint8_t>(0u));
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2196), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A222B8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 198u, 0x089997E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A222B8u) goto L_08A222B8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A222B8:
    ctx.gpr[31] = (0x08A222C0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(720));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 198u, 0x089997E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A222C0u) goto L_08A222C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A222C0:
    ctx.gpr[31] = (0x08A222C8u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(1328));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 198u, 0x089997E4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A222C8u) goto L_08A222C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A222C8:
    ctx.gpr[18] = (0u | 4u);
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(720), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2083), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2084), static_cast<std::uint8_t>(0u));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7680)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7676)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15733u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 49807u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (48588u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (48527u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 23593u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2071), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A2232Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 588u, 0x08A1BE00u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2232Cu) goto L_08A2232C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2232C:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1956), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (0u | 30u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2844), aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(224), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(832), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1440), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(880), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(1488), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16000u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2812), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16192u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2816), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2650), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1940), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2063), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2081), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1988), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1992), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2064), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2066), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16230u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 26214u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2180), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2649), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2055), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2056), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2652), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2016), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16384u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1972), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2192), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), 0u);
    ctx.gpr[31] = (0x08A223ECu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A223ECu) goto L_08A223EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A223EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A22424;
      }
      goto L_08A223F4;
    }
L_08A223F4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(7800)));
    aot_gpr_5 = (aot_gpr_4 << 8u);
    aot_gpr_6 = (aot_gpr_4 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_5 = (2238u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-6992));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), aot_gpr_4);
      if (branch_taken) {
          goto L_08A22430;
      }
      goto L_08A22424;
    }
L_08A22424:
    ctx.gpr[31] = (0x08A2242Cu);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2242Cu) goto L_08A2242C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2242C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), ctx.gpr[2]);
    goto L_08A22430;
L_08A22430:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2054), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2020), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2052), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2082), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2053), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2164), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22490;
      }
      goto L_08A22454;
    }
L_08A22454:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2640), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2641), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2644), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2651), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2808), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2800), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (15139u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 55050u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (15172u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39846u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A22490;
L_08A22490:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_28 + static_cast<std::uint32_t>(4212)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A224A0;
      }
      goto L_08A2249C;
    }
L_08A2249C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2808), std::bit_cast<std::uint32_t>(aot_fpr_20));
    goto L_08A224A0;
L_08A224A0:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2074), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(2852), static_cast<std::uint16_t>(ctx.gpr[17]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2079), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2080), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2188), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2176), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store16(aot_gpr_16 + static_cast<std::uint32_t>(2848), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2068), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    aot_gpr_4 = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    ctx.gpr[31] = (0x08A224DCu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0022_entry, 22u, 942u, 0x0885FFB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A224DCu) goto L_08A224DC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A224DC:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2062), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2096), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2061), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2057), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2648), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A22504u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2856));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0045_entry, 45u, 518u, 0x088BA740u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22504u) goto L_08A22504;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22504:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2059), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2085), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2124), 0u);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2168), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2172), std::bit_cast<std::uint32_t>(aot_fpr_20));
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
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
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2112), ctx.gpr[18]);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2116), 0u);
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2067), static_cast<std::uint8_t>(aot_gpr_4));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2100), 0u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2069), static_cast<std::uint8_t>(aot_gpr_4));
    aot_gpr_4 = (16135u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 44564u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2220), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (16112u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 41943u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2224), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2644), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (0u | 255u);
    aot_mem.aot_direct_store8(aot_gpr_28 + static_cast<std::uint32_t>(-16965), static_cast<std::uint8_t>(aot_gpr_4));
    { std::uint32_t aot_run_words[6]{};
      aot_mem.aot_direct_load32_block(aot_gpr_29 + static_cast<std::uint32_t>(16), aot_run_words);
      aot_fpr_20 = std::bit_cast<float>(aot_run_words[0]);
      ctx.fpr[22] = std::bit_cast<float>(aot_run_words[1]);
      aot_gpr_16 = aot_run_words[2];
      ctx.gpr[17] = aot_run_words[3];
      ctx.gpr[18] = aot_run_words[4];
      ctx.gpr[31] = aot_run_words[5];
    }
    jump_target = ctx.gpr[31];
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 256u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A225A4:
    aot_gpr_29 = (aot_gpr_29 + static_cast<std::uint32_t>(-1280));
    { const std::uint32_t aot_run_words[16]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[22]), std::bit_cast<std::uint32_t>(ctx.fpr[24]), std::bit_cast<std::uint32_t>(ctx.fpr[26]), std::bit_cast<std::uint32_t>(ctx.fpr[28]), std::bit_cast<std::uint32_t>(ctx.fpr[30]), aot_gpr_16, ctx.gpr[17], ctx.gpr[18], ctx.gpr[19], ctx.gpr[20], ctx.gpr[21], ctx.gpr[22], ctx.gpr[23], ctx.gpr[30], ctx.gpr[31]};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(1208), aot_run_words); }
    aot_fpr_20 = std::bit_cast<float>(0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_20));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_direct_store8(aot_gpr_4 + static_cast<std::uint32_t>(2068), static_cast<std::uint8_t>(0u));
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_5 = (aot_gpr_4 + static_cast<std::uint32_t>(2000));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_4 + static_cast<std::uint32_t>(2069)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[18] = (0u | 3u);
    aot_gpr_6 = (16230u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(aot_gpr_6);
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (aot_gpr_29 + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (aot_gpr_29 + static_cast<std::uint32_t>(96));
    aot_gpr_6 = (16457u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 4059u);
    ctx.fpr[26] = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = aot_gpr_5 == ctx.gpr[21];
    aot_gpr_16 = (aot_gpr_4 | 0u);
      if (branch_taken) {
          goto L_08A2266C;
      }
      goto L_08A22654;
    }
L_08A22654:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2075)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A2266C;
      }
      goto L_08A22660;
    }
L_08A22660:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2048)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A22674;
      }
      goto L_08A2266C;
    }
L_08A2266C:
    ctx.gpr[31] = (0x08A22674u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 481u, 0x08A2F364u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22674u) goto L_08A22674;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22674:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2268C;
      }
      goto L_08A22680;
    }
L_08A22680:
    ctx.gpr[31] = (0x08A22688u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08960424, 87u, 0x08960424u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22688u) goto L_08A22688;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22688:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1984), ctx.gpr[2]);
    goto L_08A2268C;
L_08A2268C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A226E0;
      }
      goto L_08A226B8;
    }
L_08A226B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(224), aot_gpr_4);
    goto L_08A226E0;
L_08A226E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(aot_gpr_4) >= 0) {
    aot_gpr_4 = (aot_gpr_4 & 1u);
        goto L_08A22718;
    }
    goto L_08A226F0;
L_08A226F0:
    aot_gpr_4 = (aot_gpr_4 & 1u);
    aot_gpr_4 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
      if (branch_taken) {
          goto L_08A22734;
      }
      goto L_08A22718;
    }
L_08A22718:
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    goto L_08A22734;
L_08A22734:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2279C;
      }
      goto L_08A22740;
    }
L_08A22740:
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_5) >= 0;
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
      if (branch_taken) {
          goto L_08A22778;
      }
      goto L_08A22750;
    }
L_08A22750:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    { const bool branch_taken = 0u == 0u;
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
      if (branch_taken) {
          goto L_08A22798;
      }
      goto L_08A22778;
    }
L_08A22778:
    aot_gpr_5 = (aot_gpr_5 & 1u);
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    goto L_08A22798;
L_08A22798:
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(224), aot_gpr_4);
    goto L_08A2279C;
L_08A2279C:
    ctx.gpr[31] = (0x08A227A4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0137_entry, 137u, 233u, 0x08A28D34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A227A4u) goto L_08A227A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A227A4:
    ctx.gpr[31] = (0x08A227ACu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 91u, 0x08A1C8D0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A227ACu) goto L_08A227AC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A227AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2651)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A227C0;
      }
      goto L_08A227B8;
    }
L_08A227B8:
    ctx.gpr[31] = (0x08A227C0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 343u, 0x08A1DDB4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A227C0u) goto L_08A227C0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A227C0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2052)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A227D4;
      }
      goto L_08A227CC;
    }
L_08A227CC:
    ctx.gpr[31] = (0x08A227D4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 320u, 0x08A1DB18u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A227D4u) goto L_08A227D4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A227D4:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8896)));
    ctx.gpr[31] = (0x08A227E0u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A227E0u) goto L_08A227E0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A227E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22850;
      }
      goto L_08A22814;
    }
L_08A22814:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22850;
      }
      goto L_08A22848;
    }
L_08A22848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2289C;
      }
      goto L_08A22850;
    }
L_08A22850:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08A2287Cu);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2287Cu) goto L_08A2287C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2287C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((ctx.fpr[22] < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A2289C;
      }
      goto L_08A22890;
    }
L_08A22890:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[22] = ctx.fpr[22] + aot_fpr_12;
    goto L_08A2289C;
L_08A2289C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[31] = (0x08A228C4u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 449u, 0x0899B8F4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A228C4u) goto L_08A228C4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A228C4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    ctx.gpr[31] = (0x08A228ECu);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0104_entry, 104u, 115u, 0x089A5494u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A228ECu) goto L_08A228EC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A228EC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A2295C;
      }
      goto L_08A22920;
    }
L_08A22920:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A2295C;
      }
      goto L_08A22954;
    }
L_08A22954:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = aot_fpr_20 - ctx.fpr[22];
      if (branch_taken) {
          goto L_08A229AC;
      }
      goto L_08A2295C;
    }
L_08A2295C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08A22988u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(132)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22988u) goto L_08A22988;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22988:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A229A8;
      }
      goto L_08A2299C;
    }
L_08A2299C:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A229A8;
L_08A229A8:
    ctx.fpr[22] = aot_fpr_12 - ctx.fpr[22];
    goto L_08A229AC;
L_08A229AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A229B8;
    }
L_08A229B8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2104)));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_5);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A229D4;
    }
L_08A229D4:
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2092), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2649), static_cast<std::uint8_t>(0u));
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2081), static_cast<std::uint8_t>(0u));
    goto L_08A229E0;
L_08A229E0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A229F8;
      }
      goto L_08A229EC;
    }
L_08A229EC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8896)));
    ctx.gpr[31] = (0x08A229F8u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2180)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A229F8u) goto L_08A229F8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A229F8:
    ctx.gpr[31] = (0x08A22A00u);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22A00u) goto L_08A22A00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22A00:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) & 0x7FFFFFFFu);
    aot_gpr_4 = (16025u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 39322u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22A2C;
      }
      goto L_08A22A24;
    }
L_08A22A24:
    aot_gpr_4 = (0u | 1u);
    aot_mem.aot_direct_store8(aot_gpr_16 + static_cast<std::uint32_t>(2068), static_cast<std::uint8_t>(aot_gpr_4));
    goto L_08A22A2C;
L_08A22A2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A22A7C;
      }
      goto L_08A22A58;
    }
L_08A22A58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(72)));
    aot_gpr_4 = (aot_gpr_4 & 14u);
    aot_gpr_4 = (aot_gpr_4 ^ 4u);
    aot_gpr_4 = (aot_gpr_4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_gpr_4 = (aot_gpr_4 & 255u);
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22A7C;
      }
      goto L_08A22A78;
    }
L_08A22A78:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    goto L_08A22A7C;
L_08A22A7C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22A90;
      }
      goto L_08A22A88;
    }
L_08A22A88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C58;
      }
      goto L_08A22A90;
    }
L_08A22A90:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(208));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2071)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22BD4;
      }
      goto L_08A22AF4;
    }
L_08A22AF4:
    aot_gpr_5 = (aot_gpr_16 + static_cast<std::uint32_t>(2464));
    ctx.gpr[31] = (0x08A22B00u);
    aot_gpr_4 = (ctx.gpr[30] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_compact_generated_leaf<&vcs_compact_leaf_08A931B8, 163u, 0x08A931B8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22B00u) goto L_08A22B00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22B00:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(240));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(256));
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
    { const std::uint32_t vfpu_address = aot_gpr_5 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C2C;
      }
      goto L_08A22BD4;
    }
L_08A22BD4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(128));
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(208));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A22C2C;
L_08A22C2C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(408)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A2399C;
      }
      goto L_08A22C58;
    }
L_08A22C58:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2100)));
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7660)));
    aot_gpr_4 = (aot_gpr_5 - aot_gpr_4);
    aot_gpr_5 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2104)));
    aot_gpr_6 = (aot_gpr_4 < aot_gpr_5 ? 1u : 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    if (aot_gpr_6 == 0u) {
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2104)));
        goto L_08A22C78;
    }
    goto L_08A22C78;
L_08A22C78:
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A22C90;
      }
      goto L_08A22C84;
    }
L_08A22C84:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A22C90;
L_08A22C90:
    aot_gpr_6 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2104)));
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_6) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08A22CAC;
      }
      goto L_08A22CA0;
    }
L_08A22CA0:
    aot_gpr_6 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_08A22CAC;
L_08A22CAC:
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_13)));
      if (branch_taken) {
          goto L_08A22CC8;
      }
      goto L_08A22CBC;
    }
L_08A22CBC:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    goto L_08A22CC8;
L_08A22CC8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2108)));
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_14)));
      if (branch_taken) {
          goto L_08A22CE4;
      }
      goto L_08A22CD8;
    }
L_08A22CD8:
    aot_gpr_4 = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    goto L_08A22CE4;
L_08A22CE4:
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22D00;
      }
      goto L_08A22CF8;
    }
L_08A22CF8:
    { const bool branch_taken = 0u == 0u;
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_20));
      if (branch_taken) {
          goto L_08A22D1C;
      }
      goto L_08A22D00;
    }
L_08A22D00:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22D1C;
      }
      goto L_08A22D18;
    }
L_08A22D18:
    aot_fpr_13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(aot_fpr_14));
    goto L_08A22D1C;
L_08A22D1C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2820)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22DD4;
      }
      goto L_08A22D30;
    }
L_08A22D30:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2820)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_20)) && aot_fpr_14 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2432));
      if (branch_taken) {
          goto L_08A22D4C;
      }
      goto L_08A22D44;
    }
L_08A22D44:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
      if (branch_taken) {
          goto L_08A22D5C;
      }
      goto L_08A22D4C;
    }
L_08A22D4C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2820)));
    aot_fpr_13 = aot_fpr_14 - aot_fpr_13;
    aot_fpr_13 = aot_fpr_13 / aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    goto L_08A22D5C;
L_08A22D5C:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + static_cast<std::uint32_t>(2384));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (aot_gpr_16 + static_cast<std::uint32_t>(2336));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(304));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22EB8;
      }
      goto L_08A22DD4;
    }
L_08A22DD4:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2820)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_13 <= aot_fpr_14)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A22EB8;
      }
      goto L_08A22DE8;
    }
L_08A22DE8:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2816)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_14) || std::isnan(aot_fpr_20)) && aot_fpr_14 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2432));
      if (branch_taken) {
          goto L_08A22E0C;
      }
      goto L_08A22DFC;
    }
L_08A22DFC:
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
      if (branch_taken) {
          goto L_08A22E20;
      }
      goto L_08A22E0C;
    }
L_08A22E0C:
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2820)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2824)));
    aot_fpr_13 = aot_fpr_13 / ctx.fpr[15];
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    goto L_08A22E20;
L_08A22E20:
    aot_gpr_6 = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_6);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_6 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_gpr_6 = (16128u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 - aot_fpr_14;
    aot_gpr_6 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_6 = (aot_gpr_6 << 5u);
    ctx.gpr[7] = (0u - aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 << 2u);
    aot_gpr_6 = (ctx.gpr[7] + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_16 + aot_gpr_6);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(512));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(336));
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
    goto L_08A22EB8;
L_08A22EB8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2812)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A232F0;
      }
      goto L_08A22ECC;
    }
L_08A22ECC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2812)));
    ctx.gpr[30] = (aot_gpr_16 + static_cast<std::uint32_t>(2432));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(400));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(384));
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(2416));
    ctx.gpr[21] = (aot_gpr_16 + static_cast<std::uint32_t>(2448));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_08A22EFC;
      }
      goto L_08A22EF4;
    }
L_08A22EF4:
    { const bool branch_taken = 0u == 0u;
    { const float fs = aot_fpr_20; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08A22F0C;
      }
      goto L_08A22EFC;
    }
L_08A22EFC:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2812)));
    aot_fpr_12 = aot_fpr_13 - aot_fpr_12;
    aot_fpr_12 = aot_fpr_12 / aot_fpr_13;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08A22F0C;
L_08A22F0C:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2368));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2320));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2069)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23044;
      }
      goto L_08A22F78;
    }
L_08A22F78:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(416));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A23044;
      }
      goto L_08A22FB4;
    }
L_08A22FB4:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(416)));
    ctx.gpr[31] = (0x08A22FC0u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(420)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A22FC0u) goto L_08A22FC0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A22FC0:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A22FE0;
      }
      goto L_08A22FD4;
    }
L_08A22FD4:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A22FE0;
L_08A22FE0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7248)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2416), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7248)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2420), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    goto L_08A23044;
L_08A23044:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2400));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 + static_cast<std::uint32_t>(2352));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2208)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2156)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2152), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[8] = (aot_gpr_16 + static_cast<std::uint32_t>(2152));
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (aot_gpr_6 | 0u);
    aot_gpr_6 = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A230C8u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 313u, 0x08A1DA3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A230C8u) goto L_08A230C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A230C8:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2069)));
    aot_gpr_5 = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 != aot_gpr_5;
    // nop
      if (branch_taken) {
          goto L_08A23120;
      }
      goto L_08A230F8;
    }
L_08A230F8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(432));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A2312C;
      }
      goto L_08A23120;
    }
L_08A23120:
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    ctx.gpr[30] = (aot_gpr_29 + static_cast<std::uint32_t>(80));
    goto L_08A2312C;
L_08A2312C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A23268;
      }
      goto L_08A2317C;
    }
L_08A2317C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 37u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A23268;
      }
      goto L_08A231AC;
    }
L_08A231AC:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(448));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A232E0;
      }
      goto L_08A23268;
    }
L_08A23268:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(464), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(464));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A232E0;
L_08A232E0:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2152)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A238D0;
      }
      goto L_08A232F0;
    }
L_08A232F0:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2812)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16256u << 16u);
      if (branch_taken) {
          goto L_08A238D0;
      }
      goto L_08A23304;
    }
L_08A23304:
    ctx.fpr[30] = std::bit_cast<float>(aot_gpr_4);
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= ctx.fpr[30])) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A238D0;
      }
      goto L_08A23318;
    }
L_08A23318:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2816)));
    ctx.gpr[17] = (aot_gpr_16 + static_cast<std::uint32_t>(2416));
    ctx.gpr[20] = (aot_gpr_16 + static_cast<std::uint32_t>(2448));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(176));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_13) || std::isnan(aot_fpr_20)) && aot_fpr_13 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    ctx.gpr[19] = (aot_gpr_29 + static_cast<std::uint32_t>(480));
      if (branch_taken) {
          goto L_08A23340;
      }
      goto L_08A23338;
    }
L_08A23338:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
      if (branch_taken) {
          goto L_08A23354;
      }
      goto L_08A23340;
    }
L_08A23340:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2812)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2816)));
    aot_fpr_12 = aot_fpr_12 / aot_fpr_14;
    { const float fs = aot_fpr_12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    goto L_08A23354;
L_08A23354:
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_gpr_4 = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] - aot_fpr_12;
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23398u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23398u) goto L_08A23398;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23414;
      }
      goto L_08A233A0;
    }
L_08A233A0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(512));
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
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 0u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(496));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23440;
      }
      goto L_08A23414;
    }
L_08A23414:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(144));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A23440;
L_08A23440:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2069)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23514;
      }
      goto L_08A2344C;
    }
L_08A2344C:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(544));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 22u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<28u>());
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7248)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_13)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A23514;
      }
      goto L_08A2348C;
    }
L_08A2348C:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(544)));
    ctx.gpr[31] = (0x08A23498u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(548)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23498u) goto L_08A23498;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23498:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A234B8;
      }
      goto L_08A234AC;
    }
L_08A234AC:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A234B8;
L_08A234B8:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(192)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 19u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7248)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(196)));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_gpr_4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<64u, 0u, 32u, 1u, 2u>();
    ctx.execute_vfpu_unary_ct<1u, 64u, 1u, 18u>();
    aot_gpr_4 = (ctx.vfpu_scalar_bits_ct<1u>());
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_13 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A23514;
L_08A23514:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2152)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A23564;
      }
      goto L_08A23528;
    }
L_08A23528:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2152)));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(408)));
    aot_fpr_13 = aot_fpr_13 - aot_fpr_12;
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A2358C;
      }
      goto L_08A23564;
    }
L_08A23564:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(408)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A2358C;
L_08A2358C:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(480), aot_run_words); }
    aot_gpr_4 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A235A4u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A235A4u) goto L_08A235A4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A235A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23620;
      }
      goto L_08A235AC;
    }
L_08A235AC:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vec3_ct<0u, 0u, 1u, 3u, 1u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(592));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_5 = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(576));
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(560));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2364C;
      }
      goto L_08A23620;
    }
L_08A23620:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(208));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A2364C;
L_08A2364C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(392)));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2148)));
    aot_fpr_12 = aot_fpr_12 - aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A23684u);
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(220));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 381u, 0x08A1A87Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23684u) goto L_08A23684;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23684:
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = aot_gpr_6 + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_gpr_16 | 0u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x08A236B4u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 313u, 0x08A1DA3Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A236B4u) goto L_08A236B4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A236B4:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2069)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A236F8;
      }
      goto L_08A236E0;
    }
L_08A236E0:
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(ctx.fpr[30])};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(608), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(608));
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A236F8;
L_08A236F8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    { const bool branch_taken = aot_gpr_4 == ctx.gpr[21];
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A23810;
      }
      goto L_08A23724;
    }
L_08A23724:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_direct_load16(aot_gpr_4 + static_cast<std::uint32_t>(112))))));
    aot_gpr_6 = (0u | 37u);
    { const bool branch_taken = aot_gpr_4 == aot_gpr_6;
    // nop
      if (branch_taken) {
          goto L_08A23810;
      }
      goto L_08A23754;
    }
L_08A23754:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat_ct<0u, 1u, 2u, 3u>();
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(624));
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      std::uint32_t vfpu_words[4]{};
      aot_mem.aot_direct_load32_block(vfpu_address, vfpu_words);
      float vfpu_value[4]{
        std::bit_cast<float>(vfpu_words[0]),
        std::bit_cast<float>(vfpu_words[1]),
        std::bit_cast<float>(vfpu_words[2]),
        std::bit_cast<float>(vfpu_words[3])};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23888;
      }
      goto L_08A23810;
    }
L_08A23810:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (49024u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const std::uint32_t aot_run_words[3]{std::bit_cast<std::uint32_t>(aot_fpr_12), std::bit_cast<std::uint32_t>(aot_fpr_20), std::bit_cast<std::uint32_t>(aot_fpr_20)};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(640), aot_run_words); }
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(640));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[0u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 1u, 1u, 3u>();
    ctx.execute_vfpu_vcmp_ct<28u, 32u, 1u, 3u>();
    ctx.execute_vfpu_unary_ct<28u, 28u, 1u, 17u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 28u, 3u>();
    ctx.execute_vfpu_vcmov_ct<1u, 0u, 3u, 0u, false>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    goto L_08A23888;
L_08A23888:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2152)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((!(std::isnan(aot_fpr_12) || std::isnan(aot_fpr_20)) && aot_fpr_12 == aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A238A8;
      }
      goto L_08A2389C;
    }
L_08A2389C:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2152)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          goto L_08A238D0;
      }
      goto L_08A238A8;
    }
L_08A238A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_6 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_6 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(408)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(aot_fpr_12));
    goto L_08A238D0;
L_08A238D0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = aot_gpr_4 + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    { const float fs = aot_fpr_12; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    { const float fs = aot_fpr_13; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_12 + aot_fpr_13;
    aot_fpr_13 = std::sqrt(aot_fpr_13);
    ctx.gpr[31] = (0x08A23904u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(280)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23904u) goto L_08A23904;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23904:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A23924;
      }
      goto L_08A23918;
    }
L_08A23918:
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A23924;
L_08A23924:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (0x08A23934u);
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(276)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23934u) goto L_08A23934;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23934:
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 < aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = !((ctx.fcr31 & 0x00800000u) != 0u);
    aot_gpr_5 = (aot_gpr_29 + static_cast<std::uint32_t>(192));
      if (branch_taken) {
          goto L_08A23958;
      }
      goto L_08A23948;
    }
L_08A23948:
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A23958;
L_08A23958:
    aot_gpr_6 = (aot_gpr_5 | 0u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 5u);
    aot_gpr_5 = (0u - aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_4 = (aot_gpr_5 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_16 + aot_gpr_4);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (aot_gpr_29 + static_cast<std::uint32_t>(288));
    ctx.gpr[9] = (aot_gpr_29 + static_cast<std::uint32_t>(292));
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2399Cu);
    ctx.gpr[10] = (aot_gpr_29 + static_cast<std::uint32_t>(216));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0101_entry, 101u, 201u, 0x08999940u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A2399Cu) goto L_08A2399C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A2399C:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2092)));
    { const bool branch_taken = aot_gpr_4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A239A8;
    }
L_08A239A8:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2070)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A239B4;
    }
L_08A239B4:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2069)));
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A239C0;
    }
L_08A239C0:
    ctx.gpr[31] = (0x08A239C8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0170_entry, 170u, 518u, 0x08AAE910u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A239C8u) goto L_08A239C8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A239C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A239D0;
    }
L_08A239D0:
    aot_gpr_4 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A239DC;
    }
L_08A239DC:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(688), 0u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1984)));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(48));
    aot_gpr_6 = (aot_gpr_29 + static_cast<std::uint32_t>(656));
    ctx.gpr[7] = (aot_gpr_29 + static_cast<std::uint32_t>(688));
    ctx.gpr[2] = (0u | 1u);
    aot_gpr_5 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    { const std::uint32_t aot_run_words[4]{0u, ctx.gpr[2], ctx.gpr[2], 0u};
      aot_mem.aot_direct_store32_block(aot_gpr_29 + static_cast<std::uint32_t>(0), aot_run_words); }
    ctx.gpr[31] = (0x08A23A20u);
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(16), 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0036_entry, 36u, 698u, 0x0889786Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23A20u) goto L_08A23A20;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23A20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A60;
      }
      goto L_08A23A28;
    }
L_08A23A28:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(656)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(660)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(664)));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(704));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(8896)));
    aot_gpr_5 = (15692u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 52429u);
    ctx.gpr[31] = (0x08A23A60u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_5);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 111u, 0x08890798u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23A60u) goto L_08A23A60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23A60:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(2872)));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A23BDC;
      }
      goto L_08A23A74;
    }
L_08A23A74:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(-7624)));
    { const float fs = aot_fpr_13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[15];
    aot_gpr_4 = (17536u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_gpr_4 = (16585u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 4059u);
    ctx.fpr[17] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = aot_fpr_14 / ctx.fpr[17];
    aot_fpr_14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_14));
    aot_gpr_4 = (std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_gpr_4 = (aot_gpr_4 & 1023u);
    aot_gpr_5 = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_5);
    aot_fpr_13 = aot_fpr_13 + ctx.fpr[15];
    aot_mem.aot_direct_store32(aot_gpr_28 + static_cast<std::uint32_t>(-7624), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (aot_mem.aot_direct_load8(aot_gpr_16 + static_cast<std::uint32_t>(80)));
    aot_gpr_5 = (aot_gpr_5 << 5u);
    aot_gpr_6 = (0u - aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_6 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_5 << 2u);
    aot_gpr_5 = (aot_gpr_6 + aot_gpr_5);
    aot_gpr_5 = (aot_gpr_16 + aot_gpr_5);
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(408)));
    aot_gpr_6 = (16256u << 16u);
    aot_fpr_14 = std::bit_cast<float>(aot_gpr_6);
    aot_fpr_14 = aot_fpr_12 + aot_fpr_14;
    { const float fs = aot_fpr_13; const float ft = aot_fpr_14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_5 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_5 = (48291u << 16u);
    aot_gpr_5 = (aot_gpr_5 | 55050u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_5);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_gpr_4 = (aot_gpr_4 << 2u);
    aot_gpr_5 = (2247u << 16u);
    aot_gpr_5 = (aot_gpr_5 + static_cast<std::uint32_t>(-8224));
    aot_gpr_5 = (aot_gpr_4 + aot_gpr_5);
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_gpr_6 = (2247u << 16u);
    aot_gpr_6 = (aot_gpr_6 + static_cast<std::uint32_t>(-12320));
    aot_gpr_4 = (aot_gpr_4 + aot_gpr_6);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = ctx.fpr[15] + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_gpr_6 = (15692u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_14 = ctx.fpr[16] + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[17]; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_13 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_13 = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + aot_fpr_13;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(aot_fpr_13));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      const std::uint32_t vfpu_words[4]{std::bit_cast<std::uint32_t>(vfpu_value[0]), std::bit_cast<std::uint32_t>(vfpu_value[1]), std::bit_cast<std::uint32_t>(vfpu_value[2]), std::bit_cast<std::uint32_t>(vfpu_value[3])};
      aot_mem.aot_direct_store32_block(vfpu_address, vfpu_words); }
    aot_gpr_6 = (48588u << 16u);
    aot_gpr_6 = (aot_gpr_6 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_6);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_5 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_14 = aot_fpr_14 + ctx.fpr[15];
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(aot_fpr_14));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_4 + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[16]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = aot_fpr_14 + aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A23BDCu);
    aot_gpr_4 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 434u, 0x08A1AC54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23BDCu) goto L_08A23BDC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23BDC:
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(32));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A23BF0u);
    aot_gpr_6 = (ctx.gpr[23] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 349u, 0x08A1A5DCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23BF0u) goto L_08A23BF0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23BF0:
    aot_gpr_4 = (aot_gpr_29 + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A23BFCu);
    aot_gpr_5 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 438u, 0x08A1ACCCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23BFCu) goto L_08A23BFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23BFC:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A23C64u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1936)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 390u, 0x08A1A8ECu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23C64u) goto L_08A23C64;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23C64:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1940)));
    aot_gpr_4 = (ctx.gpr[2] - aot_gpr_4);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = static_cast<std::int32_t>(aot_gpr_4) >= 0;
    aot_fpr_12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(aot_fpr_12)));
      if (branch_taken) {
          goto L_08A23C84;
      }
      goto L_08A23C78;
    }
L_08A23C78:
    aot_gpr_4 = (20352u << 16u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 + aot_fpr_13;
    goto L_08A23C84;
L_08A23C84:
    aot_gpr_4 = (14738u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52471u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = ctx.fpr[22] - aot_fpr_12;
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (aot_gpr_29 + static_cast<std::uint32_t>(212));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[18] = (aot_gpr_29 + static_cast<std::uint32_t>(48));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23CB4u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 356u, 0x08A1A6A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23CB4u) goto L_08A23CB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23CB4:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_20));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23CC8u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 359u, 0x08A1A6C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23CC8u) goto L_08A23CC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23CC8:
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A23CD8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 463u, 0x08A1AE34u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23CD8u) goto L_08A23CD8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23CD8:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(212)));
    aot_gpr_4 = (15820u << 16u);
    aot_gpr_4 = (aot_gpr_4 | 52429u);
    aot_fpr_13 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = aot_fpr_12; const float ft = aot_fpr_13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_mem.aot_direct_store32(aot_gpr_29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_14 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_gpr_4 = (ctx.gpr[2] & 15u);
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_fpr_13 = aot_fpr_14 + ctx.fpr[15];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_gpr_4 = (ctx.gpr[2] & 240u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 4u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    ctx.fpr[16] = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = aot_fpr_14; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_13));
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_gpr_4 = (ctx.gpr[2] & 3840u);
    aot_gpr_4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(aot_gpr_4) >> 8u));
    aot_gpr_4 = (aot_gpr_4 + static_cast<std::uint32_t>(-7));
    ctx.fpr[15] = std::bit_cast<float>(aot_gpr_4);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_14 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_14 = fs * ft; }
    aot_fpr_13 = aot_fpr_13 + aot_fpr_14;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_13));
    ctx.fcr31 = (ctx.fcr31 & ~0x00800000u) | (((aot_fpr_12 <= aot_fpr_20)) ? 0x00800000u : 0u);
    // nop
    { const bool branch_taken = ((ctx.fcr31 & 0x00800000u) != 0u);
    // nop
      if (branch_taken) {
          goto L_08A23E08;
      }
      goto L_08A23D68;
    }
L_08A23D68:
    ctx.gpr[31] = (0x08A23D70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23D70u) goto L_08A23D70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23D70:
    ctx.gpr[31] = (0x08A23D78u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 455u, 0x08A1ADC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23D78u) goto L_08A23D78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23D78:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A23E08;
      }
      goto L_08A23D80;
    }
L_08A23D80:
    aot_gpr_4 = (17279u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const float fs = ctx.fpr[22]; const float ft = aot_fpr_12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) aot_fpr_12 = std::bit_cast<float>(0x7FC00000u); else aot_fpr_12 = fs * ft; }
    aot_fpr_12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(aot_fpr_12));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(25));
    aot_gpr_4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 151 ? 1u : 0u);
    { const bool branch_taken = aot_gpr_4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23DA8;
      }
      goto L_08A23DA4;
    }
L_08A23DA4:
    ctx.gpr[17] = (0u | 150u);
    goto L_08A23DA8;
L_08A23DA8:
    ctx.gpr[31] = (0x08A23DB0u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DB0u) goto L_08A23DB0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DB0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A23DBCu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DBCu) goto L_08A23DBC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DBC:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A23DC8u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DC8u) goto L_08A23DC8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DC8:
    ctx.gpr[20] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A23DD4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DD4u) goto L_08A23DD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DD4:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[18] | 0u);
    aot_gpr_5 = (ctx.gpr[19] | 0u);
    aot_gpr_6 = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A23DECu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 457u, 0x08A1ADD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DECu) goto L_08A23DEC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DEC:
    ctx.gpr[31] = (0x08A23DF4u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23DF4u) goto L_08A23DF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23DF4:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A23E00u);
    aot_gpr_5 = (0u | 11u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 456u, 0x08A1ADC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E00u) goto L_08A23E00;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23E7C;
      }
      goto L_08A23E08;
    }
L_08A23E08:
    ctx.gpr[31] = (0x08A23E10u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E10u) goto L_08A23E10;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E10:
    ctx.gpr[31] = (0x08A23E18u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 455u, 0x08A1ADC0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E18u) goto L_08A23E18;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E18:
    aot_gpr_4 = (0u | 11u);
    { const bool branch_taken = ctx.gpr[2] != aot_gpr_4;
    // nop
      if (branch_taken) {
          goto L_08A23E7C;
      }
      goto L_08A23E24;
    }
L_08A23E24:
    ctx.gpr[31] = (0x08A23E2Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E2Cu) goto L_08A23E2C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E2C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A23E38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E38u) goto L_08A23E38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E38:
    ctx.gpr[18] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A23E44u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E44u) goto L_08A23E44;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E44:
    ctx.gpr[19] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A23E50u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E50u) goto L_08A23E50;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E50:
    ctx.gpr[7] = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    aot_gpr_5 = (ctx.gpr[18] | 0u);
    aot_gpr_6 = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A23E68u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 457u, 0x08A1ADD0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E68u) goto L_08A23E68;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E68:
    ctx.gpr[31] = (0x08A23E70u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 587u, 0x08A1BDF8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E70u) goto L_08A23E70;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E70:
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A23E7Cu);
    aot_gpr_5 = (0u | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 456u, 0x08A1ADC8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E7Cu) goto L_08A23E7C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E7C:
    ctx.gpr[31] = (0x08A23E84u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 445u, 0x08A1E6C0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E84u) goto L_08A23E84;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E84:
    ctx.gpr[31] = (0x08A23E8Cu);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 324u, 0x08A1DB40u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E8Cu) goto L_08A23E8C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E8C:
    ctx.gpr[31] = (0x08A23E94u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 480u, 0x08A1E998u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23E94u) goto L_08A23E94;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23E94:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x08A23EA0u);
    aot_fpr_12 = aot_fpr_12 + ctx.fpr[0];
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0092_entry, 92u, 437u, 0x08975D44u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23EA0u) goto L_08A23EA0;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23EA0:
    ctx.gpr[31] = (0x08A23EA8u);
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(1980)));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0035_entry, 35u, 121u, 0x08890828u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23EA8u) goto L_08A23EA8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23EA8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A23EB4u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 348u, 0x08A1A5D4u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23EB4u) goto L_08A23EB4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23EB4:
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2480), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2484), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2488), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(aot_fpr_12));
    aot_fpr_12 = std::bit_cast<float>(aot_mem.aot_direct_load32(aot_gpr_16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_direct_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[31] = (0x08A23F28u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 347u, 0x08A1A5CCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F28u) goto L_08A23F28;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F28:
    ctx.gpr[31] = (0x08A23F30u);
    aot_gpr_4 = (ctx.gpr[17] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F30u) goto L_08A23F30;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F30:
    ctx.gpr[31] = (0x08A23F38u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0138_entry, 138u, 459u, 0x08A2EF8Cu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F38u) goto L_08A23F38;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F38:
    aot_gpr_4 = (aot_mem.aot_direct_load32(aot_gpr_28 + static_cast<std::uint32_t>(7764)));
    aot_gpr_4 = (aot_gpr_4 & 15u);
    ctx.gpr[18] = (0u | 3u);
    { const bool branch_taken = aot_gpr_4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A23F70;
      }
      goto L_08A23F4C;
    }
L_08A23F4C:
    ctx.gpr[31] = (0x08A23F54u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F54u) goto L_08A23F54;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F54:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A23F60u);
    aot_gpr_4 = (aot_gpr_16 | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 439u, 0x08A1ACDCu>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F60u) goto L_08A23F60;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F60:
    aot_fpr_13 = std::bit_cast<float>(aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08A23F6Cu);
    aot_fpr_12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0189_entry, 189u, 203u, 0x08AF9130u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F6Cu) goto L_08A23F6C;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F6C:
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(2136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A23F70;
L_08A23F70:
    ctx.gpr[31] = (0x08A23F78u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 362u, 0x08A1A6F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F78u) goto L_08A23F78;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F78:
    ctx.gpr[31] = (0x08A23F80u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 481u, 0x08A1E9A0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F80u) goto L_08A23F80;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23FB0;
      }
      goto L_08A23F88;
    }
L_08A23F88:
    ctx.gpr[31] = (0x08A23F90u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 362u, 0x08A1A6F0u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F90u) goto L_08A23F90;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F90:
    ctx.gpr[31] = (0x08A23F98u);
    aot_gpr_4 = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0134_entry, 134u, 482u, 0x08A1E9A8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23F98u) goto L_08A23F98;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23F98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23FB0;
      }
      goto L_08A23FA0;
    }
L_08A23FA0:
    aot_gpr_4 = (16256u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(aot_fpr_12));
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0136_entry, 136u, 22u, 0x08A24108u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A23FB0;
    }
L_08A23FB0:
    ctx.gpr[31] = (0x08A23FB8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 450u, 0x08A1AD74u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23FB8u) goto L_08A23FB8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23FB8:
    aot_gpr_4 = (17036u << 16u);
    aot_fpr_12 = std::bit_cast<float>(aot_gpr_4);
    aot_fpr_12 = aot_fpr_12 / ctx.fpr[0];
    aot_mem.aot_direct_store32(aot_gpr_16 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(aot_fpr_12));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A23FD4u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23FD4u) goto L_08A23FD4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23FD4:
    aot_gpr_4 = (16988u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_gpr_4);
      if (branch_taken) {
          (void)([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0136_entry, 136u, 4u, 0x08A24018u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()); AOT_REGCACHE_SYNC_OUT(); return;
      }
      goto L_08A23FE0;
    }
L_08A23FE0:
    ctx.gpr[31] = (0x08A23FE8u);
    // nop
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23FE8u) goto L_08A23FE8;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23FE8:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(352)));
    ctx.gpr[31] = (0x08A23FF4u);
    aot_gpr_5 = (512u << 16u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0133_entry, 133u, 465u, 0x08A1AE54u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23FF4u) goto L_08A23FF4;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23FF4:
    ctx.gpr[31] = (0x08A23FFCu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (([&]() { AOT_REGCACHE_SYNC_OUT(); const bool aot_regcache_same_ = (rt.invoke_chained_trusted_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem)); if (aot_regcache_same_) AOT_REGCACHE_SYNC_IN(); else aot_regcache_valid = false; return aot_regcache_same_; }()) && ctx.pc == 0x08A23FFCu) goto L_08A23FFC;
    AOT_REGCACHE_SYNC_OUT(); return;
L_08A23FFC:
    aot_gpr_4 = (aot_mem.aot_direct_load32(ctx.gpr[2] + static_cast<std::uint32_t>(352)));
    ctx.pc = 0x08A24000u; AOT_REGCACHE_SYNC_OUT(); return;
}

#undef AOT_REGCACHE_SYNC_IN
#undef AOT_REGCACHE_SYNC_OUT

void recomp_unit_0135(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0135_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_135(Runtime &runtime) {
    runtime.register_generated_unit(135u, 0x08A20000u, 16384u, &recomp_unit_0135, &recomp_unit_0135_entry);
    runtime.register_function(0x08A20000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2001Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20028u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20038u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20040u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20058u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20068u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20070u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20088u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20118u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20174u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20194u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20208u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20210u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20218u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20228u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20234u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20254u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20258u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20298u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2031Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20390u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20408u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2041Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20434u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20464u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2046Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20488u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2049Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20504u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2050Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20524u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20530u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20538u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20574u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20624u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2063Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2065Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20664u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2067Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20690u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2071Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20764u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2076Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2079Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20804u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20814u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20818u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20900u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2090Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20980u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ED8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2106Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21100u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21108u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2111Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21130u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2114Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21158u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2122Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2124Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2130Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21374u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21380u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21394u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21408u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2140Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21420u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21428u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2143Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21464u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21468u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21470u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2147Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21484u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2148Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21648u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21674u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21700u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21710u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21728u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2172Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21744u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2174Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2175Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2176Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21794u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2184Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2186Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2190Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21914u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21928u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21990u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2199Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ABCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ED4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2201Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22054u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22060u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22070u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2207Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2208Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22098u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22108u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22120u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2215Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22168u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2218Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22198u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22208u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2221Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22224u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22238u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22268u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22294u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2232Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22424u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2242Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22430u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22454u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22490u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2249Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22504u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22660u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2266Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22674u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22680u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2268Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22734u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22740u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22750u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22778u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22798u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2279Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22814u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22848u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22850u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2287Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22890u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2289Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22920u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22954u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2295Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22988u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2299Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22ECCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23044u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23120u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2312Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2317Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23268u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23304u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23318u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23338u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23340u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23354u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23398u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2344Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2348Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23498u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23514u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23528u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23564u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2358Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23620u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2364Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23684u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23724u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23754u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23810u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23888u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2389Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23918u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23934u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2399Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FFCu, &recomp_unit_0135, "recomp_unit_0135");
}
} // namespace psprecomp
