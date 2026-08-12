#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0041[4059] = {
    1, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 12, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 19,
    0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 25,
    0, 26, 0, 0, 27, 0, 0, 28, 0, 0, 29, 30, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 34,
    0, 0, 35, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0,
    0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 46, 0, 47, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 52, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0,
    0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 65, 0, 0, 66, 0, 67, 0,
    0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0,
    85, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 99, 100, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0,
    0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0,
    0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 126,
    0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0,
    147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 153, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0,
    0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 167, 0, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0,
    171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0,
    183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0,
    0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213,
    0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0,
    225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 233, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 241, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0,
    0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0,
    0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258,
    0, 0, 259, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0,
    0, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 293, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0,
    0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0,
    0, 0, 311, 0, 0, 0, 312, 0, 0, 313, 0, 314, 315, 0, 316, 0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 320, 0, 321,
    0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 331,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0,
    0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 360,
    0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385,
    0, 0, 0, 386, 0, 387, 0, 0, 0, 388, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 398, 399, 0, 0, 0,
    0, 0, 0, 400, 0, 401, 402, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0,
    405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413,
    0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423,
    0, 0, 0, 0, 424, 0, 425, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0,
    431, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 0, 438, 439, 0,
    440, 0, 0, 0, 441, 0, 442, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0,
    448, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0, 456,
    0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 462, 0, 463, 0,
    464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 474,
    0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 484,
    485, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 490, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492,
    0, 493, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 499,
    0, 0, 0, 500, 0, 501, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0,
    0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 0, 517, 0, 0, 0,
    518, 0, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 532, 0, 0, 0, 533, 0,
    0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 540,
    0, 0, 0, 0, 0, 0, 0, 0, 541, 542, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550,
    0, 0, 0, 551, 552, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 564, 565, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0,
    0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 581, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 595, 0,
    596, 0, 0, 597, 0, 0, 0, 598, 0, 599, 0, 0, 600, 601, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 0,
    608, 0, 0, 0, 609, 0, 610, 0, 611, 0, 612, 0, 613, 0, 614, 0, 615, 0, 616, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 624, 0, 0, 625, 0, 0, 626, 0, 0, 0, 0, 627, 0,
    628, 0, 0, 0, 629, 0, 630, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 636,
};
void recomp_unit_0041_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088A8004u;
        entry_id = (entry_delta < 16236u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0041[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088A8004;
    case 2u: goto L_088A800C;
    case 3u: goto L_088A8018;
    case 4u: goto L_088A8020;
    case 5u: goto L_088A8038;
    case 6u: goto L_088A8058;
    case 7u: goto L_088A8070;
    case 8u: goto L_088A8084;
    case 9u: goto L_088A80C4;
    case 10u: goto L_088A8100;
    case 11u: goto L_088A8110;
    case 12u: goto L_088A8118;
    case 13u: goto L_088A812C;
    case 14u: goto L_088A8130;
    case 15u: goto L_088A8198;
    case 16u: goto L_088A81C4;
    case 17u: goto L_088A81E8;
    case 18u: goto L_088A81F4;
    case 19u: goto L_088A8200;
    case 20u: goto L_088A8218;
    case 21u: goto L_088A823C;
    case 22u: goto L_088A8248;
    case 23u: goto L_088A825C;
    case 24u: goto L_088A8274;
    case 25u: goto L_088A8280;
    case 26u: goto L_088A8288;
    case 27u: goto L_088A8294;
    case 28u: goto L_088A82A0;
    case 29u: goto L_088A82AC;
    case 30u: goto L_088A82B0;
    case 31u: goto L_088A82BC;
    case 32u: goto L_088A82D0;
    case 33u: goto L_088A82DC;
    case 34u: goto L_088A8300;
    case 35u: goto L_088A830C;
    case 36u: goto L_088A8314;
    case 37u: goto L_088A831C;
    case 38u: goto L_088A832C;
    case 39u: goto L_088A833C;
    case 40u: goto L_088A8354;
    case 41u: goto L_088A8374;
    case 42u: goto L_088A8398;
    case 43u: goto L_088A83B0;
    case 44u: goto L_088A83D8;
    case 45u: goto L_088A8418;
    case 46u: goto L_088A848C;
    case 47u: goto L_088A8494;
    case 48u: goto L_088A8498;
    case 49u: goto L_088A84BC;
    case 50u: goto L_088A84FC;
    case 51u: goto L_088A8570;
    case 52u: goto L_088A8574;
    case 53u: goto L_088A859C;
    case 54u: goto L_088A85D8;
    case 55u: goto L_088A865C;
    case 56u: goto L_088A8670;
    case 57u: goto L_088A86F8;
    case 58u: goto L_088A8708;
    case 59u: goto L_088A8728;
    case 60u: goto L_088A8730;
    case 61u: goto L_088A873C;
    case 62u: goto L_088A8744;
    case 63u: goto L_088A8754;
    case 64u: goto L_088A875C;
    case 65u: goto L_088A8768;
    case 66u: goto L_088A8774;
    case 67u: goto L_088A877C;
    case 68u: goto L_088A8788;
    case 69u: goto L_088A8794;
    case 70u: goto L_088A87B0;
    case 71u: goto L_088A87C0;
    case 72u: goto L_088A87D8;
    case 73u: goto L_088A87E0;
    case 74u: goto L_088A87EC;
    case 75u: goto L_088A881C;
    case 76u: goto L_088A8830;
    case 77u: goto L_088A8848;
    case 78u: goto L_088A88E4;
    case 79u: goto L_088A88EC;
    case 80u: goto L_088A8924;
    case 81u: goto L_088A892C;
    case 82u: goto L_088A896C;
    case 83u: goto L_088A8974;
    case 84u: goto L_088A897C;
    case 85u: goto L_088A8984;
    case 86u: goto L_088A898C;
    case 87u: goto L_088A89A0;
    case 88u: goto L_088A89B8;
    case 89u: goto L_088A89C8;
    case 90u: goto L_088A89D0;
    case 91u: goto L_088A89D8;
    case 92u: goto L_088A8A10;
    case 93u: goto L_088A8A18;
    case 94u: goto L_088A8A24;
    case 95u: goto L_088A8A2C;
    case 96u: goto L_088A8A44;
    case 97u: goto L_088A8A54;
    case 98u: goto L_088A8A68;
    case 99u: goto L_088A8A70;
    case 100u: goto L_088A8A74;
    case 101u: goto L_088A8AAC;
    case 102u: goto L_088A8AF8;
    case 103u: goto L_088A8B10;
    case 104u: goto L_088A8B20;
    case 105u: goto L_088A8B30;
    case 106u: goto L_088A8B44;
    case 107u: goto L_088A8B64;
    case 108u: goto L_088A8B74;
    case 109u: goto L_088A8BC4;
    case 110u: goto L_088A8BCC;
    case 111u: goto L_088A8BDC;
    case 112u: goto L_088A8BEC;
    case 113u: goto L_088A8C78;
    case 114u: goto L_088A8C84;
    case 115u: goto L_088A8CC8;
    case 116u: goto L_088A8CEC;
    case 117u: goto L_088A8CF4;
    case 118u: goto L_088A8D7C;
    case 119u: goto L_088A8D90;
    case 120u: goto L_088A8DEC;
    case 121u: goto L_088A8E2C;
    case 122u: goto L_088A8E9C;
    case 123u: goto L_088A8ECC;
    case 124u: goto L_088A8EE4;
    case 125u: goto L_088A8EF8;
    case 126u: goto L_088A8F00;
    case 127u: goto L_088A8F08;
    case 128u: goto L_088A8F18;
    case 129u: goto L_088A8F40;
    case 130u: goto L_088A8F48;
    case 131u: goto L_088A8F50;
    case 132u: goto L_088A8F64;
    case 133u: goto L_088A8F94;
    case 134u: goto L_088A8FA4;
    case 135u: goto L_088A8FC4;
    case 136u: goto L_088A9014;
    case 137u: goto L_088A9024;
    case 138u: goto L_088A902C;
    case 139u: goto L_088A903C;
    case 140u: goto L_088A9064;
    case 141u: goto L_088A906C;
    case 142u: goto L_088A9074;
    case 143u: goto L_088A9088;
    case 144u: goto L_088A90CC;
    case 145u: goto L_088A90D8;
    case 146u: goto L_088A90F8;
    case 147u: goto L_088A9104;
    case 148u: goto L_088A9110;
    case 149u: goto L_088A911C;
    case 150u: goto L_088A9124;
    case 151u: goto L_088A912C;
    case 152u: goto L_088A9134;
    case 153u: goto L_088A9138;
    case 154u: goto L_088A9144;
    case 155u: goto L_088A9164;
    case 156u: goto L_088A9170;
    case 157u: goto L_088A917C;
    case 158u: goto L_088A9188;
    case 159u: goto L_088A9198;
    case 160u: goto L_088A91CC;
    case 161u: goto L_088A91D8;
    case 162u: goto L_088A91E4;
    case 163u: goto L_088A91F0;
    case 164u: goto L_088A92C0;
    case 165u: goto L_088A92D4;
    case 166u: goto L_088A92DC;
    case 167u: goto L_088A92E0;
    case 168u: goto L_088A92EC;
    case 169u: goto L_088A9364;
    case 170u: goto L_088A9370;
    case 171u: goto L_088A9384;
    case 172u: goto L_088A938C;
    case 173u: goto L_088A93A0;
    case 174u: goto L_088A93AC;
    case 175u: goto L_088A93B4;
    case 176u: goto L_088A93F8;
    case 177u: goto L_088A9434;
    case 178u: goto L_088A9448;
    case 179u: goto L_088A9458;
    case 180u: goto L_088A9460;
    case 181u: goto L_088A9468;
    case 182u: goto L_088A947C;
    case 183u: goto L_088A9484;
    case 184u: goto L_088A948C;
    case 185u: goto L_088A9494;
    case 186u: goto L_088A949C;
    case 187u: goto L_088A94B0;
    case 188u: goto L_088A94C4;
    case 189u: goto L_088A94CC;
    case 190u: goto L_088A94E4;
    case 191u: goto L_088A94F8;
    case 192u: goto L_088A9514;
    case 193u: goto L_088A9520;
    case 194u: goto L_088A9530;
    case 195u: goto L_088A9538;
    case 196u: goto L_088A9550;
    case 197u: goto L_088A955C;
    case 198u: goto L_088A9564;
    case 199u: goto L_088A956C;
    case 200u: goto L_088A957C;
    case 201u: goto L_088A95A4;
    case 202u: goto L_088A95C8;
    case 203u: goto L_088A95E0;
    case 204u: goto L_088A95EC;
    case 205u: goto L_088A95F8;
    case 206u: goto L_088A9608;
    case 207u: goto L_088A9630;
    case 208u: goto L_088A9650;
    case 209u: goto L_088A9660;
    case 210u: goto L_088A9668;
    case 211u: goto L_088A9670;
    case 212u: goto L_088A9678;
    case 213u: goto L_088A9680;
    case 214u: goto L_088A9694;
    case 215u: goto L_088A96B4;
    case 216u: goto L_088A96DC;
    case 217u: goto L_088A96E4;
    case 218u: goto L_088A9718;
    case 219u: goto L_088A9720;
    case 220u: goto L_088A972C;
    case 221u: goto L_088A9744;
    case 222u: goto L_088A9758;
    case 223u: goto L_088A976C;
    case 224u: goto L_088A977C;
    case 225u: goto L_088A9784;
    case 226u: goto L_088A97A0;
    case 227u: goto L_088A97B4;
    case 228u: goto L_088A97E0;
    case 229u: goto L_088A97F8;
    case 230u: goto L_088A9824;
    case 231u: goto L_088A983C;
    case 232u: goto L_088A9884;
    case 233u: goto L_088A988C;
    case 234u: goto L_088A9894;
    case 235u: goto L_088A989C;
    case 236u: goto L_088A98A4;
    case 237u: goto L_088A990C;
    case 238u: goto L_088A9914;
    case 239u: goto L_088A9980;
    case 240u: goto L_088A99A8;
    case 241u: goto L_088A9A08;
    case 242u: goto L_088A9A10;
    case 243u: goto L_088A9A6C;
    case 244u: goto L_088A9A94;
    case 245u: goto L_088A9AFC;
    case 246u: goto L_088A9B18;
    case 247u: goto L_088A9B7C;
    case 248u: goto L_088A9B94;
    case 249u: goto L_088A9BB8;
    case 250u: goto L_088A9BF4;
    case 251u: goto L_088A9C30;
    case 252u: goto L_088A9C58;
    case 253u: goto L_088A9C78;
    case 254u: goto L_088A9CA0;
    case 255u: goto L_088A9CEC;
    case 256u: goto L_088A9D20;
    case 257u: goto L_088A9D48;
    case 258u: goto L_088A9D80;
    case 259u: goto L_088A9D8C;
    case 260u: goto L_088A9D98;
    case 261u: goto L_088A9DB8;
    case 262u: goto L_088A9DD8;
    case 263u: goto L_088A9DF0;
    case 264u: goto L_088A9E14;
    case 265u: goto L_088A9E3C;
    case 266u: goto L_088A9E54;
    case 267u: goto L_088A9E70;
    case 268u: goto L_088A9EB4;
    case 269u: goto L_088A9EE0;
    case 270u: goto L_088A9F90;
    case 271u: goto L_088A9F98;
    case 272u: goto L_088A9FDC;
    case 273u: goto L_088AA020;
    case 274u: goto L_088AA03C;
    case 275u: goto L_088AA044;
    case 276u: goto L_088AA04C;
    case 277u: goto L_088AA058;
    case 278u: goto L_088AA070;
    case 279u: goto L_088AA084;
    case 280u: goto L_088AA08C;
    case 281u: goto L_088AA09C;
    case 282u: goto L_088AA0A4;
    case 283u: goto L_088AA0B0;
    case 284u: goto L_088AA0B8;
    case 285u: goto L_088AA0C0;
    case 286u: goto L_088AA0E0;
    case 287u: goto L_088AA0F4;
    case 288u: goto L_088AA0FC;
    case 289u: goto L_088AA10C;
    case 290u: goto L_088AA114;
    case 291u: goto L_088AA11C;
    case 292u: goto L_088AA134;
    case 293u: goto L_088AA140;
    case 294u: goto L_088AA144;
    case 295u: goto L_088AA160;
    case 296u: goto L_088AA174;
    case 297u: goto L_088AA17C;
    case 298u: goto L_088AA190;
    case 299u: goto L_088AA198;
    case 300u: goto L_088AA1A0;
    case 301u: goto L_088AA1B4;
    case 302u: goto L_088AA1C8;
    case 303u: goto L_088AA1D8;
    case 304u: goto L_088AA1E4;
    case 305u: goto L_088AA260;
    case 306u: goto L_088AA368;
    case 307u: goto L_088AA384;
    case 308u: goto L_088AA3CC;
    case 309u: goto L_088AA3E4;
    case 310u: goto L_088AA3F0;
    case 311u: goto L_088AA40C;
    case 312u: goto L_088AA41C;
    case 313u: goto L_088AA428;
    case 314u: goto L_088AA430;
    case 315u: goto L_088AA434;
    case 316u: goto L_088AA43C;
    case 317u: goto L_088AA444;
    case 318u: goto L_088AA458;
    case 319u: goto L_088AA474;
    case 320u: goto L_088AA478;
    case 321u: goto L_088AA480;
    case 322u: goto L_088AA48C;
    case 323u: goto L_088AA4A0;
    case 324u: goto L_088AA4A8;
    case 325u: goto L_088AA4D4;
    case 326u: goto L_088AA4DC;
    case 327u: goto L_088AA4E4;
    case 328u: goto L_088AA4EC;
    case 329u: goto L_088AA4F4;
    case 330u: goto L_088AA4FC;
    case 331u: goto L_088AA500;
    case 332u: goto L_088AA534;
    case 333u: goto L_088AA564;
    case 334u: goto L_088AA594;
    case 335u: goto L_088AA5C4;
    case 336u: goto L_088AA5F4;
    case 337u: goto L_088AA624;
    case 338u: goto L_088AA654;
    case 339u: goto L_088AA684;
    case 340u: goto L_088AA68C;
    case 341u: goto L_088AA694;
    case 342u: goto L_088AA69C;
    case 343u: goto L_088AA6B0;
    case 344u: goto L_088AA6B8;
    case 345u: goto L_088AA6C4;
    case 346u: goto L_088AA6F4;
    case 347u: goto L_088AA6FC;
    case 348u: goto L_088AA70C;
    case 349u: goto L_088AA724;
    case 350u: goto L_088AA744;
    case 351u: goto L_088AA74C;
    case 352u: goto L_088AA76C;
    case 353u: goto L_088AA774;
    case 354u: goto L_088AA790;
    case 355u: goto L_088AA7AC;
    case 356u: goto L_088AA7C8;
    case 357u: goto L_088AA7D4;
    case 358u: goto L_088AA7DC;
    case 359u: goto L_088AA7EC;
    case 360u: goto L_088AA800;
    case 361u: goto L_088AA814;
    case 362u: goto L_088AA81C;
    case 363u: goto L_088AA824;
    case 364u: goto L_088AA830;
    case 365u: goto L_088AA848;
    case 366u: goto L_088AA858;
    case 367u: goto L_088AA868;
    case 368u: goto L_088AA874;
    case 369u: goto L_088AA890;
    case 370u: goto L_088AA898;
    case 371u: goto L_088AA8FC;
    case 372u: goto L_088AA904;
    case 373u: goto L_088AA938;
    case 374u: goto L_088AA944;
    case 375u: goto L_088AA950;
    case 376u: goto L_088AA95C;
    case 377u: goto L_088AA970;
    case 378u: goto L_088AA9B4;
    case 379u: goto L_088AA9C4;
    case 380u: goto L_088AA9CC;
    case 381u: goto L_088AA9D4;
    case 382u: goto L_088AA9E8;
    case 383u: goto L_088AA9F0;
    case 384u: goto L_088AA9F8;
    case 385u: goto L_088AAA00;
    case 386u: goto L_088AAA10;
    case 387u: goto L_088AAA18;
    case 388u: goto L_088AAA28;
    case 389u: goto L_088AAA30;
    case 390u: goto L_088AAA40;
    case 391u: goto L_088AAA48;
    case 392u: goto L_088AAA58;
    case 393u: goto L_088AAA64;
    case 394u: goto L_088AAA94;
    case 395u: goto L_088AAA9C;
    case 396u: goto L_088AAABC;
    case 397u: goto L_088AAAE4;
    case 398u: goto L_088AAAF0;
    case 399u: goto L_088AAAF4;
    case 400u: goto L_088AAB10;
    case 401u: goto L_088AAB18;
    case 402u: goto L_088AAB1C;
    case 403u: goto L_088AAB24;
    case 404u: goto L_088AAB74;
    case 405u: goto L_088AAB84;
    case 406u: goto L_088AAB90;
    case 407u: goto L_088AAC94;
    case 408u: goto L_088AAC9C;
    case 409u: goto L_088AACAC;
    case 410u: goto L_088AACB4;
    case 411u: goto L_088AACCC;
    case 412u: goto L_088AACF8;
    case 413u: goto L_088AAD00;
    case 414u: goto L_088AAD24;
    case 415u: goto L_088AAD30;
    case 416u: goto L_088AAD44;
    case 417u: goto L_088AAD4C;
    case 418u: goto L_088AAD88;
    case 419u: goto L_088AAD94;
    case 420u: goto L_088AADA0;
    case 421u: goto L_088AADE4;
    case 422u: goto L_088AADF8;
    case 423u: goto L_088AAE00;
    case 424u: goto L_088AAE14;
    case 425u: goto L_088AAE1C;
    case 426u: goto L_088AAE28;
    case 427u: goto L_088AAE3C;
    case 428u: goto L_088AAE44;
    case 429u: goto L_088AAE70;
    case 430u: goto L_088AAE7C;
    case 431u: goto L_088AAE84;
    case 432u: goto L_088AAE90;
    case 433u: goto L_088AAE9C;
    case 434u: goto L_088AAEA8;
    case 435u: goto L_088AAED4;
    case 436u: goto L_088AAEE0;
    case 437u: goto L_088AAEEC;
    case 438u: goto L_088AAEF8;
    case 439u: goto L_088AAEFC;
    case 440u: goto L_088AAF04;
    case 441u: goto L_088AAF14;
    case 442u: goto L_088AAF1C;
    case 443u: goto L_088AAF28;
    case 444u: goto L_088AAF34;
    case 445u: goto L_088AAF40;
    case 446u: goto L_088AAF5C;
    case 447u: goto L_088AAF78;
    case 448u: goto L_088AAF84;
    case 449u: goto L_088AAF8C;
    case 450u: goto L_088AAF9C;
    case 451u: goto L_088AAFB0;
    case 452u: goto L_088AAFB8;
    case 453u: goto L_088AAFCC;
    case 454u: goto L_088AAFE4;
    case 455u: goto L_088AAFEC;
    case 456u: goto L_088AB000;
    case 457u: goto L_088AB008;
    case 458u: goto L_088AB010;
    case 459u: goto L_088AB01C;
    case 460u: goto L_088AB058;
    case 461u: goto L_088AB064;
    case 462u: goto L_088AB074;
    case 463u: goto L_088AB07C;
    case 464u: goto L_088AB084;
    case 465u: goto L_088AB0F0;
    case 466u: goto L_088AB198;
    case 467u: goto L_088AB1A0;
    case 468u: goto L_088AB1A8;
    case 469u: goto L_088AB1BC;
    case 470u: goto L_088AB1D4;
    case 471u: goto L_088AB1DC;
    case 472u: goto L_088AB1F0;
    case 473u: goto L_088AB1F8;
    case 474u: goto L_088AB200;
    case 475u: goto L_088AB20C;
    case 476u: goto L_088AB278;
    case 477u: goto L_088AB29C;
    case 478u: goto L_088AB2A8;
    case 479u: goto L_088AB2B0;
    case 480u: goto L_088AB2BC;
    case 481u: goto L_088AB2C8;
    case 482u: goto L_088AB2EC;
    case 483u: goto L_088AB2F8;
    case 484u: goto L_088AB300;
    case 485u: goto L_088AB304;
    case 486u: goto L_088AB308;
    case 487u: goto L_088AB320;
    case 488u: goto L_088AB36C;
    case 489u: goto L_088AB374;
    case 490u: goto L_088AB378;
    case 491u: goto L_088AB3B0;
    case 492u: goto L_088AB400;
    case 493u: goto L_088AB408;
    case 494u: goto L_088AB420;
    case 495u: goto L_088AB444;
    case 496u: goto L_088AB450;
    case 497u: goto L_088AB470;
    case 498u: goto L_088AB478;
    case 499u: goto L_088AB480;
    case 500u: goto L_088AB490;
    case 501u: goto L_088AB498;
    case 502u: goto L_088AB49C;
    case 503u: goto L_088AB4B0;
    case 504u: goto L_088AB4C4;
    case 505u: goto L_088AB4CC;
    case 506u: goto L_088AB4D8;
    case 507u: goto L_088AB4F0;
    case 508u: goto L_088AB4FC;
    case 509u: goto L_088AB50C;
    case 510u: goto L_088AB51C;
    case 511u: goto L_088AB528;
    case 512u: goto L_088AB538;
    case 513u: goto L_088AB54C;
    case 514u: goto L_088AB558;
    case 515u: goto L_088AB560;
    case 516u: goto L_088AB568;
    case 517u: goto L_088AB574;
    case 518u: goto L_088AB584;
    case 519u: goto L_088AB594;
    case 520u: goto L_088AB5A0;
    case 521u: goto L_088AB5A8;
    case 522u: goto L_088AB5B8;
    case 523u: goto L_088AB5C4;
    case 524u: goto L_088AB5CC;
    case 525u: goto L_088AB5E8;
    case 526u: goto L_088AB604;
    case 527u: goto L_088AB640;
    case 528u: goto L_088AB6B0;
    case 529u: goto L_088AB6BC;
    case 530u: goto L_088AB6D8;
    case 531u: goto L_088AB6E4;
    case 532u: goto L_088AB6EC;
    case 533u: goto L_088AB6FC;
    case 534u: goto L_088AB710;
    case 535u: goto L_088AB764;
    case 536u: goto L_088AB7B0;
    case 537u: goto L_088AB7C4;
    case 538u: goto L_088AB7DC;
    case 539u: goto L_088AB7F0;
    case 540u: goto L_088AB800;
    case 541u: goto L_088AB824;
    case 542u: goto L_088AB828;
    case 543u: goto L_088AB830;
    case 544u: goto L_088AB838;
    case 545u: goto L_088AB848;
    case 546u: goto L_088AB860;
    case 547u: goto L_088AB868;
    case 548u: goto L_088AB870;
    case 549u: goto L_088AB878;
    case 550u: goto L_088AB880;
    case 551u: goto L_088AB890;
    case 552u: goto L_088AB894;
    case 553u: goto L_088AB8A0;
    case 554u: goto L_088AB8A8;
    case 555u: goto L_088AB8B0;
    case 556u: goto L_088AB8C0;
    case 557u: goto L_088AB8C8;
    case 558u: goto L_088AB8D0;
    case 559u: goto L_088AB8DC;
    case 560u: goto L_088AB8EC;
    case 561u: goto L_088AB938;
    case 562u: goto L_088AB940;
    case 563u: goto L_088AB94C;
    case 564u: goto L_088AB998;
    case 565u: goto L_088AB99C;
    case 566u: goto L_088AB9A8;
    case 567u: goto L_088AB9B0;
    case 568u: goto L_088AB9C0;
    case 569u: goto L_088AB9CC;
    case 570u: goto L_088AB9D4;
    case 571u: goto L_088AB9E4;
    case 572u: goto L_088ABA2C;
    case 573u: goto L_088ABAC4;
    case 574u: goto L_088ABB18;
    case 575u: goto L_088ABB58;
    case 576u: goto L_088ABB7C;
    case 577u: goto L_088ABBA0;
    case 578u: goto L_088ABC1C;
    case 579u: goto L_088ABC24;
    case 580u: goto L_088ABC34;
    case 581u: goto L_088ABC38;
    case 582u: goto L_088ABC44;
    case 583u: goto L_088ABC54;
    case 584u: goto L_088ABC5C;
    case 585u: goto L_088ABD1C;
    case 586u: goto L_088ABD24;
    case 587u: goto L_088ABD2C;
    case 588u: goto L_088ABD34;
    case 589u: goto L_088ABD3C;
    case 590u: goto L_088ABD50;
    case 591u: goto L_088ABD58;
    case 592u: goto L_088ABD60;
    case 593u: goto L_088ABD6C;
    case 594u: goto L_088ABD78;
    case 595u: goto L_088ABD7C;
    case 596u: goto L_088ABD84;
    case 597u: goto L_088ABD90;
    case 598u: goto L_088ABDA0;
    case 599u: goto L_088ABDA8;
    case 600u: goto L_088ABDB4;
    case 601u: goto L_088ABDB8;
    case 602u: goto L_088ABDC4;
    case 603u: goto L_088ABDD8;
    case 604u: goto L_088ABDE0;
    case 605u: goto L_088ABDE8;
    case 606u: goto L_088ABDF0;
    case 607u: goto L_088ABDF8;
    case 608u: goto L_088ABE04;
    case 609u: goto L_088ABE14;
    case 610u: goto L_088ABE1C;
    case 611u: goto L_088ABE24;
    case 612u: goto L_088ABE2C;
    case 613u: goto L_088ABE34;
    case 614u: goto L_088ABE3C;
    case 615u: goto L_088ABE44;
    case 616u: goto L_088ABE4C;
    case 617u: goto L_088ABE58;
    case 618u: goto L_088ABE60;
    case 619u: goto L_088ABE6C;
    case 620u: goto L_088ABE90;
    case 621u: goto L_088ABEBC;
    case 622u: goto L_088ABEC4;
    case 623u: goto L_088ABECC;
    case 624u: goto L_088ABED0;
    case 625u: goto L_088ABEDC;
    case 626u: goto L_088ABEE8;
    case 627u: goto L_088ABEFC;
    case 628u: goto L_088ABF04;
    case 629u: goto L_088ABF14;
    case 630u: goto L_088ABF1C;
    case 631u: goto L_088ABF20;
    case 632u: goto L_088ABF3C;
    case 633u: goto L_088ABF48;
    case 634u: goto L_088ABF58;
    case 635u: goto L_088ABF64;
    case 636u: goto L_088ABF6C;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088A8004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A800C;
    }
L_088A800C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8038;
      }
      goto L_088A8018;
    }
}
L_088A8018:
    hot_regs.g31 = (0x088A8020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8020u) goto L_088A8020;
    return;
