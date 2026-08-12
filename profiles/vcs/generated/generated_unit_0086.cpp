#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0086[4087] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    8, 0, 0, 9, 0, 0, 10, 0, 0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17,
    0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41,
    0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0,
    0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 66, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0,
    0, 0, 79, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0,
    0, 0, 0, 87, 88, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 96, 0, 0, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 110, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 116, 0, 0,
    0, 0, 117, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124,
    0, 125, 0, 0, 0, 126, 0, 127, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0,
    135, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 154, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165,
    0, 0, 0, 166, 0, 0, 0, 0, 167, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 175, 0, 0, 0, 0, 0, 176, 177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 186, 0, 187, 0,
    0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0,
    0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0,
    0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 208, 0, 0,
    0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0,
    0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0,
    222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0,
    227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 244,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 253,
    0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0,
    0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    262, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 303, 304, 0, 0, 0, 0, 0,
    0, 305, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 0, 0,
    0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329,
    0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 337, 0, 338, 339, 0, 0, 0, 340, 0, 0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 346, 347, 0, 0, 0,
    348, 0, 0, 349, 0, 350, 351, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 0, 362, 0, 363, 364, 0, 0, 0, 365, 0, 0, 366, 0, 367, 368, 0, 0, 0, 0, 0, 369, 0,
    370, 0, 0, 371, 0, 372, 373, 0, 0, 0, 374, 0, 0, 375, 0, 376, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 381, 382, 0,
    0, 0, 383, 0, 0, 384, 0, 385, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 408,
    0, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0,
    423, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 0, 430, 431, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 437,
    0, 0, 438, 0, 0, 439, 440, 0, 441, 0, 0, 442, 443, 0, 0, 444, 0, 445, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0,
    0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0,
    466, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0,
    475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 481,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494,
    0, 0, 495, 0, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 503,
    0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0,
    508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 516, 517, 0, 518, 519, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0,
    522, 0, 523, 524, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 527, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 545, 0, 0, 546,
    0, 0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 556,
    0, 0, 557, 0, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    563, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0,
    0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0,
    0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 587, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 590, 0, 0, 591, 592, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 602, 0, 0,
    0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604,
};
void recomp_unit_0086_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0895C000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0086[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0895C000;
    case 2u: goto L_0895C01C;
    case 3u: goto L_0895C044;
    case 4u: goto L_0895C04C;
    case 5u: goto L_0895C058;
    case 6u: goto L_0895C064;
    case 7u: goto L_0895C074;
    case 8u: goto L_0895C080;
    case 9u: goto L_0895C08C;
    case 10u: goto L_0895C098;
    case 11u: goto L_0895C0A4;
    case 12u: goto L_0895C0A8;
    case 13u: goto L_0895C118;
    case 14u: goto L_0895C1B4;
    case 15u: goto L_0895C1D4;
    case 16u: goto L_0895C1E0;
    case 17u: goto L_0895C1FC;
    case 18u: goto L_0895C208;
    case 19u: goto L_0895C214;
    case 20u: goto L_0895C220;
    case 21u: goto L_0895C244;
    case 22u: goto L_0895C28C;
    case 23u: goto L_0895C2A8;
    case 24u: goto L_0895C2C0;
    case 25u: goto L_0895C2C8;
    case 26u: goto L_0895C318;
    case 27u: goto L_0895C324;
    case 28u: goto L_0895C34C;
    case 29u: goto L_0895C54C;
    case 30u: goto L_0895C564;
    case 31u: goto L_0895C570;
    case 32u: goto L_0895C640;
    case 33u: goto L_0895C658;
    case 34u: goto L_0895C694;
    case 35u: goto L_0895C6B8;
    case 36u: goto L_0895C6C4;
    case 37u: goto L_0895C6D0;
    case 38u: goto L_0895C6DC;
    case 39u: goto L_0895C6E4;
    case 40u: goto L_0895C6F0;
    case 41u: goto L_0895C6FC;
    case 42u: goto L_0895C708;
    case 43u: goto L_0895C710;
    case 44u: goto L_0895C734;
    case 45u: goto L_0895C748;
    case 46u: goto L_0895C760;
    case 47u: goto L_0895C764;
    case 48u: goto L_0895C800;
    case 49u: goto L_0895C848;
    case 50u: goto L_0895C864;
    case 51u: goto L_0895C868;
    case 52u: goto L_0895C878;
    case 53u: goto L_0895C884;
    case 54u: goto L_0895C88C;
    case 55u: goto L_0895C8C4;
    case 56u: goto L_0895C918;
    case 57u: goto L_0895C934;
    case 58u: goto L_0895C978;
    case 59u: goto L_0895C9A8;
    case 60u: goto L_0895CA18;
    case 61u: goto L_0895CA3C;
    case 62u: goto L_0895CA60;
    case 63u: goto L_0895CA7C;
    case 64u: goto L_0895CA94;
    case 65u: goto L_0895CABC;
    case 66u: goto L_0895CAC4;
    case 67u: goto L_0895CACC;
    case 68u: goto L_0895CAF0;
    case 69u: goto L_0895CAF8;
    case 70u: goto L_0895CB00;
    case 71u: goto L_0895CB10;
    case 72u: goto L_0895CB28;
    case 73u: goto L_0895CB30;
    case 74u: goto L_0895CB40;
    case 75u: goto L_0895CB54;
    case 76u: goto L_0895CB5C;
    case 77u: goto L_0895CB68;
    case 78u: goto L_0895CB78;
    case 79u: goto L_0895CB88;
    case 80u: goto L_0895CB90;
    case 81u: goto L_0895CBA4;
    case 82u: goto L_0895CBB0;
    case 83u: goto L_0895CBBC;
    case 84u: goto L_0895CBCC;
    case 85u: goto L_0895CC50;
    case 86u: goto L_0895CC70;
    case 87u: goto L_0895CC8C;
    case 88u: goto L_0895CC90;
    case 89u: goto L_0895CCA4;
    case 90u: goto L_0895CCB4;
    case 91u: goto L_0895CCCC;
    case 92u: goto L_0895CD08;
    case 93u: goto L_0895CD14;
    case 94u: goto L_0895CD34;
    case 95u: goto L_0895CD48;
    case 96u: goto L_0895CD8C;
    case 97u: goto L_0895CD98;
    case 98u: goto L_0895CDA4;
    case 99u: goto L_0895CDCC;
    case 100u: goto L_0895CDD4;
    case 101u: goto L_0895CDDC;
    case 102u: goto L_0895CDE4;
    case 103u: goto L_0895CE34;
    case 104u: goto L_0895CE3C;
    case 105u: goto L_0895CE44;
    case 106u: goto L_0895CE50;
    case 107u: goto L_0895CE6C;
    case 108u: goto L_0895CE74;
    case 109u: goto L_0895CE8C;
    case 110u: goto L_0895CEA0;
    case 111u: goto L_0895CEA4;
    case 112u: goto L_0895CEC0;
    case 113u: goto L_0895CEC8;
    case 114u: goto L_0895CEE4;
    case 115u: goto L_0895CEE8;
    case 116u: goto L_0895CEF4;
    case 117u: goto L_0895CF08;
    case 118u: goto L_0895CF10;
    case 119u: goto L_0895CF20;
    case 120u: goto L_0895CF40;
    case 121u: goto L_0895CF5C;
    case 122u: goto L_0895CF64;
    case 123u: goto L_0895CF70;
    case 124u: goto L_0895CF7C;
    case 125u: goto L_0895CF84;
    case 126u: goto L_0895CF94;
    case 127u: goto L_0895CF9C;
    case 128u: goto L_0895CFA4;
    case 129u: goto L_0895CFAC;
    case 130u: goto L_0895CFC0;
    case 131u: goto L_0895CFDC;
    case 132u: goto L_0895CFE4;
    case 133u: goto L_0895CFEC;
    case 134u: goto L_0895CFF8;
    case 135u: goto L_0895D000;
    case 136u: goto L_0895D008;
    case 137u: goto L_0895D014;
    case 138u: goto L_0895D020;
    case 139u: goto L_0895D02C;
    case 140u: goto L_0895D038;
    case 141u: goto L_0895D040;
    case 142u: goto L_0895D04C;
    case 143u: goto L_0895D058;
    case 144u: goto L_0895D0A4;
    case 145u: goto L_0895D0BC;
    case 146u: goto L_0895D0D0;
    case 147u: goto L_0895D180;
    case 148u: goto L_0895D19C;
    case 149u: goto L_0895D1A4;
    case 150u: goto L_0895D1B4;
    case 151u: goto L_0895D1C8;
    case 152u: goto L_0895D1DC;
    case 153u: goto L_0895D1FC;
    case 154u: goto L_0895D204;
    case 155u: goto L_0895D214;
    case 156u: goto L_0895D228;
    case 157u: goto L_0895D2A0;
    case 158u: goto L_0895D2F8;
    case 159u: goto L_0895D300;
    case 160u: goto L_0895D324;
    case 161u: goto L_0895D32C;
    case 162u: goto L_0895D33C;
    case 163u: goto L_0895D350;
    case 164u: goto L_0895D374;
    case 165u: goto L_0895D37C;
    case 166u: goto L_0895D38C;
    case 167u: goto L_0895D3A0;
    case 168u: goto L_0895D3A4;
    case 169u: goto L_0895D3B8;
    case 170u: goto L_0895D3C0;
    case 171u: goto L_0895D414;
    case 172u: goto L_0895D41C;
    case 173u: goto L_0895D424;
    case 174u: goto L_0895D440;
    case 175u: goto L_0895D488;
    case 176u: goto L_0895D4A0;
    case 177u: goto L_0895D4A4;
    case 178u: goto L_0895D4B0;
    case 179u: goto L_0895D4C0;
    case 180u: goto L_0895D4D8;
    case 181u: goto L_0895D51C;
    case 182u: goto L_0895D530;
    case 183u: goto L_0895D53C;
    case 184u: goto L_0895D550;
    case 185u: goto L_0895D558;
    case 186u: goto L_0895D570;
    case 187u: goto L_0895D578;
    case 188u: goto L_0895D588;
    case 189u: goto L_0895D59C;
    case 190u: goto L_0895D5B4;
    case 191u: goto L_0895D5D0;
    case 192u: goto L_0895D5F4;
    case 193u: goto L_0895D604;
    case 194u: goto L_0895D610;
    case 195u: goto L_0895D618;
    case 196u: goto L_0895D620;
    case 197u: goto L_0895D628;
    case 198u: goto L_0895D64C;
    case 199u: goto L_0895D654;
    case 200u: goto L_0895D664;
    case 201u: goto L_0895D678;
    case 202u: goto L_0895D698;
    case 203u: goto L_0895D6A4;
    case 204u: goto L_0895D6D8;
    case 205u: goto L_0895D6E0;
    case 206u: goto L_0895D6E8;
    case 207u: goto L_0895D6F0;
    case 208u: goto L_0895D6F4;
    case 209u: goto L_0895D70C;
    case 210u: goto L_0895D718;
    case 211u: goto L_0895D720;
    case 212u: goto L_0895D72C;
    case 213u: goto L_0895D750;
    case 214u: goto L_0895D778;
    case 215u: goto L_0895D784;
    case 216u: goto L_0895D790;
    case 217u: goto L_0895D79C;
    case 218u: goto L_0895D7B8;
    case 219u: goto L_0895D7CC;
    case 220u: goto L_0895D7D8;
    case 221u: goto L_0895D7E8;
    case 222u: goto L_0895D800;
    case 223u: goto L_0895D82C;
    case 224u: goto L_0895D864;
    case 225u: goto L_0895D86C;
    case 226u: goto L_0895D874;
    case 227u: goto L_0895D880;
    case 228u: goto L_0895D888;
    case 229u: goto L_0895D8AC;
    case 230u: goto L_0895D8B8;
    case 231u: goto L_0895D8C0;
    case 232u: goto L_0895D900;
    case 233u: goto L_0895D910;
    case 234u: goto L_0895D920;
    case 235u: goto L_0895D938;
    case 236u: goto L_0895D980;
    case 237u: goto L_0895D988;
    case 238u: goto L_0895D9A0;
    case 239u: goto L_0895D9B4;
    case 240u: goto L_0895D9C0;
    case 241u: goto L_0895D9C8;
    case 242u: goto L_0895D9E8;
    case 243u: goto L_0895D9F4;
    case 244u: goto L_0895D9FC;
    case 245u: goto L_0895DA38;
    case 246u: goto L_0895DA48;
    case 247u: goto L_0895DA58;
    case 248u: goto L_0895DA74;
    case 249u: goto L_0895DABC;
    case 250u: goto L_0895DAC4;
    case 251u: goto L_0895DADC;
    case 252u: goto L_0895DAF0;
    case 253u: goto L_0895DAFC;
    case 254u: goto L_0895DB04;
    case 255u: goto L_0895DB28;
    case 256u: goto L_0895DB34;
    case 257u: goto L_0895DB3C;
    case 258u: goto L_0895DB78;
    case 259u: goto L_0895DB88;
    case 260u: goto L_0895DB98;
    case 261u: goto L_0895DBB4;
    case 262u: goto L_0895DC00;
    case 263u: goto L_0895DC08;
    case 264u: goto L_0895DC14;
    case 265u: goto L_0895DC38;
    case 266u: goto L_0895DC5C;
    case 267u: goto L_0895DC80;
    case 268u: goto L_0895DC88;
    case 269u: goto L_0895DC98;
    case 270u: goto L_0895DCB4;
    case 271u: goto L_0895DCBC;
    case 272u: goto L_0895DCC4;
    case 273u: goto L_0895DCFC;
    case 274u: goto L_0895DD2C;
    case 275u: goto L_0895DD68;
    case 276u: goto L_0895DD98;
    case 277u: goto L_0895DDAC;
    case 278u: goto L_0895DDB4;
    case 279u: goto L_0895DDBC;
    case 280u: goto L_0895DDE0;
    case 281u: goto L_0895DDE8;
    case 282u: goto L_0895DDF8;
    case 283u: goto L_0895DE0C;
    case 284u: goto L_0895DE28;
    case 285u: goto L_0895DE40;
    case 286u: goto L_0895DE48;
    case 287u: goto L_0895DE50;
    case 288u: goto L_0895DE60;
    case 289u: goto L_0895DE74;
    case 290u: goto L_0895DE90;
    case 291u: goto L_0895DEA8;
    case 292u: goto L_0895DEB0;
    case 293u: goto L_0895DEB8;
    case 294u: goto L_0895DEC8;
    case 295u: goto L_0895DEDC;
    case 296u: goto L_0895DF00;
    case 297u: goto L_0895DF0C;
    case 298u: goto L_0895DF18;
    case 299u: goto L_0895DF20;
    case 300u: goto L_0895DF30;
    case 301u: goto L_0895DF4C;
    case 302u: goto L_0895DF54;
    case 303u: goto L_0895DF64;
    case 304u: goto L_0895DF68;
    case 305u: goto L_0895DF84;
    case 306u: goto L_0895DF9C;
    case 307u: goto L_0895DFA4;
    case 308u: goto L_0895DFC4;
    case 309u: goto L_0895DFD8;
    case 310u: goto L_0895DFE0;
    case 311u: goto L_0895E004;
    case 312u: goto L_0895E010;
    case 313u: goto L_0895E024;
    case 314u: goto L_0895E038;
    case 315u: goto L_0895E05C;
    case 316u: goto L_0895E068;
    case 317u: goto L_0895E07C;
    case 318u: goto L_0895E090;
    case 319u: goto L_0895E0C0;
    case 320u: goto L_0895E0D8;
    case 321u: goto L_0895E0E0;
    case 322u: goto L_0895E0E8;
    case 323u: goto L_0895E0F0;
    case 324u: goto L_0895E104;
    case 325u: goto L_0895E110;
    case 326u: goto L_0895E1B4;
    case 327u: goto L_0895E1C4;
    case 328u: goto L_0895E1EC;
    case 329u: goto L_0895E1FC;
    case 330u: goto L_0895E21C;
    case 331u: goto L_0895E22C;
    case 332u: goto L_0895E2B8;
    case 333u: goto L_0895E33C;
    case 334u: goto L_0895E344;
    case 335u: goto L_0895E360;
    case 336u: goto L_0895E36C;
    case 337u: goto L_0895E40C;
    case 338u: goto L_0895E414;
    case 339u: goto L_0895E418;
    case 340u: goto L_0895E428;
    case 341u: goto L_0895E434;
    case 342u: goto L_0895E43C;
    case 343u: goto L_0895E440;
    case 344u: goto L_0895E458;
    case 345u: goto L_0895E464;
    case 346u: goto L_0895E46C;
    case 347u: goto L_0895E470;
    case 348u: goto L_0895E480;
    case 349u: goto L_0895E48C;
    case 350u: goto L_0895E494;
    case 351u: goto L_0895E498;
    case 352u: goto L_0895E4B0;
    case 353u: goto L_0895E4B8;
    case 354u: goto L_0895E4CC;
    case 355u: goto L_0895E4D8;
    case 356u: goto L_0895E578;
    case 357u: goto L_0895E580;
    case 358u: goto L_0895E588;
    case 359u: goto L_0895E590;
    case 360u: goto L_0895E598;
    case 361u: goto L_0895E5A0;
    case 362u: goto L_0895E5AC;
    case 363u: goto L_0895E5B4;
    case 364u: goto L_0895E5B8;
    case 365u: goto L_0895E5C8;
    case 366u: goto L_0895E5D4;
    case 367u: goto L_0895E5DC;
    case 368u: goto L_0895E5E0;
    case 369u: goto L_0895E5F8;
    case 370u: goto L_0895E600;
    case 371u: goto L_0895E60C;
    case 372u: goto L_0895E614;
    case 373u: goto L_0895E618;
    case 374u: goto L_0895E628;
    case 375u: goto L_0895E634;
    case 376u: goto L_0895E63C;
    case 377u: goto L_0895E640;
    case 378u: goto L_0895E658;
    case 379u: goto L_0895E660;
    case 380u: goto L_0895E66C;
    case 381u: goto L_0895E674;
    case 382u: goto L_0895E678;
    case 383u: goto L_0895E688;
    case 384u: goto L_0895E694;
    case 385u: goto L_0895E69C;
    case 386u: goto L_0895E6A0;
    case 387u: goto L_0895E6B8;
    case 388u: goto L_0895E6C0;
    case 389u: goto L_0895E6C8;
    case 390u: goto L_0895E6DC;
    case 391u: goto L_0895E6E8;
    case 392u: goto L_0895E784;
    case 393u: goto L_0895E7A0;
    case 394u: goto L_0895E7AC;
    case 395u: goto L_0895E89C;
    case 396u: goto L_0895E8A4;
    case 397u: goto L_0895E8AC;
    case 398u: goto L_0895E900;
    case 399u: goto L_0895E910;
    case 400u: goto L_0895E920;
    case 401u: goto L_0895E928;
    case 402u: goto L_0895E934;
    case 403u: goto L_0895E93C;
    case 404u: goto L_0895E944;
    case 405u: goto L_0895E958;
    case 406u: goto L_0895E9D0;
    case 407u: goto L_0895E9F4;
    case 408u: goto L_0895E9FC;
    case 409u: goto L_0895EA08;
    case 410u: goto L_0895EA24;
    case 411u: goto L_0895EA3C;
    case 412u: goto L_0895EA58;
    case 413u: goto L_0895EA68;
    case 414u: goto L_0895EAA4;
    case 415u: goto L_0895EAAC;
    case 416u: goto L_0895EAC4;
    case 417u: goto L_0895EACC;
    case 418u: goto L_0895EAD4;
    case 419u: goto L_0895EADC;
    case 420u: goto L_0895EAE4;
    case 421u: goto L_0895EAEC;
    case 422u: goto L_0895EAF4;
    case 423u: goto L_0895EB00;
    case 424u: goto L_0895EB08;
    case 425u: goto L_0895EB10;
    case 426u: goto L_0895EB1C;
    case 427u: goto L_0895EB24;
    case 428u: goto L_0895EB2C;
    case 429u: goto L_0895EB38;
    case 430u: goto L_0895EB44;
    case 431u: goto L_0895EB48;
    case 432u: goto L_0895EB50;
    case 433u: goto L_0895EB58;
    case 434u: goto L_0895EB60;
    case 435u: goto L_0895EB6C;
    case 436u: goto L_0895EB74;
    case 437u: goto L_0895EB7C;
    case 438u: goto L_0895EB88;
    case 439u: goto L_0895EB94;
    case 440u: goto L_0895EB98;
    case 441u: goto L_0895EBA0;
    case 442u: goto L_0895EBAC;
    case 443u: goto L_0895EBB0;
    case 444u: goto L_0895EBBC;
    case 445u: goto L_0895EBC4;
    case 446u: goto L_0895EBCC;
    case 447u: goto L_0895EBD4;
    case 448u: goto L_0895EBD8;
    case 449u: goto L_0895EBF4;
    case 450u: goto L_0895EC04;
    case 451u: goto L_0895EC3C;
    case 452u: goto L_0895EC40;
    case 453u: goto L_0895EC70;
    case 454u: goto L_0895ED18;
    case 455u: goto L_0895ED24;
    case 456u: goto L_0895ED28;
    case 457u: goto L_0895ED3C;
    case 458u: goto L_0895ED50;
    case 459u: goto L_0895ED58;
    case 460u: goto L_0895EDA4;
    case 461u: goto L_0895EDAC;
    case 462u: goto L_0895EDB4;
    case 463u: goto L_0895EDBC;
    case 464u: goto L_0895EE68;
    case 465u: goto L_0895EE74;
    case 466u: goto L_0895EE80;
    case 467u: goto L_0895EE8C;
    case 468u: goto L_0895EE98;
    case 469u: goto L_0895EEB0;
    case 470u: goto L_0895EEBC;
    case 471u: goto L_0895EEE4;
    case 472u: goto L_0895EEF8;
    case 473u: goto L_0895EF04;
    case 474u: goto L_0895EF68;
    case 475u: goto L_0895EF80;
    case 476u: goto L_0895EF88;
    case 477u: goto L_0895EFC4;
    case 478u: goto L_0895EFCC;
    case 479u: goto L_0895EFDC;
    case 480u: goto L_0895EFF4;
    case 481u: goto L_0895EFFC;
    case 482u: goto L_0895F040;
    case 483u: goto L_0895F050;
    case 484u: goto L_0895F064;
    case 485u: goto L_0895F06C;
    case 486u: goto L_0895F0AC;
    case 487u: goto L_0895F0F4;
    case 488u: goto L_0895F12C;
    case 489u: goto L_0895F134;
    case 490u: goto L_0895F138;
    case 491u: goto L_0895F154;
    case 492u: goto L_0895F164;
    case 493u: goto L_0895F170;
    case 494u: goto L_0895F17C;
    case 495u: goto L_0895F188;
    case 496u: goto L_0895F194;
    case 497u: goto L_0895F1A0;
    case 498u: goto L_0895F1CC;
    case 499u: goto L_0895F1E0;
    case 500u: goto L_0895F204;
    case 501u: goto L_0895F21C;
    case 502u: goto L_0895F2F0;
    case 503u: goto L_0895F2FC;
    case 504u: goto L_0895F308;
    case 505u: goto L_0895F3D4;
    case 506u: goto L_0895F3DC;
    case 507u: goto L_0895F3F0;
    case 508u: goto L_0895F400;
    case 509u: goto L_0895F408;
    case 510u: goto L_0895F410;
    case 511u: goto L_0895F418;
    case 512u: goto L_0895F420;
    case 513u: goto L_0895F484;
    case 514u: goto L_0895F4A8;
    case 515u: goto L_0895F4B8;
    case 516u: goto L_0895F4C0;
    case 517u: goto L_0895F4C4;
    case 518u: goto L_0895F4CC;
    case 519u: goto L_0895F4D0;
    case 520u: goto L_0895F4E8;
    case 521u: goto L_0895F4F8;
    case 522u: goto L_0895F500;
    case 523u: goto L_0895F508;
    case 524u: goto L_0895F50C;
    case 525u: goto L_0895F514;
    case 526u: goto L_0895F580;
    case 527u: goto L_0895F58C;
    case 528u: goto L_0895F594;
    case 529u: goto L_0895F5A4;
    case 530u: goto L_0895F5E0;
    case 531u: goto L_0895F5FC;
    case 532u: goto L_0895F618;
    case 533u: goto L_0895F620;
    case 534u: goto L_0895F628;
    case 535u: goto L_0895F6A0;
    case 536u: goto L_0895F6A8;
    case 537u: goto L_0895F6B0;
    case 538u: goto L_0895F6C4;
    case 539u: goto L_0895F6F0;
    case 540u: goto L_0895F6F8;
    case 541u: goto L_0895F724;
    case 542u: goto L_0895F868;
    case 543u: goto L_0895F9D8;
    case 544u: goto L_0895F9E4;
    case 545u: goto L_0895F9F0;
    case 546u: goto L_0895F9FC;
    case 547u: goto L_0895FA08;
    case 548u: goto L_0895FA14;
    case 549u: goto L_0895FA20;
    case 550u: goto L_0895FA30;
    case 551u: goto L_0895FA44;
    case 552u: goto L_0895FA4C;
    case 553u: goto L_0895FA5C;
    case 554u: goto L_0895FA64;
    case 555u: goto L_0895FA70;
    case 556u: goto L_0895FA7C;
    case 557u: goto L_0895FA88;
    case 558u: goto L_0895FA94;
    case 559u: goto L_0895FA9C;
    case 560u: goto L_0895FAB0;
    case 561u: goto L_0895FAF4;
    case 562u: goto L_0895FB40;
    case 563u: goto L_0895FB80;
    case 564u: goto L_0895FB88;
    case 565u: goto L_0895FB90;
    case 566u: goto L_0895FB98;
    case 567u: goto L_0895FBAC;
    case 568u: goto L_0895FBB4;
    case 569u: goto L_0895FBBC;
    case 570u: goto L_0895FBC4;
    case 571u: goto L_0895FBD8;
    case 572u: goto L_0895FBE0;
    case 573u: goto L_0895FBE8;
    case 574u: goto L_0895FC04;
    case 575u: goto L_0895FC10;
    case 576u: goto L_0895FC1C;
    case 577u: goto L_0895FC30;
    case 578u: goto L_0895FC38;
    case 579u: goto L_0895FC40;
    case 580u: goto L_0895FC64;
    case 581u: goto L_0895FC70;
    case 582u: goto L_0895FC84;
    case 583u: goto L_0895FC90;
    case 584u: goto L_0895FCAC;
    case 585u: goto L_0895FCB8;
    case 586u: goto L_0895FCD8;
    case 587u: goto L_0895FD18;
    case 588u: goto L_0895FD24;
    case 589u: goto L_0895FD50;
    case 590u: goto L_0895FD54;
    case 591u: goto L_0895FD60;
    case 592u: goto L_0895FD64;
    case 593u: goto L_0895FD98;
    case 594u: goto L_0895FDB0;
    case 595u: goto L_0895FE10;
    case 596u: goto L_0895FE24;
    case 597u: goto L_0895FE90;
    case 598u: goto L_0895FEEC;
    case 599u: goto L_0895FF38;
    case 600u: goto L_0895FF64;
    case 601u: goto L_0895FF6C;
    case 602u: goto L_0895FF74;
    case 603u: goto L_0895FF88;
    case 604u: goto L_0895FFD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0895C000:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 581u, 0x0895BFBCu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895C01C;
    }
