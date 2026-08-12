#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[4096] = {
    1, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 4, 5, 0, 6, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 11, 12, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 18, 19, 0, 20, 0, 0, 21, 0,
    22, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 32, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 36,
    0, 0, 0, 0, 0, 0, 37, 38, 39, 0, 40, 0, 41, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 45, 46, 0, 47, 0,
    48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 51, 52, 53, 0, 54, 0, 55, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 59, 60, 0, 61, 0,
    62, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 66, 67, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 74, 0, 75, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 0,
    0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 88, 0, 89, 90, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124,
    0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0,
    0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0,
    149, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0,
    156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171,
    0, 172, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 189, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0,
    215, 0, 0, 0, 216, 0, 0, 0, 217, 218, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224,
    0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 228, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 234, 0, 0,
    0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 242, 243,
    0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 256, 257, 0,
    0, 0, 0, 0, 258, 0, 0, 259, 0, 260, 261, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 269,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 276, 0, 0,
    0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0,
    0, 0, 296, 0, 297, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 301, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 305,
    0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 0, 320, 0, 321, 0,
    0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 343, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0,
    347, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 356, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367,
    0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0,
    387, 0, 0, 0, 0, 388, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0,
    0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0,
    0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 410, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 427, 428, 0, 0, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0,
    0, 437, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454,
    0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 462, 0, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0,
    0, 467, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0,
    478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 483, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0,
    0, 0, 486, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    497, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505,
    0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 529, 0,
    0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0,
    539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546,
    0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0,
    555, 0, 0, 0, 556, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0,
    0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 569, 0,
    0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 0, 0, 0,
    0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0,
    0, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 590, 0, 591, 592, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 598, 0,
    599, 0, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 610, 0, 611, 0, 612, 613, 0,
    614, 0, 615, 0, 0, 616, 0, 617, 0, 618, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 623, 624, 0, 625, 0, 626, 0, 627, 0, 0, 628, 0,
    0, 0, 629, 0, 630, 631, 0, 632, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0,
    0, 0, 639, 0, 0, 0, 0, 0, 640, 641, 0, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0,
    0, 651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 656, 0, 657, 0, 658, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A84000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84000;
    case 2u: goto L_08A84010;
    case 3u: goto L_08A8402C;
    case 4u: goto L_08A84030;
    case 5u: goto L_08A84034;
    case 6u: goto L_08A8403C;
    case 7u: goto L_08A84048;
    case 8u: goto L_08A84050;
    case 9u: goto L_08A84068;
    case 10u: goto L_08A84084;
    case 11u: goto L_08A84088;
    case 12u: goto L_08A8408C;
    case 13u: goto L_08A84094;
    case 14u: goto L_08A840A0;
    case 15u: goto L_08A840A8;
    case 16u: goto L_08A840C0;
    case 17u: goto L_08A840DC;
    case 18u: goto L_08A840E0;
    case 19u: goto L_08A840E4;
    case 20u: goto L_08A840EC;
    case 21u: goto L_08A840F8;
    case 22u: goto L_08A84100;
    case 23u: goto L_08A84108;
    case 24u: goto L_08A84110;
    case 25u: goto L_08A8411C;
    case 26u: goto L_08A84124;
    case 27u: goto L_08A84154;
    case 28u: goto L_08A84158;
    case 29u: goto L_08A841AC;
    case 30u: goto L_08A841C8;
    case 31u: goto L_08A841CC;
    case 32u: goto L_08A841D0;
    case 33u: goto L_08A841D8;
    case 34u: goto L_08A841E0;
    case 35u: goto L_08A841E4;
    case 36u: goto L_08A841FC;
    case 37u: goto L_08A84218;
    case 38u: goto L_08A8421C;
    case 39u: goto L_08A84220;
    case 40u: goto L_08A84228;
    case 41u: goto L_08A84230;
    case 42u: goto L_08A84234;
    case 43u: goto L_08A8424C;
    case 44u: goto L_08A84268;
    case 45u: goto L_08A8426C;
    case 46u: goto L_08A84270;
    case 47u: goto L_08A84278;
    case 48u: goto L_08A84280;
    case 49u: goto L_08A84284;
    case 50u: goto L_08A842FC;
    case 51u: goto L_08A84318;
    case 52u: goto L_08A8431C;
    case 53u: goto L_08A84320;
    case 54u: goto L_08A84328;
    case 55u: goto L_08A84330;
    case 56u: goto L_08A84334;
    case 57u: goto L_08A8434C;
    case 58u: goto L_08A84368;
    case 59u: goto L_08A8436C;
    case 60u: goto L_08A84370;
    case 61u: goto L_08A84378;
    case 62u: goto L_08A84380;
    case 63u: goto L_08A84384;
    case 64u: goto L_08A8439C;
    case 65u: goto L_08A843B8;
    case 66u: goto L_08A843BC;
    case 67u: goto L_08A843C0;
    case 68u: goto L_08A843C8;
    case 69u: goto L_08A843D0;
    case 70u: goto L_08A843D4;
    case 71u: goto L_08A84418;
    case 72u: goto L_08A84434;
    case 73u: goto L_08A84438;
    case 74u: goto L_08A8443C;
    case 75u: goto L_08A84444;
    case 76u: goto L_08A8444C;
    case 77u: goto L_08A84454;
    case 78u: goto L_08A84464;
    case 79u: goto L_08A8446C;
    case 80u: goto L_08A84474;
    case 81u: goto L_08A84484;
    case 82u: goto L_08A8448C;
    case 83u: goto L_08A84494;
    case 84u: goto L_08A844A4;
    case 85u: goto L_08A844B0;
    case 86u: goto L_08A844B8;
    case 87u: goto L_08A844C8;
    case 88u: goto L_08A844D4;
    case 89u: goto L_08A844DC;
    case 90u: goto L_08A844E0;
    case 91u: goto L_08A8450C;
    case 92u: goto L_08A84544;
    case 93u: goto L_08A84550;
    case 94u: goto L_08A845CC;
    case 95u: goto L_08A845D4;
    case 96u: goto L_08A845DC;
    case 97u: goto L_08A845F8;
    case 98u: goto L_08A84604;
    case 99u: goto L_08A84620;
    case 100u: goto L_08A8462C;
    case 101u: goto L_08A846A0;
    case 102u: goto L_08A846AC;
    case 103u: goto L_08A84720;
    case 104u: goto L_08A8472C;
    case 105u: goto L_08A847A0;
    case 106u: goto L_08A847AC;
    case 107u: goto L_08A84820;
    case 108u: goto L_08A8482C;
    case 109u: goto L_08A84848;
    case 110u: goto L_08A8486C;
    case 111u: goto L_08A848D4;
    case 112u: goto L_08A848E0;
    case 113u: goto L_08A84948;
    case 114u: goto L_08A84954;
    case 115u: goto L_08A849BC;
    case 116u: goto L_08A84A04;
    case 117u: goto L_08A84A6C;
    case 118u: goto L_08A84A78;
    case 119u: goto L_08A84AE0;
    case 120u: goto L_08A84AEC;
    case 121u: goto L_08A84B54;
    case 122u: goto L_08A84B88;
    case 123u: goto L_08A84BF0;
    case 124u: goto L_08A84BFC;
    case 125u: goto L_08A84C10;
    case 126u: goto L_08A84C1C;
    case 127u: goto L_08A84C30;
    case 128u: goto L_08A84C40;
    case 129u: goto L_08A84C54;
    case 130u: goto L_08A84C64;
    case 131u: goto L_08A84C78;
    case 132u: goto L_08A84C90;
    case 133u: goto L_08A84CB8;
    case 134u: goto L_08A84CC8;
    case 135u: goto L_08A84CD8;
    case 136u: goto L_08A84CEC;
    case 137u: goto L_08A84D04;
    case 138u: goto L_08A84D0C;
    case 139u: goto L_08A84D74;
    case 140u: goto L_08A84D90;
    case 141u: goto L_08A84DB8;
    case 142u: goto L_08A84DF4;
    case 143u: goto L_08A84E04;
    case 144u: goto L_08A84E0C;
    case 145u: goto L_08A84E70;
    case 146u: goto L_08A84E8C;
    case 147u: goto L_08A84EB4;
    case 148u: goto L_08A84EF0;
    case 149u: goto L_08A84F00;
    case 150u: goto L_08A84F08;
    case 151u: goto L_08A84F74;
    case 152u: goto L_08A84F90;
    case 153u: goto L_08A84FAC;
    case 154u: goto L_08A84FE8;
    case 155u: goto L_08A84FF8;
    case 156u: goto L_08A85000;
    case 157u: goto L_08A85010;
    case 158u: goto L_08A85028;
    case 159u: goto L_08A8503C;
    case 160u: goto L_08A85060;
    case 161u: goto L_08A85068;
    case 162u: goto L_08A850D0;
    case 163u: goto L_08A85110;
    case 164u: goto L_08A8514C;
    case 165u: goto L_08A8515C;
    case 166u: goto L_08A85164;
    case 167u: goto L_08A85184;
    case 168u: goto L_08A851D4;
    case 169u: goto L_08A85214;
    case 170u: goto L_08A85248;
    case 171u: goto L_08A8527C;
    case 172u: goto L_08A85284;
    case 173u: goto L_08A85288;
    case 174u: goto L_08A852A8;
    case 175u: goto L_08A852E0;
    case 176u: goto L_08A85308;
    case 177u: goto L_08A85328;
    case 178u: goto L_08A85368;
    case 179u: goto L_08A85384;
    case 180u: goto L_08A853C4;
    case 181u: goto L_08A853D8;
    case 182u: goto L_08A85410;
    case 183u: goto L_08A85438;
    case 184u: goto L_08A85484;
    case 185u: goto L_08A8548C;
    case 186u: goto L_08A85494;
    case 187u: goto L_08A8549C;
    case 188u: goto L_08A854A4;
    case 189u: goto L_08A854A8;
    case 190u: goto L_08A854BC;
    case 191u: goto L_08A854CC;
    case 192u: goto L_08A854E4;
    case 193u: goto L_08A85520;
    case 194u: goto L_08A85524;
    case 195u: goto L_08A8552C;
    case 196u: goto L_08A85538;
    case 197u: goto L_08A85558;
    case 198u: goto L_08A855A8;
    case 199u: goto L_08A855B0;
    case 200u: goto L_08A85604;
    case 201u: goto L_08A85634;
    case 202u: goto L_08A85648;
    case 203u: goto L_08A85660;
    case 204u: goto L_08A856A4;
    case 205u: goto L_08A856B0;
    case 206u: goto L_08A85748;
    case 207u: goto L_08A85850;
    case 208u: goto L_08A85894;
    case 209u: goto L_08A8589C;
    case 210u: goto L_08A858AC;
    case 211u: goto L_08A858B0;
    case 212u: goto L_08A858C8;
    case 213u: goto L_08A858E0;
    case 214u: goto L_08A858F0;
    case 215u: goto L_08A85900;
    case 216u: goto L_08A85910;
    case 217u: goto L_08A85920;
    case 218u: goto L_08A85924;
    case 219u: goto L_08A85928;
    case 220u: goto L_08A85938;
    case 221u: goto L_08A8595C;
    case 222u: goto L_08A8596C;
    case 223u: goto L_08A85974;
    case 224u: goto L_08A8597C;
    case 225u: goto L_08A85984;
    case 226u: goto L_08A8598C;
    case 227u: goto L_08A859B0;
    case 228u: goto L_08A859B4;
    case 229u: goto L_08A859D0;
    case 230u: goto L_08A859D8;
    case 231u: goto L_08A859E0;
    case 232u: goto L_08A859E8;
    case 233u: goto L_08A859F0;
    case 234u: goto L_08A859F4;
    case 235u: goto L_08A85A04;
    case 236u: goto L_08A85A14;
    case 237u: goto L_08A85A28;
    case 238u: goto L_08A85A54;
    case 239u: goto L_08A85A60;
    case 240u: goto L_08A85A6C;
    case 241u: goto L_08A85A74;
    case 242u: goto L_08A85A78;
    case 243u: goto L_08A85A7C;
    case 244u: goto L_08A85A94;
    case 245u: goto L_08A85AA0;
    case 246u: goto L_08A85AA8;
    case 247u: goto L_08A85AAC;
    case 248u: goto L_08A85AB8;
    case 249u: goto L_08A85AD8;
    case 250u: goto L_08A85B00;
    case 251u: goto L_08A85B24;
    case 252u: goto L_08A85B50;
    case 253u: goto L_08A85B5C;
    case 254u: goto L_08A85B68;
    case 255u: goto L_08A85B70;
    case 256u: goto L_08A85B74;
    case 257u: goto L_08A85B78;
    case 258u: goto L_08A85B90;
    case 259u: goto L_08A85B9C;
    case 260u: goto L_08A85BA4;
    case 261u: goto L_08A85BA8;
    case 262u: goto L_08A85BB4;
    case 263u: goto L_08A85BD4;
    case 264u: goto L_08A85C20;
    case 265u: goto L_08A85C44;
    case 266u: goto L_08A85C64;
    case 267u: goto L_08A85C6C;
    case 268u: goto L_08A85C74;
    case 269u: goto L_08A85C7C;
    case 270u: goto L_08A85C80;
    case 271u: goto L_08A85CA4;
    case 272u: goto L_08A85CAC;
    case 273u: goto L_08A85CCC;
    case 274u: goto L_08A85CD8;
    case 275u: goto L_08A85CF0;
    case 276u: goto L_08A85CF4;
    case 277u: goto L_08A85D0C;
    case 278u: goto L_08A85D20;
    case 279u: goto L_08A85D30;
    case 280u: goto L_08A85D58;
    case 281u: goto L_08A85D7C;
    case 282u: goto L_08A85DA0;
    case 283u: goto L_08A85DB4;
    case 284u: goto L_08A85DD4;
    case 285u: goto L_08A85E50;
    case 286u: goto L_08A85E90;
    case 287u: goto L_08A85EA0;
    case 288u: goto L_08A85EB0;
    case 289u: goto L_08A85EC0;
    case 290u: goto L_08A85ED0;
    case 291u: goto L_08A85EE0;
    case 292u: goto L_08A85F24;
    case 293u: goto L_08A85F3C;
    case 294u: goto L_08A85F54;
    case 295u: goto L_08A85F64;
    case 296u: goto L_08A85F88;
    case 297u: goto L_08A85F90;
    case 298u: goto L_08A85F94;
    case 299u: goto L_08A85FAC;
    case 300u: goto L_08A85FC0;
    case 301u: goto L_08A85FC8;
    case 302u: goto L_08A85FCC;
    case 303u: goto L_08A85FDC;
    case 304u: goto L_08A85FF4;
    case 305u: goto L_08A85FFC;
    case 306u: goto L_08A86020;
    case 307u: goto L_08A86064;
    case 308u: goto L_08A8606C;
    case 309u: goto L_08A86088;
    case 310u: goto L_08A860A0;
    case 311u: goto L_08A860B8;
    case 312u: goto L_08A860CC;
    case 313u: goto L_08A86100;
    case 314u: goto L_08A86108;
    case 315u: goto L_08A86124;
    case 316u: goto L_08A86138;
    case 317u: goto L_08A86140;
    case 318u: goto L_08A86160;
    case 319u: goto L_08A86168;
    case 320u: goto L_08A86170;
    case 321u: goto L_08A86178;
    case 322u: goto L_08A86194;
    case 323u: goto L_08A861A8;
    case 324u: goto L_08A861B0;
    case 325u: goto L_08A861CC;
    case 326u: goto L_08A861E0;
    case 327u: goto L_08A861FC;
    case 328u: goto L_08A86218;
    case 329u: goto L_08A86238;
    case 330u: goto L_08A86240;
    case 331u: goto L_08A86258;
    case 332u: goto L_08A8626C;
    case 333u: goto L_08A86288;
    case 334u: goto L_08A862A8;
    case 335u: goto L_08A862B0;
    case 336u: goto L_08A862C8;
    case 337u: goto L_08A862DC;
    case 338u: goto L_08A86328;
    case 339u: goto L_08A86334;
    case 340u: goto L_08A86340;
    case 341u: goto L_08A8634C;
    case 342u: goto L_08A86390;
    case 343u: goto L_08A86394;
    case 344u: goto L_08A863A8;
    case 345u: goto L_08A863AC;
    case 346u: goto L_08A863E8;
    case 347u: goto L_08A86400;
    case 348u: goto L_08A86408;
    case 349u: goto L_08A8641C;
    case 350u: goto L_08A86428;
    case 351u: goto L_08A8646C;
    case 352u: goto L_08A8647C;
    case 353u: goto L_08A8648C;
    case 354u: goto L_08A864A4;
    case 355u: goto L_08A864B0;
    case 356u: goto L_08A864BC;
    case 357u: goto L_08A864C0;
    case 358u: goto L_08A864C8;
    case 359u: goto L_08A86538;
    case 360u: goto L_08A86570;
    case 361u: goto L_08A865CC;
    case 362u: goto L_08A866B0;
    case 363u: goto L_08A866B8;
    case 364u: goto L_08A866C8;
    case 365u: goto L_08A866D0;
    case 366u: goto L_08A866F0;
    case 367u: goto L_08A866FC;
    case 368u: goto L_08A86708;
    case 369u: goto L_08A86714;
    case 370u: goto L_08A86720;
    case 371u: goto L_08A8672C;
    case 372u: goto L_08A8676C;
    case 373u: goto L_08A867EC;
    case 374u: goto L_08A867FC;
    case 375u: goto L_08A86818;
    case 376u: goto L_08A86838;
    case 377u: goto L_08A86858;
    case 378u: goto L_08A86878;
    case 379u: goto L_08A86898;
    case 380u: goto L_08A868B8;
    case 381u: goto L_08A868BC;
    case 382u: goto L_08A868D4;
    case 383u: goto L_08A86904;
    case 384u: goto L_08A8695C;
    case 385u: goto L_08A86968;
    case 386u: goto L_08A86978;
    case 387u: goto L_08A86980;
    case 388u: goto L_08A86994;
    case 389u: goto L_08A8699C;
    case 390u: goto L_08A869A4;
    case 391u: goto L_08A869AC;
    case 392u: goto L_08A869C8;
    case 393u: goto L_08A869E0;
    case 394u: goto L_08A869F8;
    case 395u: goto L_08A86A10;
    case 396u: goto L_08A86A28;
    case 397u: goto L_08A86A40;
    case 398u: goto L_08A86A48;
    case 399u: goto L_08A86A58;
    case 400u: goto L_08A86AAC;
    case 401u: goto L_08A86AD0;
    case 402u: goto L_08A86B10;
    case 403u: goto L_08A86B6C;
    case 404u: goto L_08A86B88;
    case 405u: goto L_08A86B94;
    case 406u: goto L_08A86BA8;
    case 407u: goto L_08A86BF0;
    case 408u: goto L_08A86C34;
    case 409u: goto L_08A86C4C;
    case 410u: goto L_08A86C84;
    case 411u: goto L_08A86C88;
    case 412u: goto L_08A86C98;
    case 413u: goto L_08A86CBC;
    case 414u: goto L_08A86D04;
    case 415u: goto L_08A86D34;
    case 416u: goto L_08A86D3C;
    case 417u: goto L_08A86D44;
    case 418u: goto L_08A86D4C;
    case 419u: goto L_08A86D54;
    case 420u: goto L_08A86D74;
    case 421u: goto L_08A86D80;
    case 422u: goto L_08A86DB4;
    case 423u: goto L_08A86DBC;
    case 424u: goto L_08A86DE8;
    case 425u: goto L_08A86DF4;
    case 426u: goto L_08A86DFC;
    case 427u: goto L_08A86E14;
    case 428u: goto L_08A86E18;
    case 429u: goto L_08A86E2C;
    case 430u: goto L_08A86E30;
    case 431u: goto L_08A86EA0;
    case 432u: goto L_08A86EB0;
    case 433u: goto L_08A86EC0;
    case 434u: goto L_08A86ED4;
    case 435u: goto L_08A86EE4;
    case 436u: goto L_08A86EF8;
    case 437u: goto L_08A86F04;
    case 438u: goto L_08A86F10;
    case 439u: goto L_08A86F1C;
    case 440u: goto L_08A86F28;
    case 441u: goto L_08A86F68;
    case 442u: goto L_08A86FA0;
    case 443u: goto L_08A86FB0;
    case 444u: goto L_08A86FBC;
    case 445u: goto L_08A86FC4;
    case 446u: goto L_08A86FCC;
    case 447u: goto L_08A86FE0;
    case 448u: goto L_08A8700C;
    case 449u: goto L_08A87018;
    case 450u: goto L_08A87034;
    case 451u: goto L_08A8704C;
    case 452u: goto L_08A87058;
    case 453u: goto L_08A87068;
    case 454u: goto L_08A8707C;
    case 455u: goto L_08A87088;
    case 456u: goto L_08A87098;
    case 457u: goto L_08A870C0;
    case 458u: goto L_08A870D0;
    case 459u: goto L_08A870D8;
    case 460u: goto L_08A870E8;
    case 461u: goto L_08A870F8;
    case 462u: goto L_08A87104;
    case 463u: goto L_08A87118;
    case 464u: goto L_08A87124;
    case 465u: goto L_08A87188;
    case 466u: goto L_08A871F4;
    case 467u: goto L_08A87204;
    case 468u: goto L_08A87214;
    case 469u: goto L_08A87228;
    case 470u: goto L_08A87238;
    case 471u: goto L_08A8724C;
    case 472u: goto L_08A87258;
    case 473u: goto L_08A87264;
    case 474u: goto L_08A87270;
    case 475u: goto L_08A8727C;
    case 476u: goto L_08A872BC;
    case 477u: goto L_08A872F4;
    case 478u: goto L_08A87300;
    case 479u: goto L_08A87308;
    case 480u: goto L_08A87314;
    case 481u: goto L_08A87334;
    case 482u: goto L_08A87344;
    case 483u: goto L_08A8734C;
    case 484u: goto L_08A87350;
    case 485u: goto L_08A87368;
    case 486u: goto L_08A87388;
    case 487u: goto L_08A8739C;
    case 488u: goto L_08A873A4;
    case 489u: goto L_08A873B4;
    case 490u: goto L_08A873C0;
    case 491u: goto L_08A873C8;
    case 492u: goto L_08A873F4;
    case 493u: goto L_08A87418;
    case 494u: goto L_08A87424;
    case 495u: goto L_08A87458;
    case 496u: goto L_08A87470;
    case 497u: goto L_08A87480;
    case 498u: goto L_08A87490;
    case 499u: goto L_08A874A0;
    case 500u: goto L_08A874B0;
    case 501u: goto L_08A874C0;
    case 502u: goto L_08A874D0;
    case 503u: goto L_08A874E0;
    case 504u: goto L_08A874F0;
    case 505u: goto L_08A874FC;
    case 506u: goto L_08A87508;
    case 507u: goto L_08A87514;
    case 508u: goto L_08A87520;
    case 509u: goto L_08A8752C;
    case 510u: goto L_08A87538;
    case 511u: goto L_08A87544;
    case 512u: goto L_08A87550;
    case 513u: goto L_08A8755C;
    case 514u: goto L_08A87568;
    case 515u: goto L_08A87590;
    case 516u: goto L_08A875BC;
    case 517u: goto L_08A875E8;
    case 518u: goto L_08A8761C;
    case 519u: goto L_08A87624;
    case 520u: goto L_08A87660;
    case 521u: goto L_08A8769C;
    case 522u: goto L_08A876A4;
    case 523u: goto L_08A876B8;
    case 524u: goto L_08A876D4;
    case 525u: goto L_08A876DC;
    case 526u: goto L_08A876E4;
    case 527u: goto L_08A876EC;
    case 528u: goto L_08A876F4;
    case 529u: goto L_08A876F8;
    case 530u: goto L_08A87708;
    case 531u: goto L_08A87734;
    case 532u: goto L_08A87740;
    case 533u: goto L_08A8774C;
    case 534u: goto L_08A87754;
    case 535u: goto L_08A8775C;
    case 536u: goto L_08A87764;
    case 537u: goto L_08A87770;
    case 538u: goto L_08A87778;
    case 539u: goto L_08A87780;
    case 540u: goto L_08A87788;
    case 541u: goto L_08A87790;
    case 542u: goto L_08A87798;
    case 543u: goto L_08A877BC;
    case 544u: goto L_08A877C4;
    case 545u: goto L_08A877D0;
    case 546u: goto L_08A877FC;
    case 547u: goto L_08A8780C;
    case 548u: goto L_08A87834;
    case 549u: goto L_08A87848;
    case 550u: goto L_08A87860;
    case 551u: goto L_08A87898;
    case 552u: goto L_08A878AC;
    case 553u: goto L_08A878C0;
    case 554u: goto L_08A878E0;
    case 555u: goto L_08A87900;
    case 556u: goto L_08A87910;
    case 557u: goto L_08A87924;
    case 558u: goto L_08A87944;
    case 559u: goto L_08A87954;
    case 560u: goto L_08A87968;
    case 561u: goto L_08A87978;
    case 562u: goto L_08A87988;
    case 563u: goto L_08A87998;
    case 564u: goto L_08A879A8;
    case 565u: goto L_08A879B8;
    case 566u: goto L_08A879C8;
    case 567u: goto L_08A879D8;
    case 568u: goto L_08A879E8;
    case 569u: goto L_08A879F8;
    case 570u: goto L_08A87A08;
    case 571u: goto L_08A87A28;
    case 572u: goto L_08A87A38;
    case 573u: goto L_08A87A58;
    case 574u: goto L_08A87A68;
    case 575u: goto L_08A87A70;
    case 576u: goto L_08A87A84;
    case 577u: goto L_08A87A98;
    case 578u: goto L_08A87AAC;
    case 579u: goto L_08A87AB8;
    case 580u: goto L_08A87AC8;
    case 581u: goto L_08A87B64;
    case 582u: goto L_08A87B74;
    case 583u: goto L_08A87BBC;
    case 584u: goto L_08A87C24;
    case 585u: goto L_08A87C3C;
    case 586u: goto L_08A87C74;
    case 587u: goto L_08A87C8C;
    case 588u: goto L_08A87C98;
    case 589u: goto L_08A87CA4;
    case 590u: goto L_08A87CAC;
    case 591u: goto L_08A87CB4;
    case 592u: goto L_08A87CB8;
    case 593u: goto L_08A87CC4;
    case 594u: goto L_08A87CCC;
    case 595u: goto L_08A87CD4;
    case 596u: goto L_08A87CE4;
    case 597u: goto L_08A87CEC;
    case 598u: goto L_08A87CF8;
    case 599u: goto L_08A87D00;
    case 600u: goto L_08A87D0C;
    case 601u: goto L_08A87D14;
    case 602u: goto L_08A87D1C;
    case 603u: goto L_08A87D24;
    case 604u: goto L_08A87D2C;
    case 605u: goto L_08A87D38;
    case 606u: goto L_08A87D40;
    case 607u: goto L_08A87D48;
    case 608u: goto L_08A87D50;
    case 609u: goto L_08A87D58;
    case 610u: goto L_08A87D64;
    case 611u: goto L_08A87D6C;
    case 612u: goto L_08A87D74;
    case 613u: goto L_08A87D78;
    case 614u: goto L_08A87D80;
    case 615u: goto L_08A87D88;
    case 616u: goto L_08A87D94;
    case 617u: goto L_08A87D9C;
    case 618u: goto L_08A87DA4;
    case 619u: goto L_08A87DAC;
    case 620u: goto L_08A87DB8;
    case 621u: goto L_08A87DC0;
    case 622u: goto L_08A87DC8;
    case 623u: goto L_08A87DD0;
    case 624u: goto L_08A87DD4;
    case 625u: goto L_08A87DDC;
    case 626u: goto L_08A87DE4;
    case 627u: goto L_08A87DEC;
    case 628u: goto L_08A87DF8;
    case 629u: goto L_08A87E08;
    case 630u: goto L_08A87E10;
    case 631u: goto L_08A87E14;
    case 632u: goto L_08A87E1C;
    case 633u: goto L_08A87E24;
    case 634u: goto L_08A87E54;
    case 635u: goto L_08A87E60;
    case 636u: goto L_08A87EB8;
    case 637u: goto L_08A87EE8;
    case 638u: goto L_08A87EF8;
    case 639u: goto L_08A87F08;
    case 640u: goto L_08A87F20;
    case 641u: goto L_08A87F24;
    case 642u: goto L_08A87F30;
    case 643u: goto L_08A87F38;
    case 644u: goto L_08A87F44;
    case 645u: goto L_08A87F4C;
    case 646u: goto L_08A87F58;
    case 647u: goto L_08A87F60;
    case 648u: goto L_08A87F68;
    case 649u: goto L_08A87F70;
    case 650u: goto L_08A87F78;
    case 651u: goto L_08A87F84;
    case 652u: goto L_08A87F8C;
    case 653u: goto L_08A87F94;
    case 654u: goto L_08A87F9C;
    case 655u: goto L_08A87FA4;
    case 656u: goto L_08A87FB0;
    case 657u: goto L_08A87FB8;
    case 658u: goto L_08A87FC0;
    case 659u: goto L_08A87FC4;
    case 660u: goto L_08A87FCC;
    case 661u: goto L_08A87FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84000:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A84030;
      }
      goto L_08A84010;
    }
