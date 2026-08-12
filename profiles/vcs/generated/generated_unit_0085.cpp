#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0085[4079] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 12, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0,
    16, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    38, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56,
    0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 0,
    69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75,
    0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101,
    0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0,
    111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 129, 0, 130, 0,
    0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0,
    0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0,
    0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 168,
    0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0,
    0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 194, 0,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 200, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 206, 0,
    207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0, 219, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0,
    0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 228, 0, 229, 0,
    0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 235, 0, 236,
    0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253,
    0, 0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260,
    0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288,
    0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 310, 311,
    0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 317, 0,
    318, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329,
    0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0, 346, 0,
    0, 347, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 0,
    0, 354, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0,
    0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381,
    382, 0, 383, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 397, 0, 0, 398, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 402, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 409,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 411, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452,
    0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 457, 0, 458, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 462, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 487, 0, 488, 489, 0, 0, 0, 0,
    0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0,
    0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0,
    0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0,
    0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 526,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 535, 536, 0, 537, 0, 0, 0, 0,
    0, 538, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 547,
    0, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 0,
    0, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0,
    568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 574, 0, 575, 0, 0,
    576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0,
    0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581,
};
void recomp_unit_0085_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08958004u;
        entry_id = (entry_delta < 16316u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0085[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08958004;
    case 2u: goto L_08958010;
    case 3u: goto L_08958028;
    case 4u: goto L_0895803C;
    case 5u: goto L_08958044;
    case 6u: goto L_08958068;
    case 7u: goto L_08958094;
    case 8u: goto L_089580AC;
    case 9u: goto L_089580CC;
    case 10u: goto L_089580E8;
    case 11u: goto L_08958134;
    case 12u: goto L_08958140;
    case 13u: goto L_08958144;
    case 14u: goto L_08958150;
    case 15u: goto L_08958170;
    case 16u: goto L_08958184;
    case 17u: goto L_089581A0;
    case 18u: goto L_089581A8;
    case 19u: goto L_089581C0;
    case 20u: goto L_089581C8;
    case 21u: goto L_089581F0;
    case 22u: goto L_08958200;
    case 23u: goto L_08958228;
    case 24u: goto L_0895823C;
    case 25u: goto L_08958248;
    case 26u: goto L_08958258;
    case 27u: goto L_08958268;
    case 28u: goto L_089582A4;
    case 29u: goto L_089582B4;
    case 30u: goto L_089582D4;
    case 31u: goto L_089582F4;
    case 32u: goto L_08958300;
    case 33u: goto L_0895830C;
    case 34u: goto L_0895832C;
    case 35u: goto L_08958338;
    case 36u: goto L_08958340;
    case 37u: goto L_0895835C;
    case 38u: goto L_08958384;
    case 39u: goto L_0895838C;
    case 40u: goto L_08958398;
    case 41u: goto L_089583B8;
    case 42u: goto L_089583C0;
    case 43u: goto L_089583E4;
    case 44u: goto L_089583F8;
    case 45u: goto L_08958400;
    case 46u: goto L_08958414;
    case 47u: goto L_08958444;
    case 48u: goto L_08958450;
    case 49u: goto L_08958474;
    case 50u: goto L_089585EC;
    case 51u: goto L_0895860C;
    case 52u: goto L_089586A8;
    case 53u: goto L_089586D8;
    case 54u: goto L_089586E4;
    case 55u: goto L_089586F4;
    case 56u: goto L_08958700;
    case 57u: goto L_08958708;
    case 58u: goto L_08958714;
    case 59u: goto L_08958728;
    case 60u: goto L_08958730;
    case 61u: goto L_08958764;
    case 62u: goto L_0895879C;
    case 63u: goto L_089587A8;
    case 64u: goto L_089587B8;
    case 65u: goto L_089587E0;
    case 66u: goto L_089587E8;
    case 67u: goto L_089587F0;
    case 68u: goto L_089587F8;
    case 69u: goto L_08958804;
    case 70u: goto L_0895880C;
    case 71u: goto L_08958818;
    case 72u: goto L_08958854;
    case 73u: goto L_08958868;
    case 74u: goto L_08958874;
    case 75u: goto L_08958880;
    case 76u: goto L_089588A0;
    case 77u: goto L_089588A8;
    case 78u: goto L_089588B0;
    case 79u: goto L_089588B8;
    case 80u: goto L_089588DC;
    case 81u: goto L_089588E8;
    case 82u: goto L_0895890C;
    case 83u: goto L_0895894C;
    case 84u: goto L_0895895C;
    case 85u: goto L_08958988;
    case 86u: goto L_08958990;
    case 87u: goto L_089589B8;
    case 88u: goto L_089589E0;
    case 89u: goto L_089589FC;
    case 90u: goto L_08958A0C;
    case 91u: goto L_08958A14;
    case 92u: goto L_08958A1C;
    case 93u: goto L_08958A48;
    case 94u: goto L_08958A50;
    case 95u: goto L_08958A78;
    case 96u: goto L_08958AB0;
    case 97u: goto L_08958ABC;
    case 98u: goto L_08958AD0;
    case 99u: goto L_08958AE0;
    case 100u: goto L_08958AF0;
    case 101u: goto L_08958B00;
    case 102u: goto L_08958B08;
    case 103u: goto L_08958B18;
    case 104u: goto L_08958B24;
    case 105u: goto L_08958B2C;
    case 106u: goto L_08958B34;
    case 107u: goto L_08958B48;
    case 108u: goto L_08958B58;
    case 109u: goto L_08958B68;
    case 110u: goto L_08958B78;
    case 111u: goto L_08958B84;
    case 112u: goto L_08958B8C;
    case 113u: goto L_08958B94;
    case 114u: goto L_08958B9C;
    case 115u: goto L_08958BA4;
    case 116u: goto L_08958BAC;
    case 117u: goto L_08958BB8;
    case 118u: goto L_08958BC0;
    case 119u: goto L_08958BC8;
    case 120u: goto L_08958BD0;
    case 121u: goto L_08958BD8;
    case 122u: goto L_08958BE0;
    case 123u: goto L_08958C40;
    case 124u: goto L_08958CE8;
    case 125u: goto L_08958CF0;
    case 126u: goto L_08958CF8;
    case 127u: goto L_08958D28;
    case 128u: goto L_08958D70;
    case 129u: goto L_08958D74;
    case 130u: goto L_08958D7C;
    case 131u: goto L_08958D88;
    case 132u: goto L_08958D94;
    case 133u: goto L_08958DC4;
    case 134u: goto L_08958DD0;
    case 135u: goto L_08958DEC;
    case 136u: goto L_08958DF8;
    case 137u: goto L_08958E10;
    case 138u: goto L_08958E50;
    case 139u: goto L_08958E58;
    case 140u: goto L_08958E60;
    case 141u: goto L_08958E88;
    case 142u: goto L_08958EB4;
    case 143u: goto L_08958EC4;
    case 144u: goto L_08958ED8;
    case 145u: goto L_08958EE0;
    case 146u: goto L_08958EF4;
    case 147u: goto L_08958F00;
    case 148u: goto L_08958F08;
    case 149u: goto L_08958F1C;
    case 150u: goto L_08958F30;
    case 151u: goto L_08958F34;
    case 152u: goto L_08958F60;
    case 153u: goto L_08958F80;
    case 154u: goto L_08958FA4;
    case 155u: goto L_08958FC4;
    case 156u: goto L_08958FCC;
    case 157u: goto L_08958FE0;
    case 158u: goto L_08959010;
    case 159u: goto L_08959024;
    case 160u: goto L_08959070;
    case 161u: goto L_089590F4;
    case 162u: goto L_08959108;
    case 163u: goto L_08959118;
    case 164u: goto L_089591BC;
    case 165u: goto L_089591C8;
    case 166u: goto L_089591D0;
    case 167u: goto L_089591DC;
    case 168u: goto L_08959200;
    case 169u: goto L_0895920C;
    case 170u: goto L_08959218;
    case 171u: goto L_08959224;
    case 172u: goto L_0895922C;
    case 173u: goto L_08959234;
    case 174u: goto L_08959258;
    case 175u: goto L_08959298;
    case 176u: goto L_089592AC;
    case 177u: goto L_089592CC;
    case 178u: goto L_089592E0;
    case 179u: goto L_08959300;
    case 180u: goto L_08959314;
    case 181u: goto L_089593E8;
    case 182u: goto L_089593F0;
    case 183u: goto L_08959414;
    case 184u: goto L_08959438;
    case 185u: goto L_0895944C;
    case 186u: goto L_08959458;
    case 187u: goto L_0895946C;
    case 188u: goto L_089594A0;
    case 189u: goto L_0895952C;
    case 190u: goto L_08959544;
    case 191u: goto L_0895955C;
    case 192u: goto L_08959564;
    case 193u: goto L_08959574;
    case 194u: goto L_0895957C;
    case 195u: goto L_08959598;
    case 196u: goto L_089595F4;
    case 197u: goto L_08959630;
    case 198u: goto L_0895963C;
    case 199u: goto L_0895964C;
    case 200u: goto L_08959654;
    case 201u: goto L_08959658;
    case 202u: goto L_0895968C;
    case 203u: goto L_089596E4;
    case 204u: goto L_089596EC;
    case 205u: goto L_089596F4;
    case 206u: goto L_089596FC;
    case 207u: goto L_08959704;
    case 208u: goto L_08959720;
    case 209u: goto L_08959738;
    case 210u: goto L_08959750;
    case 211u: goto L_0895975C;
    case 212u: goto L_08959764;
    case 213u: goto L_0895976C;
    case 214u: goto L_08959774;
    case 215u: goto L_08959790;
    case 216u: goto L_089597A8;
    case 217u: goto L_089597C0;
    case 218u: goto L_089597CC;
    case 219u: goto L_089597D4;
    case 220u: goto L_089597DC;
    case 221u: goto L_089597F4;
    case 222u: goto L_0895980C;
    case 223u: goto L_08959824;
    case 224u: goto L_0895982C;
    case 225u: goto L_08959844;
    case 226u: goto L_0895985C;
    case 227u: goto L_0895986C;
    case 228u: goto L_08959874;
    case 229u: goto L_0895987C;
    case 230u: goto L_08959898;
    case 231u: goto L_089598B0;
    case 232u: goto L_089598D8;
    case 233u: goto L_089598E4;
    case 234u: goto L_089598F0;
    case 235u: goto L_089598F8;
    case 236u: goto L_08959900;
    case 237u: goto L_08959918;
    case 238u: goto L_08959930;
    case 239u: goto L_08959958;
    case 240u: goto L_08959964;
    case 241u: goto L_0895996C;
    case 242u: goto L_08959984;
    case 243u: goto L_0895999C;
    case 244u: goto L_089599AC;
    case 245u: goto L_089599B4;
    case 246u: goto L_08959A24;
    case 247u: goto L_08959A2C;
    case 248u: goto L_08959A34;
    case 249u: goto L_08959A3C;
    case 250u: goto L_08959A44;
    case 251u: goto L_08959A4C;
    case 252u: goto L_08959A68;
    case 253u: goto L_08959A80;
    case 254u: goto L_08959A98;
    case 255u: goto L_08959AA4;
    case 256u: goto L_08959AAC;
    case 257u: goto L_08959AB4;
    case 258u: goto L_08959AD0;
    case 259u: goto L_08959AE8;
    case 260u: goto L_08959B00;
    case 261u: goto L_08959B0C;
    case 262u: goto L_08959B14;
    case 263u: goto L_08959B1C;
    case 264u: goto L_08959B34;
    case 265u: goto L_08959B4C;
    case 266u: goto L_08959B64;
    case 267u: goto L_08959B6C;
    case 268u: goto L_08959B84;
    case 269u: goto L_08959B9C;
    case 270u: goto L_08959BAC;
    case 271u: goto L_08959BB4;
    case 272u: goto L_08959BBC;
    case 273u: goto L_08959BD8;
    case 274u: goto L_08959BF0;
    case 275u: goto L_08959C18;
    case 276u: goto L_08959C24;
    case 277u: goto L_08959C30;
    case 278u: goto L_08959C38;
    case 279u: goto L_08959C40;
    case 280u: goto L_08959C5C;
    case 281u: goto L_08959C74;
    case 282u: goto L_08959C8C;
    case 283u: goto L_08959C98;
    case 284u: goto L_08959CA0;
    case 285u: goto L_08959CA8;
    case 286u: goto L_08959CC0;
    case 287u: goto L_08959CD8;
    case 288u: goto L_08959D00;
    case 289u: goto L_08959D0C;
    case 290u: goto L_08959D14;
    case 291u: goto L_08959D2C;
    case 292u: goto L_08959D44;
    case 293u: goto L_08959D54;
    case 294u: goto L_08959D5C;
    case 295u: goto L_08959D64;
    case 296u: goto L_08959D7C;
    case 297u: goto L_08959DDC;
    case 298u: goto L_08959DE4;
    case 299u: goto L_08959DF4;
    case 300u: goto L_08959E10;
    case 301u: goto L_08959E1C;
    case 302u: goto L_08959E2C;
    case 303u: goto L_08959E54;
    case 304u: goto L_08959F54;
    case 305u: goto L_08959F5C;
    case 306u: goto L_08959FA8;
    case 307u: goto L_08959FD8;
    case 308u: goto L_08959FE4;
    case 309u: goto L_08959FF4;
    case 310u: goto L_08959FFC;
    case 311u: goto L_0895A000;
    case 312u: goto L_0895A01C;
    case 313u: goto L_0895A024;
    case 314u: goto L_0895A03C;
    case 315u: goto L_0895A064;
    case 316u: goto L_0895A070;
    case 317u: goto L_0895A07C;
    case 318u: goto L_0895A084;
    case 319u: goto L_0895A08C;
    case 320u: goto L_0895A0A4;
    case 321u: goto L_0895A0BC;
    case 322u: goto L_0895A0C8;
    case 323u: goto L_0895A0D0;
    case 324u: goto L_0895A0E0;
    case 325u: goto L_0895A140;
    case 326u: goto L_0895A148;
    case 327u: goto L_0895A158;
    case 328u: goto L_0895A174;
    case 329u: goto L_0895A180;
    case 330u: goto L_0895A190;
    case 331u: goto L_0895A1B8;
    case 332u: goto L_0895A298;
    case 333u: goto L_0895A2A8;
    case 334u: goto L_0895A2D0;
    case 335u: goto L_0895A2E0;
    case 336u: goto L_0895A324;
    case 337u: goto L_0895A348;
    case 338u: goto L_0895A360;
    case 339u: goto L_0895A36C;
    case 340u: goto L_0895A3BC;
    case 341u: goto L_0895A414;
    case 342u: goto L_0895A420;
    case 343u: goto L_0895A450;
    case 344u: goto L_0895A464;
    case 345u: goto L_0895A470;
    case 346u: goto L_0895A47C;
    case 347u: goto L_0895A488;
    case 348u: goto L_0895A49C;
    case 349u: goto L_0895A4A4;
    case 350u: goto L_0895A4D0;
    case 351u: goto L_0895A4DC;
    case 352u: goto L_0895A4E8;
    case 353u: goto L_0895A4F0;
    case 354u: goto L_0895A508;
    case 355u: goto L_0895A510;
    case 356u: goto L_0895A560;
    case 357u: goto L_0895A588;
    case 358u: goto L_0895A598;
    case 359u: goto L_0895A718;
    case 360u: goto L_0895A724;
    case 361u: goto L_0895A72C;
    case 362u: goto L_0895A760;
    case 363u: goto L_0895A7F4;
    case 364u: goto L_0895A86C;
    case 365u: goto L_0895A88C;
    case 366u: goto L_0895A8B4;
    case 367u: goto L_0895A904;
    case 368u: goto L_0895A92C;
    case 369u: goto L_0895A93C;
    case 370u: goto L_0895A964;
    case 371u: goto L_0895A970;
    case 372u: goto L_0895A97C;
    case 373u: goto L_0895A998;
    case 374u: goto L_0895A9A4;
    case 375u: goto L_0895A9B0;
    case 376u: goto L_0895A9BC;
    case 377u: goto L_0895A9D8;
    case 378u: goto L_0895AA1C;
    case 379u: goto L_0895AA24;
    case 380u: goto L_0895AA64;
    case 381u: goto L_0895AA80;
    case 382u: goto L_0895AA84;
    case 383u: goto L_0895AA8C;
    case 384u: goto L_0895AA90;
    case 385u: goto L_0895AA9C;
    case 386u: goto L_0895AAB8;
    case 387u: goto L_0895AAC0;
    case 388u: goto L_0895AADC;
    case 389u: goto L_0895AAE8;
    case 390u: goto L_0895AAF0;
    case 391u: goto L_0895AB30;
    case 392u: goto L_0895AB70;
    case 393u: goto L_0895AB98;
    case 394u: goto L_0895ABA8;
    case 395u: goto L_0895ABAC;
    case 396u: goto L_0895ABDC;
    case 397u: goto L_0895ABE0;
    case 398u: goto L_0895ABEC;
    case 399u: goto L_0895ABFC;
    case 400u: goto L_0895ACF0;
    case 401u: goto L_0895AD00;
    case 402u: goto L_0895AD0C;
    case 403u: goto L_0895AD10;
    case 404u: goto L_0895AD2C;
    case 405u: goto L_0895AD38;
    case 406u: goto L_0895ADC8;
    case 407u: goto L_0895ADD8;
    case 408u: goto L_0895ADF4;
    case 409u: goto L_0895AE00;
    case 410u: goto L_0895AE88;
    case 411u: goto L_0895AE9C;
    case 412u: goto L_0895AEA0;
    case 413u: goto L_0895AEB4;
    case 414u: goto L_0895AEC0;
    case 415u: goto L_0895AEF0;
    case 416u: goto L_0895AF1C;
    case 417u: goto L_0895AF34;
    case 418u: goto L_0895AF3C;
    case 419u: goto L_0895AF54;
    case 420u: goto L_0895AF6C;
    case 421u: goto L_0895AFC4;
    case 422u: goto L_0895AFD8;
    case 423u: goto L_0895AFEC;
    case 424u: goto L_0895B034;
    case 425u: goto L_0895B060;
    case 426u: goto L_0895B08C;
    case 427u: goto L_0895B0B8;
    case 428u: goto L_0895B0E4;
    case 429u: goto L_0895B110;
    case 430u: goto L_0895B13C;
    case 431u: goto L_0895B168;
    case 432u: goto L_0895B174;
    case 433u: goto L_0895B194;
    case 434u: goto L_0895B1B4;
    case 435u: goto L_0895B1FC;
    case 436u: goto L_0895B214;
    case 437u: goto L_0895B228;
    case 438u: goto L_0895B240;
    case 439u: goto L_0895B258;
    case 440u: goto L_0895B2B0;
    case 441u: goto L_0895B2C0;
    case 442u: goto L_0895B2CC;
    case 443u: goto L_0895B2EC;
    case 444u: goto L_0895B2F8;
    case 445u: goto L_0895B33C;
    case 446u: goto L_0895B38C;
    case 447u: goto L_0895B3A8;
    case 448u: goto L_0895B3BC;
    case 449u: goto L_0895B3C8;
    case 450u: goto L_0895B3E0;
    case 451u: goto L_0895B3EC;
    case 452u: goto L_0895B400;
    case 453u: goto L_0895B41C;
    case 454u: goto L_0895B430;
    case 455u: goto L_0895B470;
    case 456u: goto L_0895B490;
    case 457u: goto L_0895B498;
    case 458u: goto L_0895B4A0;
    case 459u: goto L_0895B4A4;
    case 460u: goto L_0895B4AC;
    case 461u: goto L_0895B4C8;
    case 462u: goto L_0895B4D0;
    case 463u: goto L_0895B4D4;
    case 464u: goto L_0895B4EC;
    case 465u: goto L_0895B50C;
    case 466u: goto L_0895B520;
    case 467u: goto L_0895B528;
    case 468u: goto L_0895B530;
    case 469u: goto L_0895B538;
    case 470u: goto L_0895B558;
    case 471u: goto L_0895B56C;
    case 472u: goto L_0895B58C;
    case 473u: goto L_0895B594;
    case 474u: goto L_0895B5CC;
    case 475u: goto L_0895B5D8;
    case 476u: goto L_0895B5F0;
    case 477u: goto L_0895B614;
    case 478u: goto L_0895B61C;
    case 479u: goto L_0895B62C;
    case 480u: goto L_0895B634;
    case 481u: goto L_0895B674;
    case 482u: goto L_0895B68C;
    case 483u: goto L_0895B6B0;
    case 484u: goto L_0895B6C4;
    case 485u: goto L_0895B6D4;
    case 486u: goto L_0895B6DC;
    case 487u: goto L_0895B6E4;
    case 488u: goto L_0895B6EC;
    case 489u: goto L_0895B6F0;
    case 490u: goto L_0895B708;
    case 491u: goto L_0895B73C;
    case 492u: goto L_0895B748;
    case 493u: goto L_0895B794;
    case 494u: goto L_0895B79C;
    case 495u: goto L_0895B7A4;
    case 496u: goto L_0895B7AC;
    case 497u: goto L_0895B7C4;
    case 498u: goto L_0895B7D8;
    case 499u: goto L_0895B7E4;
    case 500u: goto L_0895B7FC;
    case 501u: goto L_0895B80C;
    case 502u: goto L_0895B820;
    case 503u: goto L_0895B834;
    case 504u: goto L_0895B840;
    case 505u: goto L_0895B858;
    case 506u: goto L_0895B860;
    case 507u: goto L_0895B86C;
    case 508u: goto L_0895B878;
    case 509u: goto L_0895B888;
    case 510u: goto L_0895B8A0;
    case 511u: goto L_0895B8AC;
    case 512u: goto L_0895B8BC;
    case 513u: goto L_0895B8C8;
    case 514u: goto L_0895B8D8;
    case 515u: goto L_0895B8E4;
    case 516u: goto L_0895B908;
    case 517u: goto L_0895B934;
    case 518u: goto L_0895B97C;
    case 519u: goto L_0895B994;
    case 520u: goto L_0895B9A4;
    case 521u: goto L_0895B9AC;
    case 522u: goto L_0895B9B4;
    case 523u: goto L_0895B9C8;
    case 524u: goto L_0895B9DC;
    case 525u: goto L_0895B9F0;
    case 526u: goto L_0895BA00;
    case 527u: goto L_0895BAA4;
    case 528u: goto L_0895BBA4;
    case 529u: goto L_0895BC08;
    case 530u: goto L_0895BC18;
    case 531u: goto L_0895BC28;
    case 532u: goto L_0895BC38;
    case 533u: goto L_0895BC44;
    case 534u: goto L_0895BC54;
    case 535u: goto L_0895BC64;
    case 536u: goto L_0895BC68;
    case 537u: goto L_0895BC70;
    case 538u: goto L_0895BC88;
    case 539u: goto L_0895BC8C;
    case 540u: goto L_0895BC9C;
    case 541u: goto L_0895BCB4;
    case 542u: goto L_0895BCC8;
    case 543u: goto L_0895BCD4;
    case 544u: goto L_0895BCE4;
    case 545u: goto L_0895BCEC;
    case 546u: goto L_0895BCF8;
    case 547u: goto L_0895BD00;
    case 548u: goto L_0895BD10;
    case 549u: goto L_0895BD20;
    case 550u: goto L_0895BD28;
    case 551u: goto L_0895BD30;
    case 552u: goto L_0895BD38;
    case 553u: goto L_0895BD44;
    case 554u: goto L_0895BD70;
    case 555u: goto L_0895BD78;
    case 556u: goto L_0895BDBC;
    case 557u: goto L_0895BDC4;
    case 558u: goto L_0895BDD0;
    case 559u: goto L_0895BDE0;
    case 560u: goto L_0895BDF8;
    case 561u: goto L_0895BE10;
    case 562u: goto L_0895BE1C;
    case 563u: goto L_0895BE24;
    case 564u: goto L_0895BE34;
    case 565u: goto L_0895BE3C;
    case 566u: goto L_0895BE60;
    case 567u: goto L_0895BE78;
    case 568u: goto L_0895BE84;
    case 569u: goto L_0895BE8C;
    case 570u: goto L_0895BEB4;
    case 571u: goto L_0895BECC;
    case 572u: goto L_0895BEE4;
    case 573u: goto L_0895BEEC;
    case 574u: goto L_0895BEF0;
    case 575u: goto L_0895BEF8;
    case 576u: goto L_0895BF04;
    case 577u: goto L_0895BF3C;
    case 578u: goto L_0895BF5C;
    case 579u: goto L_0895BF7C;
    case 580u: goto L_0895BF88;
    case 581u: goto L_0895BFBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08958004:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089580AC;
      }
      goto L_08958010;
    }