L_088A8020:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8038;
      }
      goto L_088A8038;
    }
L_088A8038:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(288)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(292)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A8058;
    }
}
}
L_088A8058:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[17] = (0u | 55u);
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A8070;
    }
}
L_088A8070:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25048)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A8084;
    }
L_088A8084:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g6 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) & 0x7FFFFFFFu);
    hot_regs.g6 = (16217u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088A812C;
      }
      goto L_088A80C4;
    }
L_088A80C4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
        goto L_088A8100;
    }
    goto L_088A8100;
L_088A8100:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25040)));
        goto L_088A8118;
    }
    goto L_088A8110;
L_088A8110:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25040)));
    goto L_088A8118;
L_088A8118:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25036)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f13 = hot_regs.f14 + f13;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088A8130;
      }
      goto L_088A812C;
    }
}
L_088A812C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25036)));
    goto L_088A8130;
L_088A8130:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25028)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14) & 0x7FFFFFFFu);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15) & 0x7FFFFFFFu);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25032)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
        goto L_088A8198;
    }
    goto L_088A8198;
L_088A8198:
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
        goto L_088A81C4;
    }
    goto L_088A81C4;
L_088A81C4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f20 = hot_regs.f20;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25024)));
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25044)));
    f12 = f12 - f13;
    { const float fs = f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f15 < f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A81E8;
    }
}
L_088A81E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_088A8274;
      }
      goto L_088A81F4;
    }