L_0895C01C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (0u | 0u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_0895C04C;
    }
    goto L_0895C044;
}
L_0895C044:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    goto L_0895C04C;
L_0895C04C:
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895C058u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 498u, 0x08B3E084u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C058u) goto L_0895C058;
    return;
L_0895C058:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895C064u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 499u, 0x08B3E08Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C064u) goto L_0895C064;
    return;
L_0895C064:
    hot_regs.g5 = (hot_regs.g2 & 2u);
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_0895C0A4;
      }
      goto L_0895C074;
    }
L_0895C074:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17675)));
    { const bool branch_taken = g5 != 0u;
    g5 = (21760u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895C0A8;
      }
      goto L_0895C080;
    }
}
L_0895C080:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19663)));
    { const bool branch_taken = g5 != 0u;
    g5 = (21760u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895C0A8;
      }
      goto L_0895C08C;
    }
}
L_0895C08C:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17674)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0895C0A4;
      }
      goto L_0895C098;
    }
L_0895C098:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0895C2A8;
      }
      goto L_0895C0A4;
    }
}
L_0895C0A4:
    hot_regs.g5 = (21760u << 16u);
    goto L_0895C0A8;
L_0895C0A8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g6 = (ctx.gpr[16] & ctx.gpr[21]);
    g5 = (g6 | g5);
    g7 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (22528u << 16u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    ctx.gpr[8] = (ctx.gpr[16] >> 24u);
    g7 = (ctx.gpr[8] | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g7 = (22016u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    g7 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g7 = (22272u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0895C1D4;
      }
      goto L_0895C118;
    }
}
L_0895C118:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g5 = (hot_regs.g5 & 63u);
    hot_regs.g4 = (hot_regs.g4 << (hot_regs.g5 & 31u));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8412)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (53248u << 16u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    hot_regs.g6 = (18432u << 16u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g7 = (hot_regs.g7 >> 8u);
    hot_regs.g6 = (hot_regs.g7 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (18688u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0895C1B4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C1B4u) goto L_0895C1B4;
    return;
L_0895C1B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g19 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g19 = (g19 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(64)));
    g7 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g7 = (g7 + g4);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0895C1FC;
      }
      goto L_0895C1D4;
    }
}
L_0895C1D4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0895C1E0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C1E0u) goto L_0895C1E0;
    return;