L_08A84010:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (14979u << 16u);
    g5 = (g5 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A84034;
      }
      goto L_08A8402C;
    }
}
L_08A8402C:
    hot_regs.g4 = (0u | 1u);
    goto L_08A84030;
L_08A84030:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A84034;
L_08A84034:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84048;
      }
      goto L_08A8403C;
    }
L_08A8403C:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A84050;
      }
      goto L_08A84048;
    }
L_08A84048:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_08A84050;
L_08A84050:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(264)));
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A84088;
      }
      goto L_08A84068;
    }
}
L_08A84068:
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
          goto L_08A8408C;
      }
      goto L_08A84084;
    }
}
L_08A84084:
    hot_regs.g4 = (0u | 1u);
    goto L_08A84088;
L_08A84088:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A8408C;
L_08A8408C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A840A0;
      }
      goto L_08A84094;
    }
L_08A84094:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A840A8;
      }
      goto L_08A840A0;
    }
L_08A840A0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    goto L_08A840A8;
L_08A840A8:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(280)));
    f13 = hot_regs.f12 - f13;
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A840E0;
      }
      goto L_08A840C0;
    }
}
L_08A840C0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (14979u << 16u);
    g5 = (g5 | 4719u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A840E4;
      }
      goto L_08A840DC;
    }
}
L_08A840DC:
    hot_regs.g4 = (0u | 1u);
    goto L_08A840E0;