L_088A81F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x088A8200u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8200u) goto L_088A8200;
    return;
L_088A8200:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_088A823C;
      }
      goto L_088A8218;
    }
L_088A8218:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25020)));
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g6 = (0u | 42u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x088A823Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A823Cu) goto L_088A823C;
    return;
L_088A823C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8274;
      }
      goto L_088A8248;
    }
L_088A8248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    g4 = (g4 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8274;
      }
      goto L_088A825C;
    }
}
L_088A825C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g6 = (ctx.gpr[18] & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 42u);
    hot_regs.g31 = (0x088A8274u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8274u) goto L_088A8274;
    return;
L_088A8274:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A8280u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8280u) goto L_088A8280;
    return;
L_088A8280:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A8288;
    }
L_088A8288:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-10));
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088A82B0;
      }
      goto L_088A8294;
    }
L_088A8294:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A82A0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A82A0u) goto L_088A82A0;
    return;
L_088A82A0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088A82ACu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A82ACu) goto L_088A82AC;
    return;
L_088A82AC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    goto L_088A82B0;
L_088A82B0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A82BCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A82BCu) goto L_088A82BC;
    return;
L_088A82BC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8300;
      }
      goto L_088A82D0;
    }
L_088A82D0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A82DCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A82DCu) goto L_088A82DC;
    return;
L_088A82DC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25020)));
    ctx.gpr[8] = (ctx.gpr[18] & 255u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (0u | 42u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x088A8300u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 692u, 0x088EB674u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8300u) goto L_088A8300;
    return;
L_088A8300:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A830Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A830Cu) goto L_088A830C;
    return;
L_088A830C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A8314;
    }
L_088A8314:
    hot_regs.g31 = (0x088A831Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A831Cu) goto L_088A831C;
    return;
L_088A831C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8354;
      }
      goto L_088A832C;
    }
}
L_088A832C:
    ctx.gpr[17] = (ctx.gpr[18] & 255u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A833Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A833Cu) goto L_088A833C;
    return;
L_088A833C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 42u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088A8354u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8354u) goto L_088A8354;
    return;
L_088A8354:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088A8374:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    ctx.gpr[17] = (g5 & 255u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), hot_regs.g31);
    { const bool branch_taken = g5 != hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088A865C;
      }
      goto L_088A8398;
    }
}
L_088A8398:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
        goto L_088A8498;
    }
    goto L_088A83B0;
L_088A83B0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1056)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1104)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A8570;
      }
      goto L_088A83D8;
    }
}
}
L_088A83D8:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_088A8418;
    }
    goto L_088A8418;
L_088A8418:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x088A848Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A848Cu) goto L_088A848C;
    return;
L_088A848C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
      if (branch_taken) {
          goto L_088A8574;
      }
      goto L_088A8494;
    }
L_088A8494:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
    goto L_088A8498;
L_088A8498:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1104)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A8570;
      }
      goto L_088A84BC;
    }
}
}
L_088A84BC:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_088A84FC;
    }
    goto L_088A84FC;
L_088A84FC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1104)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x088A8570u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8570u) goto L_088A8570;
    return;
L_088A8570:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
    goto L_088A8574;
L_088A8574:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1108)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = hot_regs.f14 + f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A865C;
      }
      goto L_088A859C;
    }
}
}
L_088A859C:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_088A85D8;
    }
    goto L_088A85D8;
L_088A85D8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1108)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1056)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g6 = (15395u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 55050u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (0x088A865Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A865Cu) goto L_088A865C;
    return;
L_088A865C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088A8670:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(300), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), ctx.gpr[18]);
    ctx.gpr[18] = (g6 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g9 = (16153u << 16u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g9 = (g9 | 39322u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    g9 = (16128u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), ctx.gpr[22]);
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.f22 = std::bit_cast<float>(g9);
    g6 = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = (0u | 11u);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[23] = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088A8708;
      }
      goto L_088A86F8;
    }
}
L_088A86F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088A8708;
}
L_088A8708:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 1u);
    if (g4 != ctx.gpr[8]) {
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = g4;
        goto L_088A8730;
    }
    goto L_088A8728;
}
}
L_088A8728:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088A8744;
      }
      goto L_088A8730;
    }
L_088A8730:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[8];
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_088A8744;
      }
      goto L_088A873C;
    }
L_088A873C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_088A8744;
      }
      goto L_088A8744;
    }
L_088A8744:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g7;
    hot_regs.g4 = (0u | 9u);
      if (branch_taken) {
          goto L_088A875C;
      }
      goto L_088A8754;
    }
L_088A8754:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088A8768;
      }
      goto L_088A875C;
    }
L_088A875C:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088A8768;
L_088A8768:
    hot_regs.g4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088A877C;
      }
      goto L_088A8774;
    }
L_088A8774:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_088A8788;
      }
      goto L_088A877C;
    }
L_088A877C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088A8788;
}
L_088A8788:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088A8794u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 550u, 0x088A2648u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8794u) goto L_088A8794;
    return;
L_088A8794:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088A87B0u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A87B0u) goto L_088A87B0;
    return;
L_088A87B0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A881C;
      }
      goto L_088A87C0;
    }
L_088A87C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g18 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (0u | 8u);
    { const bool branch_taken = ctx.gpr[17] == g4;
    g4 = (0u | 9u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088A87E0;
      }
      goto L_088A87D8;
    }
}
L_088A87D8:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088A87EC;
      }
      goto L_088A87E0;
    }
L_088A87E0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088A87EC;
}
L_088A87EC:
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A881Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A881Cu) goto L_088A881C;
    return;
L_088A881C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8848;
      }
      goto L_088A8830;
    }
L_088A8830:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    f12 = f12 + hot_regs.f22;
    f13 = f13 + hot_regs.f22;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088A8848;
}
}
L_088A8848:
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f12 + ctx.fpr[24];
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x088A88E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A88E4u) goto L_088A88E4;
    return;
L_088A88E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8984;
      }
      goto L_088A88EC;
    }
L_088A88EC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x088A8924u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8924u) goto L_088A8924;
    return;
L_088A8924:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088A897C;
      }
      goto L_088A892C;
    }
L_088A892C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (17530u << 16u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088A896Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A896Cu) goto L_088A896C;
    return;
L_088A896C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_088A898C;
      }
      goto L_088A8974;
    }
L_088A8974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A89B8;
      }
      goto L_088A897C;
    }
L_088A897C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A8984;
    }
L_088A8984:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A898C;
    }
L_088A898C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A89B8;
      }
      goto L_088A89A0;
    }
L_088A89A0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    f12 = f12 + ctx.fpr[24];
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A89D0;
      }
      goto L_088A89B8;
    }
}
L_088A89B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A89D8;
      }
      goto L_088A89C8;
    }
}
L_088A89C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8A2C;
      }
      goto L_088A89D0;
    }
L_088A89D0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A89D8;
    }
L_088A89D8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (50298u << 16u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088A8A10u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8A10u) goto L_088A8A10;
    return;
L_088A8A10:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8A24;
      }
      goto L_088A8A18;
    }
L_088A8A18:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_088A8A44;
      }
      goto L_088A8A24;
    }
L_088A8A24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A8A2C;
    }
L_088A8A2C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(196));
    hot_regs.g31 = (0x088A8A44u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8A44u) goto L_088A8A44;
    return;
L_088A8A44:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(hot_regs.f20)) && hot_regs.f22 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8A70;
      }
      goto L_088A8A54;
    }
L_088A8A54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A8A70;
      }
      goto L_088A8A68;
    }
L_088A8A68:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088A8A74;
      }
      goto L_088A8A70;
    }
L_088A8A70:
    hot_regs.g2 = (ctx.gpr[23] | 0u);
    goto L_088A8A74;
L_088A8A74:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088A8AAC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-480));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(440), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(444), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(448), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(452), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(456), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(460), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(468), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(472), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(476), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088A8B20;
      }
      goto L_088A8AF8;
    }
}
L_088A8AF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8B20;
      }
      goto L_088A8B10;
    }
}
L_088A8B10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(340)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088A8B20;
}
L_088A8B20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8F00;
      }
      goto L_088A8B30;
    }
}
L_088A8B30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8F00;
      }
      goto L_088A8B44;
    }
}
L_088A8B44:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), hot_regs.g5);
    hot_regs.g4 = (48645u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 7864u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15877u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 7864u);
    hot_regs.g31 = (0x088A8B64u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8B64u) goto L_088A8B64;
    return;
L_088A8B64:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x088A8B74u);
    ctx.fpr[24] = hot_regs.f20 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8B74u) goto L_088A8B74;
    return;
L_088A8B74:
    hot_regs.f13 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f20 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088A8BC4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8BC4u) goto L_088A8BC4;
    return;
L_088A8BC4:
    hot_regs.g31 = (0x088A8BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8BCCu) goto L_088A8BCC;
    return;
L_088A8BCC:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x088A8BDCu);
    ctx.fpr[24] = hot_regs.f20 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8BDCu) goto L_088A8BDC;
    return;
L_088A8BDC:
    hot_regs.f13 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g31 = (0x088A8BECu);
    ctx.fpr[26] = hot_regs.f20 + hot_regs.f13;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8BECu) goto L_088A8BEC;
    return;
L_088A8BEC:
    hot_regs.f14 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[30] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 80u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (32u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (16179u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[22] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x088A8C78u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 572u, 0x08A1BC64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8C78u) goto L_088A8C78;
    return;
L_088A8C78:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088A8C84u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(404)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 877u, 0x08AFFAC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8C84u) goto L_088A8C84;
    return;