L_08958010:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089580AC;
      }
      goto L_08958028;
    }
}
L_08958028:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g6 = (g6 + hot_regs.g5);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08958044;
      }
      goto L_0895803C;
    }
}
L_0895803C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958094;
      }
      goto L_08958044;
    }
L_08958044:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g6 = (g6 + hot_regs.g5);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(32)));
    g6 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(4)));
    g7 = (g7 << 3u);
    g7 = (g6 + g7);
    { const bool branch_taken = g6 == g7;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08958094;
      }
      goto L_08958068;
    }
}
L_08958068:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + g9);
    g9 = (g9 + ctx.gpr[10]);
    g9 = (g9 << 2u);
    g8 = (g8 + g9);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), 0u);
    g6 = (g6 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g6 != hot_regs.g7;
    // nop
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08958068;
      }
      goto L_08958094;
    }
}
L_08958094:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08958028;
      }
      goto L_089580AC;
    }
}
L_089580AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    ctx.gpr[20] = (g4 + static_cast<std::uint32_t>(32));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (g4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[20] == g4;
    ctx.gpr[19] = (16384u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08958170;
      }
      goto L_089580CC;
    }
}
L_089580CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4)));
    g18 = (g4 << 3u);
    g18 = (g17 + g18);
    { const bool branch_taken = g17 == g18;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08958150;
      }
      goto L_089580E8;
    }
}
L_089580E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g16 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 << 2u);
    g16 = (g16 + g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g5 = (g5 << 16u);
    g5 = (g5 | ctx.gpr[19]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g5 | g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08958144;
      }
      goto L_08958134;
    }
}
L_08958134:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08958140u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 231u, 0x08955020u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958140u) goto L_08958140;
    return;