L_08A840E0:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A840E4;
L_08A840E4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A840F8;
      }
      goto L_08A840EC;
    }
L_08A840EC:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08A84100;
      }
      goto L_08A840F8;
    }
L_08A840F8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    goto L_08A84100;
L_08A84100:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A844DC;
      }
      goto L_08A84108;
    }
L_08A84108:
    hot_regs.g31 = (0x08A84110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84110u) goto L_08A84110;
    return;
L_08A84110:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A8411Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 187u, 0x08B00B68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8411Cu) goto L_08A8411C;
    return;
L_08A8411C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A844DC;
      }
      goto L_08A84124;
    }
L_08A84124:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(432));
    g4 = (g4 + ctx.gpr[21]);
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(432)));
    g18 = (g18 + static_cast<std::uint32_t>(304));
    g4 = (ctx.gpr[19] << 5u);
    g18 = (g18 + g4);
    g17 = (g17 + g4);
    g17 = (g17 + static_cast<std::uint32_t>(304));
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A84158;
      }
      goto L_08A84154;
    }
}
L_08A84154:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    goto L_08A84158;
L_08A84158:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f15 = f12 - f15;
    hot_regs.g6 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((f15 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A841CC;
      }
      goto L_08A841AC;
    }
}
}
L_08A841AC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (14979u << 16u);
    g7 = (g7 | 4719u);
    ctx.fpr[16] = std::bit_cast<float>(g7);
    ctx.set_fpu_condition((hot_regs.f15 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A841D0;
      }
      goto L_08A841C8;
    }
}
L_08A841C8:
    hot_regs.g6 = (0u | 1u);
    goto L_08A841CC;
L_08A841CC:
    hot_regs.g6 = (hot_regs.g6 & 255u);
    goto L_08A841D0;
L_08A841D0:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A841E0;
      }
      goto L_08A841D8;
    }
L_08A841D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
      if (branch_taken) {
          goto L_08A841E4;
      }
      goto L_08A841E0;
    }
L_08A841E0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A841E4;
L_08A841E4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    f12 = hot_regs.f13 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g6 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8421C;
      }
      goto L_08A841FC;
    }
}
L_08A841FC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (14979u << 16u);
    g7 = (g7 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g7);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A84220;
      }
      goto L_08A84218;
    }
}
L_08A84218:
    hot_regs.g6 = (0u | 1u);
    goto L_08A8421C;
L_08A8421C:
    hot_regs.g6 = (hot_regs.g6 & 255u);
    goto L_08A84220;
L_08A84220:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84230;
      }
      goto L_08A84228;
    }
L_08A84228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 256u);
      if (branch_taken) {
          goto L_08A84234;
      }
      goto L_08A84230;
    }
L_08A84230:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08A84234;
L_08A84234:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    f12 = hot_regs.f14 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g6 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8426C;
      }
      goto L_08A8424C;
    }
}
L_08A8424C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (14979u << 16u);
    g7 = (g7 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g7);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A84270;
      }
      goto L_08A84268;
    }
}
L_08A84268:
    hot_regs.g6 = (0u | 1u);
    goto L_08A8426C;
L_08A8426C:
    hot_regs.g6 = (hot_regs.g6 & 255u);
    goto L_08A84270;
L_08A84270:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84280;
      }
      goto L_08A84278;
    }
L_08A84278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
      if (branch_taken) {
          goto L_08A84284;
      }
      goto L_08A84280;
    }
L_08A84280:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A84284;
L_08A84284:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f15 = f12 - f15;
    g4 = (0u | 0u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((f15 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A8431C;
      }
      goto L_08A842FC;
    }
}
}
L_08A842FC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (14979u << 16u);
    g6 = (g6 | 4719u);
    ctx.fpr[16] = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f15 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A84320;
      }
      goto L_08A84318;
    }
}
L_08A84318:
    hot_regs.g4 = (0u | 1u);
    goto L_08A8431C;
L_08A8431C:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A84320;
L_08A84320:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84330;
      }
      goto L_08A84328;
    }
L_08A84328:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 1024u);
      if (branch_taken) {
          goto L_08A84334;
      }
      goto L_08A84330;
    }
L_08A84330:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A84334;
L_08A84334:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    f12 = hot_regs.f13 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8436C;
      }
      goto L_08A8434C;
    }
}
L_08A8434C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (14979u << 16u);
    g6 = (g6 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A84370;
      }
      goto L_08A84368;
    }
}
L_08A84368:
    hot_regs.g4 = (0u | 1u);
    goto L_08A8436C;
L_08A8436C:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A84370;
L_08A84370:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84380;
      }
      goto L_08A84378;
    }
L_08A84378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 2048u);
      if (branch_taken) {
          goto L_08A84384;
      }
      goto L_08A84380;
    }
L_08A84380:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    goto L_08A84384;
L_08A84384:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f12 = hot_regs.f14 - f12;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A843BC;
      }
      goto L_08A8439C;
    }
}
L_08A8439C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (14979u << 16u);
    g6 = (g6 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A843C0;
      }
      goto L_08A843B8;
    }
}
L_08A843B8:
    hot_regs.g4 = (0u | 1u);
    goto L_08A843BC;
L_08A843BC:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A843C0;
L_08A843C0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A843D0;
      }
      goto L_08A843C8;
    }
L_08A843C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 4096u);
      if (branch_taken) {
          goto L_08A843D4;
      }
      goto L_08A843D0;
    }
L_08A843D0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A843D4;
L_08A843D4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    f12 = f12 - hot_regs.f15;
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A84438;
      }
      goto L_08A84418;
    }
}
}
L_08A84418:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14979u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (hot_regs.g5 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8443C;
      }
      goto L_08A84434;
    }
}
L_08A84434:
    hot_regs.g5 = (0u | 1u);
    goto L_08A84438;
L_08A84438:
    hot_regs.g4 = (hot_regs.g5 & 255u);
    goto L_08A8443C;
L_08A8443C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8444C;
      }
      goto L_08A84444;
    }
L_08A84444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 8192u);
      if (branch_taken) {
          goto L_08A84454;
      }
      goto L_08A8444C;
    }
L_08A8444C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A84454;
L_08A84454:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8446C;
      }
      goto L_08A84464;
    }
L_08A84464:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16384u);
      if (branch_taken) {
          goto L_08A84474;
      }
      goto L_08A8446C;
    }
L_08A8446C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A84474;
L_08A84474:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A8448C;
      }
      goto L_08A84484;
    }
L_08A84484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 32768u);
      if (branch_taken) {
          goto L_08A84494;
      }
      goto L_08A8448C;
    }
L_08A8448C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A84494;
L_08A84494:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A844B0;
      }
      goto L_08A844A4;
    }
L_08A844A4:
    hot_regs.g4 = (1u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | hot_regs.g4);
      if (branch_taken) {
          goto L_08A844B8;
      }
      goto L_08A844B0;
    }
L_08A844B0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A844B8;
L_08A844B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A844D4;
      }
      goto L_08A844C8;
    }
L_08A844C8:
    hot_regs.g4 = (2u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | hot_regs.g4);
      if (branch_taken) {
          goto L_08A844DC;
      }
      goto L_08A844D4;
    }
L_08A844D4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A844DC;
L_08A844DC:
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    goto L_08A844E0;
L_08A844E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8450C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08A84544u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84544u) goto L_08A84544;
    return;
L_08A84544:
    hot_regs.g4 = (0u | 8u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A845D4;
      }
      goto L_08A84550;
    }
L_08A84550:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g5 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g4 = (g4 | g5);
    g5 = (g4 & 65535u);
    g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g7 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g7 = (g7 << 8u);
    g4 = (g4 | g7);
    g4 = (g4 & 65535u);
    g4 = (g4 << 16u);
    g5 = (g5 | g4);
    g7 = (g5 & 1u);
    g4 = (ctx.gpr[16] << 5u);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(304));
    { const bool branch_taken = g7 != 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A845DC;
      }
      goto L_08A845CC;
    }
}
L_08A845CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A845F8;
      }
      goto L_08A845D4;
    }
L_08A845D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84C78;
      }
      goto L_08A845DC;
    }
L_08A845DC:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (ctx.gpr[16] + ctx.gpr[17]);
    g7 = (g7 + static_cast<std::uint32_t>(209));
    g8 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g8));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A845F8;
}
L_08A845F8:
    hot_regs.g7 = (hot_regs.g5 & 2u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84620;
      }
      goto L_08A84604;
    }
L_08A84604:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (ctx.gpr[16] << 2u);
    g8 = (ctx.gpr[17] + g8);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(216), g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A84620;
}
L_08A84620:
    hot_regs.g7 = (hot_regs.g5 & 4u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A846A0;
      }
      goto L_08A8462C;
    }
L_08A8462C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (ctx.gpr[16] << 2u);
    g7 = (ctx.gpr[17] + g7);
    g7 = (g7 + static_cast<std::uint32_t>(232));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(0)));
    g10 = (g10 << 8u);
    g9 = (g9 | g10);
    g9 = (g9 & 65535u);
    g9 = (g9 << 16u);
    g8 = (g8 | g9);
    hot_regs.f12 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A846A0;
}
L_08A846A0:
    hot_regs.g7 = (hot_regs.g5 & 8u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84720;
      }
      goto L_08A846AC;
    }
L_08A846AC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (ctx.gpr[16] << 2u);
    g7 = (ctx.gpr[17] + g7);
    g7 = (g7 + static_cast<std::uint32_t>(248));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(0)));
    g10 = (g10 << 8u);
    g9 = (g9 | g10);
    g9 = (g9 & 65535u);
    g9 = (g9 << 16u);
    g8 = (g8 | g9);
    hot_regs.f12 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A84720;
}
L_08A84720:
    hot_regs.g7 = (hot_regs.g5 & 16u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A847A0;
      }
      goto L_08A8472C;
    }