L_0895C1E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g19 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g19 = (g19 + static_cast<std::uint32_t>(2));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(64)));
    g7 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g7 = (g7 + g4);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[19] = g19;
    goto L_0895C1FC;
}
L_0895C1FC:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    if (hot_regs.g4 == 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
        goto L_0895C220;
    }
    goto L_0895C208;
L_0895C208:
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g31 = (0x0895C214u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 246u, 0x08A09B2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C214u) goto L_0895C214;
    return;
L_0895C214:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0895C2A8;
      }
      goto L_0895C220;
    }
}
L_0895C220:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (4608u << 16u);
    g5 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895C28C;
      }
      goto L_0895C244;
    }
}
L_0895C244:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (15u << 16u);
    g6 = (hot_regs.g7 >> 8u);
    g5 = (g6 & g5);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[9] = (4096u << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 | ctx.gpr[9]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (256u << 16u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g6 = (hot_regs.g7 & ctx.gpr[21]);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895C28C;
}
L_0895C28C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (1028u << 16u);
    g5 = (ctx.gpr[19] | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895C2A8;
}
L_0895C2A8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (hot_regs.g4 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 579u, 0x0895BF7Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895C2C0;
    }
L_0895C2C0:
    hot_regs.g31 = (0x0895C2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 671u, 0x088B7BC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C2C8u) goto L_0895C2C8;
    return;
L_0895C2C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (18432u << 16u);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (g5 >> 8u);
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (18688u << 16u);
    g6 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    g6 = (g6 >> 8u);
    g5 = (g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895C934;
      }
      goto L_0895C318;
    }
}
L_0895C318:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x0895C324u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 179u, 0x088614B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C324u) goto L_0895C324;
    return;
L_0895C324:
    ctx.gpr[16] = (0u < hot_regs.g2 ? 1u : 0u);
    hot_regs.g4 = (8704u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x0895C34Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C34Cu) goto L_0895C34C;
    return;
L_0895C34C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (22016u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (22528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (22272u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (22528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (24320u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17664)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g6 = (25344u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17660)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (g5 >> 8u);
    g6 = (25600u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17656)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g6 = (25856u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (37120u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (6144u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (24576u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17648)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g6 = (26112u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17644)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (g5 >> 8u);
    g6 = (26368u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-17640)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    g6 = (26624u << 16u);
    g5 = (g5 | g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (37888u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (6400u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49152u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49408u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g4 = (aot_mem.aot_load8(g28 + static_cast<std::uint32_t>(-17676)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[16]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0895C564;
      }
      goto L_0895C54C;
    }
}
}
L_0895C54C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (8960u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    goto L_0895C564;
}
L_0895C564:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17680)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895C640;
      }
      goto L_0895C570;
    }
L_0895C570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (7680u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49664u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49920u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (51968u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17680)));
    g7 = (g6 >> 8u);
    g8 = (256u << 16u);
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    g6 = (g6 & g8);
    g8 = (40960u << 16u);
    g6 = (g6 | g8);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g6 = (255u << 16u);
    g6 = (g7 & g6);
    g7 = (43008u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(64));
    g6 = (g6 | g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g6 = (47104u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(1542));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g6);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_0895C640;
}
L_0895C640:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (0u | 0u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (ctx.gpr[21] < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895C878;
      }
      goto L_0895C658;
    }
}
L_0895C658:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g22 = ctx.gpr[22];
    g19 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g19 = (g19 + static_cast<std::uint32_t>(72));
    g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    g4 = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g22 = (1u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(257));
    g20 = (256u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (57344u << 16u);
    ctx.gpr[23] = (57600u << 16u);
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), g4);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    ctx.gpr[22] = g22;
    goto L_0895C694;
}
L_0895C694:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895C6B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 499u, 0x08B3E08Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C6B8u) goto L_0895C6B8;
    return;
L_0895C6B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 2u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = g4;
        goto L_0895C864;
    }
    goto L_0895C6C4;
}
L_0895C6C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-19663)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = g4;
        goto L_0895C864;
    }
    goto L_0895C6D0;
}
L_0895C6D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17680)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C708;
      }
      goto L_0895C6DC;
    }
L_0895C6DC:
    hot_regs.g31 = (0x0895C6E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 524u, 0x08B3E260u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C6E4u) goto L_0895C6E4;
    return;
L_0895C6E4:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895C6FC;
      }
      goto L_0895C6F0;
    }
L_0895C6F0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895C868;
      }
      goto L_0895C6FC;
    }
}
L_0895C6FC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895C708u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C708u) goto L_0895C708;
    return;
L_0895C708:
    hot_regs.g31 = (0x0895C710u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0206_entry, 206u, 523u, 0x08B3E254u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C710u) goto L_0895C710;
    return;
L_0895C710:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7632)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0895C748;
      }
      goto L_0895C734;
    }
}
L_0895C734:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((f13 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f13 = f13;
        goto L_0895C748;
    }
    goto L_0895C748;
}
L_0895C748:
{
    float f12 = hot_regs.f12;
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17674)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895C764;
      }
      goto L_0895C760;
    }
}
L_0895C760:
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    goto L_0895C764;
L_0895C764:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g5 = (ctx.lo);
    g4 = (ctx.gpr[8] - g4);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g6 = (57088u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(170));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g6);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g6);
    g5 = (g5 & ctx.gpr[20]);
    g5 = (g5 | ctx.gpr[30]);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    g4 = (g4 & ctx.gpr[20]);
    g4 = (g4 | ctx.gpr[23]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    g4 = (aot_mem.aot_load16(g18 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(64)));
    g7 = (g6 + g7);
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (g7 + g18);
    g7 = (4608u << 16u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g16 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g16 = (g16 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = g18 == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g16);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0895C848;
      }
      goto L_0895C800;
    }
}
L_0895C800:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (15u << 16u);
    g6 = (ctx.gpr[18] >> 8u);
    g5 = (g6 & g5);
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    g7 = (4096u << 16u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g5);
    g5 = (g5 | g7);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (256u << 16u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g5);
    g7 = (ctx.gpr[18] & ctx.gpr[20]);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g16 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g16 = (g16 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g16);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    goto L_0895C848;
}
L_0895C848:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (1028u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = g4;
    goto L_0895C864;
}
L_0895C864:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    goto L_0895C868;
L_0895C868:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    g4 = (g21 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_0895C694;
      }
      goto L_0895C878;
    }
}
L_0895C878:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x0895C884u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 283u, 0x08B217D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C884u) goto L_0895C884;
    return;
L_0895C884:
    hot_regs.g31 = (0x0895C88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 200u, 0x088615BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C88Cu) goto L_0895C88C;
    return;
L_0895C88C:
    hot_regs.g4 = (6144u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (6400u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(129)));
    hot_regs.g31 = (0x0895C8C4u);
    hot_regs.g4 = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895C8C4u) goto L_0895C8C4;
    return;
L_0895C8C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (8704u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49152u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (49408u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17676)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895C934;
      }
      goto L_0895C918;
    }
}
L_0895C918:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (8960u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    goto L_0895C934;
}
L_0895C934:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895C978:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17664), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17660), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17656), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17648), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17644), std::bit_cast<std::uint32_t>(f12));
    g4 = (49024u << 16u);
    f12 = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-17640), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0895C9A8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (0u | 10u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    g2 = (2234u << 16u);
    g2 = (g2 + static_cast<std::uint32_t>(2855));
    hot_regs.g7 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (hot_regs.g7 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(g4));
    g4 = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(g4));
    g4 = (ctx.hi);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(g4));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895CA18:
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
L_0895CA3C:
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
L_0895CA60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g4);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895CA7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895CA94:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895CACC;
      }
      goto L_0895CABC;
    }
}
L_0895CABC:
    hot_regs.g31 = (0x0895CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 400u, 0x08B25C08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895CAC4u) goto L_0895CAC4;
    return;
L_0895CAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CC50;
      }
      goto L_0895CACC;
    }
L_0895CACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (2247u << 16u);
    g4 = (2247u << 16u);
    g6 = (g5 + static_cast<std::uint32_t>(11680));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(11632), g6);
    g4 = (g4 + static_cast<std::uint32_t>(11632));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(11680), 0u);
    hot_regs.g31 = (0x0895CAF0u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895D628;
}
L_0895CAF0:
    hot_regs.g31 = (0x0895CAF8u);
    // nop
    goto L_0895DDBC;
L_0895CAF8:
    hot_regs.g31 = (0x0895CB00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 400u, 0x08B25C08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895CB00u) goto L_0895CB00;
    return;
L_0895CB00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2247u << 16u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9008), static_cast<std::uint16_t>(0u));
    hot_regs.g5 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(9328));
    hot_regs.g4 = g4;
    goto L_0895CB10;
}
L_0895CB10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 48 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895CB10;
      }
      goto L_0895CB28;
    }
}
L_0895CB28:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0895CB30;
L_0895CB30:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (ctx.gpr[18] << 6u);
    hot_regs.g4 = (ctx.gpr[18] << 3u);
    ctx.gpr[19] = (0u | 0u);
    g17 = (g17 - hot_regs.g4);
    ctx.gpr[17] = g17;
    goto L_0895CB40;
}
L_0895CB40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895CB68;
      }
      goto L_0895CB54;
    }
}
L_0895CB54:
    hot_regs.g31 = (0x0895CB5Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0895CFC0;
L_0895CB5C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g16 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895CB54;
      }
      goto L_0895CB68;
    }
}
L_0895CB68:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 50 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0895CB40;
      }
      goto L_0895CB78;
    }
}
L_0895CB78:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < 50 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(50));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895CB30;
      }
      goto L_0895CB88;
    }
}
L_0895CB88:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0895CB90;
L_0895CB90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25488)));
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895CBBC;
      }
      goto L_0895CBA4;
    }
}
L_0895CBA4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[18] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0895CBB0u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_0895CFC0;
}
L_0895CBB0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CBA4;
      }
      goto L_0895CBBC;
    }