L_08958140:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_08958144;
L_08958144:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g17 != ctx.gpr[18];
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089580E8;
      }
      goto L_08958150;
    }
}
L_08958150:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (g4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = g20 != g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089580CC;
      }
      goto L_08958170;
    }
}
L_08958170:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089581A8;
      }
      goto L_08958184;
    }
L_08958184:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (ctx.gpr[22] << 16u);
    hot_regs.g6 = (hot_regs.g6 | ctx.gpr[23]);
    hot_regs.g31 = (0x089581A0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 596u, 0x08956D88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089581A0u) goto L_089581A0;
    return;
L_089581A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_089581A8;
L_089581A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    ctx.gpr[20] = (0u | 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958300;
      }
      goto L_089581C0;
    }
}
L_089581C0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (65535u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(32767));
    ctx.gpr[18] = g18;
    goto L_089581C8;
}
L_089581C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    hot_regs.g6 = (g5 + g5);
    g5 = (g5 + hot_regs.g6);
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08958200;
      }
      goto L_089581F0;
    }
}
L_089581F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089582F4;
      }
      goto L_08958200;
    }
}
L_08958200:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g19 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(700)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(696)));
    g4 = (g4 << 2u);
    g4 = (g19 + g4);
    { const bool branch_taken = g19 == g4;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089582F4;
      }
      goto L_08958228;
    }
}
L_08958228:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    { const bool branch_taken = hot_regs.g4 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089582D4;
      }
      goto L_0895823C;
    }
}
L_0895823C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08958258;
      }
      goto L_08958248;
    }
L_08958248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 | 32768u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089582D4;
      }
      goto L_08958258;
    }
}
L_08958258:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089582A4;
      }
      goto L_08958268;
    }
}
L_08958268:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & ctx.gpr[18]);
    g5 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[21] + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(1040)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    g5 = (g5 ^ hot_regs.g6);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 65535u);
    g5 = (g5 & 1u);
    g5 = (g5 << 15u);
    g4 = (g4 | g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089582D4;
      }
      goto L_089582A4;
    }
}
L_089582A4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089582B4u);
    hot_regs.g5 = (hot_regs.g5 & 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089582B4u) goto L_089582B4;
    return;
L_089582B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 65535u);
    g4 = (g4 & 1u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & ctx.gpr[18]);
    g4 = (g4 << 15u);
    g4 = (g5 | g4);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089582D4;
}
L_089582D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(700)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(696)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    { const bool branch_taken = g19 != g4;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08958228;
      }
      goto L_089582F4;
    }
}
L_089582F4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(68));
    { const bool branch_taken = g16 != ctx.gpr[17];
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089581C8;
      }
      goto L_08958300;
    }
}
L_08958300:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_089583B8;
      }
      goto L_0895830C;
    }
L_0895830C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    hot_regs.g4 = (g5 + static_cast<std::uint32_t>(32));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    g6 = (g6 << 2u);
    g5 = (g5 + g6);
    g5 = (g5 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = hot_regs.g4 == g5;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089583B8;
      }
      goto L_0895832C;
    }
}
L_0895832C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08958340;
      }
      goto L_08958338;
    }
L_08958338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958398;
      }
      goto L_08958340;
    }
L_08958340:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(4)));
    g6 = (g6 << 3u);
    g6 = (g5 + g6);
    { const bool branch_taken = g5 == g6;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08958398;
      }
      goto L_0895835C;
    }
}
L_0895835C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (g8 + g8);
    g8 = (g8 + ctx.gpr[9]);
    g8 = (g8 << 2u);
    g7 = (g7 + g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g8 != 0u;
    // nop
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0895838C;
      }
      goto L_08958384;
    }
}
L_08958384:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_0895838C;
L_0895838C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895835C;
      }
      goto L_08958398;
    }
}
L_08958398:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    g6 = (g6 << 2u);
    g5 = (g5 + g6);
    g5 = (g5 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895832C;
      }
      goto L_089583B8;
    }
}
L_089583B8:
    hot_regs.g31 = (0x089583C0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 693u, 0x0895742Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089583C0u) goto L_089583C0;
    return;
L_089583C0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), hot_regs.g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (0u | 0u);
    goto L_089583E4;
}
L_089583E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g4 + ctx.gpr[30]);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[22] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
    goto L_089583F8;
}
L_089583F8:
    if (ctx.gpr[17] == ctx.gpr[22]) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
        goto L_08958714;
    }
    goto L_08958400;
L_08958400:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g4 = g4;
        goto L_08958714;
    }
    goto L_08958414;
}
L_08958414:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    hot_regs.g5 = (g4 << 8u);
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 4u);
    g4 = (hot_regs.g5 - g4);
    g16 = (ctx.gpr[21] + g4);
    g16 = (g16 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08958708;
      }
      goto L_08958444;
    }
}
L_08958444:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    goto L_08958450;
L_08958450:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g7 = (g7 << 8u);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (static_cast<std::int32_t>(g4) < 13 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08958450;
      }
      goto L_08958474;
    }
}
L_08958474:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.f12 = hot_regs.f20 / hot_regs.f12;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.f13 = hot_regs.f20 / hot_regs.f13;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = hot_regs.f20 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (hot_regs.g6 & 32767u);
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 << 2u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(304));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089585ECu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 464u, 0x08A931D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089585ECu) goto L_089585EC;
    return;
L_089585EC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895860Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 934u, 0x0885FE8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895860Cu) goto L_0895860C;
    return;
L_0895860C:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(6)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089586A8u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x08953954u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089586A8u) goto L_089586A8;
    return;
L_089586A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g23 = ctx.gpr[23];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(4), hot_regs.g5);
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(8), hot_regs.g6);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = g4 != 0u;
    g23 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_089586E4;
      }
      goto L_089586D8;
    }
}
L_089586D8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    hot_regs.g31 = (0x089586E4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089586E4u) goto L_089586E4;
    return;
L_089586E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958708;
      }
      goto L_089586F4;
    }
}
L_089586F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08958708;
      }
      goto L_08958700;
    }
L_08958700:
    hot_regs.g31 = (0x08958708u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958708u) goto L_08958708;
    return;
L_08958708:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089583F8;
      }
      goto L_08958714;
    }
L_08958714:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089583E4;
      }
      goto L_08958728;
    }
}
L_08958728:
    hot_regs.g31 = (0x08958730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 749u, 0x08A07240u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958730u) goto L_08958730;
    return;
L_08958730:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08958764:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x0895879Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 693u, 0x0895742Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895879Cu) goto L_0895879C;
    return;
L_0895879C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089587E8;
      }
      goto L_089587A8;
    }
L_089587A8:
    ctx.gpr[20] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29232));
    hot_regs.g31 = (0x089587B8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 685u, 0x08ABF2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089587B8u) goto L_089587B8;
    return;
L_089587B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (1u << 16u);
    g4 = (hot_regs.g2 < g4 ? 1u : 0u);
    g19 = (2236u << 16u);
    g19 = (g19 + static_cast<std::uint32_t>(32304));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g5 = (32639u << 16u);
    g5 = (g5 | 65535u);
    { const bool branch_taken = g4 != 0u;
    ctx.fpr[24] = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08958804;
      }
      goto L_089587E0;
    }
}
L_089587E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089587F0;
      }
      goto L_089587E8;
    }
L_089587E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_089587F0;
    }
L_089587F0:
    hot_regs.g31 = (0x089587F8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 686u, 0x08ABF2F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089587F8u) goto L_089587F8;
    return;
L_089587F8:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895880C;
      }
      goto L_08958804;
    }
L_08958804:
    hot_regs.g31 = (0x0895880Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 212u, 0x08954ED0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895880Cu) goto L_0895880C;
    return;
L_0895880C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089588B0;
      }
      goto L_08958818;
    }
L_08958818:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17800)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7684)));
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), g4);
    g4 = (static_cast<std::int32_t>(g4) < 512 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08958868;
      }
      goto L_08958854;
    }
}
}
L_08958854:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 511u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17800)));
    g4 = (0u - g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17800), g4);
    hot_regs.g4 = g4;
    goto L_08958868;
}
L_08958868:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    // nop
      if (branch_taken) {
          goto L_089588B8;
      }
      goto L_08958874;
    }
L_08958874:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17804)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089588A0;
      }
      goto L_08958880;
    }
L_08958880:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    hot_regs.g5 = (0u | 1u);
    g4 = (hot_regs.g5 - g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17800)));
    g4 = (0u - g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17800), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089588B8;
      }
      goto L_089588A0;
    }
}
L_089588A0:
    hot_regs.g31 = (0x089588A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 488u, 0x08956690u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089588A8u) goto L_089588A8;
    return;
L_089588A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089588B8;
      }
      goto L_089588B0;
    }
L_089588B0:
    hot_regs.g31 = (0x089588B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 154u, 0x08954A74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089588B8u) goto L_089588B8;
    return;
L_089588B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089588E8;
      }
      goto L_089588DC;
    }
}
L_089588DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089588E8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 887u, 0x08953F94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089588E8u) goto L_089588E8;
    return;
L_089588E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x0895890Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895890Cu) goto L_0895890C;
    return;
L_0895890C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089589E0;
      }
      goto L_0895894C;
    }
L_0895894C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089589E0;
      }
      goto L_0895895C;
    }
}
L_0895895C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g6 = (ctx.lo);
    hot_regs.g31 = (0x08958988u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958988u) goto L_08958988;
    return;
L_08958988:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089589E0;
      }
      goto L_08958990;
    }
L_08958990:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x089589B8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089589B8u) goto L_089589B8;
    return;
L_089589B8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    goto L_089589E0;
L_089589E0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_089589FC;
    }
}
L_089589FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_08958A0C;
    }
}
L_08958A0C:
    hot_regs.g31 = (0x08958A14u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958A14u) goto L_08958A14;
    return;
L_08958A14:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_08958A1C;
    }
L_08958A1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g6 = (ctx.lo);
    hot_regs.g31 = (0x08958A48u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958A48u) goto L_08958A48;
    return;
L_08958A48:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_08958A50;
    }
L_08958A50:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x08958A78u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958A78u) goto L_08958A78;
    return;
L_08958A78:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_08958AB0;
    }
L_08958AB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08958AD0;
      }
      goto L_08958ABC;
    }
L_08958ABC:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(596)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(596), hot_regs.g5);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(588), hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08958AD0;
}
L_08958AD0:
    ctx.set_fpu_condition((ctx.fpr[26] <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08958B00;
      }
      goto L_08958AE0;
    }
L_08958AE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958B08;
      }
      goto L_08958AF0;
    }
}
L_08958AF0:
    ctx.set_fpu_condition((hot_regs.f22 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08958B08;
      }
      goto L_08958B00;
    }
L_08958B00:
    hot_regs.g31 = (0x08958B08u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 801u, 0x08957D74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958B08u) goto L_08958B08;
    return;
L_08958B08:
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08958B2C;
      }
      goto L_08958B18;
    }
L_08958B18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    hot_regs.g4 = g4;
        goto L_08958B34;
    }
    goto L_08958B24;
}
L_08958B24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958B58;
      }
      goto L_08958B2C;
    }
L_08958B2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958B34;
    }
L_08958B34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958B58;
      }
      goto L_08958B48;
    }
}
L_08958B48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958BD8;
      }
      goto L_08958B58;
    }
}
L_08958B58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958BD0;
      }
      goto L_08958B68;
    }
}
L_08958B68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958BD0;
      }
      goto L_08958B78;
    }
}
L_08958B78:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08958BC8;
      }
      goto L_08958B84;
    }
L_08958B84:
    hot_regs.g31 = (0x08958B8Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 121u, 0x08954778u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958B8Cu) goto L_08958B8C;
    return;
L_08958B8C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08958BAC;
      }
      goto L_08958B94;
    }
L_08958B94:
    hot_regs.g31 = (0x08958B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958B9Cu) goto L_08958B9C;
    return;
L_08958B9C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08958BE0;
      }
      goto L_08958BA4;
    }
L_08958BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958BAC;
    }
L_08958BAC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08958BB8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 507u, 0x089567C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958BB8u) goto L_08958BB8;
    return;