L_088A8C84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(352)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(180)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088A8CC8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8CC8u) goto L_088A8CC8;
    return;
L_088A8CC8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(404)));
    hot_regs.g6 = (0u | 5u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x088A8CECu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8CECu) goto L_088A8CEC;
    return;
L_088A8CEC:
    hot_regs.g31 = (0x088A8CF4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 544u, 0x08A362BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8CF4u) goto L_088A8CF4;
    return;
L_088A8CF4:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (16102u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11020)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11056)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11024)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11060)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f14 = hot_regs.f15 + ctx.fpr[16];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11028)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11064)));
    { const float fs = ctx.fpr[18]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = ctx.fpr[17] + hot_regs.f15;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088A8D7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8D7Cu) goto L_088A8D7C;
    return;
L_088A8D7C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25012)));
    hot_regs.g31 = (0x088A8D90u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25016)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8D90u) goto L_088A8D90;
    return;
L_088A8D90:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25004)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25008)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(hot_regs.g4));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15897u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.g31 = (0x088A8DECu);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8DECu) goto L_088A8DEC;
    return;
L_088A8DEC:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088A8E2Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8E2Cu) goto L_088A8E2C;
    return;
L_088A8E2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    ctx.gpr[23] = (hot_regs.g4 + static_cast<std::uint32_t>(300));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(412), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088A8E9Cu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8E9Cu) goto L_088A8E9C;
    return;
L_088A8E9C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 75u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088A8ECCu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8ECCu) goto L_088A8ECC;
    return;
L_088A8ECC:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (0u | 165u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x088A8EE4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8EE4u) goto L_088A8EE4;
    return;
L_088A8EE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(408), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(412)));
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A8F08;
      }
      goto L_088A8EF8;
    }
}
L_088A8EF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9024;
      }
      goto L_088A8F00;
    }
L_088A8F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93B4;
      }
      goto L_088A8F08;
    }
L_088A8F08:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9024;
      }
      goto L_088A8F18;
    }
}
L_088A8F18:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g31 = (0x088A8F40u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8F40u) goto L_088A8F40;
    return;
L_088A8F40:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A8F50;
      }
      goto L_088A8F48;
    }
L_088A8F48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088A8F50;
L_088A8F50:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9024;
      }
      goto L_088A8F64;
    }
}
L_088A8F64:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (15820u << 16u);
    f12 = f12 + ctx.fpr[24];
    hot_regs.g5 = (16416u << 16u);
    g4 = (g4 | 52429u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088A8F94;
}
}
L_088A8F94:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x088A8FA4u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8FA4u) goto L_088A8FA4;
    return;
L_088A8FA4:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088A8FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A8FC4u) goto L_088A8FC4;
    return;
L_088A8FC4:
    hot_regs.f12 = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    hot_regs.f12 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (0u | 37u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088A9014u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9014u) goto L_088A9014;
    return;
L_088A9014:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088A8F94;
      }
      goto L_088A9024;
    }
}
L_088A9024:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A90CC;
      }
      goto L_088A902C;
    }
L_088A902C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A90CC;
      }
      goto L_088A903C;
    }
}
L_088A903C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(180)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g31 = (0x088A9064u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9064u) goto L_088A9064;
    return;
L_088A9064:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9074;
      }
      goto L_088A906C;
    }
L_088A906C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088A9074;
L_088A9074:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (15820u << 16u);
      if (branch_taken) {
          goto L_088A90CC;
      }
      goto L_088A9088;
    }
L_088A9088:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16592u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 9u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 2500u);
    hot_regs.g31 = (0x088A90CCu);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 352u, 0x089421CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A90CCu) goto L_088A90CC;
    return;
L_088A90CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(960)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93B4;
      }
      goto L_088A90D8;
    }
L_088A90D8:
    ctx.gpr[17] = (2186u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), 0u);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10032));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(960)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088A90F8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A90F8u) goto L_088A90F8;
    return;
L_088A90F8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9124;
      }
      goto L_088A9104;
    }
L_088A9104:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x088A9110u);
    hot_regs.g4 = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9110u) goto L_088A9110;
    return;
L_088A9110:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088A912C;
      }
      goto L_088A911C;
    }
L_088A911C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9138;
      }
      goto L_088A9124;
    }
L_088A9124:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93B4;
      }
      goto L_088A912C;
    }
L_088A912C:
    hot_regs.g31 = (0x088A9134u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 349u, 0x0882B4E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9134u) goto L_088A9134;
    return;
L_088A9134:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_088A9138;
L_088A9138:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088A92D4;
      }
      goto L_088A9144;
    }
L_088A9144:
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(408)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088A9164u);
    hot_regs.g5 = (0u | 315u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9164u) goto L_088A9164;
    return;
L_088A9164:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x088A9170u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 58u, 0x0882C380u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9170u) goto L_088A9170;
    return;
L_088A9170:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(960)));
    hot_regs.g31 = (0x088A917Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A917Cu) goto L_088A917C;
    return;
L_088A917C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x088A9188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9188u) goto L_088A9188;
    return;
L_088A9188:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (0x088A9198u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9198u) goto L_088A9198;
    return;
L_088A9198:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), hot_regs.g2);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (0x088A91CCu);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A91CCu) goto L_088A91CC;
    return;
L_088A91CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (0x088A91D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A91D8u) goto L_088A91D8;
    return;
L_088A91D8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (0x088A91E4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 698u, 0x0887F368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A91E4u) goto L_088A91E4;
    return;
L_088A91E4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (0x088A91F0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 1117u, 0x08ACFE30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A91F0u) goto L_088A91F0;
    return;
L_088A91F0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(76)));
    g4 = (g4 | 4096u);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(76), g4);
    g4 = (16672u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    g4 = (16840u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    g4 = (16253u << 16u);
    g4 = (g4 | 28836u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(f12));
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(208)));
    g4 = (15363u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16298u << 16u);
    g4 = (g4 | 43691u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 3u);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-2049));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(72), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(482))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(482), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g28 + static_cast<std::uint32_t>(-30396)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(-30396), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(464), g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A92DC;
      }
      goto L_088A92C0;
    }
}
}
L_088A92C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16025u << 16u);
    g5 = (g5 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088A92E0;
      }
      goto L_088A92D4;
    }
}
L_088A92D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93B4;
      }
      goto L_088A92DC;
    }
L_088A92DC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_088A92E0;
L_088A92E0:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x088A92ECu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A92ECu) goto L_088A92EC;
    return;
L_088A92EC:
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
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
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9370;
      }
      goto L_088A9364;
    }
L_088A9364:
    hot_regs.g5 = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x088A9370u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9370u) goto L_088A9370;
    return;
L_088A9370:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(272)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(276)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g31 = (0x088A9384u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9384u) goto L_088A9384;
    return;
L_088A9384:
    hot_regs.g31 = (0x088A938Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A938Cu) goto L_088A938C;
    return;
L_088A938C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(960)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088A93A0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A93A0u) goto L_088A93A0;
    return;
L_088A93A0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A93B4;
      }
      goto L_088A93AC;
    }
L_088A93AC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_088A93B4;
L_088A93B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(420)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(428)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(432)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(436)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(440)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(444)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(448)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(452)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(456)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(468)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(472)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(476)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088A93F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-288));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(268), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g5 & 64u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088A9460;
      }
      goto L_088A9434;
    }
}
L_088A9434:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (4096u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9460;
      }
      goto L_088A9448;
    }
}
L_088A9448:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9468;
      }
      goto L_088A9458;
    }
}
L_088A9458:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A949C;
      }
      goto L_088A9460;
    }
L_088A9460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A9468;
    }
L_088A9468:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A949C;
      }
      goto L_088A947C;
    }
}
L_088A947C:
    hot_regs.g31 = (0x088A9484u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9484u) goto L_088A9484;
    return;
L_088A9484:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088A949C;
      }
      goto L_088A948C;
    }
L_088A948C:
    hot_regs.g31 = (0x088A9494u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9494u) goto L_088A9494;
    return;
L_088A9494:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088A94C4;
      }
      goto L_088A949C;
    }
L_088A949C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(f12)) && hot_regs.f20 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A94CC;
      }
      goto L_088A94B0;
    }
}
L_088A94B0:
{
    float f20 = hot_regs.f20;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(200)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088A94CC;
      }
      goto L_088A94C4;
    }
}
L_088A94C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A94CC;
    }
L_088A94CC:
    hot_regs.g4 = (16840u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A94E4;
    }
L_088A94E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A94F8;
    }
}
L_088A94F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A9514;
    }
L_088A9514:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
      if (branch_taken) {
          goto L_088A955C;
      }
      goto L_088A9520;
    }
L_088A9520:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A955C;
      }
      goto L_088A9530;
    }
}
L_088A9530:
    hot_regs.g31 = (0x088A9538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 223u, 0x0899103Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9538u) goto L_088A9538;
    return;
L_088A9538:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[0] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A955C;
      }
      goto L_088A9550;
    }
L_088A9550:
{
    float f20 = hot_regs.f20;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.f20 = f20;
    goto L_088A955C;
}
L_088A955C:
    hot_regs.g31 = (0x088A9564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9564u) goto L_088A9564;
    return;
L_088A9564:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088A95C8;
      }
      goto L_088A956C;
    }
L_088A956C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16840u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A95A4;
      }
      goto L_088A957C;
    }
}
L_088A957C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16840u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f20 - f12;
    g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A95A4;
    }
}
}
L_088A95A4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(g4);
    g4 = (16576u << 16u);
    f12 = hot_regs.f20 - f12;
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f14 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A95C8;
    }
}
}
L_088A95C8:
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A95F8;
      }
      goto L_088A95E0;
    }
L_088A95E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A95F8;
      }
      goto L_088A95EC;
    }
L_088A95EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x088A95F8u);
    hot_regs.g5 = (0u | 145u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 16u, 0x08860424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A95F8u) goto L_088A95F8;
    return;
L_088A95F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16840u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9630;
      }
      goto L_088A9608;
    }
}
L_088A9608:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16840u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f20 - f12;
    g4 = (16000u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9650;
      }
      goto L_088A9630;
    }
}
}
L_088A9630:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(g4);
    g4 = (16704u << 16u);
    f12 = hot_regs.f20 - f12;
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088A9650;
}
}
L_088A9650:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9660;
    }
}
L_088A9660:
    hot_regs.g31 = (0x088A9668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9668u) goto L_088A9668;
    return;
L_088A9668:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9670;
    }
L_088A9670:
    hot_regs.g31 = (0x088A9678u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9678u) goto L_088A9678;
    return;
L_088A9678:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9680;
    }
L_088A9680:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 64u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9694;
    }
}
L_088A9694:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088A96B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A96B4u) goto L_088A96B4;
    return;
L_088A96B4:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A96DC;
    }
L_088A96DC:
    hot_regs.g31 = (0x088A96E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A96E4u) goto L_088A96E4;
    return;
L_088A96E4:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A972C;
      }
      goto L_088A9718;
    }
L_088A9718:
    hot_regs.g31 = (0x088A9720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9720u) goto L_088A9720;
    return;
L_088A9720:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088A972Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 659u, 0x089474A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A972Cu) goto L_088A972C;
    return;
L_088A972C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A9744;
    }
L_088A9744:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A976C;
      }
      goto L_088A9758;
    }
L_088A9758:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1084), g4);
    hot_regs.g4 = g4;
    goto L_088A976C;
}
L_088A976C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088A9784;
      }
      goto L_088A977C;
    }
L_088A977C:
    hot_regs.g31 = (0x088A9784u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 833u, 0x088A7F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9784u) goto L_088A9784;
    return;
L_088A9784:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17382u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A97A0;
    }
L_088A97A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A97B4;
    }
}
L_088A97B4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.f13 = std::bit_cast<float>(0u);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_088A97E0;
    }
    goto L_088A97E0;
}
}
L_088A97E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A97F8;
    }
}
L_088A97F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    hot_regs.f13 = std::bit_cast<float>(0u);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_088A9824;
    }
    goto L_088A9824;
}
}
L_088A9824:
    hot_regs.g4 = (17224u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A983C;
    }
L_088A983C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16204u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 277u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 264u);
      if (branch_taken) {
          goto L_088A9A94;
      }
      goto L_088A9884;
    }
L_088A9884:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 233u);
      if (branch_taken) {
          goto L_088A9A10;
      }
      goto L_088A988C;
    }
L_088A988C:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 215u);
      if (branch_taken) {
          goto L_088A99A8;
      }
      goto L_088A9894;
    }
L_088A9894:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 214u);
      if (branch_taken) {
          goto L_088A9914;
      }
      goto L_088A989C;
    }
L_088A989C:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088A9B18;
      }
      goto L_088A98A4;
    }
L_088A98A4:
    hot_regs.g4 = (49158u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49152u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16153u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15759u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A990Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A990Cu) goto L_088A990C;
    return;
L_088A990C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9B7C;
      }
      goto L_088A9914;
    }
L_088A9914:
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49177u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15692u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A9980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9980u) goto L_088A9980;
    return;
L_088A9980:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9B7C;
      }
      goto L_088A99A8;
    }
}
}
L_088A99A8:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16268u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15779u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A9A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9A08u) goto L_088A9A08;
    return;