L_08A8472C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (ctx.gpr[16] << 2u);
    g7 = (ctx.gpr[17] + g7);
    g7 = (g7 + static_cast<std::uint32_t>(264));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(0)));
    g10 = (g10 << 8u);
    g9 = (g9 | g10);
    g9 = (g9 & 65535u);
    g9 = (g9 << 16u);
    g8 = (g8 | g9);
    hot_regs.f12 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A847A0;
}
L_08A847A0:
    hot_regs.g7 = (hot_regs.g5 & 32u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84820;
      }
      goto L_08A847AC;
    }
L_08A847AC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g7 = (ctx.gpr[16] << 2u);
    g7 = (ctx.gpr[17] + g7);
    g7 = (g7 + static_cast<std::uint32_t>(280));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g10 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(0)));
    g10 = (g10 << 8u);
    g9 = (g9 | g10);
    g9 = (g9 & 65535u);
    g9 = (g9 << 16u);
    g8 = (g8 | g9);
    hot_regs.f12 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_08A84820;
}
L_08A84820:
    hot_regs.g7 = (hot_regs.g5 & 64u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84848;
      }
      goto L_08A8482C;
    }
L_08A8482C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (ctx.gpr[16] << 2u);
    g8 = (ctx.gpr[17] + g8);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(432), g7);
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08A84848;
}
L_08A84848:
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
    hot_regs.g7 = (hot_regs.g5 & 128u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A848D4;
      }
      goto L_08A8486C;
    }
}
}
L_08A8486C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A848D4;
}
L_08A848D4:
    hot_regs.g7 = (hot_regs.g5 & 256u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84948;
      }
      goto L_08A848E0;
    }
L_08A848E0:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A84948;
}
L_08A84948:
    hot_regs.g7 = (hot_regs.g5 & 512u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849BC;
      }
      goto L_08A84954;
    }
L_08A84954:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A849BC;
}
L_08A849BC:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f15));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g7 = (hot_regs.g5 & 1024u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A84A6C;
      }
      goto L_08A84A04;
    }
}
}
L_08A84A04:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A84A6C;
}
L_08A84A6C:
    hot_regs.g7 = (hot_regs.g5 & 2048u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84AE0;
      }
      goto L_08A84A78;
    }
L_08A84A78:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A84AE0;
}
L_08A84AE0:
    hot_regs.g7 = (hot_regs.g5 & 4096u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84B54;
      }
      goto L_08A84AEC;
    }
L_08A84AEC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A84B54;
}
L_08A84B54:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g7 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    g7 = (hot_regs.g5 & 8192u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A84BF0;
      }
      goto L_08A84B88;
    }
}
L_08A84B88:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g8);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g8 << 8u);
    g7 = (g7 | g8);
    g7 = (g7 & 65535u);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g8 = (g8 << 16u);
    g7 = (g7 | g8);
    hot_regs.f12 = std::bit_cast<float>(g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_08A84BF0;
}
L_08A84BF0:
    hot_regs.g7 = (hot_regs.g5 & 16384u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84C10;
      }
      goto L_08A84BFC;
    }
L_08A84BFC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    goto L_08A84C10;
}
L_08A84C10:
    hot_regs.g7 = (hot_regs.g5 & 32768u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84C30;
      }
      goto L_08A84C1C;
    }
L_08A84C1C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    goto L_08A84C30;
}
L_08A84C30:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (1u << 16u);
    g7 = (hot_regs.g5 & g7);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A84C54;
      }
      goto L_08A84C40;
    }
}
L_08A84C40:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(g7));
    hot_regs.g7 = g7;
    goto L_08A84C54;
}
L_08A84C54:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (2u << 16u);
    g5 = (g5 & hot_regs.g7);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A84C78;
      }
      goto L_08A84C64;
    }
}
L_08A84C64:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g7);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08A84C78;
}
L_08A84C78:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A84C90:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(284), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(288), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(292), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A84CD8;
      }
      goto L_08A84CB8;
    }
}
L_08A84CB8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A84CD8;
      }
      goto L_08A84CC8;
    }
L_08A84CC8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    hot_regs.g5 = (0u | 33u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A84D04;
      }
      goto L_08A84CD8;
    }
L_08A84CD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    g5 = (g4 + static_cast<std::uint32_t>(-2));
    g5 = (g5 < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A85164;
      }
      goto L_08A84CEC;
    }
}
L_08A84CEC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(8832)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A84D04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A84D0C;
    }
L_08A84D0C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(320)));
    g4 = (48460u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 8u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(g4));
    hot_regs.g5 = (0u | 24u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(hot_regs.g5));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(g4));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(g4));
    g17 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A84E04;
      }
      goto L_08A84D74;
    }
}
}
L_08A84D74:
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.g31 = (0x08A84D90u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84D90u) goto L_08A84D90;
    return;
L_08A84D90:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (15605u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15733u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x08A84DB8u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84DB8u) goto L_08A84DB8;
    return;
L_08A84DB8:
    hot_regs.f12 = hot_regs.f22 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A84DF4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84DF4u) goto L_08A84DF4;
    return;
L_08A84DF4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A84D74;
      }
      goto L_08A84E04;
    }
}
L_08A84E04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A84E0C;
    }
L_08A84E0C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(320)));
    g4 = (48460u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 64u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(g4));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(g4));
    g17 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A84F00;
      }
      goto L_08A84E70;
    }
}
}
L_08A84E70:
    hot_regs.g4 = (15651u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15800u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 20972u);
    hot_regs.g31 = (0x08A84E8Cu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84E8Cu) goto L_08A84E8C;
    return;
L_08A84E8C:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (15605u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15733u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x08A84EB4u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84EB4u) goto L_08A84EB4;
    return;
L_08A84EB4:
    hot_regs.f12 = hot_regs.f22 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A84EF0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84EF0u) goto L_08A84EF0;
    return;
L_08A84EF0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A84E70;
      }
      goto L_08A84F00;
    }
}
L_08A84F00:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A84F08;
    }
L_08A84F08:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(320)));
    g4 = (48460u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 64u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(g4));
    g4 = (0u | 32u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(g4));
    g4 = (0u | 16u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(146), static_cast<std::uint8_t>(g4));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(147), static_cast<std::uint8_t>(g4));
    g17 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A84FF8;
      }
      goto L_08A84F74;
    }
}
}
L_08A84F74:
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15733u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x08A84F90u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84F90u) goto L_08A84F90;
    return;
L_08A84F90:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = (15605u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x08A84FACu);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84FACu) goto L_08A84FAC;
    return;
L_08A84FAC:
    hot_regs.f13 = hot_regs.f22 - ctx.fpr[24];
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[24] + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A84FE8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A84FE8u) goto L_08A84FE8;
    return;
L_08A84FE8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A84F74;
      }
      goto L_08A84FF8;
    }
}
L_08A84FF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A85000;
    }
L_08A85000:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8515C;
      }
      goto L_08A85010;
    }
}
L_08A85010:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A85068;
      }
      goto L_08A85028;
    }
L_08A85028:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    hot_regs.g4 = (16257u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.g31 = (0x08A8503Cu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8503Cu) goto L_08A8503C;
    return;
L_08A8503C:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A85068;
      }
      goto L_08A85060;
    }
}
L_08A85060:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A85068;
    }
L_08A85068:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(320)));
    g4 = (16128u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 170u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(g4));
    g4 = (0u | 165u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(g4));
    g4 = (0u | 140u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(g4));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(g4));
    g16 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g16) < 1 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A8515C;
      }
      goto L_08A850D0;
    }
}
}
L_08A850D0:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15713u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.g31 = (0x08A85110u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85110u) goto L_08A85110;
    return;
L_08A85110:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (0u | 4u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A8514Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8514Cu) goto L_08A8514C;
    return;
L_08A8514C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A850D0;
      }
      goto L_08A8515C;
    }
}
L_08A8515C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A85164;
    }
L_08A85164:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    g4 = (15395u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85284;
      }
      goto L_08A85184;
    }
}
L_08A85184:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(f12));
    g4 = (0u | 48u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(225), static_cast<std::uint8_t>(g4));
    g4 = (0u | 64u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(226), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(227), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A8527C;
      }
      goto L_08A851D4;
    }
}
}
L_08A851D4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    hot_regs.g4 = (16000u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15267u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15651u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.g31 = (0x08A85214u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85214u) goto L_08A85214;
    return;
L_08A85214:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16128u << 16u);
    hot_regs.g31 = (0x08A85248u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85248u) goto L_08A85248;
    return;
L_08A85248:
    hot_regs.f12 = hot_regs.f22 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g4 = (0u | 39u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A8527Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8527Cu) goto L_08A8527C;
    return;
L_08A8527C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85288;
      }
      goto L_08A85284;
    }
L_08A85284:
    hot_regs.g2 = (0u | 1u);
    goto L_08A85288;
L_08A85288:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(272)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(288)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(292)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A852A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A852E0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A852E0u) goto L_08A852E0;
    return;
L_08A852E0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    g5 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(2)));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g5));
    hot_regs.g6 = (aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(3)));
    g5 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A85308;
}
L_08A85308:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (g5 << 6u);
    g7 = (g5 + g6);
    g7 = (g5 + g7);
    g6 = (g7 & 65535u);
    g8 = (g7 + static_cast<std::uint32_t>(33));
    g8 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A85368;
      }
      goto L_08A85328;
    }
}
L_08A85328:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g4 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    g8 = (ctx.gpr[16] + g8);
    aot_mem.aot_store16(g8 + static_cast<std::uint32_t>(26160), static_cast<std::uint16_t>(g6));
    g9 = (g4 + g4);
    g8 = (g6 + static_cast<std::uint32_t>(33));
    g9 = (ctx.gpr[16] + g9);
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g9 + static_cast<std::uint32_t>(26160), static_cast<std::uint16_t>(g8));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (g6 & 65535u);
    g8 = (hot_regs.g7 + static_cast<std::uint32_t>(33));
    g8 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g4 = (g4 & 65535u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A85328;
      }
      goto L_08A85368;
    }
}
L_08A85368:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (hot_regs.g7 + static_cast<std::uint32_t>(66));
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (g6 & 65535u);
    g8 = (hot_regs.g7 + static_cast<std::uint32_t>(32));
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g8 == 0u;
    // nop
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A853C4;
      }
      goto L_08A85384;
    }
}
L_08A85384:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g4 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 & 65535u);
    g8 = (ctx.gpr[16] + g8);
    aot_mem.aot_store16(g8 + static_cast<std::uint32_t>(26160), static_cast<std::uint16_t>(g6));
    g9 = (g4 + g4);
    g8 = (g6 + static_cast<std::uint32_t>(33));
    g9 = (ctx.gpr[16] + g9);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g9 + static_cast<std::uint32_t>(26160), static_cast<std::uint16_t>(g8));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (g6 & 65535u);
    g8 = (hot_regs.g7 + static_cast<std::uint32_t>(32));
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g4 = (g4 & 65535u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A85384;
      }
      goto L_08A853C4;
    }
}
L_08A853C4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 & 65535u);
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A85308;
      }
      goto L_08A853D8;
    }
}
L_08A853D8:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17664u << 16u);
    f12 = std::bit_cast<float>(g4);
    f20 = f12 / f20;
    hot_regs.g6 = (15616u << 16u);
    ctx.gpr[8] = (17536u << 16u);
    ctx.gpr[9] = (49184u << 16u);
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[9]);
    hot_regs.f14 = std::bit_cast<float>(0u);
    f12 = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = f20; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    goto L_08A85410;
}
}
L_08A85410:
{
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    f15 = std::bit_cast<float>(g5);
    hot_regs.g6 = (0u | 0u);
    f16 = std::bit_cast<float>(hot_regs.g7);
    ctx.gpr[9] = (static_cast<std::int32_t>(g5) < 15 ? 1u : 0u);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    ctx.gpr[10] = (static_cast<std::int32_t>(g5) < 19 ? 1u : 0u);
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    ctx.gpr[8] = (0u | 0u);
    { const float fs = f15; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = f16 - hot_regs.f12;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    goto L_08A85438;
}
}
L_08A85438:
{
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g16 = ctx.gpr[16];
    f17 = std::bit_cast<float>(hot_regs.g6);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f15));
    f18 = std::bit_cast<float>(ctx.gpr[8]);
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f17; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f17));
    g11 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(8)));
    f17 = f18 - hot_regs.f12;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g11));
    g11 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g11));
    g11 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g11));
    g11 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g11));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f17));
    ctx.gpr[11] = g11;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08A854A4;
      }
      goto L_08A85484;
    }
}
}
L_08A85484:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(hot_regs.g6) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A854A4;
      }
      goto L_08A8548C;
    }
L_08A8548C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(hot_regs.g6) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A854A4;
      }
      goto L_08A85494;
    }
L_08A85494:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A854A4;
      }
      goto L_08A8549C;
    }
L_08A8549C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_08A854A8;
      }
      goto L_08A854A4;
    }
L_08A854A4:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A854A8;
L_08A854A8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    ctx.gpr[11] = (static_cast<std::int32_t>(g6) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A85438;
      }
      goto L_08A854BC;
    }
}
L_08A854BC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 33 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(64));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A85410;
      }
      goto L_08A854CC;
    }
}
L_08A854CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A854E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g20);
    g20 = (2236u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(29232));
    hot_regs.g5 = (aot_mem.aot_load8(g20 + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (g4 + static_cast<std::uint32_t>(26160));
    ctx.gpr[17] = (g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A85538;
      }
      goto L_08A85520;
    }
}
L_08A85520:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    goto L_08A85524;
L_08A85524:
    hot_regs.g31 = (0x08A8552Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8552Cu) goto L_08A8552C;
    return;