L_08958BB8:
    hot_regs.g31 = (0x08958BC0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 693u, 0x0895742Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958BC0u) goto L_08958BC0;
    return;
L_08958BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958BC8;
    }
L_08958BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958BD0;
    }
L_08958BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958BD8;
    }
L_08958BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF8;
      }
      goto L_08958BE0;
    }
L_08958BE0:
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 << 8u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x08958C40u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 105u, 0x0896093Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958C40u) goto L_08958C40;
    return;
L_08958C40:
    hot_regs.g4 = (17174u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (50426u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = (15383u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23157u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (50454u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    hot_regs.g4 = (15363u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (hot_regs.g6 & 1u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08958CE8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 365u, 0x08955EC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958CE8u) goto L_08958CE8;
    return;
L_08958CE8:
    hot_regs.g31 = (0x08958CF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 506u, 0x089567B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958CF0u) goto L_08958CF0;
    return;
L_08958CF0:
    hot_regs.g31 = (0x08958CF8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 693u, 0x0895742Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958CF8u) goto L_08958CF8;
    return;
L_08958CF8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(304)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(308)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08958D28:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-624));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(580), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(584), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(588), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(592), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(600), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(604), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), hot_regs.g31);
    g16 = (2236u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(29232));
    hot_regs.g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(301)));
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(500), hot_regs.g5);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08958D88;
      }
      goto L_08958D70;
    }
}
L_08958D70:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08958D74;
L_08958D74:
    hot_regs.g31 = (0x08958D7Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958D7Cu) goto L_08958D7C;
    return;
L_08958D7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958D74;
      }
      goto L_08958D88;
    }
}
L_08958D88:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_08958DF8;
      }
      goto L_08958D94;
    }
L_08958D94:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1476)));
    g4 = (15692u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f14 = f13 + hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(f14));
    g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f14 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08958DD0;
      }
      goto L_08958DC4;
    }
}
}
L_08958DC4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1476)));
    f14 = f14 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1476), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    goto L_08958DD0;
}
L_08958DD0:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1480)));
    f12 = hot_regs.f14 + f12;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1480), std::bit_cast<std::uint32_t>(f12));
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08958DF8;
      }
      goto L_08958DEC;
    }
}
L_08958DEC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1480)));
    f12 = f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1480), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08958DF8;
}
L_08958DF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958E58;
      }
      goto L_08958E10;
    }
}
L_08958E10:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    g4 = (17279u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1840));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(564), g4);
    g4 = (0u & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(552), hot_regs.g5);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(496), g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08958E60;
      }
      goto L_08958E50;
    }
}
}
L_08958E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958EC4;
      }
      goto L_08958E58;
    }
L_08958E58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A72C;
      }
      goto L_08958E60;
    }
L_08958E60:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f12 = f12 - f13;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = g4 == g5;
    hot_regs.g6 = (15104u << 16u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08958EB4;
      }
      goto L_08958E88;
    }
}
}
L_08958E88:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(60)));
    g8 = (g8 << 8u);
    f13 = std::bit_cast<float>(g8);
    f13 = f13 + hot_regs.f12;
    g8 = (std::bit_cast<std::uint32_t>(f13));
    g8 = (g8 >> 8u);
    g8 = (g8 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(60), g8);
    g4 = (g4 + static_cast<std::uint32_t>(68));
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08958E88;
      }
      goto L_08958EB4;
    }
}
}
L_08958EB4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08958EC4;
}
L_08958EC4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), hot_regs.g5);
      if (branch_taken) {
          goto L_08958EF4;
      }
      goto L_08958ED8;
    }
L_08958ED8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08958F30;
      }
      goto L_08958EE0;
    }
L_08958EE0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (0u | 4u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), hot_regs.g4);
      if (branch_taken) {
          goto L_08958F34;
      }
      goto L_08958EF4;
    }
L_08958EF4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08958F1C;
      }
      goto L_08958F00;
    }
}
L_08958F00:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08958F30;
      }
      goto L_08958F08;
    }
L_08958F08:
    ctx.gpr[16] = (0u | 6u);
    hot_regs.g4 = (0u | 8u);
    ctx.gpr[19] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), hot_regs.g4);
      if (branch_taken) {
          goto L_08958F34;
      }
      goto L_08958F1C;
    }
L_08958F1C:
    ctx.gpr[16] = (0u | 4u);
    hot_regs.g4 = (0u | 6u);
    ctx.gpr[19] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(548), hot_regs.g4);
      if (branch_taken) {
          goto L_08958F34;
      }
      goto L_08958F30;
    }
L_08958F30:
    ctx.gpr[19] = (0u | 0u);
    goto L_08958F34;
L_08958F34:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(556), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x08958F60u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08958F60u) goto L_08958F60;
    return;
L_08958F60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959200;
      }
      goto L_08958F80;
    }
}
L_08958F80:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(544), ctx.gpr[16]);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(272));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(288));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(304));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(352));
    hot_regs.g4 = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), hot_regs.g4);
    goto L_08958FA4;
}
L_08958FA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g4 = (g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(504), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08958FC4;
}
L_08958FC4:
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089591DC;
      }
      goto L_08958FCC;
    }
L_08958FCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < 32 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089591DC;
      }
      goto L_08958FE0;
    }
}
L_08958FE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    hot_regs.g5 = (g4 << 8u);
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 4u);
    g4 = (hot_regs.g5 - g4);
    g16 = (ctx.gpr[21] + g4);
    g16 = (g16 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(193)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089591D0;
      }
      goto L_08959010;
    }
}
L_08959010:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(568), ctx.gpr[19]);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    hot_regs.g31 = (0x08959024u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959024u) goto L_08959024;
    return;
L_08959024:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (hot_regs.g5 & 32767u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(304));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(572), ctx.gpr[19]);
    hot_regs.g31 = (0x08959070u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 813u, 0x08953954u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959070u) goto L_08959070;
    return;
L_08959070:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7752)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f14 = hot_regs.f14 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (0x089590F4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089590F4u) goto L_089590F4;
    return;
L_089590F4:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(568)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08959108u);
    hot_regs.g6 = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959108u) goto L_08959108;
    return;
L_08959108:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 59u);
    hot_regs.g31 = (0x08959118u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 830u, 0x08953B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959118u) goto L_08959118;
    return;
L_08959118:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(572)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(384)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(388)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(392)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(344)));
    hot_regs.g4 = (hot_regs.g4 & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089591D0;
      }
      goto L_089591BC;
    }
L_089591BC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089591D0;
      }
      goto L_089591C8;
    }
L_089591C8:
    hot_regs.g31 = (0x089591D0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089591D0u) goto L_089591D0;
    return;
L_089591D0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(504)));
      if (branch_taken) {
          goto L_08958FC4;
      }
      goto L_089591DC;
    }
L_089591DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), g4);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08958FA4;
      }
      goto L_08959200;
    }
}
L_08959200:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x0895920Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895920Cu) goto L_0895920C;
    return;
L_0895920C:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08959218u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959218u) goto L_08959218;
    return;
L_08959218:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08959224u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959224u) goto L_08959224;
    return;
L_08959224:
    hot_regs.g31 = (0x0895922Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 665u, 0x088B7AD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895922Cu) goto L_0895922C;
    return;
L_0895922C:
    hot_regs.g31 = (0x08959234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 668u, 0x088B7B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959234u) goto L_08959234;
    return;
L_08959234:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x08959258u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959258u) goto L_08959258;
    return;
L_08959258:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29552));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(508), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(11016)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(556)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089592AC;
      }
      goto L_08959298;
    }
}
}
L_08959298:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 | 0u);
    g5 = (0u | 255u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 255u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089592AC;
    }
    goto L_089592AC;
}
L_089592AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(11008)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (0u | 0u);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089592E0;
      }
      goto L_089592CC;
    }
}
}
L_089592CC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 | 0u);
    g6 = (0u | 255u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 255u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_089592E0;
    }
    goto L_089592E0;
}
L_089592E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(11012)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[8] = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g7 = (0u | 0u);
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08959314;
      }
      goto L_08959300;
    }
}
}
L_08959300:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g6 | 0u);
    g6 = (0u | 255u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    if (g6 != 0u) {
    g7 = (0u | 255u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08959314;
    }
    goto L_08959314;
}
L_08959314:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g28 = ctx.gpr[28];
    g6 = (g7 << 8u);
    g5 = (g5 << 16u);
    g5 = (g5 | g6);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9004), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    g5 = (5888u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (23808u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(9004)));
    g7 = (23552u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8544)));
    g7 = (21504u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (51200u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (51457u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (39680u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089593F0;
      }
      goto L_089593E8;
    }
}
L_089593E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11764)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(11768), hot_regs.g4);
    goto L_089593F0;
L_089593F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g31 = (0x08959414u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 823u, 0x08953A08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959414u) goto L_08959414;
    return;
L_08959414:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = -vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1408));
    hot_regs.g31 = (0x08959438u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959438u) goto L_08959438;
    return;
L_08959438:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0895944Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 812u, 0x08953934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895944Cu) goto L_0895944C;
    return;
L_0895944C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08959458u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 814u, 0x0895397Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959458u) goto L_08959458;
    return;
L_08959458:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x0895946Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895946Cu) goto L_0895946C;
    return;
L_0895946C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    hot_regs.g4 = (15360u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 61u);
    hot_regs.g31 = (0x089594A0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 830u, 0x08953B30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089594A0u) goto L_089594A0;
    return;
L_089594A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (2816u << 16u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(-8));
    g6 = (15u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (g4 >> 8u);
    g5 = (g5 & g6);
    g6 = (4096u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 | g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g6 = (g4 & g6);
    hot_regs.g7 = (2048u << 16u);
    g6 = (g6 | hot_regs.g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (0u | 3u);
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(580)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(584)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(608)));
    g5 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g6) <= 0;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(560), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08959F54;
      }
      goto L_0895952C;
    }
}
L_0895952C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08959F54;
      }
      goto L_08959544;
    }
}
L_08959544:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), hot_regs.g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08959564;
      }
      goto L_0895955C;
    }
}
L_0895955C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), hot_regs.g4);
    goto L_08959564;
L_08959564:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    g4 = (static_cast<std::int32_t>(g4) < 255 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895957C;
      }
      goto L_08959574;
    }
}
L_08959574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
      if (branch_taken) {
          goto L_08959598;
      }
      goto L_0895957C;
    }
L_0895957C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (0u | 255u);
    g22 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(608)));
    hot_regs.g6 = (0u | 512u);
    g22 = (hot_regs.g6 - g22);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g22) ? 1u : 0u);
    if (g4 != 0u) {
    g22 = (0u | 255u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
        goto L_08959598;
    }
    goto L_08959598;
}
L_08959598:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(564)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(588)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g4 + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g4 + ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    ctx.gpr[20] = (g4 | 0u);
    g6 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[23] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17792));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08959E54;
      }
      goto L_089595F4;
    }
}
L_089595F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (2236u << 16u);
    g7 = (256u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g6 = (g6 + static_cast<std::uint32_t>(32304));
    ctx.gpr[8] = (2560u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(48));
    g5 = (g5 & g7);
    g5 = (g5 | ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), g6);
    g6 = (g4 << 2u);
    g4 = (g4 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), g5);
    g4 = (ctx.gpr[21] + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08959630;
}
L_08959630:
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[20]) < 6 ? 1u : 0u);
    if (ctx.gpr[30] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(528)));
        goto L_08959654;
    }
    goto L_0895963C;
L_0895963C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895964Cu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 318u, 0x089557E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895964Cu) goto L_0895964C;
    return;
L_0895964C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959658;
      }
      goto L_08959654;
    }
L_08959654:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_08959658;
L_08959658:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(540)));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(588)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g5 = (g5 + g4);
    ctx.gpr[19] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(580)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g4 = (g5 + g4);
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(608)));
    g4 = (static_cast<std::int32_t>(g4) < 255 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959A24;
      }
      goto L_0895968C;
    }
}
L_0895968C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(560)));
    g5 = (15u << 16u);
    g4 = (g4 >> 8u);
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    g6 = (4096u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g4);
    g4 = (g4 | g6);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089596E4;
}
L_089596E4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089596F4;
      }
      goto L_089596EC;
    }
L_089596EC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089599B4;
      }
      goto L_089596F4;
    }
L_089596F4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895975C;
      }
      goto L_089596FC;
    }
L_089596FC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959720;
      }
      goto L_08959704;
    }
L_08959704:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895975C;
      }
      goto L_08959720;
    }
}
L_08959720:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959750;
      }
      goto L_08959738;
    }
}
L_08959738:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08959750u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959750u) goto L_08959750;
    return;
L_08959750:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089596F4;
      }
      goto L_0895975C;
    }
L_0895975C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895986C;
      }
      goto L_08959764;
    }
L_08959764:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089597CC;
      }
      goto L_0895976C;
    }
L_0895976C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959790;
      }
      goto L_08959774;
    }