L_088A9A08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088A9B7C;
      }
      goto L_088A9A10;
    }
L_088A9A10:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (49248u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15692u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A9A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9A6Cu) goto L_088A9A6C;
    return;
L_088A9A6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9B7C;
      }
      goto L_088A9A94;
    }
}
}
L_088A9A94:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (49248u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15692u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A9AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9AFCu) goto L_088A9AFC;
    return;
L_088A9AFC:
{
    float f14 = hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f13 + f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088A9B7C;
      }
      goto L_088A9B18;
    }
}
L_088A9B18:
    hot_regs.g4 = (49088u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (48896u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (15779u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088A9B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9B7Cu) goto L_088A9B7C;
    return;
L_088A9B7C:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088A9B94u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 550u, 0x088A2648u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9B94u) goto L_088A9B94;
    return;
L_088A9B94:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9DD8;
      }
      goto L_088A9BB8;
    }
L_088A9BB8:
    hot_regs.g4 = (16230u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (15436u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088A9BF4u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9BF4u) goto L_088A9BF4;
    return;
L_088A9BF4:
    hot_regs.f14 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (0u | 27u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x088A9C30u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9C30u) goto L_088A9C30;
    return;
L_088A9C30:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (48928u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    hot_regs.g4 = (16160u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088A9C58u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9C58u) goto L_088A9C58;
    return;
L_088A9C58:
    hot_regs.f14 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088A9C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9C78u) goto L_088A9C78;
    return;
L_088A9C78:
    hot_regs.f12 = ctx.fpr[28] - ctx.fpr[26];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[26] + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16416u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x088A9CA0u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9CA0u) goto L_088A9CA0;
    return;
L_088A9CA0:
    hot_regs.f14 = hot_regs.f22 - ctx.fpr[28];
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = ctx.fpr[28] + hot_regs.f14;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (0u | 56u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x088A9CECu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9CECu) goto L_088A9CEC;
    return;
L_088A9CEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f14;
    g4 = (17530u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (20224u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1080)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9D48;
      }
      goto L_088A9D20;
    }
}
}
L_088A9D20:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f14;
    g4 = (17530u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9D80;
      }
      goto L_088A9D48;
    }
}
}
L_088A9D48:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f14;
    g4 = (17530u << 16u);
    hot_regs.g5 = (20224u << 16u);
    hot_regs.g6 = (32768u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 - ctx.fpr[16];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088A9D80;
}
}
L_088A9D80:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9D98;
      }
      goto L_088A9D8C;
    }
}
L_088A9D8C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_088A9D98;
L_088A9D98:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f13 + f12;
    g4 = (17820u << 16u);
    g4 = (g4 | 16384u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088A9DD8;
      }
      goto L_088A9DB8;
    }
}
}
L_088A9DB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1084)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(328));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x088A9DD8u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9DD8u) goto L_088A9DD8;
    return;
L_088A9DD8:
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9E3C;
      }
      goto L_088A9DF0;
    }
L_088A9DF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (16320u << 16u);
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088A9E3C;
      }
      goto L_088A9E14;
    }
}
L_088A9E14:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 33u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x088A9E3Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9E3Cu) goto L_088A9E3C;
    return;
L_088A9E3C:
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A9E54;
    }
L_088A9E54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17347u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088A9EB4;
      }
      goto L_088A9E70;
    }
L_088A9E70:
    hot_regs.g4 = (16288u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 55u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x088A9EB4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088A9EB4u) goto L_088A9EB4;
    return;
L_088A9EB4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088A9EE0:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g6 = (14979u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(116)));
    g5 = (g6 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1164)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g7 = (16253u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(f30));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f30 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(208)));
    g7 = (g7 | 28836u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    ctx.fpr[24] = std::bit_cast<float>(g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24996)));
    g7 = (16256u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[9] = (0u | 278u);
    ctx.fpr[26] = std::bit_cast<float>(g7);
    g6 = (g4 + static_cast<std::uint32_t>(320));
    { const float fs = f12; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    ctx.gpr[19] = (g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(16));
    g5 = (g4 + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25000)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), hot_regs.g31);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[18] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_088A9F98;
      }
      goto L_088A9F90;
    }
}
}
L_088A9F90:
{
    float f30 = ctx.fpr[30];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25096)));
    { const float fs = hot_regs.f12; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    ctx.fpr[30] = f30;
    goto L_088A9F98;
}
L_088A9F98:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
        goto L_088A9FDC;
    }
    goto L_088A9FDC;
L_088A9FDC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), hot_regs.g5);
    ctx.fpr[30] = ctx.fpr[26] / ctx.fpr[30];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(360)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
        goto L_088AA0C0;
    }
    goto L_088AA020;
L_088AA020:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1104)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x088AA03Cu);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA03Cu) goto L_088AA03C;
    return;
L_088AA03C:
    hot_regs.g31 = (0x088AA044u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA044u) goto L_088AA044;
    return;
L_088AA044:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA058;
      }
      goto L_088AA04C;
    }
L_088AA04C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48716u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_088AA058;
}
L_088AA058:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    hot_regs.f20 = hot_regs.f22 + hot_regs.f20;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088AA070u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA070u) goto L_088AA070;
    return;
L_088AA070:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088AA084u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA084u) goto L_088AA084;
    return;
L_088AA084:
    if (static_cast<std::int32_t>(hot_regs.g2) < 0) {
    hot_regs.g5 = (ctx.gpr[17] | 0u);
        goto L_088AA0B0;
    }
    goto L_088AA08C;
L_088AA08C:
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088AA09C;
    }
    goto L_088AA09C;
L_088AA09C:
    hot_regs.g31 = (0x088AA0A4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA0A4u) goto L_088AA0A4;
    return;
L_088AA0A4:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_088AA0B0;
L_088AA0B0:
    hot_regs.g31 = (0x088AA0B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA0B8u) goto L_088AA0B8;
    return;
L_088AA0B8:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    goto L_088AA0C0;
L_088AA0C0:
    hot_regs.f13 = ctx.fpr[26] - hot_regs.f22;
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f12;
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.f20 = hot_regs.f22 + hot_regs.f20;
    hot_regs.g31 = (0x088AA0E0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA0E0u) goto L_088AA0E0;
    return;
L_088AA0E0:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088AA0F4u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA0F4u) goto L_088AA0F4;
    return;
L_088AA0F4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) < 0;
    // nop
      if (branch_taken) {
          goto L_088AA11C;
      }
      goto L_088AA0FC;
    }
L_088AA0FC:
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088AA10C;
    }
    goto L_088AA10C;
L_088AA10C:
    hot_regs.g31 = (0x088AA114u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA114u) goto L_088AA114;
    return;
L_088AA114:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_088AA11C;
L_088AA11C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(360)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088AA140;
      }
      goto L_088AA134;
    }
L_088AA134:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088AA144;
      }
      goto L_088AA140;
    }
}
L_088AA140:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    goto L_088AA144;
L_088AA144:
    hot_regs.f13 = ctx.fpr[26] - hot_regs.f20;
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x088AA160u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA160u) goto L_088AA160;
    return;
L_088AA160:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x088AA174u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA174u) goto L_088AA174;
    return;
L_088AA174:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) < 0;
    // nop
      if (branch_taken) {
          goto L_088AA1A0;
      }
      goto L_088AA17C;
    }
L_088AA17C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = f12;
        goto L_088AA190;
    }
    goto L_088AA190;
}
L_088AA190:
    hot_regs.g31 = (0x088AA198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA198u) goto L_088AA198;
    return;
L_088AA198:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_088AA1A0;
L_088AA1A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AA1C8;
      }
      goto L_088AA1B4;
    }
}
L_088AA1B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 64u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AA1D8;
      }
      goto L_088AA1C8;
    }
}
L_088AA1C8:
{
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16248u << 16u);
    g4 = (g4 | 20972u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f30; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[30] = f30;
    goto L_088AA1D8;
}
}
L_088AA1D8:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088AA1E4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA1E4u) goto L_088AA1E4;
    return;
L_088AA1E4:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(360)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[30]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AA260u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA260u) goto L_088AA260;
    return;
L_088AA260:
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(324)));
    hot_regs.f13 = hot_regs.f14 - ctx.fpr[26];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (0x088AA368u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA368u) goto L_088AA368;
    return;
L_088AA368:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088AA384u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA384u) goto L_088AA384;
    return;
L_088AA384:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AA3CC:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA3E4:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA3F0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AA444;
      }
      goto L_088AA40C;
    }
}
L_088AA40C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AA434;
      }
      goto L_088AA41C;
    }
}
L_088AA41C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[16] & 1u);
    hot_regs.g4 = g4;
        goto L_088AA434;
    }
    goto L_088AA428;
}
L_088AA428:
    hot_regs.g31 = (0x088AA430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA430u) goto L_088AA430;
    return;
L_088AA430:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_088AA434;
L_088AA434:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA444;
      }
      goto L_088AA43C;
    }
L_088AA43C:
    hot_regs.g31 = (0x088AA444u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA444u) goto L_088AA444;
    return;
L_088AA444:
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
L_088AA458:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    g5 = (hot_regs.g6 - g5);
    g5 = (g5 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AA478;
      }
      goto L_088AA474;
    }
}
L_088AA474:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    goto L_088AA478;
L_088AA478:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA480:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4080));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_088AA48C;
}
L_088AA48C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AA48C;
      }
      goto L_088AA4A0;
    }
}
L_088AA4A0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA4A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x088AA4D4u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA4D4u) goto L_088AA4D4;
    return;
L_088AA4D4:
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g2;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_088AA500;
      }
      goto L_088AA4DC;
    }
L_088AA4DC:
    hot_regs.g31 = (0x088AA4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA4E4u) goto L_088AA4E4;
    return;
L_088AA4E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6FC;
      }
      goto L_088AA4EC;
    }
L_088AA4EC:
    hot_regs.g31 = (0x088AA4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA4F4u) goto L_088AA4F4;
    return;
L_088AA4F4:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088AA6FC;
      }
      goto L_088AA4FC;
    }
L_088AA4FC:
    hot_regs.g4 = (2236u << 16u);
    goto L_088AA500;
L_088AA500:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 34u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA534;
    }
}
L_088AA534:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 7u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA564;
    }
}
L_088AA564:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 46u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA594;
    }
}
L_088AA594:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 8u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA5C4;
    }
}
L_088AA5C4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 42u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA5F4;
    }
}
L_088AA5F4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 39u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA624;
    }
}
L_088AA624:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g5 = (g5 + hot_regs.g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(112))))));
    g6 = (0u | 40u);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA684;
      }
      goto L_088AA654;
    }
}
L_088AA654:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(80)));
    g5 = (g5 << 5u);
    g6 = (0u - g5);
    g5 = (g5 << 2u);
    g6 = (g6 + g5);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g4 = (g5 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    g5 = (0u | 45u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA6FC;
      }
      goto L_088AA684;
    }
}
L_088AA684:
    hot_regs.g31 = (0x088AA68Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA68Cu) goto L_088AA68C;
    return;
L_088AA68C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6B0;
      }
      goto L_088AA694;
    }
L_088AA694:
    hot_regs.g31 = (0x088AA69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA69Cu) goto L_088AA69C;
    return;
L_088AA69C:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA6C4;
      }
      goto L_088AA6B0;
    }
L_088AA6B0:
    hot_regs.g31 = (0x088AA6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA6B8u) goto L_088AA6B8;
    return;
L_088AA6B8:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088AA6C4;
L_088AA6C4:
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AA6FC;
      }
      goto L_088AA6F4;
    }
L_088AA6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA790;
      }
      goto L_088AA6FC;
    }
L_088AA6FC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-20));
    hot_regs.g4 = (g16 < static_cast<std::uint32_t>(18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088AA724;
      }
      goto L_088AA70C;
    }
}
L_088AA70C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g16);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-22608)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    ctx.gpr[16] = g16;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AA724:
    ctx.gpr[8] = (16076u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 52429u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 750u);
    hot_regs.g31 = (0x088AA744u);
    hot_regs.g7 = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 67u, 0x088AC7B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA744u) goto L_088AA744;
    return;
L_088AA744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA790;
      }
      goto L_088AA74C;
    }
L_088AA74C:
    ctx.gpr[8] = (16179u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 13107u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1000u);
    hot_regs.g31 = (0x088AA76Cu);
    hot_regs.g7 = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 67u, 0x088AC7B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA76Cu) goto L_088AA76C;
    return;
L_088AA76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA790;
      }
      goto L_088AA774;
    }
L_088AA774:
    ctx.gpr[8] = (16256u << 16u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 2000u);
    hot_regs.g31 = (0x088AA790u);
    hot_regs.g7 = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 67u, 0x088AC7B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA790u) goto L_088AA790;
    return;
L_088AA790:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AA7AC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(4080));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088AA7C8;
}
L_088AA7C8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA7DC;
      }
      goto L_088AA7D4;
    }
L_088AA7D4:
    hot_regs.g31 = (0x088AA7DCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088AA458;
L_088AA7DC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088AA7C8;
      }
      goto L_088AA7EC;
    }
}
L_088AA7EC:
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
L_088AA800:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088AA814u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24888));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA814u) goto L_088AA814;
    return;
L_088AA814:
    hot_regs.g31 = (0x088AA81Cu);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA81Cu) goto L_088AA81C;
    return;