L_08A8552C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[20] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85524;
      }
      goto L_08A85538;
    }
}
L_08A85538:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g5 = (4608u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4511));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A855A8;
      }
      goto L_08A85558;
    }
}
L_08A85558:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    g6 = (ctx.gpr[18] >> 8u);
    g7 = (15u << 16u);
    g6 = (g6 & g7);
    g7 = (g19 + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(20), g6);
    g7 = (4096u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (ctx.gpr[18] & g6);
    g7 = (512u << 16u);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08A855A8;
}
L_08A855A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g6 = (1028u << 16u);
      if (branch_taken) {
          goto L_08A85604;
      }
      goto L_08A855B0;
    }
L_08A855B0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    g6 = (ctx.gpr[17] >> 8u);
    g7 = (15u << 16u);
    g6 = (g6 & g7);
    g7 = (g19 + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(20), g6);
    g7 = (4096u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (ctx.gpr[17] & g6);
    g7 = (256u << 16u);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(29552), g5);
    g6 = (1028u << 16u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08A85604;
}
L_08A85604:
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(2112));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x08A85634u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85634u) goto L_08A85634;
    return;
L_08A85634:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A85648u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85648u) goto L_08A85648;
    return;
L_08A85648:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g31 = (0x08A85660u);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85660u) goto L_08A85660;
    return;
L_08A85660:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (2816u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A856A4:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A856B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (15616u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    hot_regs.g5 = (18944u << 16u);
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.f13 = ctx.fpr[16] + hot_regs.f13;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g5 = (19200u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g6 | hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A85748u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85748u) goto L_08A85748;
    return;
L_08A85748:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (14848u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(9));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (15104u << 16u);
    g6 = (g6 >> 8u);
    g6 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g6 = (g6 >> 8u);
    g6 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (50944u << 16u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g8 = (15u << 16u);
    g7 = (g5 >> 8u);
    g6 = (g18 + static_cast<std::uint32_t>(29552));
    g7 = (g7 & g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g7);
    g8 = (4096u << 16u);
    g7 = (g7 | g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g7);
    g7 = (256u << 16u);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g5 = (g5 & g7);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g7 = (2560u << 16u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    g5 = (g5 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (0u | 255u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g4);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g5);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A85850:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g5 = (16736u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(g5);
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    g4 = (49184u << 16u);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A8589C;
      }
      goto L_08A85894;
    }
}
L_08A85894:
{
    float f13 = hot_regs.f13;
    f13 = hot_regs.f14 - f13;
    hot_regs.f20 = hot_regs.f20 + f13;
    hot_regs.f13 = f13;
    goto L_08A8589C;
}
L_08A8589C:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A858B0;
      }
      goto L_08A858AC;
    }
L_08A858AC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A858B0;
L_08A858B0:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(33)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(34)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(35)));
    hot_regs.g31 = (0x08A858C8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A858C8u) goto L_08A858C8;
    return;
L_08A858C8:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(33)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(34)));
    hot_regs.g31 = (0x08A858E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A858E0u) goto L_08A858E0;
    return;
L_08A858E0:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85924;
      }
      goto L_08A858F0;
    }
L_08A858F0:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(1)));
    if (hot_regs.g6 != hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08A85928;
    }
    goto L_08A85900;
L_08A85900:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2)));
    if (hot_regs.g6 != hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 & 255u);
        goto L_08A85928;
    }
    goto L_08A85910;
L_08A85910:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    hot_regs.g4 = (hot_regs.g4 & 255u);
      if (branch_taken) {
          goto L_08A85928;
      }
      goto L_08A85920;
    }
L_08A85920:
    hot_regs.g4 = (0u | 1u);
    goto L_08A85924;
L_08A85924:
    hot_regs.g4 = (hot_regs.g4 & 255u);
    goto L_08A85928;
L_08A85928:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85A14;
      }
      goto L_08A85938;
    }
}
L_08A85938:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g4));
    g5 = (g16 + static_cast<std::uint32_t>(16));
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A8595C;
}
L_08A8595C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(g4) < 15 ? 1u : 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 18 ? 1u : 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 19 ? 1u : 0u);
    goto L_08A8596C;
}
L_08A8596C:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A859B4;
    }
    goto L_08A85974;
L_08A85974:
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A859B0;
      }
      goto L_08A8597C;
    }
L_08A8597C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 18 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A859B0;
      }
      goto L_08A85984;
    }
L_08A85984:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A859B4;
    }
    goto L_08A8598C;
L_08A8598C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g10 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(5)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(6)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(7)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g10));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08A859D0;
      }
      goto L_08A859B0;
    }
}
L_08A859B0:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A859B4;
L_08A859B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(9)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(10)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g10));
    g10 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(11)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g10));
    ctx.gpr[10] = g10;
    goto L_08A859D0;
}
L_08A859D0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A859F4;
      }
      goto L_08A859D8;
    }
L_08A859D8:
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A859F4;
      }
      goto L_08A859E0;
    }
L_08A859E0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 19 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A859F4;
      }
      goto L_08A859E8;
    }
L_08A859E8:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A859F4;
      }
      goto L_08A859F0;
    }
L_08A859F0:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08A859F4;
L_08A859F4:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(24));
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A8596C;
      }
      goto L_08A85A04;
    }
}
L_08A85A04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 33 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8595C;
      }
      goto L_08A85A14;
    }
}
L_08A85A14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85A28:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A85A7C;
      }
      goto L_08A85A54;
    }
}
L_08A85A54:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08A85A60u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85A60u) goto L_08A85A60;
    return;
L_08A85A60:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85A78;
      }
      goto L_08A85A6C;
    }
L_08A85A6C:
    hot_regs.g31 = (0x08A85A74u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85A74u) goto L_08A85A74;
    return;
L_08A85A74:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08A85A78;
L_08A85A78:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08A85A7C;
L_08A85A7C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08A85A94u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85A94u) goto L_08A85A94;
    return;
L_08A85A94:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A85AA8;
    }
    goto L_08A85AA0;
L_08A85AA0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85AAC;
      }
      goto L_08A85AA8;
    }
L_08A85AA8:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08A85AAC;
L_08A85AAC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A85AB8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85AB8u) goto L_08A85AB8;
    return;
L_08A85AB8:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08A85AD8u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85AD8u) goto L_08A85AD8;
    return;
L_08A85AD8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (2247u << 16u);
    hot_regs.g6 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[8] = (ctx.gpr[8] & 65535u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A85B00u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 652u, 0x0893AC1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85B00u) goto L_08A85B00;
    return;
L_08A85B00:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85B24:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A85B78;
      }
      goto L_08A85B50;
    }
}
L_08A85B50:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08A85B5Cu);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85B5Cu) goto L_08A85B5C;
    return;
L_08A85B5C:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85B74;
      }
      goto L_08A85B68;
    }
L_08A85B68:
    hot_regs.g31 = (0x08A85B70u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85B70u) goto L_08A85B70;
    return;
L_08A85B70:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_08A85B74;
L_08A85B74:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[19]);
    goto L_08A85B78;
L_08A85B78:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A85B90u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85B90u) goto L_08A85B90;
    return;
L_08A85B90:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-29148)));
        goto L_08A85BA4;
    }
    goto L_08A85B9C;
L_08A85B9C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08A85BA8;
      }
      goto L_08A85BA4;
    }
L_08A85BA4:
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    goto L_08A85BA8;
L_08A85BA8:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x08A85BB4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85BB4u) goto L_08A85BB4;
    return;
L_08A85BB4:
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08A85BD4u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85BD4u) goto L_08A85BD4;
    return;
L_08A85BD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g4 & 65535u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    hot_regs.g2 = (hot_regs.g5 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[3] = (hot_regs.g7 & 65535u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g4 = (2247u << 16u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    hot_regs.g31 = (0x08A85C20u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 668u, 0x0893AE5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85C20u) goto L_08A85C20;
    return;
L_08A85C20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85C44:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A85C6C;
      }
      goto L_08A85C64;
    }
}
L_08A85C64:
    hot_regs.g31 = (0x08A85C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85C6Cu) goto L_08A85C6C;
    return;
L_08A85C6C:
    hot_regs.g31 = (0x08A85C74u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 694u, 0x089BB2D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85C74u) goto L_08A85C74;
    return;
L_08A85C74:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85C80;
      }
      goto L_08A85C7C;
    }
L_08A85C7C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A85C80;
L_08A85C80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A85CAC;
      }
      goto L_08A85CA4;
    }
}
L_08A85CA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A85CF4;
      }
      goto L_08A85CAC;
    }
L_08A85CAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g6));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A85CD8;
      }
      goto L_08A85CCC;
    }
}
L_08A85CCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85CF4;
      }
      goto L_08A85CD8;
    }
}
L_08A85CD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85CF4;
      }
      goto L_08A85CF0;
    }
}
L_08A85CF0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08A85CF4;
L_08A85CF4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A85D0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2247u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A85D20u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8968));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 646u, 0x0893ABACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85D20u) goto L_08A85D20;
    return;
L_08A85D20:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85D30:
{
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
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
}
L_08A85D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85D7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A85DA0:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g6);
    goto L_08A85DB4;
}
L_08A85DB4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g4 + g5);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g5 = (g5 << 16u);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A85DB4;
      }
      goto L_08A85DD4;
    }
}
L_08A85DD4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (2236u << 16u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(-9568), static_cast<std::uint16_t>(0u));
    g5 = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g5));
    g6 = (0u | 2u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g5));
    g7 = (0u | 3u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g7));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g6));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g7));
    g4 = (2236u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-9536), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(-9536));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f13));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A85E50:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g17);
    g17 = (g5 << 16u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 + static_cast<std::uint32_t>(150));
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g5 = (g5 < hot_regs.g6 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A85EC0;
      }
      goto L_08A85E90;
    }
}
L_08A85E90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 15u);
    hot_regs.g4 = g4;
        goto L_08A85EB0;
    }
    goto L_08A85EA0;
}
L_08A85EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 15u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85EB0;
      }
      goto L_08A85EB0;
    }
}
L_08A85EB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(4))))));
    g4 = (g16 + g4);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    goto L_08A85EC0;
}
L_08A85EC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15379u << 16u);
    g4 = (g4 | 29884u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08A85ED0;
}
L_08A85ED0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85F24;
      }
      goto L_08A85EE0;
    }
}
L_08A85EE0:
    hot_regs.g4 = (ctx.gpr[18] << 4u);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(280)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(272));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A85F24u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85F24u) goto L_08A85F24;
    return;
L_08A85F24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (static_cast<std::int32_t>(g18) < 16 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A85ED0;
      }
      goto L_08A85F3C;
    }
}
L_08A85F3C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (2238u << 16u);
    hot_regs.g4 = (16512u << 16u);
    ctx.gpr[20] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    g19 = (g19 + static_cast<std::uint32_t>(14864));
    ctx.gpr[19] = g19;
    goto L_08A85F54;
}
L_08A85F54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + ctx.gpr[20]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85F94;
      }
      goto L_08A85F64;
    }
}
L_08A85F64:
    hot_regs.g4 = (ctx.gpr[20] << 4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A85F88u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 270u, 0x089D1734u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A85F88u) goto L_08A85F88;
    return;
L_08A85F88:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85F94;
      }
      goto L_08A85F90;
    }
L_08A85F90:
    ctx.gpr[20] = (0u | 16u);
    goto L_08A85F94;
L_08A85F94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g20 + static_cast<std::uint32_t>(1));
    g20 = (g4 << 16u);
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 16u));
    g4 = (static_cast<std::int32_t>(g20) < 16 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08A85F54;
      }
      goto L_08A85FAC;
    }
}
L_08A85FAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85FC8;
      }
      goto L_08A85FC0;
    }
}
L_08A85FC0:
    hot_regs.g31 = (0x08A85FC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_08A8676C;
L_08A85FC8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08A85FCC;
L_08A85FCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A85FFC;
      }
      goto L_08A85FDC;
    }
}
L_08A85FDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (static_cast<std::int32_t>(g18) < 16 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A85FCC;
      }
      goto L_08A85FF4;
    }
}
L_08A85FF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A85FFC;
      }
      goto L_08A85FFC;
    }
L_08A85FFC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A86020:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    g7 = (g7 << 4u);
    g7 = (g4 + g7);
    g7 = (g7 + static_cast<std::uint32_t>(16));
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
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    g5 = (g5 << 4u);
    g5 = (g4 + g5);
    g5 = (g5 + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
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
    g5 = (0u | 1u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(4))))));
    g4 = (g4 + g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A86064:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8606C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    g16 = (2246u << 16u);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(29008));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A86088;
}
L_08A86088:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] << 5u);
    hot_regs.g5 = (0u + g4);
    g4 = (g4 << 4u);
    g4 = (hot_regs.g5 + g4);
    hot_regs.g31 = (0x08A860A0u);
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.g4 = g4;
    goto L_08A85DA0;
}
L_08A860A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g4 = (static_cast<std::int32_t>(g17) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A86088;
      }
      goto L_08A860B8;
    }
}
L_08A860B8:
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
L_08A860CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    g4 = (2246u << 16u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    g4 = (g4 + static_cast<std::uint32_t>(29008));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    goto L_08A86100;
}
L_08A86100:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g7 = (hot_regs.g6 << 5u);
      if (branch_taken) {
          goto L_08A86138;
      }
      goto L_08A86108;
    }
L_08A86108:
{
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[8] = (0u + g7);
    g7 = (g7 << 4u);
    g7 = (ctx.gpr[8] + g7);
    g7 = (g7 + hot_regs.g4);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == ctx.gpr[18];
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A86138;
      }
      goto L_08A86124;
    }
}
L_08A86124:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g5 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g5 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A86100;
      }
      goto L_08A86138;
    }
}
L_08A86138:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86168;
      }
      goto L_08A86140;
    }