L_08959774:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089597CC;
      }
      goto L_08959790;
    }
}
L_08959790:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089597C0;
      }
      goto L_089597A8;
    }
}
L_089597A8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x089597C0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089597C0u) goto L_089597C0;
    return;
L_089597C0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959764;
      }
      goto L_089597CC;
    }
L_089597CC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_089597D4;
    }
L_089597D4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_089597DC;
    }
L_089597DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_089597F4;
    }
}
L_089597F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895982C;
      }
      goto L_0895980C;
    }
}
L_0895980C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x08959824u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959824u) goto L_08959824;
    return;
L_08959824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895985C;
      }
      goto L_0895982C;
    }
L_0895982C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895985C;
      }
      goto L_08959844;
    }
}
L_08959844:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x0895985Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895985Cu) goto L_0895985C;
    return;
L_0895985C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089597CC;
      }
      goto L_0895986C;
    }
L_0895986C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089598F0;
      }
      goto L_08959874;
    }
L_08959874:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959898;
      }
      goto L_0895987C;
    }
L_0895987C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089598F0;
      }
      goto L_08959898;
    }
}
L_08959898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089598E4;
      }
      goto L_089598B0;
    }
}
L_089598B0:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_089598E4;
      }
      goto L_089598D8;
    }
L_089598D8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089598E4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089598E4u) goto L_089598E4;
    return;
L_089598E4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895986C;
      }
      goto L_089598F0;
    }
L_089598F0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_089598F8;
    }
L_089598F8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_08959900;
    }
L_08959900:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089599AC;
      }
      goto L_08959918;
    }
}
L_08959918:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895996C;
      }
      goto L_08959930;
    }
}
L_08959930:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08959964;
      }
      goto L_08959958;
    }
L_08959958:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08959964u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959964u) goto L_08959964;
    return;
L_08959964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895999C;
      }
      goto L_0895996C;
    }
L_0895996C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895999C;
      }
      goto L_08959984;
    }
}
L_08959984:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x0895999Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895999Cu) goto L_0895999C;
    return;
L_0895999C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089598F0;
      }
      goto L_089599AC;
    }
L_089599AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089596E4;
      }
      goto L_089599B4;
    }
L_089599B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1464)));
    g5 = (256u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g6 = (15u << 16u);
    g5 = (g4 & g5);
    g4 = (g4 >> 8u);
    g4 = (g4 & g6);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    g7 = (4096u << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g4);
    g4 = (g4 | g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (2560u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (g5 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08959D5C;
      }
      goto L_08959A24;
    }
}
L_08959A24:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959A34;
      }
      goto L_08959A2C;
    }
L_08959A2C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959D5C;
      }
      goto L_08959A34;
    }
L_08959A34:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959BAC;
      }
      goto L_08959A3C;
    }
L_08959A3C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959AA4;
      }
      goto L_08959A44;
    }
L_08959A44:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959A68;
      }
      goto L_08959A4C;
    }
L_08959A4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959AA4;
      }
      goto L_08959A68;
    }
}
L_08959A68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959A98;
      }
      goto L_08959A80;
    }
}
L_08959A80:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x08959A98u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959A98u) goto L_08959A98;
    return;
L_08959A98:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A3C;
      }
      goto L_08959AA4;
    }
L_08959AA4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959B0C;
      }
      goto L_08959AAC;
    }
L_08959AAC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959AD0;
      }
      goto L_08959AB4;
    }
L_08959AB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959B0C;
      }
      goto L_08959AD0;
    }
}
L_08959AD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959B00;
      }
      goto L_08959AE8;
    }
}
L_08959AE8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08959B00u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959B00u) goto L_08959B00;
    return;
L_08959B00:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959AA4;
      }
      goto L_08959B0C;
    }
L_08959B0C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959B14;
    }
L_08959B14:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959B1C;
    }
L_08959B1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959B34;
    }
}
L_08959B34:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959B6C;
      }
      goto L_08959B4C;
    }
}
L_08959B4C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x08959B64u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959B64u) goto L_08959B64;
    return;
L_08959B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B9C;
      }
      goto L_08959B6C;
    }
L_08959B6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959B9C;
      }
      goto L_08959B84;
    }
}
L_08959B84:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08959B9Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959B9Cu) goto L_08959B9C;
    return;
L_08959B9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B0C;
      }
      goto L_08959BAC;
    }
L_08959BAC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959C30;
      }
      goto L_08959BB4;
    }
L_08959BB4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959BD8;
      }
      goto L_08959BBC;
    }
L_08959BBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959C30;
      }
      goto L_08959BD8;
    }
}
L_08959BD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959C24;
      }
      goto L_08959BF0;
    }
}
L_08959BF0:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C24;
      }
      goto L_08959C18;
    }
L_08959C18:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08959C24u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959C24u) goto L_08959C24;
    return;
L_08959C24:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959BAC;
      }
      goto L_08959C30;
    }
L_08959C30:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959C98;
      }
      goto L_08959C38;
    }
L_08959C38:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959C5C;
      }
      goto L_08959C40;
    }
L_08959C40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959C98;
      }
      goto L_08959C5C;
    }
}
L_08959C5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959C8C;
      }
      goto L_08959C74;
    }
}
L_08959C74:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08959C8Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959C8Cu) goto L_08959C8C;
    return;
L_08959C8C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C30;
      }
      goto L_08959C98;
    }
L_08959C98:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959CA0;
    }
L_08959CA0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959CA8;
    }
L_08959CA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32767u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 32767u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08959D54;
      }
      goto L_08959CC0;
    }
}
L_08959CC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959D14;
      }
      goto L_08959CD8;
    }
}
L_08959CD8:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D0C;
      }
      goto L_08959D00;
    }
L_08959D00:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08959D0Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959D0Cu) goto L_08959D0C;
    return;
L_08959D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D44;
      }
      goto L_08959D14;
    }
L_08959D14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959D44;
      }
      goto L_08959D2C;
    }
}
L_08959D2C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08959D44u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959D44u) goto L_08959D44;
    return;
L_08959D44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959C98;
      }
      goto L_08959D54;
    }
L_08959D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A24;
      }
      goto L_08959D5C;
    }
L_08959D5C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08959DE4;
      }
      goto L_08959D64;
    }
L_08959D64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(536)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11748))))));
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[14] = (0u | 7u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    ctx.gpr[15] = (0u | 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959DDC;
      }
      goto L_08959D7C;
    }
}
L_08959D7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g21 = ctx.gpr[21];
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 << 2u);
    g4 = (g21 + g4);
    g6 = (g4 + static_cast<std::uint32_t>(8148));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g7 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), g6);
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[14]));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[15]));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g5));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    g6 = (g6 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(11768), g6);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8152))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08959D7C;
      }
      goto L_08959DDC;
    }
}
L_08959DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08959E1C;
      }
      goto L_08959DE4;
    }
L_08959DE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(536)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11748))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08959E1C;
      }
      goto L_08959DF4;
    }
}
L_08959DF4:
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    ctx.gpr[18] = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(8148));
    hot_regs.g31 = (0x08959E10u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 681u, 0x08957228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959E10u) goto L_08959E10;
    return;
L_08959E10:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8152))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08959DF4;
      }
      goto L_08959E1C;
    }
L_08959E1C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08959E2Cu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 329u, 0x08955ACCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959E2Cu) goto L_08959E2C;
    return;
L_08959E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    g6 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), g4);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08959630;
      }
      goto L_08959E54;
    }
}
L_08959E54:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(496)));
    g5 = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    g4 = (g4 & 255u);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57088u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57344u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57600u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (59136u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(0u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    f12 = hot_regs.f13 + f12;
    g4 = (18176u << 16u);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (50944u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (23808u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (56319u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4103));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895A298;
      }
      goto L_08959F54;
    }
}
}
L_08959F54:
    hot_regs.g31 = (0x08959F5Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 693u, 0x0895742Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959F5Cu) goto L_08959F5C;
    return;
L_08959F5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(564)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (g4 + ctx.gpr[19]);
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    ctx.gpr[18] = (g4 | 0u);
    g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[20] = (0u | 7u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895A1B8;
      }
      goto L_08959FA8;
    }
}
L_08959FA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17792));
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (g4 << 2u);
    g4 = (g4 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), g5);
    g4 = (ctx.gpr[21] + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08959FD8;
}
L_08959FD8:
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    if (ctx.gpr[30] == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(528)));
        goto L_08959FFC;
    }
    goto L_08959FE4;
L_08959FE4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08959FF4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 318u, 0x089557E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08959FF4u) goto L_08959FF4;
    return;
L_08959FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A000;
      }
      goto L_08959FFC;
    }
L_08959FFC:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    goto L_0895A000;
L_0895A000:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(524)));
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(580)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    g4 = (g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895A084;
      }
      goto L_0895A01C;
    }
}
L_0895A01C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895A0C8;
      }
      goto L_0895A024;
    }
L_0895A024:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895A070;
      }
      goto L_0895A03C;
    }
}
L_0895A03C:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_vfpu_scalar_bits_ct<76u>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<117u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<76u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<117u, 1u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<21u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 21u, 4u, 3u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A070;
      }
      goto L_0895A064;
    }
L_0895A064:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895A070u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A070u) goto L_0895A070;
    return;
L_0895A070:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(68));
    { const bool branch_taken = g16 != ctx.gpr[17];
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895A024;
      }
      goto L_0895A07C;
    }
}
L_0895A07C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A0C8;
      }
      goto L_0895A084;
    }
L_0895A084:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895A0C8;
      }
      goto L_0895A08C;
    }
L_0895A08C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895A0BC;
      }
      goto L_0895A0A4;
    }
}
L_0895A0A4:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x0895A0BCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 285u, 0x08955444u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A0BCu) goto L_0895A0BC;
    return;
L_0895A0BC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(68));
    { const bool branch_taken = g16 != ctx.gpr[17];
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895A08C;
      }
      goto L_0895A0C8;
    }
}
L_0895A0C8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895A148;
      }
      goto L_0895A0D0;
    }
L_0895A0D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(520)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11748))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895A140;
      }
      goto L_0895A0E0;
    }
}
L_0895A0E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g21 = ctx.gpr[21];
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 << 2u);
    g4 = (g21 + g4);
    g5 = (g4 + static_cast<std::uint32_t>(8148));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g6 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[20]));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[23]));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[19]));
    g5 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(11768)));
    g5 = (g5 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g21 + static_cast<std::uint32_t>(11768), g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8152))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895A0E0;
      }
      goto L_0895A140;
    }
}
L_0895A140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A180;
      }
      goto L_0895A148;
    }
L_0895A148:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(520)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(11748))))));
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895A180;
      }
      goto L_0895A158;
    }
}
L_0895A158:
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    ctx.gpr[17] = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(8148));
    hot_regs.g31 = (0x0895A174u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 681u, 0x08957228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A174u) goto L_0895A174;
    return;
L_0895A174:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8152))))));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895A158;
      }
      goto L_0895A180;
    }
L_0895A180:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895A190u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 329u, 0x08955ACCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A190u) goto L_0895A190;
    return;
L_0895A190:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(524)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    g6 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), g4);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08959FD8;
      }
      goto L_0895A1B8;
    }
}
L_0895A1B8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(496)));
    g5 = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    g4 = (g4 & 255u);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57088u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57344u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (57600u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (59136u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(0u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    f12 = hot_regs.f13 + f12;
    g4 = (18176u << 16u);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (50944u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g5 = (56319u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4103));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_0895A298;
}
}
L_0895A298:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0895A598;
      }
      goto L_0895A2A8;
    }
L_0895A2A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11768)));
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11764)));
    g4 = (g4 - g5);
    g5 = (0u | 12u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g17 = (ctx.lo);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17716)));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17716)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
        goto L_0895A2D0;
    }
    goto L_0895A2D0;
}
L_0895A2D0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-17716), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11764)));
    hot_regs.g31 = (0x0895A2E0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11768)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 754u, 0x08B6BD34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A2E0u) goto L_0895A2E0;
    return;
L_0895A2E0:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 255u);
    ctx.gpr[19] = (0u | 240u);
    ctx.gpr[22] = (0u | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(564)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11764)));
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11768)));
    { const bool branch_taken = ctx.gpr[16] == g4;
    g4 = (256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895A598;
      }
      goto L_0895A324;
    }
}
L_0895A324:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = (2560u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(560)));
    g4 = (hot_regs.g6 & g4);
    g4 = (g4 | hot_regs.g5);
    ctx.gpr[23] = (0u | 7u);
    g30 = (56319u << 16u);
    g30 = (g30 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(532), g4);
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_0895A348;
}
L_0895A348:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (4096u << 16u);
    ctx.gpr[10] = (15u << 16u);
    { const bool branch_taken = hot_regs.g6 == ctx.gpr[22];
    ctx.gpr[11] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(552)));
      if (branch_taken) {
          goto L_0895A414;
      }
      goto L_0895A360;
    }