L_0895CBBC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895CB90;
      }
      goto L_0895CBCC;
    }
}
L_0895CBCC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50309u << 16u);
    g4 = (g4 | 42672u);
    f12 = std::bit_cast<float>(g4);
    g4 = (17573u << 16u);
    g4 = (g4 | 1032u);
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (16795u << 16u);
    g4 = (g4 | 38273u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g4 = (17575u << 16u);
    g4 = (g4 | 51601u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g4 = (16825u << 16u);
    g4 = (g4 | 45613u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(16));
    g4 = (16025u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 | 39322u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.g5 = (g29 | 0u);
    g4 = (2234u << 16u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 128u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x0895CC50u);
    g4 = (g4 + static_cast<std::uint32_t>(2448));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0895D058;
}
}
L_0895CC50:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895CC70:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (2234u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(2448));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x0895CC8Cu);
    // nop
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0895E038;
}
L_0895CC8C:
    hot_regs.g4 = (0u | 0u);
    goto L_0895CC90;
L_0895CC90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895CC90;
      }
      goto L_0895CCA4;
    }
}
L_0895CCA4:
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
L_0895CCB4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g6 = (static_cast<std::int32_t>(g6) < 48 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (hot_regs.g5 & 65535u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895CD98;
      }
      goto L_0895CCCC;
    }
}
L_0895CCCC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g8 = (2247u << 16u);
    g7 = (g6 << 4u);
    ctx.gpr[9] = (g7 + g7);
    g7 = (g7 + ctx.gpr[9]);
    g8 = (g8 + static_cast<std::uint32_t>(9328));
    g7 = (g7 + g8);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(32), hot_regs.g4);
    aot_mem.aot_store16(g7 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    g7 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (g8 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0895CD48;
      }
      goto L_0895CD08;
    }
}
L_0895CD08:
    ctx.gpr[9] = (aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[9] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895CD34;
      }
      goto L_0895CD14;
    }
L_0895CD14:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g9 = (g9 << 4u);
    g10 = (g9 + g9);
    g9 = (g9 + g10);
    g9 = (g9 + ctx.gpr[8]);
    g10 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(11)));
    g10 = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g10));
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    goto L_0895CD34;
}
L_0895CD34:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g9 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(48));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0895CD08;
      }
      goto L_0895CD48;
    }
}
L_0895CD48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g5 = (g5 << 4u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g6 = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    g5 = (g5 + g6);
    g4 = (g4 + static_cast<std::uint32_t>(48));
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
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g4 = (g4 << 4u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[8]);
    g5 = (2247u << 16u);
    hot_regs.g31 = (0x0895CD8Cu);
    g5 = (g5 + static_cast<std::uint32_t>(11632));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_0895CA60;
}
L_0895CD8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(9008), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_0895CD98;
}
L_0895CD98:
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
L_0895CDA4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895CE3C;
      }
      goto L_0895CDCC;
    }
}
L_0895CDCC:
    hot_regs.g31 = (0x0895CDD4u);
    // nop
    goto L_0895DE74;
L_0895CDD4:
    hot_regs.g31 = (0x0895CDDCu);
    // nop
    goto L_0895D800;
L_0895CDDC:
    hot_regs.g31 = (0x0895CDE4u);
    // nop
    goto L_0895DFE0;
L_0895CDE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 7u);
    g4 = (g4 << 4u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g5 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 3u));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    g20 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g19 = (g4 + g5);
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 16u));
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 3u));
    g16 = (2234u << 16u);
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(2448));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895CE44;
      }
      goto L_0895CE34;
    }
}
L_0895CE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CE8C;
      }
      goto L_0895CE3C;
    }
L_0895CE3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CF20;
      }
      goto L_0895CE44;
    }
L_0895CE44:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (2247u << 16u);
    ctx.gpr[17] = (0u | 1u);
    g18 = (g18 + static_cast<std::uint32_t>(9328));
    ctx.gpr[18] = g18;
    goto L_0895CE50;
}
L_0895CE50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[20] << 4u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[18]);
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = g5 != ctx.gpr[17];
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895CE74;
      }
      goto L_0895CE6C;
    }
}
L_0895CE6C:
    hot_regs.g31 = (0x0895CE74u);
    // nop
    goto L_0895E090;
L_0895CE74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g20 + static_cast<std::uint32_t>(1));
    g20 = (g4 << 16u);
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 16u));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895CE50;
      }
      goto L_0895CE8C;
    }
}
L_0895CE8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    ctx.gpr[20] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (2247u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895CEE4;
      }
      goto L_0895CEA0;
    }
}
L_0895CEA0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(9328));
    goto L_0895CEA4;
L_0895CEA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[20] << 4u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[18]);
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895CEC8;
      }
      goto L_0895CEC0;
    }
}
L_0895CEC0:
    hot_regs.g31 = (0x0895CEC8u);
    // nop
    goto L_0895E090;
L_0895CEC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g20 + static_cast<std::uint32_t>(1));
    g20 = (g4 << 16u);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(9008)));
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 16u));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895CEA4;
      }
      goto L_0895CEE4;
    }
}
L_0895CEE4:
    ctx.gpr[17] = (0u | 0u);
    goto L_0895CEE8;
L_0895CEE8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895CF08;
      }
      goto L_0895CEF4;
    }
L_0895CEF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895CF10;
      }
      goto L_0895CF08;
    }
}
L_0895CF08:
    hot_regs.g31 = (0x0895CF10u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895E958;
L_0895CF10:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895CEE8;
      }
      goto L_0895CF20;
    }
}
L_0895CF20:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895CF40:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895CF64;
      }
      goto L_0895CF5C;
    }
}
L_0895CF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CFAC;
      }
      goto L_0895CF64;
    }
L_0895CF64:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (2234u << 16u);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + static_cast<std::uint32_t>(2448));
    ctx.gpr[16] = g16;
    goto L_0895CF70;
}
L_0895CF70:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(101)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895CF84;
      }
      goto L_0895CF7C;
    }
L_0895CF7C:
    hot_regs.g31 = (0x0895CF84u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895EC70;
L_0895CF84:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895CF70;
      }
      goto L_0895CF94;
    }
}
L_0895CF94:
    hot_regs.g31 = (0x0895CF9Cu);
    // nop
    goto L_0895D678;
L_0895CF9C:
    hot_regs.g31 = (0x0895CFA4u);
    // nop
    goto L_0895DE0C;
L_0895CFA4:
    hot_regs.g31 = (0x0895CFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 102u, 0x0897053Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895CFACu) goto L_0895CFAC;
    return;
L_0895CFAC:
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
L_0895CFC0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895CFEC;
      }
      goto L_0895CFDC;
    }
}
L_0895CFDC:
    hot_regs.g31 = (0x0895CFE4u);
    hot_regs.g5 = (0u | 5u);
    goto L_0895CCB4;
L_0895CFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D040;
      }
      goto L_0895CFEC;
    }
L_0895CFEC:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895D008;
      }
      goto L_0895CFF8;
    }
L_0895CFF8:
    hot_regs.g31 = (0x0895D000u);
    hot_regs.g5 = (0u | 2u);
    goto L_0895CCB4;
L_0895D000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D040;
      }
      goto L_0895D008;
    }
L_0895D008:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895D038;
      }
      goto L_0895D014;
    }
L_0895D014:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895D038;
      }
      goto L_0895D020;
    }
L_0895D020:
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_0895D038;
      }
      goto L_0895D02C;
    }
L_0895D02C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g6 != g5;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895D040;
      }
      goto L_0895D038;
    }
}
L_0895D038:
    hot_regs.g31 = (0x0895D040u);
    hot_regs.g5 = (0u | 3u);
    goto L_0895CCB4;
L_0895D040:
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
L_0895D04C:
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D058:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[22] = (hot_regs.g7 & 255u);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[20] = (ctx.gpr[9] & 255u);
    ctx.gpr[19] = (ctx.gpr[10] & 255u);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_0895D0A4;
}
L_0895D0A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + ctx.gpr[17]);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::int32_t>(g4) < 40 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895D0A4;
      }
      goto L_0895D0BC;
    }
}
L_0895D0BC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17616));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g31 = (0x0895D0D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D0D0u) goto L_0895D0D0;
    return;
L_0895D0D0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(40), hot_regs.g2);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g17 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(ctx.gpr[22]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    g4 = (16928u << 16u);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f15;
    f12 = f12 / f14;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f12 = f12 - f13;
    g4 = (16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    f12 = f12 / ctx.fpr[16];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[19]));
    g4 = (16384u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_0895D180:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895D1A4;
      }
      goto L_0895D19C;
    }
}
L_0895D19C:
    hot_regs.g31 = (0x0895D1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D1A4u) goto L_0895D1A4;
    return;
L_0895D1A4:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (g16 | 0u);
    goto L_0895D1B4;
}
L_0895D1B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895D1B4;
      }
      goto L_0895D1C8;
    }
}
L_0895D1C8:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
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
L_0895D1DC:
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_0895D228;
      }
      goto L_0895D1FC;
    }
L_0895D1FC:
    ctx.gpr[9] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    goto L_0895D204;
L_0895D204:
{
    std::uint32_t g3 = ctx.gpr[3];
    g3 = (g3 + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = g3 == ctx.gpr[8];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(20));
    ctx.gpr[3] = g3;
      if (branch_taken) {
          goto L_0895D2A0;
      }
      goto L_0895D214;
    }
}
L_0895D214:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895D204;
      }
      goto L_0895D228;
    }
L_0895D228:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g10 = ctx.gpr[10];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(12)));
    f12 = f12 - f14;
    f13 = f13 - f14;
    f12 = f12 / f13;
    ctx.gpr[8] = (16256u << 16u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    f17 = std::bit_cast<float>(ctx.gpr[8]);
    f17 = f17 - f12;
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f17; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 + f13;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 + ctx.gpr[11]);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f17; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[11]);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_0895D2F8;
      }
      goto L_0895D2A0;
    }
}
}
L_0895D2A0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g9 << 4u);
    g9 = (g9 << 2u);
    g8 = (g8 + g9);
    g8 = (hot_regs.g2 + g8);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(-20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g9 = (g5 << 4u);
    g5 = (g5 << 2u);
    g5 = (g9 + g5);
    g5 = (g8 + g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(-16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (g5 << 4u);
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    g4 = (g4 + g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-12)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    goto L_0895D2F8;
}
}
L_0895D2F8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D300:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (2247u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(11728));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0895D324;
}
L_0895D324:
    hot_regs.g31 = (0x0895D32Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895D180;
L_0895D32C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895D324;
      }
      goto L_0895D33C;
    }
}
L_0895D33C:
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
L_0895D350:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g4 = (2247u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(11728));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    g16 = (g16 + g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0895D374;
}
L_0895D374:
    hot_regs.g31 = (0x0895D37Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895F0AC;
L_0895D37C:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895D374;
      }
      goto L_0895D38C;
    }
}
L_0895D38C:
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
L_0895D3A0:
    hot_regs.g5 = (0u | 0u);
    goto L_0895D3A4;
L_0895D3A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(256), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 16 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895D3A4;
      }
      goto L_0895D3B8;
    }
}
L_0895D3B8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D3C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (0u | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g5 = (17530u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g5);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895D41C;
      }
      goto L_0895D414;
    }
L_0895D414:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(1));
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
    goto L_0895D41C;
}
L_0895D41C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D578;
      }
      goto L_0895D424;
    }
L_0895D424:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (17116u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895D578;
      }
      goto L_0895D440;
    }
}
L_0895D440:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[8] = (0u | 0u);
    g5 = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g5);
    g5 = (20352u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g5);
    g5 = (18154u << 16u);
    g5 = (g5 | 24576u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    g5 = (17948u << 16u);
    g5 = (g5 | 16384u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    f12 = std::bit_cast<float>(hot_regs.g7);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g6 = (2238u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-272));
    hot_regs.g7 = (hot_regs.g4 | 0u);
    g5 = (0u | 0u);
    g5 = (g5 + g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_0895D488;
}
}
L_0895D488:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    g9 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(256)));
    g10 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g9 = (g10 - g9);
    g10 = (g9 < static_cast<std::uint32_t>(30001) ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    // nop
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_0895D4A4;
      }
      goto L_0895D4A0;
    }
}
L_0895D4A0:
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(256), 0u);
    goto L_0895D4A4;
L_0895D4A4:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D51C;
      }
      goto L_0895D4B0;
    }
L_0895D4B0:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.gpr[9]);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    if (static_cast<std::int32_t>(ctx.gpr[9]) < 0) {
    f13 = f13 + ctx.fpr[16];
    hot_regs.f13 = f13;
        goto L_0895D4C0;
    }
    goto L_0895D4C0;
}
L_0895D4C0:
{
    float f13 = hot_regs.f13;
    f13 = hot_regs.f15 - f13;
    f13 = f13 / hot_regs.f14;
    ctx.set_fpu_condition((ctx.fpr[17] < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.f13 = f13;
        goto L_0895D4D8;
    }
    goto L_0895D4D8;
}
L_0895D4D8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    { const float fs = hot_regs.f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g9 = (std::bit_cast<std::uint32_t>(f13));
    g9 = (g9 & 255u);
    g10 = (0u | 255u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g10));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g9));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = g5;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    hot_regs.f13 = f13;
    goto L_0895D51C;
}
}
L_0895D51C:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::int32_t>(g8) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0895D488;
      }
      goto L_0895D530;
    }
}
L_0895D530:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D578;
      }
      goto L_0895D53C;
    }