L_088AA81C:
    hot_regs.g31 = (0x088AA824u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA824u) goto L_088AA824;
    return;
L_088AA824:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24876));
    hot_regs.g31 = (0x088AA830u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA830u) goto L_088AA830;
    return;
L_088AA830:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24948), hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24864));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24944), hot_regs.g5);
    hot_regs.g31 = (0x088AA848u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA848u) goto L_088AA848;
    return;
L_088AA848:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24940), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088AA858u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24936), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA858u) goto L_088AA858;
    return;
L_088AA858:
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
L_088AA868:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24948), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24940), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA874:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
    hot_regs.g4 = (g7 | 0u);
    g7 = (static_cast<std::int32_t>(ctx.gpr[8]) < 8 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088AA898;
      }
      goto L_088AA890;
    }
}
L_088AA890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AA8FC;
      }
      goto L_088AA898;
    }
L_088AA898:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g28 = ctx.gpr[28];
    g7 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(-24952)));
    g7 = (g7 << 4u);
    g8 = (g7 + g7);
    g7 = (g7 + g8);
    g8 = (2246u << 16u);
    g8 = (g8 + static_cast<std::uint32_t>(4848));
    g7 = (g7 + g8);
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(-24952)));
    g5 = (g5 << 4u);
    g7 = (g5 + g5);
    g5 = (g5 + g7);
    g7 = (g8 + static_cast<std::uint32_t>(16));
    g5 = (g5 + g7);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(-24952)));
    g5 = (g4 << 4u);
    g7 = (g5 + g5);
    g5 = (g5 + g7);
    g5 = (g5 + g8);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g6));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(-24952), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_088AA8FC;
}
L_088AA8FC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AA904:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x088AA938u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA938u) goto L_088AA938;
    return;
L_088AA938:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088AA944u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA944u) goto L_088AA944;
    return;
L_088AA944:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088AA950u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA950u) goto L_088AA950;
    return;
L_088AA950:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AA95Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA95Cu) goto L_088AA95C;
    return;
L_088AA95C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
    ctx.gpr[16] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (16294u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AAA58;
      }
      goto L_088AA970;
    }
}
L_088AA970:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (g5 | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(g5);
    g5 = (15948u << 16u);
    g5 = (g5 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(g5);
    g5 = (16204u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g17 = (2246u << 16u);
    g5 = (16025u << 16u);
    g5 = (g5 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(g5);
    g17 = (g17 + static_cast<std::uint32_t>(4848));
    g5 = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    g5 = (16384u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    goto L_088AA9B4;
}
L_088AA9B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    g6 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AA9F0;
      }
      goto L_088AA9C4;
    }
}
L_088AA9C4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AA9CC;
    }
L_088AA9CC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) > 0;
    // nop
      if (branch_taken) {
          goto L_088AAA18;
      }
      goto L_088AA9D4;
    }
L_088AA9D4:
    hot_regs.g5 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088AA9E8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 151u, 0x088AD55Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AA9E8u) goto L_088AA9E8;
    return;
L_088AA9E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AA9F0;
    }
L_088AA9F0:
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g5) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088AAA30;
      }
      goto L_088AA9F8;
    }
L_088AA9F8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AAA00;
    }
L_088AAA00:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x088AAA10u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 151u, 0x088AD55Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAA10u) goto L_088AAA10;
    return;
L_088AAA10:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AAA18;
    }
L_088AAA18:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g31 = (0x088AAA28u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 151u, 0x088AD55Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAA28u) goto L_088AAA28;
    return;
L_088AAA28:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AAA30;
    }
L_088AAA30:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x088AAA40u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 151u, 0x088AD55Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAA40u) goto L_088AAA40;
    return;
L_088AAA40:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952)));
      if (branch_taken) {
          goto L_088AAA48;
      }
      goto L_088AAA48;
    }
L_088AAA48:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088AA9B4;
      }
      goto L_088AAA58;
    }
}
L_088AAA58:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AAA64u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAA64u) goto L_088AAA64;
    return;
L_088AAA64:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24952), static_cast<std::uint8_t>(0u));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AAA94:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAA9C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    g9 = (0u | 32u);
    ctx.gpr[10] = (g7 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[11] = (0u | 2u);
    g9 = (hot_regs.g4 + g9);
    g7 = (g7 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_088AAABC;
}
L_088AAABC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g2 = (g5 | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g6 = (hot_regs.g4 + ctx.gpr[11]);
    g5 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(111)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(g5));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g5 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AAAF0;
      }
      goto L_088AAAE4;
    }
}
L_088AAAE4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AAAF4;
      }
      goto L_088AAAF0;
    }
}
L_088AAAF0:
    hot_regs.g5 = (0u | 1u);
    goto L_088AAAF4;
L_088AAAF4:
{
    std::uint32_t g11 = ctx.gpr[11];
    hot_regs.g5 = (hot_regs.g5 & 255u);
    g11 = (g11 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-16));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(g11) > 0;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-16));
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AAABC;
      }
      goto L_088AAB10;
    }
}
L_088AAB10:
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088AAB1C;
      }
      goto L_088AAB18;
    }
L_088AAB18:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    goto L_088AAB1C;
L_088AAB1C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAB24:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (2235u << 16u);
    g17 = (2235u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[22] = (0u | 3u);
    ctx.gpr[21] = (0u | 255u);
    ctx.gpr[20] = (0u | 170u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    g19 = (g19 + static_cast<std::uint32_t>(28304));
    g17 = (g17 + static_cast<std::uint32_t>(28272));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    goto L_088AAB74;
}
L_088AAB74:
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[23]);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACB4;
      }
      goto L_088AAB84;
    }
L_088AAB84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AACB4;
      }
      goto L_088AAB90;
    }
}
L_088AAB90:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[22]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[8]));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x088AAC94u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAC94u) goto L_088AAC94;
    return;
L_088AAC94:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AACB4;
      }
      goto L_088AAC9C;
    }
L_088AAC9C:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088AACACu);
    hot_regs.g6 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AACACu) goto L_088AACAC;
    return;
L_088AACAC:
    hot_regs.g31 = (0x088AACB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AACB4u) goto L_088AACB4;
    return;
L_088AACB4:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-85));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-85));
    hot_regs.g4 = (static_cast<std::int32_t>(g23) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_088AAB74;
      }
      goto L_088AACCC;
    }
}
L_088AACCC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AACF8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAD00:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[11] = (g6 & 255u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    g6 = (2246u << 16u);
    hot_regs.g2 = (hot_regs.g5 & 255u);
    ctx.gpr[10] = (hot_regs.g7 & 255u);
    g6 = (g6 + static_cast<std::uint32_t>(5232));
    ctx.gpr[3] = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g5 = (g6 | 0u);
    hot_regs.g6 = g6;
    goto L_088AAD24;
}
L_088AAD24:
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088AAD4C;
      }
      goto L_088AAD30;
    }
L_088AAD30:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(128));
    ctx.gpr[12] = (static_cast<std::int32_t>(g3) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(128));
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_088AAD24;
      }
      goto L_088AAD44;
    }
}
L_088AAD44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAD88;
      }
      goto L_088AAD4C;
    }
L_088AAD4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g2));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    g4 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    g4 = (hot_regs.g7 + g4);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (hot_regs.g6 + static_cast<std::uint32_t>(64));
    g4 = (hot_regs.g7 + g4);
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (0u | 1u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AAE14;
      }
      goto L_088AAD88;
    }
}
L_088AAD88:
    ctx.gpr[3] = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    goto L_088AAD94;
L_088AAD94:
    ctx.gpr[12] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAE00;
      }
      goto L_088AADA0;
    }
L_088AADA0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g2));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    g4 = (g6 + static_cast<std::uint32_t>(16));
    g4 = (g7 + g4);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g6 + static_cast<std::uint32_t>(64));
    g4 = (g7 + g4);
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (0u | 1u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(g4));
    g4 = (0u | 1u);
    g2 = (g7 + static_cast<std::uint32_t>(1));
    g2 = (g2 + g6);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    goto L_088AADE4;
}
L_088AADE4:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AADE4;
      }
      goto L_088AADF8;
    }
}
L_088AADF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAE14;
      }
      goto L_088AAE00;
    }
L_088AAE00:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(128));
    ctx.gpr[12] = (static_cast<std::int32_t>(g3) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(128));
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_088AAD94;
      }
      goto L_088AAE14;
    }
}
L_088AAE14:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAE1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2246u << 16u);
    hot_regs.g5 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(5232));
    hot_regs.g4 = g4;
    goto L_088AAE28;
}
L_088AAE28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088AAE28;
      }
      goto L_088AAE3C;
    }
}
L_088AAE3C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAE44:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    g17 = (g17 + static_cast<std::uint32_t>(5232));
    ctx.gpr[16] = (65280u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_088AAE70;
}
L_088AAE70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAF04;
      }
      goto L_088AAE7C;
    }
L_088AAE7C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088AAEFC;
      }
      goto L_088AAE84;
    }
L_088AAE84:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AAE90u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAE90u) goto L_088AAE90;
    return;
L_088AAE90:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088AAE9Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAE9Cu) goto L_088AAE9C;
    return;
L_088AAE9C:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x088AAEA8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAEA8u) goto L_088AAEA8;
    return;
L_088AAEA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11096)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11092)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11100)));
    hot_regs.g5 = (hot_regs.g5 << 8u);
    hot_regs.g5 = (hot_regs.g5 | hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g5 = (hot_regs.g5 | hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[16]);
    hot_regs.g31 = (0x088AAED4u);
    hot_regs.g4 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAED4u) goto L_088AAED4;
    return;
L_088AAED4:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x088AAEE0u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAEE0u) goto L_088AAEE0;
    return;
L_088AAEE0:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x088AAEECu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAEECu) goto L_088AAEEC;
    return;
L_088AAEEC:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088AAEF8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAEF8u) goto L_088AAEF8;
    return;
L_088AAEF8:
    ctx.gpr[19] = (0u | 1u);
    goto L_088AAEFC;
L_088AAEFC:
    hot_regs.g31 = (0x088AAF04u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_088AAB24;
L_088AAF04:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088AAE70;
      }
      goto L_088AAF14;
    }
}
L_088AAF14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAF40;
      }
      goto L_088AAF1C;
    }
L_088AAF1C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AAF28u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAF28u) goto L_088AAF28;
    return;
L_088AAF28:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x088AAF34u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAF34u) goto L_088AAF34;
    return;
L_088AAF34:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x088AAF40u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAF40u) goto L_088AAF40;
    return;
L_088AAF40:
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
L_088AAF5C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(5232));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088AAF78;
}
L_088AAF78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AAF8C;
      }
      goto L_088AAF84;
    }
L_088AAF84:
    hot_regs.g31 = (0x088AAF8Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088AAA9C;
L_088AAF8C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088AAF78;
      }
      goto L_088AAF9C;
    }
}
L_088AAF9C:
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
L_088AAFB0:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8436), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AAFB8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AB010;
      }
      goto L_088AAFCC;
    }
}
L_088AAFCC:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x088AAFE4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AAFE4u) goto L_088AAFE4;
    return;
L_088AAFE4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB008;
      }
      goto L_088AAFEC;
    }
L_088AAFEC:
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x088AB000u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12016));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB000u) goto L_088AB000;
    return;
L_088AB000:
    hot_regs.g31 = (0x088AB008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB008u) goto L_088AB008;
    return;
L_088AB008:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    goto L_088AB010;
L_088AB010:
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
L_088AB01C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g11 = ctx.gpr[11];
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    g2 = (g11 | 0u);
    ctx.gpr[3] = (ctx.gpr[10] | 0u);
    ctx.gpr[12] = (hot_regs.g7 | 0u);
    ctx.gpr[13] = (hot_regs.g6 | 0u);
    g11 = (ctx.gpr[8] & 255u);
    ctx.gpr[10] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (g2 & 255u);
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    ctx.gpr[9] = (ctx.gpr[3] & 255u);
    hot_regs.g5 = (ctx.gpr[13] | 0u);
    g2 = (static_cast<std::int32_t>(g11) < 4 ? 1u : 0u);
    { const bool branch_taken = g2 != 0u;
    hot_regs.g4 = (ctx.gpr[12] | 0u);
    hot_regs.g2 = g2;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_088AB064;
      }
      goto L_088AB058;
    }
}
L_088AB058:
    hot_regs.g2 = (static_cast<std::int32_t>(ctx.gpr[11]) < 12 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB07C;
      }
      goto L_088AB064;
    }
L_088AB064:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    g2 = (static_cast<std::int32_t>(g2) < 32 ? 1u : 0u);
    { const bool branch_taken = g2 != 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_088AB084;
      }
      goto L_088AB074;
    }
}
L_088AB074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB198;
      }
      goto L_088AB07C;
    }
L_088AB07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB198;
      }
      goto L_088AB084;
    }
L_088AB084:
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g2 = (2236u << 16u);
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(32304));
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    hot_regs.g2 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8436)));
    ctx.gpr[3] = (hot_regs.g2 << 6u);
    hot_regs.g2 = (hot_regs.g2 << 4u);
    ctx.gpr[3] = (ctx.gpr[3] + hot_regs.g2);
    hot_regs.g2 = (2246u << 16u);
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(5744));
    ctx.gpr[3] = (ctx.gpr[3] + hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[3] = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AB198;
      }
      goto L_088AB0F0;
    }