L_0895A360:
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A3BC;
      }
      goto L_0895A36C;
    }
L_0895A36C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(560)));
    g6 = (g6 >> 8u);
    g6 = (g6 & ctx.gpr[10]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g6);
    g4 = (g6 | g4);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895A414;
      }
      goto L_0895A3BC;
    }
}
L_0895A3BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g7 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1464)));
    g6 = (g7 & g6);
    g7 = (g7 >> 8u);
    g7 = (g7 & ctx.gpr[10]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g7);
    g4 = (g7 | g4);
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (2560u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_0895A414;
}
L_0895A414:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0895A464;
      }
      goto L_0895A420;
    }
L_0895A420:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (23808u << 16u);
    g18 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    g4 = (g18 | g4);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (g18 + static_cast<std::uint32_t>(-16));
    g6 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0895A464;
      }
      goto L_0895A450;
    }
}
L_0895A450:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g4 | 0u);
    g4 = (0u | 240u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (g4 != 0u) {
    g19 = (0u | 240u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_0895A464;
    }
    goto L_0895A464;
}
L_0895A464:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0895A49C;
      }
      goto L_0895A470;
    }
L_0895A470:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0895A488;
      }
      goto L_0895A47C;
    }
L_0895A47C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895A488u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 329u, 0x08955ACCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A488u) goto L_0895A488;
    return;
L_0895A488:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895A49Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 318u, 0x089557E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A49Cu) goto L_0895A49C;
    return;
L_0895A49C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0895A4D0;
      }
      goto L_0895A4A4;
    }
L_0895A4A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (56319u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(7));
    g5 = (ctx.gpr[19] << 8u);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895A4D0;
}
L_0895A4D0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A4F0;
      }
      goto L_0895A4DC;
    }
L_0895A4DC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x0895A4E8u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 681u, 0x08957228u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A4E8u) goto L_0895A4E8;
    return;
L_0895A4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A508;
      }
      goto L_0895A4F0;
    }
L_0895A4F0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<44u>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vh2f(21u, 12u, 2u);
    hot_regs.g31 = (0x0895A508u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 288u, 0x089554A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A508u) goto L_0895A508;
    return;
L_0895A508:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0895A588;
      }
      goto L_0895A510;
    }
L_0895A510:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(568), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[19] << 8u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(572), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g6 = (59136u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (hot_regs.g4 - ctx.gpr[20]);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0895A560u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A560u) goto L_0895A560;
    return;
L_0895A560:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[30]);
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g5 = (59136u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(0), g4);
    g23 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(568)));
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(572)));
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_0895A588;
}
L_0895A588:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(11768)));
    { const bool branch_taken = g16 != hot_regs.g4;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895A348;
      }
      goto L_0895A598;
    }
}
L_0895A598:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    g5 = (56319u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4102));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (59136u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(1468), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f12 = hot_regs.f13 + f12;
    g5 = (18176u << 16u);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (21504u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (23808u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (23808u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (16256u << 16u);
    f12 = std::bit_cast<float>(g6);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    g7 = (18432u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    g7 = (18688u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (51456u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1464)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g7 = (15u << 16u);
    g6 = (g5 & g6);
    g5 = (g5 >> 8u);
    g5 = (g5 & g7);
    g7 = (4096u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 | g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (2560u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (g29 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895A72C;
      }
      goto L_0895A718;
    }
}
}
L_0895A718:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A72C;
      }
      goto L_0895A724;
    }
L_0895A724:
    hot_regs.g31 = (0x0895A72Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A72Cu) goto L_0895A72C;
    return;
L_0895A72C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(576)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(580)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(584)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(588)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(592)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(596)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(600)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(604)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(608)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(616)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(624));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895A760:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    g6 = (g6 & 255u);
    g7 = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(g7));
    g7 = (0u | 0u);
    g16 = (2236u << 16u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g7));
    g16 = (g16 + static_cast<std::uint32_t>(29552));
    g18 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.f22 = std::bit_cast<float>(0u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 3u);
    g7 = (g5 + g5);
    g7 = (g5 + g7);
    g7 = (g18 + g7);
    ctx.gpr[30] = (g7 | 0u);
    g5 = (0u | 0u);
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g6 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895A86C;
      }
      goto L_0895A7F4;
    }
}
L_0895A7F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (4608u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(277));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (3840u << 16u);
    g4 = (hot_regs.g7 & g4);
    g5 = (g4 >> 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (15u << 16u);
    g4 = (g5 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g4);
    g5 = (4096u << 16u);
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (256u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (hot_regs.g7 & g5);
    hot_regs.g6 = (256u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895A86C;
}
L_0895A86C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g7);
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g4);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g7;
    ctx.gpr[20] = (256u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895B2C0;
      }
      goto L_0895A88C;
    }
}
L_0895A88C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (255u << 16u);
    ctx.gpr[19] = (0u | 1u);
    g4 = (16384u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), g4);
    g4 = (0u & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), g4);
    hot_regs.g4 = g4;
    goto L_0895A8B4;
}
L_0895A8B4:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(7), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(11), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<12u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(13u, 12u, 2u);
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<13u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<45u>());
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<77u>());
    ctx.gpr[11] = (ctx.vfpu_scalar_bits_ct<109u>());
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f20 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(hot_regs.f12)) && ctx.fpr[24] == hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895A92C;
      }
      goto L_0895A904;
    }
L_0895A904:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (18432u << 16u);
    g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895A92C;
}
L_0895A92C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[28]) || std::isnan(hot_regs.f13)) && ctx.fpr[28] == hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895A964;
      }
      goto L_0895A93C;
    }
L_0895A93C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (18688u << 16u);
    g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895A964;
}
L_0895A964:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895AF54;
      }
      goto L_0895A970;
    }
L_0895A970:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = g5 == 0u;
    g5 = (23552u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895A998;
      }
      goto L_0895A97C;
    }
}
L_0895A97C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9004)));
    g5 = (g6 | g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895A998;
}
L_0895A998:
    hot_regs.g5 = (0u | 65535u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
      if (branch_taken) {
          goto L_0895AF3C;
      }
      goto L_0895A9A4;
    }
L_0895A9A4:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x0895A9B0u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 615u, 0x08956F20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A9B0u) goto L_0895A9B0;
    return;
L_0895A9B0:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0895A9BCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 616u, 0x08956F40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895A9BCu) goto L_0895A9BC;
    return;
L_0895A9BC:
    ctx.gpr[21] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (19200u << 16u);
    ctx.gpr[10] = (18944u << 16u);
    hot_regs.g5 = (16000u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_0895AF1C;
      }
      goto L_0895A9D8;
    }
L_0895A9D8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (53248u << 16u);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g6 = (g6 & 15u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = g6 == g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895ABE0;
      }
      goto L_0895AA1C;
    }
}
}
L_0895AA1C:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895AA64;
      }
      goto L_0895AA24;
    }
L_0895AA24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (g4 >> 8u);
    g4 = (g4 | ctx.gpr[10]);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g5 = (g5 >> 8u);
    g5 = (g5 | ctx.gpr[9]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895ABDC;
      }
      goto L_0895AA64;
    }
}
L_0895AA64:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (hot_regs.g6 >> 2u);
    g4 = (g4 & 3u);
    hot_regs.g5 = (hot_regs.g6 & 3u);
    { const bool branch_taken = g4 != ctx.gpr[19];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895AA84;
      }
      goto L_0895AA80;
    }
}
L_0895AA80:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1476)));
    goto L_0895AA84;
L_0895AA84:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0895AA90;
      }
      goto L_0895AA8C;
    }
L_0895AA8C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1480)));
    goto L_0895AA90;
L_0895AA90:
    ctx.gpr[11] = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895AAB8;
      }
      goto L_0895AA9C;
    }
L_0895AA9C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1476)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g7);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    goto L_0895AAB8;
}
L_0895AAB8:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895AADC;
      }
      goto L_0895AAC0;
    }
L_0895AAC0:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1480)));
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g7);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f15)));
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f13 = f13;
    goto L_0895AADC;
}
L_0895AADC:
    ctx.gpr[11] = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895AAF0;
      }
      goto L_0895AAE8;
    }
L_0895AAE8:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0895AB30;
      }
      goto L_0895AAF0;
    }
L_0895AAF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (g4 >> 8u);
    g4 = (g4 | ctx.gpr[10]);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g5 = (g5 >> 8u);
    g5 = (g5 | ctx.gpr[9]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895AB70;
      }
      goto L_0895AB30;
    }
}
L_0895AB30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 >> 8u);
    g4 = (g4 | ctx.gpr[10]);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (g5 >> 8u);
    g5 = (g5 | ctx.gpr[9]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[19]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895AB70;
}
L_0895AB70:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17279u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11136)));
    { const float fs = hot_regs.f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895ABAC;
      }
      goto L_0895AB98;
    }
}
}
L_0895AB98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 255u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    hot_regs.g4 = (0u | 255u);
    hot_regs.g5 = g5;
        goto L_0895ABA8;
    }
    goto L_0895ABA8;
}
L_0895ABA8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_0895ABAC;
L_0895ABAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (1u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(257));
    hot_regs.g7 = (23552u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g5)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g4 = (g4 | hot_regs.g7);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[19]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895ABDC;
}
L_0895ABDC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g6);
    goto L_0895ABE0;
L_0895ABE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    g4 = (3840u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895AEA0;
      }
      goto L_0895ABEC;
    }
}
L_0895ABEC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895ABFCu);
    hot_regs.g6 = (0u | 1024u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895ABFCu) goto L_0895ABFC;
    return;
L_0895ABFC:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (7680u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 112u);
    g6 = (49664u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g5 = (g5 >> 4u);
    g5 = (g5 << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g5 = (49920u << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 & 7u);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0))))));
    g6 = (g5 & 8u);
    g6 = (g6 >> 3u);
    hot_regs.g7 = (50944u << 16u);
    g5 = (g5 & 128u);
    g5 = (g5 >> 7u);
    g6 = (g6 | hot_regs.g7);
    g5 = (g5 << 8u);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g5 = (50433u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-253));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0))))));
    g4 = (g4 & 7u);
    g13 = (g4 ^ 4u);
    g13 = (g13 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g10 = (0u + static_cast<std::uint32_t>(-16));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g10 = (g4 & g10);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1))))));
    hot_regs.g2 = (g4 & 15u);
    g11 = (g4 & 240u);
    g11 = (g11 >> 4u);
    g6 = (ctx.gpr[19] << (hot_regs.g2 & 31u));
    ctx.gpr[12] = (g10 & ctx.gpr[20]);
    g3 = (g10 >> 8u);
    { const bool branch_taken = g13 == 0u;
    g3 = (g3 & ctx.gpr[22]);
    ctx.gpr[3] = g3;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_0895AD00;
      }
      goto L_0895ACF0;
    }
}
L_0895ACF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    g4 = (g4 >> 31u);
    g6 = (g6 + g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_0895AD00;
}
L_0895AD00:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g6) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AD10;
      }
      goto L_0895AD0C;
    }
L_0895AD0C:
    hot_regs.g6 = (0u | 16u);
    goto L_0895AD10;
L_0895AD10:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 112u);
    g5 = (g5 >> 4u);
    g5 = (static_cast<std::int32_t>(g5) < 0 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895ADF4;
      }
      goto L_0895AD2C;
    }
}
L_0895AD2C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    if (ctx.gpr[13] != 0u) {
    hot_regs.g5 = (g6 + g6);
        goto L_0895AD38;
    }
    goto L_0895AD38;
}
L_0895AD38:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    g7 = (g4 + static_cast<std::uint32_t>(160));
    g7 = (g7 << 24u);
    g7 = (g7 | ctx.gpr[12]);
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g7);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g7 = (g7 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g7);
    g8 = (g4 + static_cast<std::uint32_t>(168));
    g8 = (g8 << 24u);
    g5 = (g8 | g5);
    g5 = (g5 | g3);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    g7 = (g4 + static_cast<std::uint32_t>(184));
    g7 = (g7 << 24u);
    g7 = (g7 | g2);
    g8 = (g11 << 8u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    g5 = (ctx.gpr[19] << (g11 & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g6)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (ctx.lo);
    g10 = (g10 + g5);
    g2 = (g2 + static_cast<std::uint32_t>(-1));
    g11 = (g11 + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::int32_t>(hot_regs.g6) < 17 ? 1u : 0u);
    ctx.gpr[12] = (g10 & ctx.gpr[20]);
    g3 = (g10 >> 8u);
    { const bool branch_taken = g5 != 0u;
    g3 = (g3 & ctx.gpr[22]);
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_0895ADD8;
      }
      goto L_0895ADC8;
    }
}
L_0895ADC8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    g5 = (g5 >> 31u);
    g6 = (g6 + g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895ADD8;
}
L_0895ADD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    g5 = (g5 & 112u);
    g5 = (g5 >> 4u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895AD2C;
      }
      goto L_0895ADF4;
    }
}
L_0895ADF4:
    hot_regs.g4 = (0u | 32u);
    if (ctx.gpr[13] != 0u) {
    hot_regs.g4 = (0u | 2u);
        goto L_0895AE00;
    }
    goto L_0895AE00;