L_0895D53C:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x0895D550u);
    hot_regs.g7 = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D550u) goto L_0895D550;
    return;
L_0895D550:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D578;
      }
      goto L_0895D558;
    }
L_0895D558:
    hot_regs.g5 = (2234u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(3374));
    hot_regs.g6 = (ctx.gpr[16] + ctx.gpr[16]);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-2));
    hot_regs.g31 = (0x0895D570u);
    hot_regs.g4 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D570u) goto L_0895D570;
    return;
L_0895D570:
    hot_regs.g31 = (0x0895D578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D578u) goto L_0895D578;
    return;
L_0895D578:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_0895D588:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D5F4;
      }
      goto L_0895D59C;
    }
L_0895D59C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(256)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g7 = (ctx.gpr[8] - g7);
    g7 = (g7 < static_cast<std::uint32_t>(2001) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0895D5F4;
      }
      goto L_0895D5B4;
    }
}
L_0895D5B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[10] = (0u | 15u);
    g9 = (0u | 240u);
    g9 = (g4 + g9);
    g8 = (g4 + static_cast<std::uint32_t>(240));
    g8 = (g8 + static_cast<std::uint32_t>(-16));
    hot_regs.g7 = (g4 + static_cast<std::uint32_t>(60));
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    goto L_0895D5D0;
}
L_0895D5D0:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    { const std::uint32_t vfpu_address = g8 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g9 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[11] = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(256), ctx.gpr[11]);
    g10 = (g10 + static_cast<std::uint32_t>(-1));
    g9 = (g9 + static_cast<std::uint32_t>(-16));
    g8 = (g8 + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = static_cast<std::int32_t>(g10) > 0;
    g7 = (g7 + static_cast<std::uint32_t>(-4));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_0895D5D0;
      }
      goto L_0895D5F4;
    }
}
L_0895D5F4:
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D610;
      }
      goto L_0895D604;
    }
L_0895D604:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D618;
      }
      goto L_0895D610;
    }
L_0895D610:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(256), hot_regs.g5);
    goto L_0895D618;
L_0895D618:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D620:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895D628:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    g4 = (2247u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(11888));
    g4 = (0u | 0u);
    g16 = (g4 + g16);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0895D64C;
}
L_0895D64C:
    hot_regs.g31 = (0x0895D654u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895D3A0;
L_0895D654:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895D64C;
      }
      goto L_0895D664;
    }
}
L_0895D664:
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
L_0895D678:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4224)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895D6E8;
      }
      goto L_0895D698;
    }
}
L_0895D698:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D6E0;
      }
      goto L_0895D6A4;
    }
L_0895D6A4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8396)));
    f14 = f12 - f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7900)));
    f13 = f12 - f13;
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-23440)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11072)));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11068)));
    ctx.set_fpu_condition((f14 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11076)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895D6F0;
      }
      goto L_0895D6D8;
    }
}
}
L_0895D6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D6F4;
      }
      goto L_0895D6E0;
    }
L_0895D6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7E8;
      }
      goto L_0895D6E8;
    }
L_0895D6E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D7E8;
      }
      goto L_0895D6F0;
    }
L_0895D6F0:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_0895D6F4;
L_0895D6F4:
{
    float f12 = hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
        goto L_0895D70C;
    }
    goto L_0895D70C;
}
L_0895D70C:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895D720;
      }
      goto L_0895D718;
    }
L_0895D718:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g6 | 0u);
      if (branch_taken) {
          goto L_0895D720;
      }
      goto L_0895D720;
    }
L_0895D720:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g5 = (hot_regs.g4 | 0u);
        goto L_0895D72C;
    }
    goto L_0895D72C;
L_0895D72C:
{
    float f20 = hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15232u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    ctx.set_fpu_condition((f20 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f20 = f20;
        goto L_0895D750;
    }
    goto L_0895D750;
}
L_0895D750:
    hot_regs.g4 = (5888u << 16u);
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x0895D778u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D778u) goto L_0895D778;
    return;
L_0895D778:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x0895D784u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D784u) goto L_0895D784;
    return;
L_0895D784:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x0895D790u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D790u) goto L_0895D790;
    return;
L_0895D790:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x0895D79Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D79Cu) goto L_0895D79C;
    return;
L_0895D79C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14545u << 16u);
    g4 = (g4 | 46871u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895D7E8;
      }
      goto L_0895D7B8;
    }
}
L_0895D7B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (0u | 0u);
    g4 = (2247u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(11888));
    g4 = (0u | 0u);
    g16 = (g4 + g16);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_0895D7CC;
}
L_0895D7CC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895D7D8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0895D3C0;
L_0895D7D8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895D7CC;
      }
      goto L_0895D7E8;
    }
}
L_0895D7E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895D800:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895D86C;
      }
      goto L_0895D82C;
    }
}
L_0895D82C:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g16 = (2u << 16u);
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g16);
    f22 = std::bit_cast<float>(g4);
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f22)));
    g5 = (14409u << 16u);
    g5 = (g5 | 4059u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    g19 = (2247u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) < 0;
    g19 = (g19 + static_cast<std::uint32_t>(11888));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895D874;
      }
      goto L_0895D864;
    }
}
}
L_0895D864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D880;
      }
      goto L_0895D86C;
    }
L_0895D86C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC14;
      }
      goto L_0895D874;
    }
L_0895D874:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    goto L_0895D880;
L_0895D880:
    hot_regs.g31 = (0x0895D888u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_0895CA18;
L_0895D888:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17606u << 16u);
    g4 = (g4 | 49152u);
    f22 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & ctx.gpr[16]);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895D8B8;
      }
      goto L_0895D8AC;
    }
}
}
L_0895D8AC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0895D8B8;
L_0895D8B8:
{
    float f12 = hot_regs.f12;
    hot_regs.g31 = (0x0895D8C0u);
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    goto L_0895CA3C;
}
L_0895D8C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17558u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (17417u << 16u);
    g4 = (g4 | 32768u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
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
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(960));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0895D900u);
    hot_regs.g5 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0895D588;
}
}
L_0895D900:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 23 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895D920;
      }
      goto L_0895D910;
    }
}
L_0895D910:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895D9A0;
      }
      goto L_0895D920;
    }
}
L_0895D920:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 512u);
    hot_regs.g5 = (17658u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895D988;
      }
      goto L_0895D938;
    }
}
L_0895D938:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 101u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x0895D980u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D980u) goto L_0895D980;
    return;
L_0895D980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895D9A0;
      }
      goto L_0895D988;
    }
L_0895D988:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 101u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x0895D9A0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895D9A0u) goto L_0895D9A0;
    return;
L_0895D9A0:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & ctx.gpr[16]);
    f22 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f22)));
    hot_regs.g4 = g4;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895D9C0;
      }
      goto L_0895D9B4;
    }
}
}
L_0895D9B4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    goto L_0895D9C0;
L_0895D9C0:
    hot_regs.g31 = (0x0895D9C8u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_0895CA18;
L_0895D9C8:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17530u << 16u);
    f22 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & ctx.gpr[16]);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895D9F4;
      }
      goto L_0895D9E8;
    }
}
}
L_0895D9E8:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0895D9F4;
L_0895D9F4:
{
    float f12 = hot_regs.f12;
    hot_regs.g31 = (0x0895D9FCu);
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    goto L_0895CA3C;
}
L_0895D9FC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (50376u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (17402u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
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
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1280));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0895DA38u);
    hot_regs.g5 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0895D588;
}
}
L_0895DA38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 22 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DA58;
      }
      goto L_0895DA48;
    }
}
L_0895DA48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DADC;
      }
      goto L_0895DA58;
    }
}
L_0895DA58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(350));
    g4 = (g4 & 512u);
    hot_regs.g5 = (17658u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DAC4;
      }
      goto L_0895DA74;
    }
}
L_0895DA74:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 102u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 128u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x0895DABCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DABCu) goto L_0895DABC;
    return;
L_0895DABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DADC;
      }
      goto L_0895DAC4;
    }
L_0895DAC4:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 102u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x0895DADCu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DADCu) goto L_0895DADC;
    return;
L_0895DADC:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & ctx.gpr[16]);
    f22 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f22 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f22)));
    hot_regs.g4 = g4;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895DAFC;
      }
      goto L_0895DAF0;
    }
}
}
L_0895DAF0:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f12;
    goto L_0895DAFC;
L_0895DAFC:
    hot_regs.g31 = (0x0895DB04u);
    { const float fs = hot_regs.f22; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    goto L_0895CA3C;
L_0895DB04:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17545u << 16u);
    g4 = (g4 | 32768u);
    f22 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & ctx.gpr[16]);
    f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895DB34;
      }
      goto L_0895DB28;
    }
}
}
L_0895DB28:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_0895DB34;
L_0895DB34:
{
    float f12 = hot_regs.f12;
    hot_regs.g31 = (0x0895DB3Cu);
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    goto L_0895CA18;
}
L_0895DB3C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (17455u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (17430u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
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
    g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(1600));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x0895DB78u);
    hot_regs.g5 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0895D588;
}
}
L_0895DB78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DB98;
      }
      goto L_0895DB88;
    }
}
L_0895DB88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DC14;
      }
      goto L_0895DB98;
    }
}
L_0895DB98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(200));
    g4 = (g4 & 512u);
    hot_regs.g5 = (17658u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895DC08;
      }
      goto L_0895DBB4;
    }
}
L_0895DBB4:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 103u);
    hot_regs.g5 = (0u | 255u);
    hot_regs.g6 = (0u | 255u);
    hot_regs.g7 = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x0895DC00u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DC00u) goto L_0895DC00;
    return;
L_0895DC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DC14;
      }
      goto L_0895DC08;
    }
L_0895DC08:
    hot_regs.g4 = (0u | 103u);
    hot_regs.g31 = (0x0895DC14u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DC14u) goto L_0895DC14;
    return;
L_0895DC14:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895DC38:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g5 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    g6 = (49776u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g6 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 + g6);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    goto L_0895DC5C;
}
L_0895DC5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895DC5C;
      }
      goto L_0895DC80;
    }
}
}
L_0895DC80:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DC88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895DCBC;
      }
      goto L_0895DC98;
    }
L_0895DC98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (49736u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DCC4;
      }
      goto L_0895DCB4;
    }
L_0895DCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDAC;
      }
      goto L_0895DCBC;
    }
L_0895DCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DDAC;
      }
      goto L_0895DCC4;
    }
L_0895DCC4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g5 = (15692u << 16u);
    g5 = (g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f12 - f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g5 = (49864u << 16u);
    f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0895DCFC;
    }
    goto L_0895DCFC;
}
}
L_0895DCFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g7 = (g4 | 0u);
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[9] = (0u | 1u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(32));
    g4 = (16640u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(64));
    g4 = (g29 + static_cast<std::uint32_t>(48));
    g8 = (0u | 16u);
    g8 = (g7 + g8);
    g7 = (g7 + static_cast<std::uint32_t>(16));
    g7 = (g7 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_0895DD2C;
}
L_0895DD2C:
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895DD98;
      }
      goto L_0895DD68;
    }
L_0895DD68:
    hot_regs.f13 = hot_regs.f12 / hot_regs.f13;
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[10]);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0895DD98;
L_0895DD98:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    ctx.gpr[10] = (static_cast<std::int32_t>(g9) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_0895DD2C;
      }
      goto L_0895DDAC;
    }
}
L_0895DDAC:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DDB4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DDBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (0u | 0u);
    g4 = (2247u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(13808));
    g4 = (0u | 0u);
    g16 = (g4 + g16);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_0895DDE0;
}
L_0895DDE0:
    hot_regs.g31 = (0x0895DDE8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895DC38;
L_0895DDE8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895DDE0;
      }
      goto L_0895DDF8;
    }
}
L_0895DDF8:
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
L_0895DE0C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895DE40;
      }
      goto L_0895DE28;
    }
}
L_0895DE28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (0u | 0u);
    g4 = (2247u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(13808));
    g4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    g16 = (g4 + g16);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895DE48;
      }
      goto L_0895DE40;
    }
}
L_0895DE40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DE60;
      }
      goto L_0895DE48;
    }
L_0895DE48:
    hot_regs.g31 = (0x0895DE50u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895F5E0;
L_0895DE50:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895DE48;
      }
      goto L_0895DE60;
    }
}
L_0895DE60:
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
L_0895DE74:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895DEA8;
      }
      goto L_0895DE90;
    }
}
L_0895DE90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (0u | 0u);
    g4 = (2247u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(13808));
    g4 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    g16 = (g4 + g16);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895DEB0;
      }
      goto L_0895DEA8;
    }
}
L_0895DEA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DEC8;
      }
      goto L_0895DEB0;
    }
L_0895DEB0:
    hot_regs.g31 = (0x0895DEB8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895DC88;
L_0895DEB8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895DEB0;
      }
      goto L_0895DEC8;
    }
}
L_0895DEC8:
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
L_0895DEDC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895DF68;
      }
      goto L_0895DF00;
    }
}
L_0895DF00:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_0895DF0C;
L_0895DF0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF54;
      }
      goto L_0895DF18;
    }