L_088AB0F0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g3 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    ctx.gpr[12] = (g3 << 6u);
    g3 = (g3 << 4u);
    g3 = (ctx.gpr[12] + g3);
    g3 = (g3 + g2);
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g3 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    g3 = (g7 << 6u);
    g7 = (g7 << 4u);
    g7 = (g3 + g7);
    g3 = (g2 + static_cast<std::uint32_t>(16));
    g7 = (g7 + g3);
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    g7 = (g6 << 6u);
    g6 = (g6 << 4u);
    g6 = (g7 + g6);
    g7 = (g2 + static_cast<std::uint32_t>(32));
    g6 = (g6 + g7);
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    g6 = (g5 << 6u);
    g5 = (g5 << 4u);
    g5 = (g6 + g5);
    g6 = (g2 + static_cast<std::uint32_t>(48));
    g5 = (g5 + g6);
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8436)));
    g5 = (g4 << 6u);
    g6 = (g4 << 4u);
    g5 = (g5 + g6);
    g5 = (g5 + g2);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[8]));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8436), g4);
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_088AB198;
}
L_088AB198:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB1A0:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8440), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB1A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AB200;
      }
      goto L_088AB1BC;
    }
}
L_088AB1BC:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x088AB1D4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB1D4u) goto L_088AB1D4;
    return;
L_088AB1D4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB1F8;
      }
      goto L_088AB1DC;
    }
L_088AB1DC:
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x088AB1F0u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12016));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB1F0u) goto L_088AB1F0;
    return;
L_088AB1F0:
    hot_regs.g31 = (0x088AB1F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB1F8u) goto L_088AB1F8;
    return;
L_088AB1F8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    goto L_088AB200;
L_088AB200:
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
L_088AB20C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g7 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[18] = (hot_regs.g6 & 65535u);
    ctx.gpr[30] = (ctx.gpr[8] & 255u);
    ctx.gpr[23] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    hot_regs.g31 = (0x088AB278u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB278u) goto L_088AB278;
    return;
L_088AB278:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8444)));
    hot_regs.g5 = (ctx.gpr[18] << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (2187u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088AB29Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-23580));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 82u, 0x089D86FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB29Cu) goto L_088AB29C;
    return;
L_088AB29C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088AB2A8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 490u, 0x0895B708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB2A8u) goto L_088AB2A8;
    return;
L_088AB2A8:
    hot_regs.g31 = (0x088AB2B0u);
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 622u, 0x08972DA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB2B0u) goto L_088AB2B0;
    return;
L_088AB2B0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AB2BCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 523u, 0x0895B9C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB2BCu) goto L_088AB2BC;
    return;
L_088AB2BC:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088AB2C8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 389u, 0x08946130u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB2C8u) goto L_088AB2C8;
    return;
L_088AB2C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g17 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(2)));
    g4 = (g4 | 64u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(80), g19);
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088AB304;
      }
      goto L_088AB2EC;
    }
}
L_088AB2EC:
    hot_regs.g6 = (hot_regs.g5 & 1u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
        goto L_088AB308;
    }
    goto L_088AB2F8;
L_088AB2F8:
    hot_regs.g31 = (0x088AB300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB300u) goto L_088AB300;
    return;
L_088AB300:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    goto L_088AB304;
L_088AB304:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_088AB308;
L_088AB308:
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x088AB320u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB320u) goto L_088AB320;
    return;
L_088AB320:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(84), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[20]));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[18]));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(96), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB374;
      }
      goto L_088AB36C;
    }
}
L_088AB36C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088AB378;
      }
      goto L_088AB374;
    }
L_088AB374:
    hot_regs.g2 = (0u | 0u);
    goto L_088AB378;
L_088AB378:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AB3B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(130))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 257u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088AB400u);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 518u, 0x0895B97Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB400u) goto L_088AB400;
    return;
L_088AB400:
    hot_regs.g31 = (0x088AB408u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 658u, 0x089730ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB408u) goto L_088AB408;
    return;
L_088AB408:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
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
L_088AB420:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088AB478;
      }
      goto L_088AB444;
    }
}
L_088AB444:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    hot_regs.g31 = (0x088AB450u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 493u, 0x08B3E044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB450u) goto L_088AB450;
    return;
L_088AB450:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), 0u);
    g4 = (g4 & ctx.gpr[19]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u != 0u;
    ctx.gpr[17] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB480;
      }
      goto L_088AB470;
    }
}
L_088AB470:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
      if (branch_taken) {
          goto L_088AB49C;
      }
      goto L_088AB478;
    }
L_088AB478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5CC;
      }
      goto L_088AB480;
    }
L_088AB480:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    hot_regs.g4 = g4;
        goto L_088AB49C;
    }
    goto L_088AB490;
}
L_088AB490:
    hot_regs.g31 = (0x088AB498u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB498u) goto L_088AB498;
    return;
L_088AB498:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    goto L_088AB49C;
L_088AB49C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x088AB4B0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB4B0u) goto L_088AB4B0;
    return;
L_088AB4B0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088AB4C4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB4C4u) goto L_088AB4C4;
    return;
L_088AB4C4:
    hot_regs.g31 = (0x088AB4CCu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB4CCu) goto L_088AB4CC;
    return;
L_088AB4CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x088AB4D8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 621u, 0x08972D80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB4D8u) goto L_088AB4D8;
    return;
L_088AB4D8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x088AB4F0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 662u, 0x088B797Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB4F0u) goto L_088AB4F0;
    return;
L_088AB4F0:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AB528;
      }
      goto L_088AB4FC;
    }
L_088AB4FC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB528;
      }
      goto L_088AB50C;
    }
L_088AB50C:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB528;
      }
      goto L_088AB51C;
    }
L_088AB51C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AB528u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB528u) goto L_088AB528;
    return;
L_088AB528:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB560;
      }
      goto L_088AB538;
    }
L_088AB538:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    g6 = (43691u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-21846));
    { const bool branch_taken = hot_regs.g5 == g6;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AB560;
      }
      goto L_088AB54C;
    }
}
L_088AB54C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088AB558u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB558u) goto L_088AB558;
    return;
L_088AB558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB568;
      }
      goto L_088AB560;
    }
L_088AB560:
    hot_regs.g31 = (0x088AB568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 528u, 0x0895BBA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB568u) goto L_088AB568;
    return;
L_088AB568:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088AB5A0;
      }
      goto L_088AB574;
    }
L_088AB574:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB5A0;
      }
      goto L_088AB584;
    }
L_088AB584:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB5A0;
      }
      goto L_088AB594;
    }
L_088AB594:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x088AB5A0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB5A0u) goto L_088AB5A0;
    return;
L_088AB5A0:
    hot_regs.g31 = (0x088AB5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 663u, 0x088B7A4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB5A8u) goto L_088AB5A8;
    return;
L_088AB5A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB5CC;
      }
      goto L_088AB5B8;
    }
}
L_088AB5B8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB5CC;
      }
      goto L_088AB5C4;
    }
L_088AB5C4:
    hot_regs.g31 = (0x088AB5CCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB5CCu) goto L_088AB5CC;
    return;
L_088AB5CC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AB5E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(64), 0u);
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088AB604:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g12 = ctx.gpr[12];
    g2 = (2246u << 16u);
    g2 = (g2 + static_cast<std::uint32_t>(11888));
    g12 = (16000u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f14 = std::bit_cast<float>(g12);
    ctx.gpr[3] = (0u | 0u);
    g12 = (16256u << 16u);
    ctx.gpr[11] = (0u | 257u);
    hot_regs.f13 = std::bit_cast<float>(g12);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g7 = (0u | 1024u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    hot_regs.g2 = g2;
    ctx.gpr[12] = g12;
    goto L_088AB640;
}
L_088AB640:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g12 = ctx.gpr[12];
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(80), 0u);
    g12 = (g12 & ctx.gpr[10]);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g12));
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(124), static_cast<std::uint16_t>(ctx.gpr[11]));
    g12 = (g12 & ctx.gpr[9]);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g12));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(126), static_cast<std::uint16_t>(hot_regs.g7));
    aot_mem.aot_store16(g2 + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(hot_regs.g6));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(f13));
    g12 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g12 = (g12 & hot_regs.g5);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g12));
    g3 = (g3 + static_cast<std::uint32_t>(1));
    g12 = (static_cast<std::int32_t>(g3) < 32 ? 1u : 0u);
    { const bool branch_taken = g12 != 0u;
    g2 = (g2 + static_cast<std::uint32_t>(144));
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[12] = g12;
      if (branch_taken) {
          goto L_088AB640;
      }
      goto L_088AB6B0;
    }
}
}
L_088AB6B0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8448), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8444), hot_regs.g4);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088AB6BC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(11888));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088AB6D8;
}
L_088AB6D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB6EC;
      }
      goto L_088AB6E4;
    }
L_088AB6E4:
    hot_regs.g31 = (0x088AB6ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_088AB3B0;
L_088AB6EC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088AB6D8;
      }
      goto L_088AB6FC;
    }
}
L_088AB6FC:
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
L_088AB710:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[23] = (2246u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(11888));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    hot_regs.g31 = (0x088AB764u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8448), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 666u, 0x088B7AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB764u) goto L_088AB764;
    return;
L_088AB764:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (16396u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    g4 = (16281u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g21 = (0u | 0u);
    g4 = (17174u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g22 = (2236u << 16u);
    g4 = (16968u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 0u);
    g4 = (16320u << 16u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.f20 = std::bit_cast<float>(g4);
    g21 = (g21 + ctx.gpr[23]);
    g22 = (g22 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    goto L_088AB7B0;
}
L_088AB7B0:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(130))))));
    hot_regs.g5 = (hot_regs.g4 & 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9C0;
      }
      goto L_088AB7C4;
    }
L_088AB7C4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AB830;
      }
      goto L_088AB7DC;
    }
}
L_088AB7DC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088AB830;
      }
      goto L_088AB7F0;
    }
L_088AB7F0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g5 != g6;
    g6 = (0u | 8u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088AB828;
      }
      goto L_088AB800;
    }
}
L_088AB800:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 + ctx.fpr[26];
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088AB830;
      }
      goto L_088AB824;
    }
}
L_088AB824:
    hot_regs.g6 = (0u | 8u);
    goto L_088AB828;
L_088AB828:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_088AB99C;
      }
      goto L_088AB830;
    }
L_088AB830:
    hot_regs.g31 = (0x088AB838u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB838u) goto L_088AB838;
    return;
L_088AB838:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(130))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB878;
      }
      goto L_088AB848;
    }
}
L_088AB848:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(95)));
    g4 = (g4 + static_cast<std::uint32_t>(-12));
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(95), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(95)));
    { const bool branch_taken = g4 == 0u;
    g4 = (static_cast<std::int32_t>(g4) < 244 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB868;
      }
      goto L_088AB860;
    }
}
L_088AB860:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB878;
      }
      goto L_088AB868;
    }
L_088AB868:
    hot_regs.g31 = (0x088AB870u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_088AB3B0;
L_088AB870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9D4;
      }
      goto L_088AB878;
    }
L_088AB878:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088AB8C0;
      }
      goto L_088AB880;
    }
L_088AB880:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB8C0;
      }
      goto L_088AB890;
    }
L_088AB890:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[23]);
    goto L_088AB894;
L_088AB894:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088AB8A0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 927u, 0x0885FDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB8A0u) goto L_088AB8A0;
    return;
L_088AB8A0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB8B0;
      }
      goto L_088AB8A8;
    }
L_088AB8A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088AB8C0;
      }
      goto L_088AB8B0;
    }
L_088AB8B0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088AB894;
      }
      goto L_088AB8C0;
    }
}
L_088AB8C0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB998;
      }
      goto L_088AB8C8;
    }
L_088AB8C8:
    hot_regs.g31 = (0x088AB8D0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_088AB420;
L_088AB8D0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB998;
      }
      goto L_088AB8DC;
    }
L_088AB8DC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB940;
      }
      goto L_088AB8EC;
    }
L_088AB8EC:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(93)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(94)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1960)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 132u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088AB938u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB938u) goto L_088AB938;
    return;
L_088AB938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB998;
      }
      goto L_088AB940;
    }
L_088AB940:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088AB998;
      }
      goto L_088AB94C;
    }
L_088AB94C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(93)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(94)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1960)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[9] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 132u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x088AB998u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088AB998u) goto L_088AB998;
    return;
L_088AB998:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(130))))));
    goto L_088AB99C;
L_088AB99C:
    hot_regs.g5 = (hot_regs.g4 & 4u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9B0;
      }
      goto L_088AB9A8;
    }
L_088AB9A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & ctx.gpr[30]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_088AB9B0;
}
L_088AB9B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8448)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8448), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088AB9D4;
      }
      goto L_088AB9C0;
    }
}
L_088AB9C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088AB9D4;
      }
      goto L_088AB9CC;
    }