L_0895AE00:
    hot_regs.g5 = (45056u << 16u);
    hot_regs.g5 = (ctx.gpr[12] | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (45312u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[3] | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (50176u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (51968u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (2816u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (0x0895AE88u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895AE88u) goto L_0895AE88;
    return;
L_0895AE88:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0895AE9Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895AE9Cu) goto L_0895AE9C;
    return;
L_0895AE9C:
    hot_regs.g4 = (3840u << 16u);
    goto L_0895AEA0;
L_0895AEA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (g5 & hot_regs.g4);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895AEC0;
      }
      goto L_0895AEB4;
    }
}
L_0895AEB4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895AEF0;
      }
      goto L_0895AEC0;
    }
L_0895AEC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (15u << 16u);
    hot_regs.g6 = (g4 >> 8u);
    g5 = (hot_regs.g6 & g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (4096u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895AEF0;
}
L_0895AEF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (2560u << 16u);
    g5 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & ctx.gpr[20]);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895AF34;
      }
      goto L_0895AF1C;
    }
}
L_0895AF1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (7680u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0895AF34;
}
L_0895AF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AF54;
      }
      goto L_0895AF3C;
    }
L_0895AF3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (7680u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0895AF54;
}
L_0895AF54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    hot_regs.g5 = (g4 & 65535u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (1028u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895AFC4;
      }
      goto L_0895AF6C;
    }
}
L_0895AF6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1468)));
    f12 = f12 + ctx.fpr[26];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f12 = hot_regs.f13 + f12;
    g5 = (18176u << 16u);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (0u | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(g6));
    g5 = (7424u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_0895AFC4;
}
}
L_0895AFC4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g17 = (g17 & 32767u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895B228;
      }
      goto L_0895AFD8;
    }
}
L_0895AFD8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8408)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895B194;
      }
      goto L_0895AFEC;
    }
L_0895AFEC:
    ctx.set_vfpu_scalar_bits_ct<13u>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_vfpu_scalar_bits_ct<45u>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_vfpu_scalar_bits_ct<14u>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.execute_vfpu_vx2i(12u, 13u, 2u, 3u);
    ctx.execute_vfpu_vx2i(13u, 14u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<4u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 4u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 4u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<13u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(31u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<13u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<52u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 52u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B214;
      }
      goto L_0895B034;
    }
L_0895B034:
    ctx.execute_vfpu_vcmp_ct<53u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 53u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B214;
      }
      goto L_0895B060;
    }
L_0895B060:
    ctx.execute_vfpu_vcmp_ct<54u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 54u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B214;
      }
      goto L_0895B08C;
    }
L_0895B08C:
    ctx.execute_vfpu_vcmp_ct<55u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<1u, 108u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<1u, 12u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<33u, 13u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<33u, 44u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<65u, 45u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<65u, 76u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(34u, 1u, 55u, 4u);
    ctx.execute_vfpu_vcmp_ct<34u, 31u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B214;
      }
      goto L_0895B0B8;
    }
L_0895B0B8:
    ctx.execute_vfpu_vcmp_ct<48u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 48u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B168;
      }
      goto L_0895B0E4;
    }
L_0895B0E4:
    ctx.execute_vfpu_vcmp_ct<49u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 49u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B168;
      }
      goto L_0895B110;
    }
L_0895B110:
    ctx.execute_vfpu_vcmp_ct<50u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 50u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B168;
      }
      goto L_0895B13C;
    }
L_0895B13C:
    ctx.execute_vfpu_vcmp_ct<51u, 31u, 3u, 6u>();
    ctx.execute_vfpu_vcmov_ct<0u, 12u, 1u, 0u, true>();
    ctx.execute_vfpu_vcmov_ct<0u, 108u, 1u, 0u, false>();
    ctx.execute_vfpu_vcmov_ct<32u, 44u, 1u, 1u, true>();
    ctx.execute_vfpu_vcmov_ct<32u, 13u, 1u, 1u, false>();
    ctx.execute_vfpu_vcmov_ct<64u, 76u, 1u, 2u, true>();
    ctx.execute_vfpu_vcmov_ct<64u, 45u, 1u, 2u, false>();
    ctx.execute_vfpu_vhdp(2u, 0u, 51u, 4u);
    ctx.execute_vfpu_vcmp_ct<2u, 31u, 1u, 2u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B194;
      }
      goto L_0895B168;
    }
L_0895B168:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x0895B174u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 246u, 0x08A09B2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B174u) goto L_0895B174;
    return;
L_0895B174:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (39680u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895B214;
      }
      goto L_0895B194;
    }
}
L_0895B194:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (4608u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(277));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895B1FC;
      }
      goto L_0895B1B4;
    }
}
L_0895B1B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (15u << 16u);
    g6 = (ctx.gpr[30] >> 8u);
    g5 = (g6 & g5);
    g6 = (4096u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 | g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (256u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g7 = (ctx.gpr[30] & ctx.gpr[20]);
    g6 = (hot_regs.g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895B1FC;
}
L_0895B1FC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[17] | g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0895B214;
}
L_0895B214:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 << 3u);
    g4 = (g17 + g4);
    g4 = (g17 + g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[30] + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895B240;
      }
      goto L_0895B228;
    }
}
L_0895B228:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[17] | g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0895B240;
}
L_0895B240:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 32768u);
    g4 = (g4 >> 15u);
    g4 = (g4 & 65535u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895B2B0;
      }
      goto L_0895B258;
    }
}
L_0895B258:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1468)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f12 = hot_regs.f13 + f12;
    g4 = (18176u << 16u);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    g5 = (7424u << 16u);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1472), static_cast<std::uint8_t>(0u));
    g4 = (g4 & 255u);
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_0895B2B0;
}
}
L_0895B2B0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = g18 != hot_regs.g4;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0895A8B4;
      }
      goto L_0895B2C0;
    }
}
L_0895B2C0:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B2EC;
      }
      goto L_0895B2CC;
    }
L_0895B2CC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9004)));
    g6 = (23552u << 16u);
    g5 = (g5 | g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895B2EC;
}
L_0895B2EC:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B33C;
      }
      goto L_0895B2F8;
    }
L_0895B2F8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g6 = (g6 >> 8u);
    g7 = (18944u << 16u);
    g6 = (g6 | g7);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g6);
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    g7 = (g7 >> 8u);
    ctx.gpr[8] = (19200u << 16u);
    g7 = (g7 | ctx.gpr[8]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g6);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_0895B33C;
}
L_0895B33C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (hot_regs.g5 | hot_regs.g4);
    g2 = (0u < g2 ? 1u : 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895B38C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8976), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8980), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8984), 0u);
    hot_regs.g31 = (0x0895B3A8u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17712));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B3A8u) goto L_0895B3A8;
    return;
L_0895B3A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8992), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8996), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9000), 0u);
    hot_regs.g31 = (0x0895B3BCu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17700));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B3BCu) goto L_0895B3BC;
    return;
L_0895B3BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895B3C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0895B3E0u);
    hot_regs.g4 = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B3E0u) goto L_0895B3E0;
    return;
L_0895B3E0:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_0895B400;
      }
      goto L_0895B3EC;
    }
L_0895B3EC:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[16] = (g5 | 0u);
    goto L_0895B400;
}
L_0895B400:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895B41Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 172u, 0x08945234u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B41Cu) goto L_0895B41C;
    return;
L_0895B41C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895B430u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_0895B9C8;
}
L_0895B430:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2198u << 16u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(-17500));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), 0u);
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), 0u);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895B470:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g17 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == g4;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895B4D4;
      }
      goto L_0895B490;
    }
}
L_0895B490:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B4A4;
      }
      goto L_0895B498;
    }
L_0895B498:
    hot_regs.g31 = (0x0895B4A0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 256u, 0x0881DD70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B4A0u) goto L_0895B4A0;
    return;
L_0895B4A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_0895B4A4;
L_0895B4A4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B4D0;
      }
      goto L_0895B4AC;
    }
L_0895B4AC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(8))))));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 << 16u);
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(g5) > 0;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895B4D0;
      }
      goto L_0895B4C8;
    }
}
L_0895B4C8:
    hot_regs.g31 = (0x0895B4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 244u, 0x0881DC84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B4D0u) goto L_0895B4D0;
    return;
L_0895B4D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_0895B4D4;
L_0895B4D4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_0895B4EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0895B50Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B50Cu) goto L_0895B50C;
    return;
L_0895B50C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0895B520u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B520u) goto L_0895B520;
    return;
L_0895B520:
    hot_regs.g31 = (0x0895B528u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 508u, 0x08B3E13Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B528u) goto L_0895B528;
    return;
L_0895B528:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B538;
      }
      goto L_0895B530;
    }
L_0895B530:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0895B558;
      }
      goto L_0895B538;
    }
L_0895B538:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u | 8u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
    g4 = (0u | 1u);
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g4));
    hot_regs.g2 = (g16 | 0u);
    hot_regs.g4 = g4;
    goto L_0895B558;
}
L_0895B558:
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
L_0895B56C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895B5D8;
      }
      goto L_0895B58C;
    }
}
L_0895B58C:
    hot_regs.g31 = (0x0895B594u);
    hot_regs.g4 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B594u) goto L_0895B594;
    return;
L_0895B594:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), g2);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(0), hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(12), g4);
    g16 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g16 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895B5D8;
      }
      goto L_0895B5CC;
    }
}
L_0895B5CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), g4);
    hot_regs.g4 = g4;
    goto L_0895B5D8;
}
L_0895B5D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_0895B5F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x0895B614u);
    hot_regs.g4 = (hot_regs.g5 << 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B614u) goto L_0895B614;
    return;
L_0895B614:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), hot_regs.g2);
      if (branch_taken) {
          goto L_0895B674;
      }
      goto L_0895B61C;
    }
L_0895B61C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895B674;
      }
      goto L_0895B62C;
    }
}
L_0895B62C:
    hot_regs.g4 = (hot_regs.g5 << 6u);
    ctx.gpr[16] = (ctx.gpr[16] + hot_regs.g4);
    goto L_0895B634;
L_0895B634:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    g7 = (g7 + g4);
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (g5 | 0u);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(-64));
    { const bool branch_taken = g7 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(-64));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895B634;
      }
      goto L_0895B674;
    }
}
L_0895B674:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
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
L_0895B68C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(268), hot_regs.g31);
    hot_regs.g31 = (0x0895B6B0u);
    hot_regs.g4 = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B6B0u) goto L_0895B6B0;
    return;
L_0895B6B0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0895B6C4u);
    hot_regs.g6 = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B6C4u) goto L_0895B6C4;
    return;
L_0895B6C4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0895B6D4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    goto L_0895B5F0;
L_0895B6D4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B6EC;
      }
      goto L_0895B6DC;
    }
L_0895B6DC:
    hot_regs.g31 = (0x0895B6E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B6E4u) goto L_0895B6E4;
    return;
L_0895B6E4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0895B6F0;
      }
      goto L_0895B6EC;
    }
L_0895B6EC:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_0895B6F0;
L_0895B6F0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895B708:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    hot_regs.g31 = (0x0895B73Cu);
    ctx.gpr[18] = (hot_regs.g5 & 255u);
    hot_regs.g29 = g29;
    goto L_0895B3C8;
}
L_0895B73C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B7A4;
      }
      goto L_0895B748;
    }
L_0895B748:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g5 = (g16 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    g6 = (g17 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(16), g4);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    g4 = (g17 | 0u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g5));
    hot_regs.g31 = (0x0895B794u);
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895B9C8;
}
L_0895B794:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0895B7AC;
      }
      goto L_0895B79C;
    }
L_0895B79C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B8C8;
      }
      goto L_0895B7A4;
    }
L_0895B7A4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_0895B908;
      }
      goto L_0895B7AC;
    }
L_0895B7AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g5 - g4);
    ctx.gpr[19] = (g4 + hot_regs.g6);
    hot_regs.g31 = (0x0895B7C4u);
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895B4EC;
}
L_0895B7C4:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0895B7D8u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B7D8u) goto L_0895B7D8;
    return;
L_0895B7D8:
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    hot_regs.g31 = (0x0895B7E4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 508u, 0x08B3E13Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B7E4u) goto L_0895B7E4;
    return;
L_0895B7E4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895B858;
      }
      goto L_0895B7FC;
    }
}
L_0895B7FC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[19]);
    hot_regs.g31 = (0x0895B80Cu);
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 484u, 0x08B3DF9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B80Cu) goto L_0895B80C;
    return;
L_0895B80C:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x0895B820u);
    hot_regs.g6 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B820u) goto L_0895B820;
    return;
L_0895B820:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x0895B834u);
    hot_regs.g7 = (0u | 0u);
    goto L_0895B56C;