L_0895DF18:
    hot_regs.g31 = (0x0895DF20u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DF20u) goto L_0895DF20;
    return;
L_0895DF20:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(ctx.gpr[17]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895DF4C;
      }
      goto L_0895DF30;
    }
L_0895DF30:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0895DF4Cu);
    hot_regs.g5 = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895DF4Cu) goto L_0895DF4C;
    return;
L_0895DF4C:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-17613), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(180), 0u);
    goto L_0895DF54;
L_0895DF54:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 32 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0895DF0C;
      }
      goto L_0895DF64;
    }
}
L_0895DF64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(0u));
    goto L_0895DF68;
L_0895DF68:
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
L_0895DF84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8636), g4);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8632), g5);
    g4 = (0u | 0u);
    g5 = (g4 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895DFD8;
      }
      goto L_0895DF9C;
    }
}
L_0895DF9C:
    hot_regs.g7 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    goto L_0895DFA4;
L_0895DFA4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8636)));
    g8 = (g8 + hot_regs.g6);
    g8 = (g8 + g5);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(180), 0u);
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g7) < 32 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_0895DFA4;
      }
      goto L_0895DFC4;
    }
}
L_0895DFC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    g5 = (g4 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(320));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895DF9C;
      }
      goto L_0895DFD8;
    }
}
L_0895DFD8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895DFE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    g17 = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    g4 = (g17 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895E024;
      }
      goto L_0895E004;
    }
}
L_0895E004:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8636)));
    hot_regs.g31 = (0x0895E010u);
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.g4 = g4;
    goto L_0895FAB0;
}
L_0895E010:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    g4 = (g17 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895E004;
      }
      goto L_0895E024;
    }
}
L_0895E024:
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
L_0895E038:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    g17 = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    g4 = (g17 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895E07C;
      }
      goto L_0895E05C;
    }
}
L_0895E05C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8636)));
    hot_regs.g31 = (0x0895E068u);
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.g4 = g4;
    goto L_0895DEDC;
}
L_0895E068:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8632)));
    g4 = (g17 < g4 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895E05C;
      }
      goto L_0895E07C;
    }
}
L_0895E07C:
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
L_0895E090:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), hot_regs.g31);
    g16 = (g4 | 0u);
    g5 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = (g5 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[17] = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E0C0;
    }
}
L_0895E0C0:
{
    std::uint32_t g1 = ctx.gpr[1];
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    g1 = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = hot_regs.g5 == g1;
    g1 = (0u + static_cast<std::uint32_t>(2));
    ctx.gpr[1] = g1;
      if (branch_taken) {
          goto L_0895E4B8;
      }
      goto L_0895E0D8;
    }
}
L_0895E0D8:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0895E6C8;
      }
      goto L_0895E0E0;
    }
L_0895E0E0:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0895E784;
      }
      goto L_0895E0E8;
    }
L_0895E0E8:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0895E344;
      }
      goto L_0895E0F0;
    }
L_0895E0F0:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 & 16383u);
    f15 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    hot_regs.g5 = g5;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0895E110;
      }
      goto L_0895E104;
    }
}
}
L_0895E104:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f15 = hot_regs.f15 + hot_regs.f14;
    goto L_0895E110;
L_0895E110:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (14793u << 16u);
    g5 = (g5 | 4059u);
    f14 = std::bit_cast<float>(g5);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g5 = (std::bit_cast<std::uint32_t>(f14));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
    g5 = (ctx.vfpu_scalar_bits_ct<1u>());
    f15 = std::bit_cast<float>(g5);
    g5 = (std::bit_cast<std::uint32_t>(f14));
    ctx.set_vfpu_scalar_bits_ct<0u>(g5);
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
    g5 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g5);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f13));
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (static_cast<std::int32_t>(g5) < 20 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0895E1C4;
      }
      goto L_0895E1B4;
    }
}
}
L_0895E1B4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (static_cast<std::int32_t>(g5) < 5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895E33C;
      }
      goto L_0895E1C4;
    }
}
L_0895E1C4:
{
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g5 = hot_regs.g5;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(48)));
    f17 = f17 - f16;
    g5 = (17430u << 16u);
    f16 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f17 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f17) ^ 0x80000000u);
    hot_regs.g5 = g5;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
        goto L_0895E1EC;
    }
    goto L_0895E1EC;
}
}
L_0895E1EC:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E33C;
      }
      goto L_0895E1FC;
    }
L_0895E1FC:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    f17 = f17 - ctx.fpr[18];
    ctx.set_fpu_condition((f17 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f17) ^ 0x80000000u);
    hot_regs.g4 = g4;
    ctx.fpr[17] = f17;
        goto L_0895E21C;
    }
    goto L_0895E21C;
}
}
L_0895E21C:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E33C;
      }
      goto L_0895E22C;
    }
L_0895E22C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[17] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[17];
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g5);
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
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (49003u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 34079u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895E33C;
      }
      goto L_0895E2B8;
    }
L_0895E2B8:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17036u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 43u);
    hot_regs.g5 = (0u | 128u);
    hot_regs.g6 = (0u | 128u);
    hot_regs.g7 = (0u | 100u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g31 = (0x0895E33Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E33Cu) goto L_0895E33C;
    return;
L_0895E33C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E344;
    }
L_0895E344:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (8u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E36C;
      }
      goto L_0895E360;
    }
}
}
L_0895E360:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_0895E36C;
L_0895E36C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (14153u << 16u);
    g4 = (g4 | 4084u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f16 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
        goto L_0895E418;
    }
    goto L_0895E40C;
}
}
L_0895E40C:
    hot_regs.g31 = (0x0895E414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E414u) goto L_0895E414;
    return;
L_0895E414:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0895E418;
L_0895E418:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(608)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895E458;
      }
      goto L_0895E428;
    }
}
L_0895E428:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895E440;
    }
    goto L_0895E434;
L_0895E434:
    hot_regs.g31 = (0x0895E43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E43Cu) goto L_0895E43C;
    return;
L_0895E43C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895E440;
L_0895E440:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2097), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x0895E458u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2016));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E458u) goto L_0895E458;
    return;
L_0895E458:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_0895E470;
    }
    goto L_0895E464;
}
L_0895E464:
    hot_regs.g31 = (0x0895E46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E46Cu) goto L_0895E46C;
    return;
L_0895E46C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0895E470;
L_0895E470:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895E4B0;
      }
      goto L_0895E480;
    }
}
L_0895E480:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895E498;
    }
    goto L_0895E48C;
L_0895E48C:
    hot_regs.g31 = (0x0895E494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E494u) goto L_0895E494;
    return;
L_0895E494:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895E498;
L_0895E498:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2305), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x0895E4B0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2224));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E4B0u) goto L_0895E4B0;
    return;
L_0895E4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E4B8;
    }
L_0895E4B8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 2047u);
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E4D8;
      }
      goto L_0895E4CC;
    }
}
}
L_0895E4CC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_0895E4D8;
L_0895E4D8:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (15177u << 16u);
    g4 = (g4 | 4059u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f16 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(11)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0895E588;
      }
      goto L_0895E578;
    }
}
}
L_0895E578:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E580;
    }
L_0895E580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E5A0;
      }
      goto L_0895E588;
    }
L_0895E588:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895E600;
      }
      goto L_0895E590;
    }
L_0895E590:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E660;
      }
      goto L_0895E598;
    }
L_0895E598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E5A0;
    }
L_0895E5A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_0895E5B8;
    }
    goto L_0895E5AC;
}
L_0895E5AC:
    hot_regs.g31 = (0x0895E5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E5B4u) goto L_0895E5B4;
    return;
L_0895E5B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0895E5B8;
L_0895E5B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895E5F8;
      }
      goto L_0895E5C8;
    }
}
L_0895E5C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895E5E0;
    }
    goto L_0895E5D4;
L_0895E5D4:
    hot_regs.g31 = (0x0895E5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E5DCu) goto L_0895E5DC;
    return;
L_0895E5DC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895E5E0;
L_0895E5E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2513), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x0895E5F8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2432));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E5F8u) goto L_0895E5F8;
    return;
L_0895E5F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E600;
    }
L_0895E600:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_0895E618;
    }
    goto L_0895E60C;
}
L_0895E60C:
    hot_regs.g31 = (0x0895E614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E614u) goto L_0895E614;
    return;
L_0895E614:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0895E618;
L_0895E618:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1232)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895E658;
      }
      goto L_0895E628;
    }
}
L_0895E628:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895E640;
    }
    goto L_0895E634;
L_0895E634:
    hot_regs.g31 = (0x0895E63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E63Cu) goto L_0895E63C;
    return;
L_0895E63C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895E640;
L_0895E640:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2721), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x0895E658u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2640));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E658u) goto L_0895E658;
    return;
L_0895E658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E660;
    }
L_0895E660:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g4 = g4;
        goto L_0895E678;
    }
    goto L_0895E66C;
}
L_0895E66C:
    hot_regs.g31 = (0x0895E674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E674u) goto L_0895E674;
    return;
L_0895E674:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    goto L_0895E678;
L_0895E678:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1488));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895E6B8;
      }
      goto L_0895E688;
    }
}
L_0895E688:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0895E6A0;
    }
    goto L_0895E694;
L_0895E694:
    hot_regs.g31 = (0x0895E69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 413u, 0x08B65B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E69Cu) goto L_0895E69C;
    return;
L_0895E69C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0895E6A0;
L_0895E6A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2929), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5864)));
    hot_regs.g31 = (0x0895E6B8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2848));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E6B8u) goto L_0895E6B8;
    return;
L_0895E6B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E6C0;
      }
      goto L_0895E6C0;
    }
L_0895E6C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E6C8;
    }
L_0895E6C8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 1023u);
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E6E8;
      }
      goto L_0895E6DC;
    }
}
}
L_0895E6DC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_0895E6E8;
L_0895E6E8:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (15305u << 16u);
    g4 = (g4 | 4059u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f16 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f15));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E784;
    }
}
}
L_0895E784:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (4u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E7AC;
      }
      goto L_0895E7A0;
    }
}
}
L_0895E7A0:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    goto L_0895E7AC;
L_0895E7AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (14281u << 16u);
    g4 = (g4 | 4059u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f15 = std::bit_cast<float>(g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
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
    f16 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f16));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g4 = (17327u << 16u);
    f12 = std::bit_cast<float>(g4);
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (50152u << 16u);
    g4 = (g4 | 32768u);
    f14 = std::bit_cast<float>(g4);
    f13 = f13 + f14;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17553u << 16u);
    g4 = (g4 | 24576u);
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    g4 = (17282u << 16u);
    f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0895E89C;
      }
      goto L_0895E89C;
    }
}
}
L_0895E89C:
    hot_regs.g31 = (0x0895E8A4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E8A4u) goto L_0895E8A4;
    return;
L_0895E8A4:
    hot_regs.g31 = (0x0895E8ACu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895E8ACu) goto L_0895E8AC;
    return;
L_0895E8AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    g4 = (g4 << 2u);
    g5 = (2234u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(2416));
    g4 = (g4 + g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E928;
      }
      goto L_0895E900;
    }
}
}
L_0895E900:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0895E944;
      }
      goto L_0895E910;
    }
L_0895E910:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (2247u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(11632));
    hot_regs.g31 = (0x0895E920u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    goto L_0895CA60;
}
L_0895E920:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0895E944;
      }
      goto L_0895E928;
    }
L_0895E928:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895E944;
      }
      goto L_0895E934;
    }
L_0895E934:
    hot_regs.g31 = (0x0895E93Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895CA7C;
L_0895E93C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0895E944;
L_0895E944:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895E958:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
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
    g5 = (2236u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(32304));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    f12 = f12 - f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    f12 = std::sqrt(f12);
    g5 = (17096u << 16u);
    f13 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895E9FC;
      }
      goto L_0895E9D0;
    }
}
}
L_0895E9D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(g4));
    g4 = (17046u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895EA08;
      }
      goto L_0895E9F4;
    }
}
L_0895E9F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f15));
      if (branch_taken) {
          goto L_0895EA24;
      }
      goto L_0895E9FC;
    }
L_0895E9FC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(101), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC40;
      }
      goto L_0895EA08;
    }
L_0895EA08:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f14;
    hot_regs.g4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f13;
    f12 = hot_regs.f15 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0895EA24;
}
L_0895EA24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g4);
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895EBD4;
      }
      goto L_0895EA3C;
    }
}
L_0895EA3C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895EBD4;
      }
      goto L_0895EA58;
    }
}
L_0895EA58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_0895EBC4;
      }
      goto L_0895EA68;
    }
L_0895EA68:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    ctx.gpr[30] = (0u | 3u);
    g23 = (2234u << 16u);
    g23 = (g23 + static_cast<std::uint32_t>(2877));
    g22 = (2234u << 16u);
    g22 = (g22 + static_cast<std::uint32_t>(3010));
    g21 = (2234u << 16u);
    g21 = (g21 + static_cast<std::uint32_t>(3131));
    g20 = (2234u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(2953));
    g19 = (2234u << 16u);
    g19 = (g19 + static_cast<std::uint32_t>(3074));
    g18 = (2234u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(3189));
    g17 = (2234u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(3222));
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    goto L_0895EAA4;
}
L_0895EAA4:
    hot_regs.g31 = (0x0895EAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EAACu) goto L_0895EAAC;
    return;