L_088AB9CC:
    hot_regs.g31 = (0x088AB9D4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_088AB3B0;
L_088AB9D4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(144));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088AB7B0;
      }
      goto L_088AB9E4;
    }
}
L_088AB9E4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ABA2C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[18] = (hot_regs.g5 & 65535u);
    ctx.gpr[19] = (hot_regs.g7 & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    hot_regs.g31 = (0x088ABAC4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABAC4u) goto L_088ABAC4;
    return;
L_088ABAC4:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (16238u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g4 = (hot_regs.g4 | 5243u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088ABB18u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABB18u) goto L_088ABB18;
    return;
L_088ABB18:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[30] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ABB58:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g8 = (hot_regs.g7 | 0u);
    hot_regs.g7 = (hot_regs.g6 & 255u);
    hot_regs.g6 = (g8 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[9] = (0u | 0u);
    g8 = (static_cast<std::int32_t>(ctx.gpr[9]) < 32 ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088ABC34;
      }
      goto L_088ABB7C;
    }
}
L_088ABB7C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    g8 = (ctx.gpr[9] << 7u);
    g10 = (ctx.gpr[9] << 4u);
    g8 = (g8 + g10);
    g10 = (2246u << 16u);
    g10 = (g10 + static_cast<std::uint32_t>(11888));
    g8 = (g8 + g10);
    g10 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = g10 != hot_regs.g4;
    hot_regs.g2 = (hot_regs.g7 | 0u);
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088ABC24;
      }
      goto L_088ABBA0;
    }
}
L_088ABBA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(48)));
    hot_regs.g7 = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(124)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(108)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(93)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(94)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(95)));
    ctx.gpr[13] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(126)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(100)));
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(128))))));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g7 = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    ctx.gpr[3] = (hot_regs.g6 | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    hot_regs.g2 = (17096u << 16u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g2);
    ctx.gpr[10] = (ctx.gpr[12] | 0u);
    ctx.gpr[11] = (ctx.gpr[13] | 0u);
    hot_regs.g31 = (0x088ABC1Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 276u, 0x088AEFC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABC1Cu) goto L_088ABC1C;
    return;
L_088ABC1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABC38;
      }
      goto L_088ABC24;
    }
L_088ABC24:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(g9) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088ABB7C;
      }
      goto L_088ABC34;
    }
}
L_088ABC34:
    hot_regs.g2 = (0u | 0u);
    goto L_088ABC38;
L_088ABC38:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088ABC44:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088ABC54u);
    // nop
    hot_regs.g29 = g29;
    goto L_088AA480;
}
L_088ABC54:
    hot_regs.g31 = (0x088ABC5Cu);
    // nop
    goto L_088AA800;
L_088ABC5C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    f12 = std::bit_cast<float>(0u);
    g4 = (2235u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28032), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(28032));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f13));
    g4 = (2235u << 16u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(28272), static_cast<std::uint16_t>(0u));
    g5 = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(28272));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g5));
    g6 = (0u | 2u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g5));
    g7 = (0u | 3u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g7));
    g4 = (2235u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28304), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(28304));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g31 = (0x088ABD1Cu);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088AAE1C;
}
}
L_088ABD1C:
    hot_regs.g31 = (0x088ABD24u);
    // nop
    goto L_088AAFB0;
L_088ABD24:
    hot_regs.g31 = (0x088ABD2Cu);
    // nop
    goto L_088AB1A0;
L_088ABD2C:
    hot_regs.g31 = (0x088ABD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 49u, 0x088AC608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD34u) goto L_088ABD34;
    return;
L_088ABD34:
    hot_regs.g31 = (0x088ABD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 235u, 0x0887CCCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD3Cu) goto L_088ABD3C;
    return;
L_088ABD3C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24904), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24920), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24900), 0u);
    hot_regs.g31 = (0x088ABD50u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24896), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD50u) goto L_088ABD50;
    return;
L_088ABD50:
    hot_regs.g31 = (0x088ABD58u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24888));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD58u) goto L_088ABD58;
    return;
L_088ABD58:
    hot_regs.g31 = (0x088ABD60u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD60u) goto L_088ABD60;
    return;
L_088ABD60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24960)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABD7C;
      }
      goto L_088ABD6C;
    }
L_088ABD6C:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24848));
    hot_regs.g31 = (0x088ABD78u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD78u) goto L_088ABD78;
    return;
L_088ABD78:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24960), hot_regs.g2);
    goto L_088ABD7C;
L_088ABD7C:
    hot_regs.g31 = (0x088ABD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABD84u) goto L_088ABD84;
    return;
L_088ABD84:
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
L_088ABD90:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088ABDA0u);
    // nop
    hot_regs.g29 = g29;
    goto L_088AB6BC;
}
L_088ABDA0:
    hot_regs.g31 = (0x088ABDA8u);
    // nop
    goto L_088AA868;
L_088ABDA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24960)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABDB8;
      }
      goto L_088ABDB4;
    }
L_088ABDB4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24960), 0u);
    goto L_088ABDB8;
L_088ABDB8:
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
L_088ABDC4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6480)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088ABDE0;
      }
      goto L_088ABDD8;
    }
}
L_088ABDD8:
    hot_regs.g31 = (0x088ABDE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 341u, 0x08A3E03Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABDE0u) goto L_088ABDE0;
    return;
L_088ABDE0:
    hot_regs.g31 = (0x088ABDE8u);
    // nop
    goto L_088AAF5C;
L_088ABDE8:
    hot_regs.g31 = (0x088ABDF0u);
    // nop
    goto L_088AA7AC;
L_088ABDF0:
    hot_regs.g31 = (0x088ABDF8u);
    // nop
    goto L_088AAA94;
L_088ABDF8:
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
L_088ABE04:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088ABE14u);
    // nop
    hot_regs.g29 = g29;
    goto L_088AAE44;
}
L_088ABE14:
    hot_regs.g31 = (0x088ABE1Cu);
    // nop
    goto L_088AA904;
L_088ABE1C:
    hot_regs.g31 = (0x088ABE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 110u, 0x088ACC20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE24u) goto L_088ABE24;
    return;
L_088ABE24:
    hot_regs.g31 = (0x088ABE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 176u, 0x088ADD94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE2Cu) goto L_088ABE2C;
    return;
L_088ABE2C:
    hot_regs.g31 = (0x088ABE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 243u, 0x088AE8E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE34u) goto L_088ABE34;
    return;
L_088ABE34:
    hot_regs.g31 = (0x088ABE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 52u, 0x088AC630u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE3Cu) goto L_088ABE3C;
    return;
L_088ABE3C:
    hot_regs.g31 = (0x088ABE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 242u, 0x0887CD68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE44u) goto L_088ABE44;
    return;
L_088ABE44:
    hot_regs.g31 = (0x088ABE4Cu);
    // nop
    goto L_088AB710;
L_088ABE4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-6480)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABE60;
      }
      goto L_088ABE58;
    }
L_088ABE58:
    hot_regs.g31 = (0x088ABE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 365u, 0x08A3E394u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABE60u) goto L_088ABE60;
    return;
L_088ABE60:
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
L_088ABE6C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-640));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6036)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(628), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(624), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088ABEBC;
      }
      goto L_088ABE90;
    }
}
L_088ABE90:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(28400));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6036), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(64), 0u);
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g31 = (0x088ABEBCu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24836));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABEBCu) goto L_088ABEBC;
    return;
L_088ABEBC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088ABED0;
      }
      goto L_088ABEC4;
    }
L_088ABEC4:
    hot_regs.g31 = (0x088ABECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABECCu) goto L_088ABECC;
    return;
L_088ABECC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    goto L_088ABED0;
L_088ABED0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 28u, 0x088AC344u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088ABEDC;
    }
L_088ABEDC:
    hot_regs.g4 = (0u | 6u);
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(772)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 3u, 0x088AC054u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088ABEE8;
    }
L_088ABEE8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2235u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(28400));
    hot_regs.g31 = (0x088ABEFCu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABEFCu) goto L_088ABEFC;
    return;
L_088ABEFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_088ABF1C;
      }
      goto L_088ABF04;
    }
L_088ABF04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_088ABF20;
    }
    goto L_088ABF14;
}
L_088ABF14:
    hot_regs.g31 = (0x088ABF1Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABF1Cu) goto L_088ABF1C;
    return;
L_088ABF1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    goto L_088ABF20;
L_088ABF20:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x088ABF3Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABF3Cu) goto L_088ABF3C;
    return;
L_088ABF3C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088ABF48u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABF48u) goto L_088ABF48;
    return;
L_088ABF48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088ABF6C;
      }
      goto L_088ABF58;
    }
}
L_088ABF58:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088ABF6C;
      }
      goto L_088ABF64;
    }
L_088ABF64:
    hot_regs.g31 = (0x088ABF6Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088ABF6Cu) goto L_088ABF6C;
    return;
L_088ABF6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (15523u << 16u);
    g4 = (g4 | 55050u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g4 = (15759u << 16u);
    g4 = (g4 | 23593u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g4 = (g29 + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
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
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (15995u << 16u);
    g5 = (g5 | 59245u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f12));
    g5 = (15621u << 16u);
    g5 = (g5 | 7864u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    g5 = (16203u << 16u);
    g5 = (g5 | 50856u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f12));
    g5 = (g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    ctx.pc = 0x088AC000u; return;}
}

}

void recomp_unit_0041(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0041_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_41(Runtime &runtime) {
    runtime.register_generated_unit(41u, 0x088A8000u, 16384u, &recomp_unit_0041, &recomp_unit_0041_entry);
    runtime.register_function(0x088A8004u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A800Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8018u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8038u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8058u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8070u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A80C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8100u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8110u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8118u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A812Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8130u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A81F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8200u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8218u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A823Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8248u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A825Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8274u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8280u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8288u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8294u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A82DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A830Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8314u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A831Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A832Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A833Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8354u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8398u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A83D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8418u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A848Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8498u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A84FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8570u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A859Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A85D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A865Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8670u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A86F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8708u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8728u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8730u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A873Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8754u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A875Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8768u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8774u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A877Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8788u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8794u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A87ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A881Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8848u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A88ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8924u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A892Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A896Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8974u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A897Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8984u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A898Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A89D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A68u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8A74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8AF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8B74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8BECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8C84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CC8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8CF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8D90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8DECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8E9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8ECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8EF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8F94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FA4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A8FC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9014u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9024u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A902Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A903Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A906Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9074u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9088u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A90F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9104u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9110u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A911Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9124u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A912Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9134u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9138u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9144u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9164u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9170u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A917Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9188u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A91F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A92ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9364u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9370u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A938Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A93F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9434u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9448u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9460u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9468u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A947Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9484u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A948Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9494u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A949Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A94F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9514u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9520u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9530u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9538u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9550u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A955Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A956Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A957Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A95F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9608u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9630u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9650u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9660u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9668u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9670u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9678u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9680u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9694u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A96E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9718u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9720u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A972Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9758u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A976Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A977Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9784u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A97F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9824u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A983Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9884u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A988Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A989Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A98A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A990Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9914u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9980u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A99A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A08u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9A94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9AFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9B94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9BF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9C78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9CECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D80u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9D98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9DF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9E70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9EE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9F98u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088A9FDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA020u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA03Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA044u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA04Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA058u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA070u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA08Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA09Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0A4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0E0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA0FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA10Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA114u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA11Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA134u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA140u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA144u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA160u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA174u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA17Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA190u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA1E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA260u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA368u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA384u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA3F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA40Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA41Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA428u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA430u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA434u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA43Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA458u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA474u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA48Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA4FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA500u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA534u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA564u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA5F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA624u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA654u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA684u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA68Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA694u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA69Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6F4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA6FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA70Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA724u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA744u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA74Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA76Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA774u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA790u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7ACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA7ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA814u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA81Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA824u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA848u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA858u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA868u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA874u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA898u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA8FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA904u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA944u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA950u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA95Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA970u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9B4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AA9F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAA9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAABCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAAF4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB10u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB74u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAB90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAC9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACACu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AACF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD30u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD88u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAD94u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AADF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE00u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE70u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAE9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAED4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF28u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF40u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF8Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAF9Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFB0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFCCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFE4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AAFECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB000u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB008u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB010u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB01Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB058u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB064u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB074u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB07Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB084u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB0F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB198u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB1F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB200u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB20Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB278u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB29Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB2F8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB300u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB304u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB308u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB320u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB36Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB374u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB378u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB3B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB400u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB408u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB420u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB444u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB450u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB470u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB478u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB480u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB490u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB498u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB49Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB4FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB50Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB51Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB528u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB538u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB54Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB558u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB560u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB568u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB574u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB584u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB594u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5B8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB5E8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB604u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB640u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6BCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6D8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB6FCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB710u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB764u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7C4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB7F0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB800u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB824u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB828u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB830u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB838u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB848u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB860u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB868u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB870u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB878u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB880u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB890u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB894u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8C8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8D0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8DCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB8ECu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB938u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB940u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB94Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB998u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB99Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9A8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9B0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9C0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9CCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9D4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088AB9E4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABA2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABAC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB18u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABB7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABBA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC38u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC54u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABC5Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD50u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD78u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD7Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD84u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABD90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDA0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDA8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDB8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDD8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABDF8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE24u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE2Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE34u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE44u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE4Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE60u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE6Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABE90u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEBCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEC4u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABECCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABED0u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEDCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEE8u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABEFCu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF04u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF14u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF1Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF20u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF3Cu, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF48u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF58u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF64u, &recomp_unit_0041, "recomp_unit_0041");
    runtime.register_function(0x088ABF6Cu, &recomp_unit_0041, "recomp_unit_0041");
}
} // namespace psprecomp