L_0895B834:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0895B840u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 509u, 0x08B3E150u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B840u) goto L_0895B840;
    return;
L_0895B840:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g5 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895B7FC;
      }
      goto L_0895B858;
    }
}
L_0895B858:
    hot_regs.g31 = (0x0895B860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x08968F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B860u) goto L_0895B860;
    return;
L_0895B860:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B8AC;
      }
      goto L_0895B86C;
    }
L_0895B86C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895B878u);
    hot_regs.g5 = (0u | 0u);
    goto L_0895B68C;
L_0895B878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0895B888u);
    hot_regs.g4 = (hot_regs.g4 << 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B888u) goto L_0895B888;
    return;
L_0895B888:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(12), hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0895B8A0u);
    hot_regs.g6 = (hot_regs.g6 << 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B8A0u) goto L_0895B8A0;
    return;
L_0895B8A0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0895B8ACu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 227u, 0x08968F90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B8ACu) goto L_0895B8AC;
    return;
L_0895B8AC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0895B8BCu);
    hot_regs.g6 = (0u | 0u);
    goto L_0895B470;
L_0895B8BC:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0895B8D8;
      }
      goto L_0895B8C8;
    }
L_0895B8C8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0895B8D8u);
    hot_regs.g6 = (0u | 0u);
    goto L_0895B470;
L_0895B8D8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0895B8E4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 698u, 0x0887F368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B8E4u) goto L_0895B8E4;
    return;
L_0895B8E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(44)));
    hot_regs.g2 = (g17 | 0u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store16(g17 + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_0895B908;
}
L_0895B908:
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
L_0895B934:
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<40u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<41u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(96);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<42u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(112);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<43u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vmmov(24u, 0u, 4u);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<31u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 40u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 16u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 36u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 24u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 20u, 4u);
      ctx.eat_vfpu_prefixes(); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895B97C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0895B994u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 702u, 0x0887F3C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B994u) goto L_0895B994;
    return;
L_0895B994:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x0895B9A4u);
    hot_regs.g6 = (0u | 0u);
    goto L_0895B470;
L_0895B9A4:
    hot_regs.g31 = (0x0895B9ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 676u, 0x089731E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B9ACu) goto L_0895B9AC;
    return;
L_0895B9AC:
    hot_regs.g31 = (0x0895B9B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B9B4u) goto L_0895B9B4;
    return;
L_0895B9B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
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
L_0895B9C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0895B9DCu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 671u, 0x0897317Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895B9DCu) goto L_0895B9DC;
    return;
L_0895B9DC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
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
L_0895B9F0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g2 = (g4 + static_cast<std::uint32_t>(32));
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895BA00:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    hot_regs.g2 = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(53), hot_regs.g2));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(hot_regs.g6 + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    hot_regs.g2 = ((hot_regs.g2 & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((hot_regs.g5 & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(40), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BAA4:
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 56u, 3u);
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 5u, vfpu_side); }
    ctx.execute_vfpu_vscl_ct<0u, 24u, 8u, 3u>();
    ctx.execute_vfpu_vscl_ct<1u, 25u, 40u, 3u>();
    ctx.execute_vfpu_vscl_ct<2u, 26u, 72u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<65u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<2u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<66u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<3u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<35u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<67u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(44), ctx.gpr[14]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895BBA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), hot_regs.g31);
    g5 = (g4 | 0u);
    g6 = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(g6));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    g6 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g6);
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895BC64;
      }
      goto L_0895BC08;
    }
}
L_0895BC08:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_0895BC28;
      }
      goto L_0895BC18;
    }
L_0895BC18:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 << 2u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g7 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    goto L_0895BC28;
}
L_0895BC28:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (0u | 1u);
    if (g5 != hot_regs.g7) {
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g5 = g5;
        goto L_0895BC68;
    }
    goto L_0895BC38;
}
L_0895BC38:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895BC54;
      }
      goto L_0895BC44;
    }
}
L_0895BC44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895BC54;
}
L_0895BC54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(58)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0895BC64;
}
L_0895BC64:
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    goto L_0895BC68;
L_0895BC68:
    hot_regs.g31 = (0x0895BC70u);
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BC70u) goto L_0895BC70;
    return;
L_0895BC70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    ctx.gpr[16] = (0u | 0u);
    g22 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_0895BCB4;
      }
      goto L_0895BC88;
    }
}
L_0895BC88:
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    goto L_0895BC8C;
L_0895BC8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g31 = (0x0895BC9Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 744u, 0x0887F7E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BC9Cu) goto L_0895BC9C;
    return;
L_0895BC9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895BC8C;
      }
      goto L_0895BCB4;
    }
}
L_0895BCB4:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[18] = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    hot_regs.g31 = (0x0895BCC8u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 226u, 0x08968F88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BCC8u) goto L_0895BCC8;
    return;
L_0895BCC8:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0895BCD4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 180u, 0x08945288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BCD4u) goto L_0895BCD4;
    return;
L_0895BCD4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0895BCEC;
      }
      goto L_0895BCE4;
    }
L_0895BCE4:
    hot_regs.g31 = (0x0895BCECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 779u, 0x08A07430u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BCECu) goto L_0895BCEC;
    return;
L_0895BCEC:
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE8C;
      }
      goto L_0895BCF8;
    }
L_0895BCF8:
    hot_regs.g31 = (0x0895BD00u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 284u, 0x089694F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BD00u) goto L_0895BD00;
    return;
L_0895BD00:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (0x0895BD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 287u, 0x0896950Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BD10u) goto L_0895BD10;
    return;
L_0895BD10:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    if (hot_regs.g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
        goto L_0895BD30;
    }
    goto L_0895BD20;
L_0895BD20:
    hot_regs.g31 = (0x0895BD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BD28u) goto L_0895BD28;
    return;
L_0895BD28:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    goto L_0895BD30;
L_0895BD30:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
      if (branch_taken) {
          goto L_0895BE3C;
      }
      goto L_0895BD38;
    }
L_0895BD38:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
      if (branch_taken) {
          goto L_0895BE3C;
      }
      goto L_0895BD44;
    }
L_0895BD44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (14848u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    ctx.gpr[16] = (g17 + static_cast<std::uint32_t>(29552));
    g6 = (2232u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-8688));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895BD70u);
    g5 = (0u | 59u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895BA00;
}
L_0895BD70:
    hot_regs.g31 = (0x0895BD78u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 228u, 0x08968F9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BD78u) goto L_0895BD78;
    return;
L_0895BD78:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (hot_regs.g2 << 4u);
    g5 = (hot_regs.g2 + g4);
    g5 = (g5 << 2u);
    g4 = (g5 - g4);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    g30 = (g5 - g4);
    g4 = (0u + static_cast<std::uint32_t>(-4));
    g30 = (g30 & g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), g30);
    g16 = (g30 | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (2816u << 16u);
    g19 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    g18 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    g4 = (0u | 0u);
    g19 = (g19 + g4);
    g18 = (g18 + g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[30] = g30;
    goto L_0895BDBC;
}
L_0895BDBC:
    hot_regs.g31 = (0x0895BDC4u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 228u, 0x08968F9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BDC4u) goto L_0895BDC4;
    return;
L_0895BDC4:
    hot_regs.g4 = (ctx.gpr[20] < hot_regs.g2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE34;
      }
      goto L_0895BDD0;
    }
L_0895BDD0:
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0895BDE0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BDE0u) goto L_0895BDE0;
    return;
L_0895BDE0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x0895BDF8u);
    ctx.gpr[8] = (0u | 43u);
    goto L_0895BAA4;
L_0895BDF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    g16 = (g16 + static_cast<std::uint32_t>(52));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895BE24;
      }
      goto L_0895BE10;
    }
}
L_0895BE10:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE24;
      }
      goto L_0895BE1C;
    }
L_0895BE1C:
    hot_regs.g31 = (0x0895BE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BE24u) goto L_0895BE24;
    return;
L_0895BE24:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0895BDBC;
      }
      goto L_0895BE34;
    }
L_0895BE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE84;
      }
      goto L_0895BE3C;
    }
L_0895BE3C:
    hot_regs.g5 = (14848u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[16]);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x0895BE60u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BE60u) goto L_0895BE60;
    return;
L_0895BE60:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0895BE78u);
    ctx.gpr[8] = (0u | 59u);
    goto L_0895BAA4;
L_0895BE78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    goto L_0895BE84;
}
L_0895BE84:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0895BEF0;
      }
      goto L_0895BE8C;
    }
L_0895BE8C:
    hot_regs.g4 = (14848u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), ctx.gpr[16]);
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x0895BEB4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BEB4u) goto L_0895BEB4;
    return;
L_0895BEB4:
    hot_regs.g5 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0895BECCu);
    ctx.gpr[8] = (0u | 59u);
    goto L_0895BAA4;
L_0895BECC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), g4);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g4 = g4;
        goto L_0895BEF0;
    }
    goto L_0895BEE4;
}
L_0895BEE4:
    hot_regs.g31 = (0x0895BEECu);
    // nop
    goto L_0895B934;
L_0895BEEC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    goto L_0895BEF0;
L_0895BEF0:
    hot_regs.g31 = (0x0895BEF8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 712u, 0x088B7F50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895BEF8u) goto L_0895BEF8;
    return;
L_0895BEF8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17673)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF3C;
      }
      goto L_0895BF04;
    }
L_0895BF04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(29552));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g4 = (16448u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 >> 8u);
    g5 = (18176u << 16u);
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_0895BF3C;
}
}
L_0895BF3C:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g5);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 24u, 0x0895C2C0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895BF5C;
    }
L_0895BF5C:
{
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    ctx.gpr[23] = (10752u << 16u);
    g20 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g21 = (256u << 16u);
    g21 = (g21 + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (2560u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(72));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    goto L_0895BF7C;
}
L_0895BF7C:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    hot_regs.g4 = (15u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 2u, 0x0895C01Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895BF88;
    }
L_0895BF88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (ctx.gpr[30] >> 8u);
    g4 = (g5 & g4);
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = (4096u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g4);
    g4 = (g4 | hot_regs.g6);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g4 = (0u | 0u);
    hot_regs.g2 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895BFBC;
}
L_0895BFBC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (ctx.gpr[20] + hot_regs.g4);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(40)));
    g6 = (hot_regs.g2 | ctx.gpr[23]);
    g7 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g6);
    g7 = (g5 << 4u);
    g7 = (g7 - g5);
    g7 = (g7 - g5);
    g5 = (g7 - g5);
    g5 = (g5 << 2u);
    g5 = (ctx.gpr[30] + g5);
    g5 = (g5 & ctx.gpr[21]);
    g5 = (g5 | ctx.gpr[22]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.pc = 0x0895C000u; return;}

}

void recomp_unit_0085(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0085_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_85(Runtime &runtime) {
    runtime.register_generated_unit(85u, 0x08958000u, 16384u, &recomp_unit_0085, &recomp_unit_0085_entry);
    runtime.register_function(0x08958004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958010u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958028u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895803Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958044u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958068u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958094u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958134u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958140u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958144u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958150u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958170u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958200u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958228u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895823Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958248u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958268u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958300u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895830Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895832Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958338u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958340u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895835Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958384u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895838Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958398u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958400u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958414u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958444u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958450u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958474u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895860Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958700u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958708u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958714u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958728u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958730u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958764u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895879Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958804u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895880Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958818u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958854u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958868u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958880u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895890Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895894Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895895Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958988u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958990u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958ABCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958ED8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959010u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959024u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959070u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959118u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959200u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895920Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959218u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959224u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895922Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959234u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959298u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959300u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959314u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959414u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959438u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895944Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959458u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895946Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895952Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959544u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895955Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959564u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959574u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895957Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959598u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959630u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895963Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895964Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959654u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959658u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895968Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959704u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959720u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959738u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959750u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895975Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959764u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895976Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959774u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959790u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895980Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959824u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895982Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959844u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895985Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895986Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895987Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959898u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959900u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959918u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959930u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959958u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895996Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895999Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A000u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A01Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A024u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A03Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A064u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A070u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A07Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A084u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A08Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A140u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A148u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A158u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A174u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A180u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A190u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A298u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A324u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A348u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A360u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A36Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A414u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A420u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A450u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A464u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A470u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A47Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A488u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A49Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A508u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A510u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A560u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A588u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A598u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A718u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A724u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A72Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A760u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A86Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A88Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A904u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A92Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A93Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A970u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A97Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A998u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AADCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B034u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B08Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B110u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B13Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B168u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B174u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B194u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B214u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B228u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B240u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B33Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B38Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B400u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B41Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B430u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B470u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B490u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B498u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B50Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B520u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B528u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B530u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B538u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B558u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B56Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B58Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B594u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B614u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B61Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B62Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B634u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B674u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B68Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B708u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B73Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B748u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B79Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B80Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B820u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B834u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B840u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B858u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B860u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B86Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B878u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B888u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B908u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B934u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B97Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B994u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE60u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BECCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFBCu, &recomp_unit_0085, "recomp_unit_0085");
}
} // namespace psprecomp