L_0895EAAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[30]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.hi);
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895EADC;
      }
      goto L_0895EAC4;
    }
}
L_0895EAC4:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0895EBAC;
      }
      goto L_0895EACC;
    }
L_0895EACC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17612)));
      if (branch_taken) {
          goto L_0895EB00;
      }
      goto L_0895EAD4;
    }
L_0895EAD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB50;
      }
      goto L_0895EADC;
    }
L_0895EADC:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EBA0;
      }
      goto L_0895EAE4;
    }
L_0895EAE4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBAC;
      }
      goto L_0895EAEC;
    }
L_0895EAEC:
    hot_regs.g31 = (0x0895EAF4u);
    // nop
    goto L_0895C9A8;
L_0895EAF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g2);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_0895EBB0;
      }
      goto L_0895EB00;
    }
L_0895EB00:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EB1C;
      }
      goto L_0895EB08;
    }
L_0895EB08:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_0895EB44;
      }
      goto L_0895EB10;
    }
L_0895EB10:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0895EB48;
      }
      goto L_0895EB1C;
    }
L_0895EB1C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EB38;
      }
      goto L_0895EB24;
    }
L_0895EB24:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB44;
      }
      goto L_0895EB2C;
    }
L_0895EB2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0895EB48;
      }
      goto L_0895EB38;
    }
L_0895EB38:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_0895EB48;
      }
      goto L_0895EB44;
    }
L_0895EB44:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0895EB48;
L_0895EB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBB0;
      }
      goto L_0895EB50;
    }
L_0895EB50:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EB6C;
      }
      goto L_0895EB58;
    }
L_0895EB58:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_0895EB94;
      }
      goto L_0895EB60;
    }
L_0895EB60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0895EB98;
      }
      goto L_0895EB6C;
    }
L_0895EB6C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0895EB88;
      }
      goto L_0895EB74;
    }
L_0895EB74:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EB94;
      }
      goto L_0895EB7C;
    }
L_0895EB7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0895EB98;
      }
      goto L_0895EB88;
    }
L_0895EB88:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0895EB98;
      }
      goto L_0895EB94;
    }
L_0895EB94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0895EB98;
L_0895EB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBB0;
      }
      goto L_0895EBA0;
    }
L_0895EBA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0895EBB0;
      }
      goto L_0895EBAC;
    }
L_0895EBAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0895EBB0;
L_0895EBB0:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_0895EAA4;
      }
      goto L_0895EBBC;
    }
L_0895EBBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EBC4;
      }
      goto L_0895EBC4;
    }
L_0895EBC4:
    hot_regs.g31 = (0x0895EBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EBCCu) goto L_0895EBCC;
    return;
L_0895EBCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), hot_regs.g2);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    goto L_0895EBD4;
L_0895EBD4:
    hot_regs.g4 = (0u | 0u);
    goto L_0895EBD8;
L_0895EBD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + ctx.gpr[16]);
    hot_regs.g6 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(61)));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g6));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (static_cast<std::int32_t>(g4) < 39 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0895EBD8;
      }
      goto L_0895EBF4;
    }
}
L_0895EBF4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EC3C;
      }
      goto L_0895EC04;
    }
L_0895EC04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(36)));
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    g6 = (g5 << 2u);
    g5 = (g5 + g6);
    g5 = (g5 + static_cast<std::uint32_t>(-160));
    g4 = (g5 + g4);
    g5 = (2234u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(2560));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0895EC40;
      }
      goto L_0895EC3C;
    }
}
L_0895EC3C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
    goto L_0895EC40;
L_0895EC40:
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
L_0895EC70:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), hot_regs.g31);
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    g6 = (16800u << 16u);
    f12 = std::bit_cast<float>(g6);
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f13 = f13 + f16;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    g6 = (16416u << 16u);
    f15 = std::bit_cast<float>(g6);
    { const float fs = ctx.fpr[17]; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f13 + f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f14 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (g4 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0895ED24;
      }
      goto L_0895ED18;
    }
}
}
L_0895ED18:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) ^ 0x80000000u);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895ED28;
      }
      goto L_0895ED24;
    }
}
L_0895ED24:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    goto L_0895ED28;
L_0895ED28:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((hot_regs.f15 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
        goto L_0895ED50;
    }
    goto L_0895ED3C;
L_0895ED3C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    f13 = hot_regs.f14 + f13;
    { const bool branch_taken = 0u == 0u;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0895ED58;
      }
      goto L_0895ED50;
    }
}
L_0895ED50:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = hot_regs.f14 + f13;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0895ED58;
}
L_0895ED58:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g5);
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
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
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895EDAC;
      }
      goto L_0895EDA4;
    }
L_0895EDA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_0895EDAC;
}
L_0895EDAC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F06C;
      }
      goto L_0895EDB4;
    }
L_0895EDB4:
    hot_regs.g31 = (0x0895EDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 58u, 0x08AA8BC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EDBCu) goto L_0895EDBC;
    return;
L_0895EDBC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(102)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(103)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 1u));
    hot_regs.g4 = (hot_regs.g4 >> 31u);
    hot_regs.g4 = (ctx.gpr[23] + hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 1u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(130), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 & 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x0895EE68u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EE68u) goto L_0895EE68;
    return;
L_0895EE68:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x0895EE74u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EE74u) goto L_0895EE74;
    return;
L_0895EE74:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x0895EE80u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EE80u) goto L_0895EE80;
    return;
L_0895EE80:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x0895EE8Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EE8Cu) goto L_0895EE8C;
    return;
L_0895EE8C:
    hot_regs.g4 = (0u | 7u);
    hot_regs.g31 = (0x0895EE98u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EE98u) goto L_0895EE98;
    return;
L_0895EE98:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4264)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895EEB0u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EEB0u) goto L_0895EEB0;
    return;
L_0895EEB0:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x0895EEBCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EEBCu) goto L_0895EEBC;
    return;
L_0895EEBC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(100));
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_0895EEE4;
}
L_0895EEE4:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (0u | 0u);
    f20 = std::bit_cast<float>(g17);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    ctx.gpr[20] = (g17 + ctx.gpr[18]);
    ctx.gpr[17] = g17;
    hot_regs.f20 = f20;
    goto L_0895EEF8;
}
}
L_0895EEF8:
    hot_regs.g4 = (ctx.gpr[17] & 31u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F040;
      }
      goto L_0895EF04;
    }
L_0895EF04:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(44)));
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f20; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(ctx.gpr[16]);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(52)));
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f14; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(16));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (0u | 1u);
    g5 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    g4 = (g4 << (ctx.gpr[16] & 31u));
    g5 = (g5 & g4);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0895EFCC;
      }
      goto L_0895EF68;
    }
}
}
L_0895EF68:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g31 = (0x0895EF80u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EF80u) goto L_0895EF80;
    return;
L_0895EF80:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895EFC4;
      }
      goto L_0895EF88;
    }
L_0895EF88:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = ctx.fpr[24] / hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x0895EFC4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA9B20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EFC4u) goto L_0895EFC4;
    return;
L_0895EFC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F040;
      }
      goto L_0895EFCC;
    }
L_0895EFCC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(59)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895F040;
      }
      goto L_0895EFDC;
    }
}
L_0895EFDC:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x0895EFF4u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 32u, 0x08AA82D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895EFF4u) goto L_0895EFF4;
    return;
L_0895EFF4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F040;
      }
      goto L_0895EFFC;
    }
L_0895EFFC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[17] = ctx.fpr[24] / hot_regs.f14;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(130)));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(129)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g7 = (0u | 255u);
    hot_regs.g31 = (0x0895F040u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 141u, 0x08AA9B20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F040u) goto L_0895F040;
    return;
L_0895F040:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0895EEF8;
      }
      goto L_0895F050;
    }
}
L_0895F050:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895EEE4;
      }
      goto L_0895F064;
    }
}
L_0895F064:
    hot_regs.g31 = (0x0895F06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 59u, 0x08AA8BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F06Cu) goto L_0895F06C;
    return;
L_0895F06C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895F0AC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-432));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(380), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(384), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(388), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(392), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(396), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(400), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(408), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(412), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(416), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895F5A4;
      }
      goto L_0895F0F4;
    }
}
L_0895F0F4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    f13 = f13 / hot_regs.f15;
    f12 = f12 + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[16] < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0895F134;
      }
      goto L_0895F12C;
    }
}
}
L_0895F12C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0895F138;
      }
      goto L_0895F134;
    }
L_0895F134:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0895F138;
L_0895F138:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0895F154;
    }
    goto L_0895F154;
}
L_0895F154:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1A0;
      }
      goto L_0895F164;
    }
L_0895F164:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1A0;
      }
      goto L_0895F170;
    }
L_0895F170:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1A0;
      }
      goto L_0895F17C;
    }
L_0895F17C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1A0;
      }
      goto L_0895F188;
    }
L_0895F188:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895F1A0;
      }
      goto L_0895F194;
    }
L_0895F194:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F5A4;
      }
      goto L_0895F1A0;
    }
L_0895F1A0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 - f13;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0895F1CC;
    }
    goto L_0895F1CC;
}
}
L_0895F1CC:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    hot_regs.g31 = (0x0895F1E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0895D1DC;
L_0895F1E0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0895F204;
    }
    goto L_0895F204;
}
}
L_0895F204:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(32));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(36));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(40));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0895F21Cu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    goto L_0895D1DC;
}
L_0895F21C:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(272));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (128u << 16u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    goto L_0895F2F0;
L_0895F2F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F594;
      }
      goto L_0895F2FC;
    }
L_0895F2FC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g31 = (0x0895F308u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F308u) goto L_0895F308;
    return;
L_0895F308:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0895F3D4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F3D4u) goto L_0895F3D4;
    return;
L_0895F3D4:
    hot_regs.g31 = (0x0895F3DCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F3DCu) goto L_0895F3DC;
    return;
L_0895F3DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[30]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895F410;
      }
      goto L_0895F3F0;
    }
}
L_0895F3F0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x0895F400u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F400u) goto L_0895F400;
    return;
L_0895F400:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F410;
      }
      goto L_0895F408;
    }
L_0895F408:
    hot_regs.g31 = (0x0895F410u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 161u, 0x08A69104u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F410u) goto L_0895F410;
    return;
L_0895F410:
    hot_regs.g31 = (0x0895F418u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F418u) goto L_0895F418;
    return;
L_0895F418:
    hot_regs.g31 = (0x0895F420u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F420u) goto L_0895F420;
    return;
L_0895F420:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(216)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (0x0895F484u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F484u) goto L_0895F484;
    return;
L_0895F484:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(16));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24) ^ 0x80000000u);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((!(std::isnan(f24) || std::isnan(hot_regs.f20)) && f24 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_0895F4C0;
      }
      goto L_0895F4A8;
    }
}
}
L_0895F4A8:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
        goto L_0895F4C4;
    }
    goto L_0895F4B8;
}
L_0895F4B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0895F4D0;
      }
      goto L_0895F4C0;
    }
L_0895F4C0:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0895F4C4;
L_0895F4C4:
    hot_regs.g31 = (0x0895F4CCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F4CCu) goto L_0895F4CC;
    return;
L_0895F4CC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895F4D0;
L_0895F4D0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895F500;
      }
      goto L_0895F4E8;
    }
}
L_0895F4E8:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895F500;
      }
      goto L_0895F4F8;
    }
L_0895F4F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0895F50C;
      }
      goto L_0895F500;
    }
L_0895F500:
    hot_regs.g31 = (0x0895F508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F508u) goto L_0895F508;
    return;
L_0895F508:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895F50C;
L_0895F50C:
    hot_regs.g31 = (0x0895F514u);
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F514u) goto L_0895F514;
    return;
L_0895F514:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(f20));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f12 = ctx.fpr[0] / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g4 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f20));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(f20));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0895F594;
      }
      goto L_0895F580;
    }
}
}
L_0895F580:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895F594;
      }
      goto L_0895F58C;
    }
L_0895F58C:
    hot_regs.g31 = (0x0895F594u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(224)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F594u) goto L_0895F594;
    return;
L_0895F594:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0895F2F0;
      }
      goto L_0895F5A4;
    }
}
L_0895F5A4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(368)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(372)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(376)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(380)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(384)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(388)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(392)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(396)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(400)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(404)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(408)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(412)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(416)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895F5E0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895F620;
      }
      goto L_0895F5FC;
    }
}
L_0895F5FC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (49736u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895F628;
      }
      goto L_0895F618;
    }
L_0895F618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA9C;
      }
      goto L_0895F620;
    }
L_0895F620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA9C;
      }
      goto L_0895F628;
    }
L_0895F628:
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    hot_regs.g5 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g5 = (16896u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g5);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895F6A8;
      }
      goto L_0895F6A0;
    }
L_0895F6A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(1));
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
    goto L_0895F6A8;
}
L_0895F6A8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (17302u << 16u);
      if (branch_taken) {
          goto L_0895FA9C;
      }
      goto L_0895F6B0;
    }
L_0895F6B0:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895FA9C;
      }
      goto L_0895F6C4;
    }
L_0895F6C4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    hot_regs.g5 = (17274u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    g17 = (2238u << 16u);
    g17 = (g17 + static_cast<std::uint32_t>(-272));
    g16 = (2238u << 16u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g16 = (g16 + static_cast<std::uint32_t>(12016));
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_0895F6F8;
      }
      goto L_0895F6F0;
    }
}
L_0895F6F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 160u);
      if (branch_taken) {
          goto L_0895F724;
      }
      goto L_0895F6F8;
    }