L_08A86140:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 << 5u);
    g6 = (0u + g5);
    g5 = (g5 << 4u);
    g5 = (g6 + g5);
    hot_regs.g4 = (g5 + hot_regs.g4);
    g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A86160u);
    g6 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A86020;
}
L_08A86160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A861E0;
      }
      goto L_08A86168;
    }
L_08A86168:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g5 = (0u | 1u);
    goto L_08A86170;
L_08A86170:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g7 = (hot_regs.g6 << 5u);
      if (branch_taken) {
          goto L_08A861A8;
      }
      goto L_08A86178;
    }
L_08A86178:
{
    std::uint32_t g7 = hot_regs.g7;
    ctx.gpr[8] = (0u + g7);
    g7 = (g7 << 4u);
    g7 = (ctx.gpr[8] + g7);
    g7 = (g7 + hot_regs.g4);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A861A8;
      }
      goto L_08A86194;
    }
}
L_08A86194:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 + static_cast<std::uint32_t>(1));
    g6 = (g5 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g5 = (static_cast<std::int32_t>(g6) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A86170;
      }
      goto L_08A861A8;
    }
}
L_08A861A8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A861E0;
      }
      goto L_08A861B0;
    }
L_08A861B0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 << 5u);
    g6 = (0u + g5);
    g5 = (g5 << 4u);
    g5 = (g6 + g5);
    ctx.gpr[19] = (g5 + hot_regs.g4);
    hot_regs.g31 = (0x08A861CCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A85DA0;
}
L_08A861CC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A861E0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_08A86020;
L_08A861E0:
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
L_08A861FC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(29008));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A86218;
}
L_08A86218:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] << 5u);
    g5 = (0u + g4);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[16]);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A86240;
      }
      goto L_08A86238;
    }
}
L_08A86238:
    hot_regs.g31 = (0x08A86240u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_08A85E50;
L_08A86240:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g4 = (static_cast<std::int32_t>(g17) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A86218;
      }
      goto L_08A86258;
    }
}
L_08A86258:
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
L_08A8626C:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(29008));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_08A86288;
}
L_08A86288:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[17] << 5u);
    g5 = (0u + g4);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[16]);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A862B0;
      }
      goto L_08A862A8;
    }
}
L_08A862A8:
    hot_regs.g31 = (0x08A862B0u);
    // nop
    goto L_08A862DC;
L_08A862B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g4 = (static_cast<std::int32_t>(g17) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A86288;
      }
      goto L_08A862C8;
    }
}
L_08A862C8:
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
L_08A862DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), hot_regs.g31);
    hot_regs.g31 = (0x08A86328u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86328u) goto L_08A86328;
    return;
L_08A86328:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A86334u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86334u) goto L_08A86334;
    return;
L_08A86334:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A86340u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86340u) goto L_08A86340;
    return;
L_08A86340:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8768)));
    hot_regs.g31 = (0x08A8634Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8634Cu) goto L_08A8634C;
    return;
L_08A8634C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16968u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7676)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f13;
    hot_regs.g5 = (16576u << 16u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-5432)));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 + f12;
    hot_regs.g6 = (16256u << 16u);
    g4 = (2236u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    ctx.gpr[16] = (g4 + static_cast<std::uint32_t>(-9536));
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-5432), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A863AC;
      }
      goto L_08A86390;
    }
}
}
L_08A86390:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5432)));
    goto L_08A86394;
L_08A86394:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f20;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A86394;
      }
      goto L_08A863A8;
    }
}
L_08A863A8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-5432), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A863AC;
L_08A863AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5432)));
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(-9536), std::bit_cast<std::uint32_t>(f14));
    f12 = f20 - f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4))))));
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 15u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08A86400;
    }
    goto L_08A863E8;
}
}
L_08A863E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (0u - g4);
    g4 = (g4 & 15u);
    g4 = (0u - g4);
    g18 = (g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A86408;
      }
      goto L_08A86400;
    }
}
L_08A86400:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (hot_regs.g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    ctx.gpr[18] = g18;
    goto L_08A86408;
}
L_08A86408:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(g17) >= 0;
    g4 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A86428;
      }
      goto L_08A8641C;
    }
}
L_08A8641C:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g5 = (g17 + static_cast<std::uint32_t>(16));
    g17 = (hot_regs.g5 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    ctx.gpr[17] = g17;
    goto L_08A86428;
}
L_08A86428:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g6 = (2236u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(32304));
    g6 = (g6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g6);
    g6 = (15692u << 16u);
    g6 = (g6 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(g6);
    g30 = (2236u << 16u);
    g6 = (15744u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g6);
    ctx.gpr[23] = (0u | 0u);
    g6 = (17279u << 16u);
    hot_regs.g5 = (0u | 0u);
    ctx.fpr[26] = std::bit_cast<float>(g6);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(32));
    g30 = (g30 + static_cast<std::uint32_t>(-9568));
    hot_regs.g6 = g6;
    ctx.gpr[30] = g30;
    goto L_08A8646C;
}
L_08A8646C:
    hot_regs.g6 = (ctx.gpr[21] + ctx.gpr[18]);
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[20] = (hot_regs.g5 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A866D0;
      }
      goto L_08A8647C;
    }
L_08A8647C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (ctx.gpr[21] + ctx.gpr[17]);
    g7 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A866D0;
      }
      goto L_08A8648C;
    }
}
L_08A8648C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (ctx.gpr[17] << 4u);
    g9 = (ctx.gpr[18] << 4u);
    hot_regs.g7 = (0u | 0u);
    g8 = (ctx.gpr[21] + g8);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g9 = (ctx.gpr[21] + g9);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08A864BC;
      }
      goto L_08A864A4;
    }
}
L_08A864A4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g6 == 0u;
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A864C0;
      }
      goto L_08A864B0;
    }
}
L_08A864B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A864C0;
      }
      goto L_08A864BC;
    }
}
L_08A864BC:
    hot_regs.g7 = (0u | 1u);
    goto L_08A864C0;
L_08A864C0:
    if (ctx.gpr[23] != 0u) {
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
        goto L_08A86538;
    }
    goto L_08A864C8;
L_08A864C8:
    hot_regs.g4 = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f22 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[23] = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    goto L_08A86538;
L_08A86538:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g5 = (0u | 0u);
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + hot_regs.f20;
    f13 = hot_regs.f20 - f13;
    { const float fs = f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (g4 & 255u);
    if (hot_regs.g7 == 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08A86570;
    }
    goto L_08A86570;
}
}
L_08A86570:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g6 = (0u | 255u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = hot_regs.f15 - f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(20)));
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(24)));
    g5 = (0u | 0u);
    f14 = ctx.fpr[17] - f14;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f13));
    f13 = ctx.fpr[18] - f16;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    if (hot_regs.g7 == 0u) {
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
        goto L_08A865CC;
    }
    goto L_08A865CC;
}
}
L_08A865CC:
    hot_regs.g6 = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g5));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = ctx.fpr[16] + hot_regs.f14;
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(hot_regs.g6));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[18] = ctx.fpr[0] + ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = ctx.fpr[17] + hot_regs.f20;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f12 = ctx.fpr[2] + hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(hot_regs.g6));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(hot_regs.g6));
    ctx.fpr[16] = ctx.fpr[16] - hot_regs.f12;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.f13 = ctx.fpr[18] - hot_regs.f15;
    ctx.fpr[17] = ctx.fpr[0] - hot_regs.f14;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(hot_regs.g6));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = ctx.fpr[16] + hot_regs.f15;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f14 = ctx.fpr[17] + hot_regs.f14;
    hot_regs.g5 = (0u | 4u);
    hot_regs.g6 = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08A866B0u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A866B0u) goto L_08A866B0;
    return;
L_08A866B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A866D0;
      }
      goto L_08A866B8;
    }
L_08A866B8:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x08A866C8u);
    hot_regs.g6 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A866C8u) goto L_08A866C8;
    return;
L_08A866C8:
    hot_regs.g31 = (0x08A866D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A866D0u) goto L_08A866D0;
    return;
L_08A866D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (g18 | 0u);
    g18 = (g17 | 0u);
    hot_regs.g6 = (g18 + static_cast<std::uint32_t>(-1));
    g5 = (ctx.gpr[20] << 16u);
    g17 = (hot_regs.g6 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(g17) >= 0;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08A866FC;
      }
      goto L_08A866F0;
    }
}
L_08A866F0:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g6 = (g17 + static_cast<std::uint32_t>(16));
    g17 = (hot_regs.g6 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    ctx.gpr[17] = g17;
    goto L_08A866FC;
}
L_08A866FC:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 15 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8646C;
      }
      goto L_08A86708;
    }
L_08A86708:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A86714u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86714u) goto L_08A86714;
    return;
L_08A86714:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x08A86720u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86720u) goto L_08A86720;
    return;
L_08A86720:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08A8672Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8672Cu) goto L_08A8672C;
    return;
L_08A8672C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8676C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), g23);
    g23 = (g4 | 0u);
    g4 = (17948u << 16u);
    g4 = (g4 | 16384u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g4 = (50716u << 16u);
    g4 = (g4 | 16384u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g7 = (0u | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (g23 + static_cast<std::uint32_t>(20));
    g4 = (g23 + static_cast<std::uint32_t>(16));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g6 = (g23 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
    goto L_08A867EC;
}
L_08A867EC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (ctx.gpr[23] + hot_regs.g7);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g8 == 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08A868BC;
      }
      goto L_08A867FC;
    }
}
L_08A867FC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g4 | 0u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((f12 < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A86818;
    }
    goto L_08A86818;
}
}
L_08A86818:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g4 | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_fpu_condition((f12 <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A86838;
    }
    goto L_08A86838;
}
}
L_08A86838:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g5 | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_fpu_condition((f12 < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A86858;
    }
    goto L_08A86858;
}
}
L_08A86858:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g5 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f12 <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A86878;
    }
    goto L_08A86878;
}
}
L_08A86878:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g6 | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.set_fpu_condition((f12 < ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A86898;
    }
    goto L_08A86898;
}
}
L_08A86898:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g6 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.set_fpu_condition((f12 <= ctx.fpr[19]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
        goto L_08A868B8;
    }
    goto L_08A868B8;
}
}
L_08A868B8:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A868BC;
L_08A868BC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (static_cast<std::int32_t>(g7) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08A867EC;
      }
      goto L_08A868D4;
    }
}
L_08A868D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g4);
    g4 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A86CBC;
      }
      goto L_08A86904;
    }
}
L_08A86904:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(3344));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(hot_regs.g5)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g4);
    g4 = (16153u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (ctx.lo);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(80));
    g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (16672u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(48));
    g4 = (17076u << 16u);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(64));
    ctx.fpr[28] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08A8695C;
}
L_08A8695C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(156)));
      if (branch_taken) {
          goto L_08A86978;
      }
      goto L_08A86968;
    }
L_08A86968:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g6 != 0u) {
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = g6;
        goto L_08A86980;
    }
    goto L_08A86978;
}
L_08A86978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A869A4;
      }
      goto L_08A86980;
    }
L_08A86980:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g6 + g4);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = g4;
        goto L_08A8699C;
    }
    goto L_08A86994;
}
L_08A86994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A869A4;
      }
      goto L_08A8699C;
    }
L_08A8699C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (hot_regs.g4 + ctx.gpr[17]);
    goto L_08A869A4;
L_08A869A4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A869AC;
    }
L_08A869AC:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A869C8;
    }
L_08A869C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A869E0;
    }
L_08A869E0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A869F8;
    }
L_08A869F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A86A10;
    }
L_08A86A10:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A86A28;
    }
L_08A86A28:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A86A40;
    }
L_08A86A40:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    goto L_08A86A48;
L_08A86A48:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 + ctx.gpr[23]);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(528)));
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 << 4u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A86C88;
      }
      goto L_08A86A58;
    }
}
L_08A86A58:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g16 = (ctx.gpr[23] + g16);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    f12 = f12 - f13;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    f14 = f14 - f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = f16 - ctx.fpr[17];
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g5 = (16544u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = f12 + f13;
    f12 = f12 + f15;
    ctx.set_fpu_condition((f12 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A86C88;
      }
      goto L_08A86AAC;
    }
}
}
L_08A86AAC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g31 = (0x08A86AD0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 618u, 0x08906DC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86AD0u) goto L_08A86AD0;
    return;
L_08A86AD0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(456)));
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A86B10u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86B10u) goto L_08A86B10;
    return;
L_08A86B10:
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(272)));
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(276)));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f15;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08A86B88;
      }
      goto L_08A86B6C;
    }
L_08A86B6C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = ctx.fpr[24] / f12;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08A86B88;
}
}
L_08A86B88:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A86B94u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86B94u) goto L_08A86B94;
    return;
L_08A86B94:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 2000u);
    hot_regs.g31 = (0x08A86BA8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 14u, 0x0891C0E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86BA8u) goto L_08A86BA8;
    return;
L_08A86BA8:
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 31u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A86BF0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86BF0u) goto L_08A86BF0;
    return;
L_08A86BF0:
    hot_regs.g4 = (48793u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A86C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86C34u) goto L_08A86C34;
    return;
L_08A86C34:
    hot_regs.f12 = ctx.fpr[30] - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g31 = (0x08A86C4Cu);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86C4Cu) goto L_08A86C4C;
    return;
L_08A86C4C:
    hot_regs.f13 = ctx.fpr[28] - hot_regs.f20;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f20 + hot_regs.f13;
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (0u | 44u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x08A86C84u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86C84u) goto L_08A86C84;
    return;
L_08A86C84:
    hot_regs.g4 = (0u | 16u);
    goto L_08A86C88;