L_0895F6F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    f12 = f12 - hot_regs.f13;
    g5 = (17184u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (16968u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    f12 = f12 / hot_regs.f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g5 & 255u);
    g7 = (g7 & 255u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    goto L_0895F724;
}
}
L_0895F724:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g5 = (g5 + g17);
    g8 = (0u | 255u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g5 = (g5 + g17);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g6 = (g5 + g5);
    g5 = (g5 + g6);
    g6 = (g17 + static_cast<std::uint32_t>(24));
    g5 = (g5 + g6);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g8 = (g5 + g5);
    g5 = (g5 + g8);
    g5 = (g5 + g6);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    g8 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g8);
    f14 = f14 - ctx.fpr[16];
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g8 = (g5 + g5);
    g5 = (g5 + g8);
    g5 = (g5 + g17);
    f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g8 = (g5 + g5);
    g5 = (g5 + g8);
    g5 = (g5 + g17);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g8 = (g5 + g5);
    g5 = (g5 + g8);
    g5 = (g5 + g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 << 3u);
    g8 = (g5 + g5);
    g5 = (g5 + g8);
    g5 = (g5 + g6);
    g8 = (16256u << 16u);
    f14 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g5);
    g5 = (0u | 2u);
    g8 = (16384u << 16u);
    f13 = std::bit_cast<float>(g8);
    g8 = (16544u << 16u);
    f12 = std::bit_cast<float>(g8);
    g4 = (g4 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_0895F868;
}
}
L_0895F868:
{
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g9 = (g8 + static_cast<std::uint32_t>(-2));
    g10 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g10 = (g10 + g10);
    g10 = (g10 + ctx.gpr[16]);
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g9));
    g11 = (g8 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g11));
    g11 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g11));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g9));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g11));
    aot_mem.aot_store16(g10 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g8));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g17);
    g9 = (0u | 255u);
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g7));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g10 = (g8 + g8);
    g8 = (g8 + g10);
    g8 = (g8 + g17);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f18));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f19));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g10 = (g8 + g8);
    g8 = (g8 + g10);
    g8 = (g8 + g6);
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g9));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g7));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g6);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f19 = f19 - ctx.fpr[16];
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f17));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f18));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f19));
    f17 = std::bit_cast<float>(g5);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f17 = f17 - hot_regs.f13;
    f17 = f17 / hot_regs.f12;
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g17);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f17));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g17);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f17));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 << 3u);
    g9 = (g8 + g8);
    g8 = (g8 + g9);
    g8 = (g8 + g6);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f14));
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g8 = (g8 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g8);
    g8 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g8 = (g8 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g8);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_0895F868;
      }
      goto L_0895F9D8;
    }
}
}
L_0895F9D8:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x0895F9E4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F9E4u) goto L_0895F9E4;
    return;
L_0895F9E4:
    hot_regs.g4 = (0u | 4u);
    hot_regs.g31 = (0x0895F9F0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F9F0u) goto L_0895F9F0;
    return;
L_0895F9F0:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x0895F9FCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895F9FCu) goto L_0895F9FC;
    return;
L_0895F9FC:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x0895FA08u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA08u) goto L_0895FA08;
    return;
L_0895FA08:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x0895FA14u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA14u) goto L_0895FA14;
    return;
L_0895FA14:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x0895FA20u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA20u) goto L_0895FA20;
    return;
L_0895FA20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9024)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x0895FA30u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA30u) goto L_0895FA30;
    return;
L_0895FA30:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x0895FA44u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA44u) goto L_0895FA44;
    return;
L_0895FA44:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FA64;
      }
      goto L_0895FA4C;
    }
L_0895FA4C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x0895FA5Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA5Cu) goto L_0895FA5C;
    return;
L_0895FA5C:
    hot_regs.g31 = (0x0895FA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA64u) goto L_0895FA64;
    return;
L_0895FA64:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x0895FA70u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA70u) goto L_0895FA70;
    return;
L_0895FA70:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x0895FA7Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA7Cu) goto L_0895FA7C;
    return;
L_0895FA7C:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x0895FA88u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA88u) goto L_0895FA88;
    return;
L_0895FA88:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x0895FA94u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FA94u) goto L_0895FA94;
    return;
L_0895FA94:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    goto L_0895FA9C;
L_0895FA9C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0895FAB0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(512), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(516), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(520), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(524), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(528), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(532), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(536), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(540), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(544), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(548), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FAF4;
    }
}
L_0895FAF4:
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
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16840u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FB40;
    }
L_0895FB40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
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
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
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
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_0895FB88;
      }
      goto L_0895FB80;
    }
L_0895FB80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_0895FB88;
}
L_0895FB88:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FB90;
    }
L_0895FB90:
    hot_regs.g31 = (0x0895FB98u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15960)));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 337u, 0x08B6A2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FB98u) goto L_0895FB98;
    return;
L_0895FB98:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    g4 = (g4 + static_cast<std::uint32_t>(10));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FBAC;
    }
}
L_0895FBAC:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(-17600));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    goto L_0895FBB4;
L_0895FBB4:
    hot_regs.g31 = (0x0895FBBCu);
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(274)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FBBCu) goto L_0895FBBC;
    return;
L_0895FBBC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0895FBE8;
      }
      goto L_0895FBC4;
    }
L_0895FBC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(274)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x0895FBD8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FBD8u) goto L_0895FBD8;
    return;
L_0895FBD8:
    hot_regs.g31 = (0x0895FBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 596u, 0x08AD35ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FBE0u) goto L_0895FBE0;
    return;
L_0895FBE0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0895FBB4;
      }
      goto L_0895FBE8;
    }
L_0895FBE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(144), static_cast<std::uint8_t>(g4));
    ctx.gpr[20] = (0u | 0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(148)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (g17 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0895FC84;
      }
      goto L_0895FC04;
    }
}
L_0895FC04:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x0895FC10u);
    hot_regs.g4 = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 392u, 0x0882B994u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FC10u) goto L_0895FC10;
    return;
L_0895FC10:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
        goto L_0895FC38;
    }
    goto L_0895FC1C;
L_0895FC1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(274)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0895FC30u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 351u, 0x0882B688u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FC30u) goto L_0895FC30;
    return;
L_0895FC30:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    goto L_0895FC38;
L_0895FC38:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FC70;
      }
      goto L_0895FC40;
    }
L_0895FC40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x0895FC64u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FC64u) goto L_0895FC64;
    return;
L_0895FC64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    hot_regs.g5 = (0u | 5u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(476), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_0895FC70;
L_0895FC70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0895FC04;
      }
      goto L_0895FC84;
    }
}
L_0895FC84:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 5u, 0x08960030u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895FC90;
    }
L_0895FC90:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 16383u);
    f20 = std::bit_cast<float>(g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), hot_regs.g5);
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0895FCB8;
      }
      goto L_0895FCAC;
    }
}
}
L_0895FCAC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    goto L_0895FCB8;
L_0895FCB8:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (14464u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (16256u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0895FF88;
      }
      goto L_0895FCD8;
    }
}
}
L_0895FCD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(80));
    g4 = (g17 + static_cast<std::uint32_t>(64));
    g5 = (g17 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(492), g4);
    g4 = (g17 + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(484), g5);
    g5 = (g17 + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(480), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(488), g5);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(224));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0895FD18;
}
L_0895FD18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FF74;
      }
      goto L_0895FD24;
    }
L_0895FD24:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(ctx.gpr[19]);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f22 = f12 / f13;
    f22 = hot_regs.f20 + f22;
    ctx.set_fpu_condition((f22 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0895FD54;
      }
      goto L_0895FD50;
    }
}
L_0895FD50:
    hot_regs.f22 = hot_regs.f22 - ctx.fpr[24];
    goto L_0895FD54;
L_0895FD54:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FD64;
      }
      goto L_0895FD60;
    }
L_0895FD60:
    hot_regs.f22 = ctx.fpr[24] - hot_regs.f22;
    goto L_0895FD64;
L_0895FD64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (0x0895FD98u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(492)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FD98u) goto L_0895FD98;
    return;
L_0895FD98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(480)));
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(484)));
      if (branch_taken) {
          goto L_0895FE10;
      }
      goto L_0895FDB0;
    }
L_0895FDB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    hot_regs.f12 = hot_regs.f22 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FEEC;
      }
      goto L_0895FE10;
    }
L_0895FE10:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895FE90;
      }
      goto L_0895FE24;
    }
L_0895FE24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(152)));
    hot_regs.f13 = hot_regs.f22 - hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895FEEC;
      }
      goto L_0895FE90;
    }
L_0895FE90:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    hot_regs.f13 = hot_regs.f22 - hot_regs.f12;
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(488)));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f12;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g6);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0895FEEC;
L_0895FEEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    ctx.set_fpu_condition((ctx.fpr[24] <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_0895FF38;
    }
    goto L_0895FF38;
}
}
L_0895FF38:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (0x0895FF64u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FF64u) goto L_0895FF64;
    return;
L_0895FF64:
    hot_regs.g31 = (0x0895FF6Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FF6Cu) goto L_0895FF6C;
    return;
L_0895FF6C:
    hot_regs.g31 = (0x0895FF74u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0895FF74u) goto L_0895FF74;
    return;
L_0895FF74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0895FD18;
      }
      goto L_0895FF88;
    }
}
L_0895FF88:
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(496)));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16864u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 4u, 0x08960028u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0895FFD8;
    }
L_0895FFD8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    g4 = (2246u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(1840));
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
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    hot_regs.g4 = g4;
    ctx.pc = 0x08960000u; return;}

}

void recomp_unit_0086(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0086_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_86(Runtime &runtime) {
    runtime.register_generated_unit(86u, 0x0895C000u, 16384u, &recomp_unit_0086, &recomp_unit_0086_entry);
    runtime.register_function(0x0895C000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C01Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C044u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C074u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C080u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C08Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C098u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C0A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C118u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C208u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C220u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C244u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C28Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C2C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C318u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C34Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C54Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C564u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C570u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C694u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C6FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C708u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C710u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C734u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C748u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C760u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C764u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C848u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C864u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C878u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C884u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C88Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C8C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C918u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C934u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C978u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895C9A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CA94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CABCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CAF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CB90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CBCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CCCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CDE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CEF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CF9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFC0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895CFF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D000u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D008u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D014u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D020u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D02Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D038u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D040u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D04Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D058u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0BCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D0D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D180u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D19Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D204u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D214u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D228u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D2F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D300u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D324u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D32Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D350u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D374u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D37Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D38Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D3C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D41Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D424u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D440u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D488u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D4D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D51Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D530u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D53Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D550u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D558u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D570u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D59Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D5F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D604u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D610u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D620u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D64Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D654u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D664u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D678u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D698u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D6F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D70Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D718u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D720u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D72Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D750u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D778u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D790u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D79Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D7E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D800u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D82Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D864u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D86Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D874u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D880u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D888u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D8C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D910u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D938u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D980u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D988u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895D9FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DA74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DABCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DADCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAF0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DAFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB34u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB78u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DB98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DC98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DCFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DDF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DE90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEA8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEC8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DEDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF0Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DF9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895DFE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E004u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E010u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E024u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E038u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E05Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E068u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E07Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E090u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E0F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E104u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E110u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1ECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E1FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E22Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E2B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E33Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E344u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E360u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E36Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E40Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E414u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E418u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E428u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E434u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E43Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E440u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E458u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E464u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E46Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E470u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E480u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E48Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E494u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E498u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E4D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E578u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E588u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E590u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E598u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5B4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E5F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E600u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E60Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E614u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E634u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E63Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E640u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E658u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E660u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E66Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E674u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E678u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E688u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E694u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E69Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6C8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E6E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E784u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E7ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E89Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E8ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E900u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E910u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E920u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E928u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E934u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E93Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E944u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E958u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895E9FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EA68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EACCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EADCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB00u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB2Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB48u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EB98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBA0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBD4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EBF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED28u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED3Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895ED58u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDA4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EDBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE8Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EE98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEE4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EEF8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF68u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFCCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFDCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895EFFCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F040u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F050u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F064u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F06Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0ACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F0F4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F12Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F134u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F138u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F154u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F164u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F170u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F17Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F188u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F194u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F1E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F204u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F21Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F2FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F308u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3D4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3DCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F3F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F400u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F408u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F410u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F418u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F420u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F484u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4B8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4C0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4CCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4D0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4E8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F4F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F500u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F508u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F50Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F514u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F580u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F58Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F594u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5A4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5E0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F5FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F618u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F620u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F628u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6A8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6B0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6C4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F6F8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F724u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F868u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9D8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9E4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9F0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895F9FCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA08u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA14u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA20u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA44u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA4Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA5Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA7Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA94u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FA9Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FAF4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB80u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FB98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBB4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBBCu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBC4u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FBE8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC04u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC1Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC30u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC40u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC70u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC84u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FC90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCACu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCB8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FCD8u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD18u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD50u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD54u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD60u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FD98u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FDB0u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE10u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE24u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FE90u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FEECu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF38u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF64u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF6Cu, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF74u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FF88u, &recomp_unit_0086, "recomp_unit_0086");
    runtime.register_function(0x0895FFD8u, &recomp_unit_0086, "recomp_unit_0086");
}
} // namespace psprecomp