L_08A86C88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A86A48;
      }
      goto L_08A86C98;
    }
}
L_08A86C98:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g4);
    g6 = (g6 + static_cast<std::uint32_t>(-3344));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g6);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A8695C;
      }
      goto L_08A86CBC;
    }
}
L_08A86CBC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
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
L_08A86D04:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), hot_regs.g31);
    hot_regs.g31 = (0x08A86D34u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86D34u) goto L_08A86D34;
    return;
L_08A86D34:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A86FCC;
      }
      goto L_08A86D3C;
    }
L_08A86D3C:
    hot_regs.g31 = (0x08A86D44u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86D44u) goto L_08A86D44;
    return;
L_08A86D44:
    hot_regs.g31 = (0x08A86D4Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86D4Cu) goto L_08A86D4C;
    return;
L_08A86D4C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A86D54;
    }
L_08A86D54:
    hot_regs.g4 = (14723u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (hot_regs.g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08A86D74u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86D74u) goto L_08A86D74;
    return;
L_08A86D74:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A86D80u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 73u, 0x0898C2B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86D80u) goto L_08A86D80;
    return;
L_08A86D80:
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    hot_regs.g4 = (14545u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 46871u);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g31 = (0x08A86DB4u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86DB4u) goto L_08A86DB4;
    return;
L_08A86DB4:
    hot_regs.g31 = (0x08A86DBCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 90u, 0x0898C3A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86DBCu) goto L_08A86DBC;
    return;
L_08A86DBC:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(hot_regs.g2);
    g5 = (15692u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    g5 = (g5 | 52429u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16129)));
    f14 = std::bit_cast<float>(g5);
    g5 = (16025u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (g5 | 39322u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f15 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A86DF4;
      }
      goto L_08A86DE8;
    }
}
}
L_08A86DE8:
    hot_regs.g4 = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08A86DFC;
      }
      goto L_08A86DF4;
    }
L_08A86DF4:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    goto L_08A86DFC;
L_08A86DFC:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    ctx.set_fpu_condition((f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A86E18;
      }
      goto L_08A86E14;
    }
}
L_08A86E14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08A86E18;
L_08A86E18:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86E30;
      }
      goto L_08A86E2C;
    }
L_08A86E2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(hot_regs.f15));
    goto L_08A86E30;
L_08A86E30:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16262u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (16385u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16192u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x08A86EA0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86EA0u) goto L_08A86EA0;
    return;
L_08A86EA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g31 = (0x08A86EB0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86EB0u) goto L_08A86EB0;
    return;
L_08A86EB0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A86EC0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_08A85D30;
L_08A86EC0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A86ED4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86ED4u) goto L_08A86ED4;
    return;
L_08A86ED4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A86EE4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    goto L_08A85D30;
L_08A86EE4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A86EF8u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    goto L_08A85D58;
L_08A86EF8:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A86F04u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    goto L_08A85D7C;
L_08A86F04:
{
    float f20 = hot_regs.f20;
    { const float fs = f20; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g31 = (0x08A86F10u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.f20 = f20;
    goto L_08A85D7C;
}
L_08A86F10:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A86F1Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    goto L_08A85D7C;
L_08A86F1C:
{
    float f22 = hot_regs.f22;
    { const float fs = f22; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.g31 = (0x08A86F28u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    hot_regs.f22 = f22;
    goto L_08A85D58;
}
L_08A86F28:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A86F68u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86F68u) goto L_08A86F68;
    return;
L_08A86F68:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 15u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (14979u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f12));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A86FA0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A860CC;
}
}
L_08A86FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A86FC4;
      }
      goto L_08A86FB0;
    }
}
L_08A86FB0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86FC4;
      }
      goto L_08A86FBC;
    }
L_08A86FBC:
    hot_regs.g31 = (0x08A86FC4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A86FC4u) goto L_08A86FC4;
    return;
L_08A86FC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A86FCC;
    }
L_08A86FCC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A86FE0;
    }
}
L_08A86FE0:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (16908u << 16u);
    hot_regs.g31 = (0x08A8700Cu);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 698u, 0x089CFD18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8700Cu) goto L_08A8700C;
    return;
L_08A8700C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A87018;
    }
L_08A87018:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08A87034u);
    hot_regs.f12 = hot_regs.f14 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87034u) goto L_08A87034;
    return;
L_08A87034:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A87058;
      }
      goto L_08A8704C;
    }
L_08A8704C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08A87058;
}
L_08A87058:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A87068u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87068u) goto L_08A87068;
    return;
L_08A87068:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08A87088;
      }
      goto L_08A8707C;
    }
L_08A8707C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = g4;
    goto L_08A87088;
}
L_08A87088:
    hot_regs.f22 = hot_regs.f12 - hot_regs.f22;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.g31 = (0x08A87098u);
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87098u) goto L_08A87098;
    return;
L_08A87098:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15395u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | 55050u);
    ctx.set_fpu_condition((f14 < hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    if (ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_08A870C0;
    }
    goto L_08A870C0;
}
}
L_08A870C0:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A870D8;
      }
      goto L_08A870D0;
    }
L_08A870D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08A87104;
      }
      goto L_08A870D8;
    }
L_08A870D8:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A870F8;
      }
      goto L_08A870E8;
    }
L_08A870E8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A87104;
      }
      goto L_08A870F8;
    }
}
L_08A870F8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    f12 = f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1852), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A87104;
}
L_08A87104:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 4095u);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A87124;
      }
      goto L_08A87118;
    }
}
}
L_08A87118:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08A87124;
L_08A87124:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16584u << 16u);
    g4 = (g4 | 62915u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (14720u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f13 + f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 10u);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A87188;
    }
}
}
L_08A87188:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16262u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16385u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 18350u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16192u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(336), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(344)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(344), hot_regs.g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    hot_regs.g31 = (0x08A871F4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A871F4u) goto L_08A871F4;
    return;
L_08A871F4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g31 = (0x08A87204u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87204u) goto L_08A87204;
    return;
L_08A87204:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A87214u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_08A85D30;
L_08A87214:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A87228u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87228u) goto L_08A87228;
    return;
L_08A87228:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A87238u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    goto L_08A85D30;
L_08A87238:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A8724Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    goto L_08A85D58;
L_08A8724C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A87258u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    goto L_08A85D7C;
L_08A87258:
{
    float f20 = hot_regs.f20;
    { const float fs = f20; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    hot_regs.g31 = (0x08A87264u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.f20 = f20;
    goto L_08A85D7C;
}
L_08A87264:
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A87270u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    goto L_08A85D7C;
L_08A87270:
{
    float f22 = hot_regs.f22;
    { const float fs = f22; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.g31 = (0x08A8727Cu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1856)));
    hot_regs.f22 = f22;
    goto L_08A85D58;
}
L_08A8727C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A872BCu);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(248)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A872BCu) goto L_08A872BC;
    return;
L_08A872BC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 15u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (14979u << 16u);
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(344)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A872F4;
    }
}
}
L_08A872F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87308;
      }
      goto L_08A87300;
    }
L_08A87300:
    hot_regs.g31 = (0x08A87308u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87308u) goto L_08A87308;
    return;
L_08A87308:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873C8;
      }
      goto L_08A87314;
    }
L_08A87314:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(424)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), 0u);
    g4 = (g4 & ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(424), g4);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(352));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A8734C;
      }
      goto L_08A87334;
    }
}
L_08A87334:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A87350;
      }
      goto L_08A87344;
    }
}
L_08A87344:
    hot_regs.g31 = (0x08A8734Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8734Cu) goto L_08A8734C;
    return;
L_08A8734C:
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08A87350;
L_08A87350:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), hot_regs.g4);
    hot_regs.g31 = (0x08A87368u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87368u) goto L_08A87368;
    return;
L_08A87368:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1852)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g31 = (0x08A87388u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87388u) goto L_08A87388;
    return;
L_08A87388:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(436)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(440)));
    hot_regs.g31 = (0x08A8739Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A8739Cu) goto L_08A8739C;
    return;
L_08A8739C:
    hot_regs.g31 = (0x08A873A4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A873A4u) goto L_08A873A4;
    return;
L_08A873A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(424)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A873C8;
      }
      goto L_08A873B4;
    }
}
L_08A873B4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A873C8;
      }
      goto L_08A873C0;
    }
L_08A873C0:
    hot_regs.g31 = (0x08A873C8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(416)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A873C8u) goto L_08A873C8;
    return;
L_08A873C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(480)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(484)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A873F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g7 = (2216u << 16u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (0u | 544u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(29008));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A87418u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(24676));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87418u) goto L_08A87418;
    return;
L_08A87418:
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
L_08A87424:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(g5));
    g5 = (0u | 60u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(g5));
    g5 = (0u | 100u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), 0u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87458:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (0u | 91u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A87470u);
    hot_regs.g6 = (0u | 92u);
    hot_regs.g29 = g29;
    goto L_08A87590;
}
L_08A87470:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (0u | 93u);
    hot_regs.g31 = (0x08A87480u);
    hot_regs.g6 = (0u | 94u);
    goto L_08A87590;
L_08A87480:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (0u | 95u);
    hot_regs.g31 = (0x08A87490u);
    hot_regs.g6 = (0u | 96u);
    goto L_08A87590;
L_08A87490:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g5 = (0u | 97u);
    hot_regs.g31 = (0x08A874A0u);
    hot_regs.g6 = (0u | 98u);
    goto L_08A87590;
L_08A874A0:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g5 = (0u | 99u);
    hot_regs.g31 = (0x08A874B0u);
    hot_regs.g6 = (0u | 100u);
    goto L_08A87590;
L_08A874B0:
    hot_regs.g4 = (0u | 5u);
    hot_regs.g5 = (0u | 101u);
    hot_regs.g31 = (0x08A874C0u);
    hot_regs.g6 = (0u | 102u);
    goto L_08A87590;
L_08A874C0:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g5 = (0u | 103u);
    hot_regs.g31 = (0x08A874D0u);
    hot_regs.g6 = (0u | 104u);
    goto L_08A87590;
L_08A874D0:
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (0u | 105u);
    hot_regs.g31 = (0x08A874E0u);
    hot_regs.g6 = (0u | 106u);
    goto L_08A87590;
L_08A874E0:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g5 = (0u | 107u);
    hot_regs.g31 = (0x08A874F0u);
    hot_regs.g6 = (0u | 108u);
    goto L_08A87590;
L_08A874F0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08A874FCu);
    hot_regs.g5 = (0u | 267u);
    goto L_08A87568;
L_08A874FC:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x08A87508u);
    hot_regs.g5 = (0u | 265u);
    goto L_08A87568;
L_08A87508:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g31 = (0x08A87514u);
    hot_regs.g5 = (0u | 269u);
    goto L_08A87568;
L_08A87514:
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x08A87520u);
    hot_regs.g5 = (0u | 171u);
    goto L_08A87568;
L_08A87520:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x08A8752Cu);
    hot_regs.g5 = (0u | 174u);
    goto L_08A87568;
L_08A8752C:
    hot_regs.g4 = (0u | 5u);
    hot_regs.g31 = (0x08A87538u);
    hot_regs.g5 = (0u | 231u);
    goto L_08A87568;
L_08A87538:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08A87544u);
    hot_regs.g5 = (0u | 171u);
    goto L_08A87568;
L_08A87544:
    hot_regs.g4 = (0u | 7u);
    hot_regs.g31 = (0x08A87550u);
    hot_regs.g5 = (0u | 184u);
    goto L_08A87568;
L_08A87550:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08A8755Cu);
    hot_regs.g5 = (0u | 171u);
    goto L_08A87568;
L_08A8755C:
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
L_08A87568:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g6 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g6 - g4);
    g6 = (2246u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g6);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g7 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g7 - g4);
    g7 = (2246u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g6);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A875BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g7 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g7 - g4);
    g7 = (2246u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), hot_regs.g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), hot_regs.g6);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A875E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g6 = (g5 & 255u);
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g5 = (g5 - g4);
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(30712));
    g5 = (g5 + g4);
    g4 = (0u | 100u);
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 == 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08A8761C;
    }
    goto L_08A8761C;
}
L_08A8761C:
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(hot_regs.g4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87624:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (17096u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g4 = (g4 << 16u);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (2246u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g5);
    g5 = (std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(g5));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08A87660:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g5 - g4);
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(30712));
    g16 = (g16 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(12))))));
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A876F4;
      }
      goto L_08A8769C;
    }
}
L_08A8769C:
    hot_regs.g31 = (0x08A876A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A876A4u) goto L_08A876A4;
    return;
L_08A876A4:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5404)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5408)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A876B8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A876B8u) goto L_08A876B8;
    return;
L_08A876B8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    g4 = (ctx.gpr[1] | g4);
    g4 = (g4 | 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A876DC;
      }
      goto L_08A876D4;
    }
}
L_08A876D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08A876DC;
      }
      goto L_08A876DC;
    }
L_08A876DC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A876EC;
      }
      goto L_08A876E4;
    }
L_08A876E4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A876F8;
      }
      goto L_08A876EC;
    }
L_08A876EC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A876F8;
      }
      goto L_08A876F4;
    }
L_08A876F4:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A876F8;
L_08A876F8:
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
L_08A87708:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g7 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g7 - g4);
    g7 = (2246u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g7);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(hot_regs.g5));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(hot_regs.g6));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87734:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 & 255u);
      if (branch_taken) {
          goto L_08A8774C;
      }
      goto L_08A87740;
    }
L_08A87740:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87754;
      }
      goto L_08A8774C;
    }
L_08A8774C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8775C;
      }
      goto L_08A87754;
    }
L_08A87754:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[28] + g4);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(-5431), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
    goto L_08A8775C;
}
L_08A8775C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87764:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 16 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A87778;
      }
      goto L_08A87770;
    }
}
L_08A87770:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87780;
      }
      goto L_08A87778;
    }
L_08A87778:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A87788;
      }
      goto L_08A87780;
    }
L_08A87780:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[28] + g4);
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(-5431)));
    hot_regs.g4 = g4;
    goto L_08A87788;
}
L_08A87788:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87790:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87798:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g7 = (2216u << 16u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 28u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(30712));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A877BCu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(29732));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A877BCu) goto L_08A877BC;
    return;
L_08A877BC:
    hot_regs.g31 = (0x08A877C4u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-5392));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A877C4u) goto L_08A877C4;
    return;
L_08A877C4:
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
L_08A877D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g6 = (2236u << 16u);
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(29704));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g7);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A877FCu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A877FCu) goto L_08A877FC;
    return;
L_08A877FC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A8780C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08A87834u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87834u) goto L_08A87834;
    return;
L_08A87834:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08A87848u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 225u, 0x08941948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87848u) goto L_08A87848;
    return;
L_08A87848:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A87860:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08A87898u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87898u) goto L_08A87898;
    return;
L_08A87898:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g31 = (0x08A878ACu);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 226u, 0x08941988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A878ACu) goto L_08A878AC;
    return;
L_08A878AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A878C0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A878C0u) goto L_08A878C0;
    return;
L_08A878C0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A878E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A87900u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87900u) goto L_08A87900;
    return;
L_08A87900:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x08A87910u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 473u, 0x08AFB4E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87910u) goto L_08A87910;
    return;
L_08A87910:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A87924:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A87944u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87944u) goto L_08A87944;
    return;
L_08A87944:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x08A87954u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 474u, 0x08AFB4E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87954u) goto L_08A87954;
    return;
L_08A87954:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A87968:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A87978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 475u, 0x08AFB4F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87978u) goto L_08A87978;
    return;
L_08A87978:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87988:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A87998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 5u, 0x08AFC0D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87998u) goto L_08A87998;
    return;
L_08A87998:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A879A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A879B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 6u, 0x08AFC100u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A879B8u) goto L_08A879B8;
    return;
L_08A879B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A879C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A879D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 257u, 0x08941B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A879D8u) goto L_08A879D8;
    return;
L_08A879D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A879E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A879F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 258u, 0x08941BB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A879F8u) goto L_08A879F8;
    return;
L_08A879F8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87A08:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8912)));
    hot_regs.g6 = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08A87A28u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87A28u) goto L_08A87A28;
    return;
L_08A87A28:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87A38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08A87A58u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87A58u) goto L_08A87A58;
    return;
L_08A87A58:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4182), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87A70;
      }
      goto L_08A87A68;
    }
L_08A87A68:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(4182), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08A87A70;
L_08A87A70:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08A87A84:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0))))));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87A98:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0))))));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87AAC:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87AB8:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87AC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(2))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(4))))));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g6));
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 1400u);
    hot_regs.g31 = (0x08A87B64u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87B64u) goto L_08A87B64;
    return;
L_08A87B64:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), hot_regs.g2);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint16_t>(ctx.gpr[16]));
    hot_regs.g31 = (0x08A87B74u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 921u, 0x0897F8C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87B74u) goto L_08A87B74;
    return;
L_08A87B74:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), 0u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
    hot_regs.g7 = (2216u << 16u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(31416));
    hot_regs.g5 = (0u | 48u);
    hot_regs.g31 = (0x08A87BBCu);
    hot_regs.g6 = (0u | 1412u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87BBCu) goto L_08A87BBC;
    return;
L_08A87BBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2384), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2388), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2392), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2396), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2400), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2404), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2408), 0u);
    g4 = (1u << 16u);
    g4 = (g17 + g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(2412), 0u);
    hot_regs.g31 = (0x08A87C24u);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    goto L_08A87FFC;
}
L_08A87C24:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87C3C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A87E24;
      }
      goto L_08A87C74;
    }
}
L_08A87C74:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[19] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(120));
    ctx.gpr[23] = (g16 + static_cast<std::uint32_t>(108));
    { const bool branch_taken = ctx.gpr[19] == hot_regs.g4;
    ctx.gpr[30] = (g16 + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A87CC4;
      }
      goto L_08A87C8C;
    }
}
L_08A87C8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A87CAC;
      }
      goto L_08A87C98;
    }
L_08A87C98:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08A87CA4u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87CA4u) goto L_08A87CA4;
    return;
L_08A87CA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08A87CB8;
      }
      goto L_08A87CAC;
    }
L_08A87CAC:
    hot_regs.g31 = (0x08A87CB4u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87CB4u) goto L_08A87CB4;
    return;
L_08A87CB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08A87CB8;
L_08A87CB8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g19 != hot_regs.g4;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A87C8C;
      }
      goto L_08A87CC4;
    }
}
L_08A87CC4:
    hot_regs.g31 = (0x08A87CCCu);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0142_entry, 142u, 99u, 0x08A3C804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87CCCu) goto L_08A87CCC;
    return;
L_08A87CCC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DA4;
      }
      goto L_08A87CD4;
    }
L_08A87CD4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87D80;
      }
      goto L_08A87CE4;
    }
L_08A87CE4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A87D74;
      }
      goto L_08A87CEC;
    }
L_08A87CEC:
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A87D1C;
      }
      goto L_08A87CF8;
    }
L_08A87CF8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87D1C;
      }
      goto L_08A87D00;
    }
L_08A87D00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D1C;
      }
      goto L_08A87D0C;
    }
L_08A87D0C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D1C;
      }
      goto L_08A87D14;
    }
L_08A87D14:
    hot_regs.g31 = (0x08A87D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87D1Cu) goto L_08A87D1C;
    return;
L_08A87D1C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D48;
      }
      goto L_08A87D24;
    }
L_08A87D24:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87D48;
      }
      goto L_08A87D2C;
    }
L_08A87D2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D48;
      }
      goto L_08A87D38;
    }
L_08A87D38:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D48;
      }
      goto L_08A87D40;
    }
L_08A87D40:
    hot_regs.g31 = (0x08A87D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87D48u) goto L_08A87D48;
    return;
L_08A87D48:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
        goto L_08A87D78;
    }
    goto L_08A87D50;
L_08A87D50:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87D74;
      }
      goto L_08A87D58;
    }
L_08A87D58:
{
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    if (hot_regs.g4 == 0u) {
    g20 = (g20 + static_cast<std::uint32_t>(44));
    ctx.gpr[20] = g20;
        goto L_08A87D78;
    }
    goto L_08A87D64;
}
L_08A87D64:
    if (hot_regs.g4 == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
        goto L_08A87D78;
    }
    goto L_08A87D6C;
L_08A87D6C:
    hot_regs.g31 = (0x08A87D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87D74u) goto L_08A87D74;
    return;
L_08A87D74:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    goto L_08A87D78;
L_08A87D78:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A87CE4;
      }
      goto L_08A87D80;
    }
L_08A87D80:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DA4;
      }
      goto L_08A87D88;
    }
L_08A87D88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DA4;
      }
      goto L_08A87D94;
    }
L_08A87D94:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DA4;
      }
      goto L_08A87D9C;
    }
L_08A87D9C:
    hot_regs.g31 = (0x08A87DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87DA4u) goto L_08A87DA4;
    return;
L_08A87DA4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08A87DD4;
      }
      goto L_08A87DAC;
    }
L_08A87DAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87DD0;
      }
      goto L_08A87DB8;
    }
L_08A87DB8:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08A87DD4;
    }
    goto L_08A87DC0;
L_08A87DC0:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
        goto L_08A87DD4;
    }
    goto L_08A87DC8;
L_08A87DC8:
    hot_regs.g31 = (0x08A87DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87DD0u) goto L_08A87DD0;
    return;
L_08A87DD0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    goto L_08A87DD4;
L_08A87DD4:
    hot_regs.g31 = (0x08A87DDCu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 923u, 0x0897F8F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87DDCu) goto L_08A87DDC;
    return;
L_08A87DDC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A87E14;
      }
      goto L_08A87DE4;
    }
L_08A87DE4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08A87E14;
      }
      goto L_08A87DEC;
    }
L_08A87DEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[17] & 1u);
    hot_regs.g4 = g4;
        goto L_08A87E14;
    }
    goto L_08A87DF8;
}
L_08A87DF8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A87E10;
      }
      goto L_08A87E08;
    }
}
L_08A87E08:
    hot_regs.g31 = (0x08A87E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87E10u) goto L_08A87E10;
    return;
L_08A87E10:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    goto L_08A87E14;
L_08A87E14:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87E24;
      }
      goto L_08A87E1C;
    }
L_08A87E1C:
    hot_regs.g31 = (0x08A87E24u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87E24u) goto L_08A87E24;
    return;
L_08A87E24:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87E54:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87E60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    g19 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (g4 | 0u);
    g17 = (g5 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (g6 | 0u);
    g5 = (g19 - g4);
    ctx.gpr[20] = (g17 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g6 = (0u | 44u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g5 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(g5) <= 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A87F24;
      }
      goto L_08A87EB8;
    }
}
L_08A87EB8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08A87EE8u);
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87EE8u) goto L_08A87EE8;
    return;
L_08A87EE8:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A87EF8u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87EF8u) goto L_08A87EF8;
    return;
L_08A87EF8:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08A87F08u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 524u, 0x08B6E74Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87F08u) goto L_08A87F08;
    return;
L_08A87F08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    g4 = (g4 + static_cast<std::uint32_t>(44));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g5) > 0;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A87EB8;
      }
      goto L_08A87F20;
    }
}
L_08A87F20:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A87F24;
L_08A87F24:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87FCC;
      }
      goto L_08A87F30;
    }
L_08A87F30:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A87FC0;
      }
      goto L_08A87F38;
    }
L_08A87F38:
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A87F68;
      }
      goto L_08A87F44;
    }
L_08A87F44:
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87F68;
      }
      goto L_08A87F4C;
    }
L_08A87F4C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F68;
      }
      goto L_08A87F58;
    }
L_08A87F58:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F68;
      }
      goto L_08A87F60;
    }
L_08A87F60:
    hot_regs.g31 = (0x08A87F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87F68u) goto L_08A87F68;
    return;
L_08A87F68:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F94;
      }
      goto L_08A87F70;
    }
L_08A87F70:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87F94;
      }
      goto L_08A87F78;
    }
L_08A87F78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F94;
      }
      goto L_08A87F84;
    }
L_08A87F84:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F94;
      }
      goto L_08A87F8C;
    }
L_08A87F8C:
    hot_regs.g31 = (0x08A87F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87F94u) goto L_08A87F94;
    return;
L_08A87F94:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
        goto L_08A87FC4;
    }
    goto L_08A87F9C;
L_08A87F9C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A87FC0;
      }
      goto L_08A87FA4;
    }
L_08A87FA4:
{
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (aot_mem.aot_load32(g20 + static_cast<std::uint32_t>(8)));
    if (hot_regs.g4 == 0u) {
    g20 = (g20 + static_cast<std::uint32_t>(44));
    ctx.gpr[20] = g20;
        goto L_08A87FC4;
    }
    goto L_08A87FB0;
}
L_08A87FB0:
    if (hot_regs.g4 == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
        goto L_08A87FC4;
    }
    goto L_08A87FB8;
L_08A87FB8:
    hot_regs.g31 = (0x08A87FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A87FC0u) goto L_08A87FC0;
    return;
L_08A87FC0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(44));
    goto L_08A87FC4;
L_08A87FC4:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A87F30;
      }
      goto L_08A87FCC;
    }
L_08A87FCC:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A87FFC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    ctx.pc = 0x08A88000u; return;
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x08A84000u, 16384u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x08A84000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84010u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8402Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84030u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8403Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84048u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84050u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84084u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8408Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A840F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84100u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84108u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84110u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8411Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84154u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8421Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84220u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84228u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84234u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8424Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84268u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8426Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84270u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84278u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84280u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84284u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8431Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84320u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84328u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84330u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84334u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8434Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84368u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8436Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84370u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84378u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84384u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8439Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84434u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8443Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8444Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84454u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84464u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8446Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84474u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8448Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84494u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8450Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84550u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84604u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84620u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8462Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84720u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8472Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84820u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8482Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8486Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84948u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85010u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8503Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85060u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85110u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8514Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8515Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85164u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85184u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85248u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8527Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85284u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85308u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85328u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85368u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85384u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85410u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8548Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85494u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8549Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85520u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85524u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8552Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85538u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85558u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85604u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85648u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85748u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85850u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85894u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8589Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85920u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85924u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8595Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8596Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8597Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85984u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8598Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85A94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86064u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8606Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86100u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86108u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86138u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86140u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86160u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86170u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86178u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86258u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8626Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86328u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86334u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86340u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8634Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86390u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86394u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A863E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86400u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86408u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8641Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86428u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8646Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8647Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8648Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86538u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86570u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86708u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86714u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86720u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8672Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8676Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86838u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86858u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86878u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86904u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8695Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86978u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86994u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8699Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86ED4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8700Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87018u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8704Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8707Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87104u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87118u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87124u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87188u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87204u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87214u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87228u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87238u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8724Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87258u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87264u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87270u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8727Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87300u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87308u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87314u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87334u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87344u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8734Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87350u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87368u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87388u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8739Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A873F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87458u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87470u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87480u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87508u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87520u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8752Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87538u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87550u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8755Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87568u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87590u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8761Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87624u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87660u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8769Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87708u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87740u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8774Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8775Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87764u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87778u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87780u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87788u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87790u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87798u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A877FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8780Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87860u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87900u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87924u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87944u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87954u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87978u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87998u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F94u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FFCu, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp
