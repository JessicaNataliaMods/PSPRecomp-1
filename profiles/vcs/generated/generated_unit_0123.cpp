#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0123[4085] = {
    1, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26,
    0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 34, 0,
    0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45,
    0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 50, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0,
    53, 0, 0, 0, 0, 54, 55, 0, 0, 0, 0, 56, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 61, 62, 0, 0, 0, 0, 63, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 69, 0,
    0, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 78,
    0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86,
    87, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0,
    95, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 0, 103,
    0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 0, 0,
    0, 112, 0, 0, 113, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133,
    0, 134, 0, 135, 0, 136, 0, 137, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 156, 0, 0,
    157, 0, 158, 159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0, 0, 0,
    163, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 171, 0, 172, 0, 173, 0,
    0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0,
    178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0,
    214, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 222, 0, 0, 223,
    224, 0, 225, 0, 226, 227, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 235, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 0, 0, 245, 0,
    0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 255, 256, 0, 0, 0, 257, 0, 0, 0, 258, 0,
    0, 259, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 288, 0, 289, 0, 0,
    290, 0, 0, 291, 0, 0, 292, 293, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0,
    0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0,
    0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 323, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0,
    337, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 360, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 367, 0, 368, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0,
    0, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0,
    0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 396, 0, 0, 397, 0, 0, 0, 398,
    0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415,
    0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0,
    0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 450, 451,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459,
    460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0,
    478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 487, 0, 488, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0,
    0, 493, 0, 494, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 511, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 515, 0, 0, 0, 0, 516, 517, 0, 0, 0, 0, 518, 519, 0, 0, 0,
    0, 520, 521, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 527, 0, 0, 0,
    0, 0, 528, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 537,
    0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0,
    0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 0, 552, 553, 0, 0, 0,
    0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559,
    0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 570,
    0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585,
    0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0,
    0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600,
    0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0,
    0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 619, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0,
    623, 0, 0, 0, 624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0,
    0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 639, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0,
    0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662,
};
void recomp_unit_0123_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F0000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0123[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F0000;
    case 2u: goto L_089F0010;
    case 3u: goto L_089F0018;
    case 4u: goto L_089F0020;
    case 5u: goto L_089F003C;
    case 6u: goto L_089F0050;
    case 7u: goto L_089F00A0;
    case 8u: goto L_089F00C0;
    case 9u: goto L_089F010C;
    case 10u: goto L_089F0128;
    case 11u: goto L_089F0140;
    case 12u: goto L_089F015C;
    case 13u: goto L_089F019C;
    case 14u: goto L_089F01E4;
    case 15u: goto L_089F0214;
    case 16u: goto L_089F0224;
    case 17u: goto L_089F0240;
    case 18u: goto L_089F0258;
    case 19u: goto L_089F0264;
    case 20u: goto L_089F026C;
    case 21u: goto L_089F02EC;
    case 22u: goto L_089F02FC;
    case 23u: goto L_089F0324;
    case 24u: goto L_089F0358;
    case 25u: goto L_089F0370;
    case 26u: goto L_089F037C;
    case 27u: goto L_089F0390;
    case 28u: goto L_089F03A0;
    case 29u: goto L_089F03B0;
    case 30u: goto L_089F03B8;
    case 31u: goto L_089F03C8;
    case 32u: goto L_089F03D8;
    case 33u: goto L_089F03E8;
    case 34u: goto L_089F03F8;
    case 35u: goto L_089F0414;
    case 36u: goto L_089F0424;
    case 37u: goto L_089F0438;
    case 38u: goto L_089F045C;
    case 39u: goto L_089F0470;
    case 40u: goto L_089F0484;
    case 41u: goto L_089F0490;
    case 42u: goto L_089F049C;
    case 43u: goto L_089F04D4;
    case 44u: goto L_089F04EC;
    case 45u: goto L_089F04FC;
    case 46u: goto L_089F050C;
    case 47u: goto L_089F051C;
    case 48u: goto L_089F052C;
    case 49u: goto L_089F053C;
    case 50u: goto L_089F0548;
    case 51u: goto L_089F054C;
    case 52u: goto L_089F056C;
    case 53u: goto L_089F0580;
    case 54u: goto L_089F0594;
    case 55u: goto L_089F0598;
    case 56u: goto L_089F05AC;
    case 57u: goto L_089F05B0;
    case 58u: goto L_089F05C0;
    case 59u: goto L_089F05E8;
    case 60u: goto L_089F060C;
    case 61u: goto L_089F0620;
    case 62u: goto L_089F0624;
    case 63u: goto L_089F0638;
    case 64u: goto L_089F063C;
    case 65u: goto L_089F0648;
    case 66u: goto L_089F065C;
    case 67u: goto L_089F066C;
    case 68u: goto L_089F0674;
    case 69u: goto L_089F0678;
    case 70u: goto L_089F0690;
    case 71u: goto L_089F06A4;
    case 72u: goto L_089F06B8;
    case 73u: goto L_089F06C0;
    case 74u: goto L_089F06CC;
    case 75u: goto L_089F06E0;
    case 76u: goto L_089F06F0;
    case 77u: goto L_089F06F8;
    case 78u: goto L_089F06FC;
    case 79u: goto L_089F0714;
    case 80u: goto L_089F0728;
    case 81u: goto L_089F073C;
    case 82u: goto L_089F0744;
    case 83u: goto L_089F0750;
    case 84u: goto L_089F0764;
    case 85u: goto L_089F0774;
    case 86u: goto L_089F077C;
    case 87u: goto L_089F0780;
    case 88u: goto L_089F0798;
    case 89u: goto L_089F07AC;
    case 90u: goto L_089F07C0;
    case 91u: goto L_089F07C8;
    case 92u: goto L_089F07D4;
    case 93u: goto L_089F07E8;
    case 94u: goto L_089F07F8;
    case 95u: goto L_089F0800;
    case 96u: goto L_089F0804;
    case 97u: goto L_089F081C;
    case 98u: goto L_089F0830;
    case 99u: goto L_089F0844;
    case 100u: goto L_089F084C;
    case 101u: goto L_089F0858;
    case 102u: goto L_089F086C;
    case 103u: goto L_089F087C;
    case 104u: goto L_089F0884;
    case 105u: goto L_089F0888;
    case 106u: goto L_089F08A0;
    case 107u: goto L_089F08C4;
    case 108u: goto L_089F08D8;
    case 109u: goto L_089F08E0;
    case 110u: goto L_089F08EC;
    case 111u: goto L_089F08F4;
    case 112u: goto L_089F0904;
    case 113u: goto L_089F0910;
    case 114u: goto L_089F0918;
    case 115u: goto L_089F095C;
    case 116u: goto L_089F0984;
    case 117u: goto L_089F09A4;
    case 118u: goto L_089F09B4;
    case 119u: goto L_089F09BC;
    case 120u: goto L_089F09C4;
    case 121u: goto L_089F09CC;
    case 122u: goto L_089F09DC;
    case 123u: goto L_089F0A1C;
    case 124u: goto L_089F0A50;
    case 125u: goto L_089F0A60;
    case 126u: goto L_089F0A78;
    case 127u: goto L_089F0AA8;
    case 128u: goto L_089F0ABC;
    case 129u: goto L_089F0ADC;
    case 130u: goto L_089F0AE4;
    case 131u: goto L_089F0AEC;
    case 132u: goto L_089F0AF4;
    case 133u: goto L_089F0AFC;
    case 134u: goto L_089F0B04;
    case 135u: goto L_089F0B0C;
    case 136u: goto L_089F0B14;
    case 137u: goto L_089F0B1C;
    case 138u: goto L_089F0B20;
    case 139u: goto L_089F0B34;
    case 140u: goto L_089F0B48;
    case 141u: goto L_089F0B50;
    case 142u: goto L_089F0B64;
    case 143u: goto L_089F0B8C;
    case 144u: goto L_089F0B94;
    case 145u: goto L_089F0BB0;
    case 146u: goto L_089F0BD0;
    case 147u: goto L_089F0BDC;
    case 148u: goto L_089F0C14;
    case 149u: goto L_089F0C1C;
    case 150u: goto L_089F0C20;
    case 151u: goto L_089F0C38;
    case 152u: goto L_089F0C48;
    case 153u: goto L_089F0C54;
    case 154u: goto L_089F0C5C;
    case 155u: goto L_089F0C64;
    case 156u: goto L_089F0C74;
    case 157u: goto L_089F0C80;
    case 158u: goto L_089F0C88;
    case 159u: goto L_089F0C8C;
    case 160u: goto L_089F0CAC;
    case 161u: goto L_089F0CD8;
    case 162u: goto L_089F0CF0;
    case 163u: goto L_089F0D00;
    case 164u: goto L_089F0D10;
    case 165u: goto L_089F0D24;
    case 166u: goto L_089F0D2C;
    case 167u: goto L_089F0D34;
    case 168u: goto L_089F0D44;
    case 169u: goto L_089F0D50;
    case 170u: goto L_089F0D60;
    case 171u: goto L_089F0D68;
    case 172u: goto L_089F0D70;
    case 173u: goto L_089F0D78;
    case 174u: goto L_089F0D88;
    case 175u: goto L_089F0D90;
    case 176u: goto L_089F0D98;
    case 177u: goto L_089F0DE0;
    case 178u: goto L_089F0E00;
    case 179u: goto L_089F0E10;
    case 180u: goto L_089F0E4C;
    case 181u: goto L_089F0E78;
    case 182u: goto L_089F0E84;
    case 183u: goto L_089F0E94;
    case 184u: goto L_089F0EA8;
    case 185u: goto L_089F0EBC;
    case 186u: goto L_089F0ED0;
    case 187u: goto L_089F0EE4;
    case 188u: goto L_089F0EF8;
    case 189u: goto L_089F0F0C;
    case 190u: goto L_089F0F20;
    case 191u: goto L_089F0F34;
    case 192u: goto L_089F0F44;
    case 193u: goto L_089F0F5C;
    case 194u: goto L_089F0F68;
    case 195u: goto L_089F0F70;
    case 196u: goto L_089F0FAC;
    case 197u: goto L_089F0FC0;
    case 198u: goto L_089F100C;
    case 199u: goto L_089F101C;
    case 200u: goto L_089F1038;
    case 201u: goto L_089F1048;
    case 202u: goto L_089F1064;
    case 203u: goto L_089F1070;
    case 204u: goto L_089F1098;
    case 205u: goto L_089F10A0;
    case 206u: goto L_089F10AC;
    case 207u: goto L_089F10BC;
    case 208u: goto L_089F10E0;
    case 209u: goto L_089F10E8;
    case 210u: goto L_089F110C;
    case 211u: goto L_089F112C;
    case 212u: goto L_089F116C;
    case 213u: goto L_089F1174;
    case 214u: goto L_089F1180;
    case 215u: goto L_089F118C;
    case 216u: goto L_089F119C;
    case 217u: goto L_089F11B0;
    case 218u: goto L_089F11C4;
    case 219u: goto L_089F11D4;
    case 220u: goto L_089F11DC;
    case 221u: goto L_089F11EC;
    case 222u: goto L_089F11F0;
    case 223u: goto L_089F11FC;
    case 224u: goto L_089F1200;
    case 225u: goto L_089F1208;
    case 226u: goto L_089F1210;
    case 227u: goto L_089F1214;
    case 228u: goto L_089F1220;
    case 229u: goto L_089F122C;
    case 230u: goto L_089F123C;
    case 231u: goto L_089F124C;
    case 232u: goto L_089F1258;
    case 233u: goto L_089F1260;
    case 234u: goto L_089F1274;
    case 235u: goto L_089F1288;
    case 236u: goto L_089F1290;
    case 237u: goto L_089F129C;
    case 238u: goto L_089F12A8;
    case 239u: goto L_089F12B0;
    case 240u: goto L_089F12BC;
    case 241u: goto L_089F12C4;
    case 242u: goto L_089F12D0;
    case 243u: goto L_089F12D8;
    case 244u: goto L_089F12E4;
    case 245u: goto L_089F12F8;
    case 246u: goto L_089F1304;
    case 247u: goto L_089F1318;
    case 248u: goto L_089F132C;
    case 249u: goto L_089F1340;
    case 250u: goto L_089F1354;
    case 251u: goto L_089F135C;
    case 252u: goto L_089F139C;
    case 253u: goto L_089F13A8;
    case 254u: goto L_089F13B4;
    case 255u: goto L_089F13D4;
    case 256u: goto L_089F13D8;
    case 257u: goto L_089F13E8;
    case 258u: goto L_089F13F8;
    case 259u: goto L_089F1404;
    case 260u: goto L_089F1418;
    case 261u: goto L_089F1420;
    case 262u: goto L_089F1428;
    case 263u: goto L_089F1440;
    case 264u: goto L_089F1450;
    case 265u: goto L_089F1478;
    case 266u: goto L_089F14A4;
    case 267u: goto L_089F14B4;
    case 268u: goto L_089F14CC;
    case 269u: goto L_089F14D4;
    case 270u: goto L_089F14F8;
    case 271u: goto L_089F1508;
    case 272u: goto L_089F1524;
    case 273u: goto L_089F152C;
    case 274u: goto L_089F1550;
    case 275u: goto L_089F1560;
    case 276u: goto L_089F157C;
    case 277u: goto L_089F1584;
    case 278u: goto L_089F15A4;
    case 279u: goto L_089F15A8;
    case 280u: goto L_089F15C0;
    case 281u: goto L_089F15C8;
    case 282u: goto L_089F15EC;
    case 283u: goto L_089F1600;
    case 284u: goto L_089F1644;
    case 285u: goto L_089F1650;
    case 286u: goto L_089F165C;
    case 287u: goto L_089F1668;
    case 288u: goto L_089F166C;
    case 289u: goto L_089F1674;
    case 290u: goto L_089F1680;
    case 291u: goto L_089F168C;
    case 292u: goto L_089F1698;
    case 293u: goto L_089F169C;
    case 294u: goto L_089F16A0;
    case 295u: goto L_089F16B0;
    case 296u: goto L_089F1740;
    case 297u: goto L_089F175C;
    case 298u: goto L_089F1778;
    case 299u: goto L_089F1794;
    case 300u: goto L_089F1808;
    case 301u: goto L_089F1824;
    case 302u: goto L_089F1838;
    case 303u: goto L_089F1854;
    case 304u: goto L_089F1878;
    case 305u: goto L_089F188C;
    case 306u: goto L_089F1894;
    case 307u: goto L_089F18AC;
    case 308u: goto L_089F18B4;
    case 309u: goto L_089F18C0;
    case 310u: goto L_089F18D0;
    case 311u: goto L_089F18DC;
    case 312u: goto L_089F18EC;
    case 313u: goto L_089F190C;
    case 314u: goto L_089F1914;
    case 315u: goto L_089F1938;
    case 316u: goto L_089F1950;
    case 317u: goto L_089F1958;
    case 318u: goto L_089F1964;
    case 319u: goto L_089F197C;
    case 320u: goto L_089F19A8;
    case 321u: goto L_089F19D4;
    case 322u: goto L_089F19E4;
    case 323u: goto L_089F1A14;
    case 324u: goto L_089F1A18;
    case 325u: goto L_089F1A20;
    case 326u: goto L_089F1A28;
    case 327u: goto L_089F1A30;
    case 328u: goto L_089F1A48;
    case 329u: goto L_089F1A58;
    case 330u: goto L_089F1A70;
    case 331u: goto L_089F1AA0;
    case 332u: goto L_089F1B14;
    case 333u: goto L_089F1B38;
    case 334u: goto L_089F1B64;
    case 335u: goto L_089F1BD4;
    case 336u: goto L_089F1BF0;
    case 337u: goto L_089F1C00;
    case 338u: goto L_089F1C08;
    case 339u: goto L_089F1C10;
    case 340u: goto L_089F1C18;
    case 341u: goto L_089F1C30;
    case 342u: goto L_089F1C3C;
    case 343u: goto L_089F1C50;
    case 344u: goto L_089F1C74;
    case 345u: goto L_089F1CCC;
    case 346u: goto L_089F1D00;
    case 347u: goto L_089F1D1C;
    case 348u: goto L_089F1D2C;
    case 349u: goto L_089F1D34;
    case 350u: goto L_089F1D44;
    case 351u: goto L_089F1D54;
    case 352u: goto L_089F1D84;
    case 353u: goto L_089F1D8C;
    case 354u: goto L_089F1D94;
    case 355u: goto L_089F1DAC;
    case 356u: goto L_089F1DC0;
    case 357u: goto L_089F1DE4;
    case 358u: goto L_089F1E3C;
    case 359u: goto L_089F1E70;
    case 360u: goto L_089F1E8C;
    case 361u: goto L_089F1E9C;
    case 362u: goto L_089F1EA0;
    case 363u: goto L_089F1EC0;
    case 364u: goto L_089F1EEC;
    case 365u: goto L_089F1F70;
    case 366u: goto L_089F1FA4;
    case 367u: goto L_089F1FA8;
    case 368u: goto L_089F1FB0;
    case 369u: goto L_089F1FBC;
    case 370u: goto L_089F1FDC;
    case 371u: goto L_089F202C;
    case 372u: goto L_089F2060;
    case 373u: goto L_089F2074;
    case 374u: goto L_089F208C;
    case 375u: goto L_089F20CC;
    case 376u: goto L_089F20D8;
    case 377u: goto L_089F2104;
    case 378u: goto L_089F211C;
    case 379u: goto L_089F216C;
    case 380u: goto L_089F2190;
    case 381u: goto L_089F21A0;
    case 382u: goto L_089F21B8;
    case 383u: goto L_089F21BC;
    case 384u: goto L_089F21F4;
    case 385u: goto L_089F221C;
    case 386u: goto L_089F2358;
    case 387u: goto L_089F2360;
    case 388u: goto L_089F2384;
    case 389u: goto L_089F2398;
    case 390u: goto L_089F23AC;
    case 391u: goto L_089F23B4;
    case 392u: goto L_089F23E8;
    case 393u: goto L_089F23F8;
    case 394u: goto L_089F2404;
    case 395u: goto L_089F2454;
    case 396u: goto L_089F2460;
    case 397u: goto L_089F246C;
    case 398u: goto L_089F247C;
    case 399u: goto L_089F2488;
    case 400u: goto L_089F2494;
    case 401u: goto L_089F2568;
    case 402u: goto L_089F2580;
    case 403u: goto L_089F2590;
    case 404u: goto L_089F25CC;
    case 405u: goto L_089F25F8;
    case 406u: goto L_089F2624;
    case 407u: goto L_089F264C;
    case 408u: goto L_089F26AC;
    case 409u: goto L_089F26B4;
    case 410u: goto L_089F26F0;
    case 411u: goto L_089F2750;
    case 412u: goto L_089F27DC;
    case 413u: goto L_089F27E4;
    case 414u: goto L_089F27F0;
    case 415u: goto L_089F27FC;
    case 416u: goto L_089F2804;
    case 417u: goto L_089F280C;
    case 418u: goto L_089F2814;
    case 419u: goto L_089F281C;
    case 420u: goto L_089F2830;
    case 421u: goto L_089F2880;
    case 422u: goto L_089F288C;
    case 423u: goto L_089F28A0;
    case 424u: goto L_089F28C4;
    case 425u: goto L_089F28D0;
    case 426u: goto L_089F28E4;
    case 427u: goto L_089F2908;
    case 428u: goto L_089F2914;
    case 429u: goto L_089F2928;
    case 430u: goto L_089F294C;
    case 431u: goto L_089F2958;
    case 432u: goto L_089F296C;
    case 433u: goto L_089F2994;
    case 434u: goto L_089F29B4;
    case 435u: goto L_089F29C8;
    case 436u: goto L_089F29E0;
    case 437u: goto L_089F29EC;
    case 438u: goto L_089F29F4;
    case 439u: goto L_089F2A04;
    case 440u: goto L_089F2A10;
    case 441u: goto L_089F2A18;
    case 442u: goto L_089F2A28;
    case 443u: goto L_089F2A38;
    case 444u: goto L_089F2A3C;
    case 445u: goto L_089F2A4C;
    case 446u: goto L_089F2A94;
    case 447u: goto L_089F2A9C;
    case 448u: goto L_089F2AE0;
    case 449u: goto L_089F2AE8;
    case 450u: goto L_089F2AF8;
    case 451u: goto L_089F2AFC;
    case 452u: goto L_089F2B28;
    case 453u: goto L_089F2B34;
    case 454u: goto L_089F2B3C;
    case 455u: goto L_089F2B44;
    case 456u: goto L_089F2B48;
    case 457u: goto L_089F2B50;
    case 458u: goto L_089F2B64;
    case 459u: goto L_089F2B7C;
    case 460u: goto L_089F2B80;
    case 461u: goto L_089F2B90;
    case 462u: goto L_089F2BA4;
    case 463u: goto L_089F2BB0;
    case 464u: goto L_089F2BBC;
    case 465u: goto L_089F2C80;
    case 466u: goto L_089F2C8C;
    case 467u: goto L_089F2CAC;
    case 468u: goto L_089F2CB8;
    case 469u: goto L_089F2CC4;
    case 470u: goto L_089F2CD0;
    case 471u: goto L_089F2CDC;
    case 472u: goto L_089F2D88;
    case 473u: goto L_089F2D94;
    case 474u: goto L_089F2DA4;
    case 475u: goto L_089F2DC8;
    case 476u: goto L_089F2DEC;
    case 477u: goto L_089F2DF8;
    case 478u: goto L_089F2E00;
    case 479u: goto L_089F2E08;
    case 480u: goto L_089F2E10;
    case 481u: goto L_089F2E18;
    case 482u: goto L_089F2E20;
    case 483u: goto L_089F2E38;
    case 484u: goto L_089F2E50;
    case 485u: goto L_089F2E58;
    case 486u: goto L_089F2E60;
    case 487u: goto L_089F2E6C;
    case 488u: goto L_089F2E74;
    case 489u: goto L_089F2EA4;
    case 490u: goto L_089F2ED4;
    case 491u: goto L_089F2EE4;
    case 492u: goto L_089F2EEC;
    case 493u: goto L_089F2F04;
    case 494u: goto L_089F2F0C;
    case 495u: goto L_089F2F1C;
    case 496u: goto L_089F2F24;
    case 497u: goto L_089F2F2C;
    case 498u: goto L_089F2F40;
    case 499u: goto L_089F2F88;
    case 500u: goto L_089F2F94;
    case 501u: goto L_089F2F9C;
    case 502u: goto L_089F2FB0;
    case 503u: goto L_089F2FBC;
    case 504u: goto L_089F2FC8;
    case 505u: goto L_089F2FE0;
    case 506u: goto L_089F2FEC;
    case 507u: goto L_089F2FF4;
    case 508u: goto L_089F3000;
    case 509u: goto L_089F3024;
    case 510u: goto L_089F3044;
    case 511u: goto L_089F3048;
    case 512u: goto L_089F3054;
    case 513u: goto L_089F3060;
    case 514u: goto L_089F30BC;
    case 515u: goto L_089F30C0;
    case 516u: goto L_089F30D4;
    case 517u: goto L_089F30D8;
    case 518u: goto L_089F30EC;
    case 519u: goto L_089F30F0;
    case 520u: goto L_089F3104;
    case 521u: goto L_089F3108;
    case 522u: goto L_089F3110;
    case 523u: goto L_089F311C;
    case 524u: goto L_089F314C;
    case 525u: goto L_089F3158;
    case 526u: goto L_089F3168;
    case 527u: goto L_089F3170;
    case 528u: goto L_089F3188;
    case 529u: goto L_089F3194;
    case 530u: goto L_089F31A0;
    case 531u: goto L_089F31EC;
    case 532u: goto L_089F31F4;
    case 533u: goto L_089F320C;
    case 534u: goto L_089F3240;
    case 535u: goto L_089F326C;
    case 536u: goto L_089F3274;
    case 537u: goto L_089F327C;
    case 538u: goto L_089F3288;
    case 539u: goto L_089F32B4;
    case 540u: goto L_089F32C4;
    case 541u: goto L_089F32CC;
    case 542u: goto L_089F32F8;
    case 543u: goto L_089F330C;
    case 544u: goto L_089F334C;
    case 545u: goto L_089F3368;
    case 546u: goto L_089F3374;
    case 547u: goto L_089F3390;
    case 548u: goto L_089F339C;
    case 549u: goto L_089F33B8;
    case 550u: goto L_089F33C4;
    case 551u: goto L_089F33E0;
    case 552u: goto L_089F33EC;
    case 553u: goto L_089F33F0;
    case 554u: goto L_089F3404;
    case 555u: goto L_089F340C;
    case 556u: goto L_089F3424;
    case 557u: goto L_089F3434;
    case 558u: goto L_089F344C;
    case 559u: goto L_089F347C;
    case 560u: goto L_089F348C;
    case 561u: goto L_089F349C;
    case 562u: goto L_089F34A8;
    case 563u: goto L_089F34AC;
    case 564u: goto L_089F34E0;
    case 565u: goto L_089F34E8;
    case 566u: goto L_089F3530;
    case 567u: goto L_089F3560;
    case 568u: goto L_089F356C;
    case 569u: goto L_089F3574;
    case 570u: goto L_089F357C;
    case 571u: goto L_089F3594;
    case 572u: goto L_089F35B8;
    case 573u: goto L_089F35C8;
    case 574u: goto L_089F35D4;
    case 575u: goto L_089F363C;
    case 576u: goto L_089F3648;
    case 577u: goto L_089F3650;
    case 578u: goto L_089F36B0;
    case 579u: goto L_089F3718;
    case 580u: goto L_089F3728;
    case 581u: goto L_089F3730;
    case 582u: goto L_089F3738;
    case 583u: goto L_089F3750;
    case 584u: goto L_089F3758;
    case 585u: goto L_089F377C;
    case 586u: goto L_089F3790;
    case 587u: goto L_089F37B4;
    case 588u: goto L_089F37C4;
    case 589u: goto L_089F37D4;
    case 590u: goto L_089F37E0;
    case 591u: goto L_089F37F0;
    case 592u: goto L_089F37F8;
    case 593u: goto L_089F380C;
    case 594u: goto L_089F3818;
    case 595u: goto L_089F382C;
    case 596u: goto L_089F3834;
    case 597u: goto L_089F3850;
    case 598u: goto L_089F385C;
    case 599u: goto L_089F386C;
    case 600u: goto L_089F387C;
    case 601u: goto L_089F388C;
    case 602u: goto L_089F3898;
    case 603u: goto L_089F38AC;
    case 604u: goto L_089F38B8;
    case 605u: goto L_089F38CC;
    case 606u: goto L_089F38D4;
    case 607u: goto L_089F38DC;
    case 608u: goto L_089F3910;
    case 609u: goto L_089F3944;
    case 610u: goto L_089F3970;
    case 611u: goto L_089F3978;
    case 612u: goto L_089F3998;
    case 613u: goto L_089F39A4;
    case 614u: goto L_089F39D4;
    case 615u: goto L_089F39EC;
    case 616u: goto L_089F3A50;
    case 617u: goto L_089F3A58;
    case 618u: goto L_089F3A68;
    case 619u: goto L_089F3A6C;
    case 620u: goto L_089F3AA8;
    case 621u: goto L_089F3AB4;
    case 622u: goto L_089F3AF8;
    case 623u: goto L_089F3B00;
    case 624u: goto L_089F3B10;
    case 625u: goto L_089F3B14;
    case 626u: goto L_089F3B50;
    case 627u: goto L_089F3B5C;
    case 628u: goto L_089F3B64;
    case 629u: goto L_089F3B94;
    case 630u: goto L_089F3BB0;
    case 631u: goto L_089F3BF8;
    case 632u: goto L_089F3C08;
    case 633u: goto L_089F3C20;
    case 634u: goto L_089F3C54;
    case 635u: goto L_089F3C6C;
    case 636u: goto L_089F3C7C;
    case 637u: goto L_089F3C98;
    case 638u: goto L_089F3CA8;
    case 639u: goto L_089F3CAC;
    case 640u: goto L_089F3CBC;
    case 641u: goto L_089F3CCC;
    case 642u: goto L_089F3CE8;
    case 643u: goto L_089F3CF8;
    case 644u: goto L_089F3D10;
    case 645u: goto L_089F3D2C;
    case 646u: goto L_089F3D80;
    case 647u: goto L_089F3DAC;
    case 648u: goto L_089F3DBC;
    case 649u: goto L_089F3DDC;
    case 650u: goto L_089F3DEC;
    case 651u: goto L_089F3E08;
    case 652u: goto L_089F3E44;
    case 653u: goto L_089F3E54;
    case 654u: goto L_089F3E6C;
    case 655u: goto L_089F3EA0;
    case 656u: goto L_089F3EBC;
    case 657u: goto L_089F3EDC;
    case 658u: goto L_089F3F38;
    case 659u: goto L_089F3F54;
    case 660u: goto L_089F3F90;
    case 661u: goto L_089F3FC0;
    case 662u: goto L_089F3FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F0000:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089F0010u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0010u) goto L_089F0010;
    return;
L_089F0010:
    hot_regs.g31 = (0x089F0018u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0018u) goto L_089F0018;
    return;
L_089F0018:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F015C;
      }
      goto L_089F0020;
    }
L_089F0020:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(656)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(612), ctx.gpr[21]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(90));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F015C;
      }
      goto L_089F003C;
    }
}
L_089F003C:
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (0u | 28u);
    hot_regs.g31 = (0x089F0050u);
    hot_regs.g6 = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0050u) goto L_089F0050;
    return;
L_089F0050:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(612)));
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(608), g4);
    g4 = (15820u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[18] = (0u | 0u);
    g4 = (15564u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(528));
    g4 = (16256u << 16u);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(480));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g30 = (g30 + static_cast<std::uint32_t>(320));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(496));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(464));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(512));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(400));
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
    goto L_089F00A0;
}
L_089F00A0:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(616), ctx.gpr[17]);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F00C0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 220u, 0x089ED8FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F00C0u) goto L_089F00C0;
    return;
L_089F00C0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x089F010Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 46u, 0x08A4842Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F010Cu) goto L_089F010C;
    return;
L_089F010C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089F0128u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0128u) goto L_089F0128;
    return;
L_089F0128:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(608)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (0u | 55u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089F0140u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0140u) goto L_089F0140;
    return;
L_089F0140:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(656), g4);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g17 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(616)));
    g4 = (static_cast<std::int32_t>(g18) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089F00A0;
      }
      goto L_089F015C;
    }
}
L_089F015C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(620)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(624)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(628)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(632)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(636)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(640)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(644)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(648)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(652)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(656)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(660)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(664)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(668)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(672)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F019C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(248), hot_regs.g31);
    hot_regs.g31 = (0x089F01E4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F01E4u) goto L_089F01E4;
    return;
L_089F01E4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (49353u << 16u);
    g6 = (g6 | 4059u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    ctx.fpr[28] = std::bit_cast<float>(g6);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (16585u << 16u);
    g6 = (g6 | 4059u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(g6);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F0224;
      }
      goto L_089F0214;
    }
}
L_089F0214:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089F0224;
}
L_089F0224:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), 0u);
    g4 = (g4 & ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2053)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F02EC;
      }
      goto L_089F0240;
    }
}
L_089F0240:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2040)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F02EC;
      }
      goto L_089F0258;
    }
L_089F0258:
    hot_regs.g4 = (0u | 19u);
    hot_regs.g31 = (0x089F0264u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 248u, 0x08941B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0264u) goto L_089F0264;
    return;
L_089F0264:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F02EC;
      }
      goto L_089F026C;
    }
L_089F026C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (16480u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (48793u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2032)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2036)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (16800u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2040)));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x089F02ECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 301u, 0x089EDFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F02ECu) goto L_089F02EC;
    return;
L_089F02EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F03D8;
      }
      goto L_089F02FC;
    }
}
L_089F02FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 0u);
    g4 = (16192u << 16u);
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[21] = (512u << 16u);
    ctx.gpr[22] = (2u << 16u);
    hot_regs.g4 = g4;
    goto L_089F0324;
}
L_089F0324:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1672)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1688)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1520)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[23] | 0u);
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    ctx.fpr[24] = hot_regs.f14 - hot_regs.f12;
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    ctx.fpr[24] = ctx.fpr[24] / hot_regs.f12;
    hot_regs.g31 = (0x089F0358u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 384u, 0x08AA1844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0358u) goto L_089F0358;
    return;
L_089F0358:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f20));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.fpu_condition();
    f12 = f12 + hot_regs.f13;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F037C;
      }
      goto L_089F0370;
    }
}
L_089F0370:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1672)));
    { const float fs = ctx.fpr[24]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - f13;
    hot_regs.f13 = f13;
    goto L_089F037C;
}
L_089F037C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1620)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F03B0;
      }
      goto L_089F0390;
    }
L_089F0390:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & ctx.gpr[21]);
    if (g4 == 0u) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1620)));
    hot_regs.g4 = g4;
        goto L_089F03B8;
    }
    goto L_089F03A0;
}
L_089F03A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    g4 = (g4 & ctx.gpr[22]);
    if (g4 == 0u) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1620)));
    hot_regs.g4 = g4;
        goto L_089F03B8;
    }
    goto L_089F03B0;
}
L_089F03B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089F03C8;
      }
      goto L_089F03B8;
    }
L_089F03B8:
{
    float f12 = hot_regs.f12;
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1620), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089F03C8;
}
L_089F03C8:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089F0324;
      }
      goto L_089F03D8;
    }
}
L_089F03D8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-972));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F04EC;
      }
      goto L_089F03E8;
    }
L_089F03E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (15692u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F04EC;
      }
      goto L_089F03F8;
    }
}
L_089F03F8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F04EC;
      }
      goto L_089F0414;
    }
}
L_089F0414:
    hot_regs.g4 = (16672u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089F0424u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0424u) goto L_089F0424;
    return;
L_089F0424:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089F0438u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0438u) goto L_089F0438;
    return;
L_089F0438:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    hot_regs.g31 = (0x089F045Cu);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F045Cu) goto L_089F045C;
    return;
L_089F045C:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9916)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9920)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089F0470u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0470u) goto L_089F0470;
    return;
L_089F0470:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089F0484u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0484u) goto L_089F0484;
    return;
L_089F0484:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x089F0490u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0490u) goto L_089F0490;
    return;
L_089F0490:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x089F049Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F049Cu) goto L_089F049C;
    return;
L_089F049C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (16512u << 16u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    g4 = (16768u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    g4 = (16384u << 16u);
    f14 = hot_regs.f15 - f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 <= f14));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_089F04D4;
    }
    goto L_089F04D4;
}
}
L_089F04D4:
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089F04ECu);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 371u, 0x08B09D30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F04ECu) goto L_089F04EC;
    return;
L_089F04EC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-995));
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F054C;
    }
    goto L_089F04FC;
L_089F04FC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 263u);
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F054C;
    }
    goto L_089F050C;
L_089F050C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-964));
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F054C;
    }
    goto L_089F051C;
L_089F051C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 260u);
    if (hot_regs.g4 == hot_regs.g5) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F054C;
    }
    goto L_089F052C;
L_089F052C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (0u | 261u);
    if (hot_regs.g5 == hot_regs.g4) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F054C;
    }
    goto L_089F053C;
L_089F053C:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    if (hot_regs.g5 != hot_regs.g4) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
        goto L_089F056C;
    }
    goto L_089F0548;
L_089F0548:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1640)));
    goto L_089F054C;
L_089F054C:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9928)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f15 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F0580;
      }
      goto L_089F056C;
    }
}
L_089F056C:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089F0580;
}
L_089F0580:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F05B0;
      }
      goto L_089F0594;
    }
L_089F0594:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    goto L_089F0598;
L_089F0598:
{
    float f12 = hot_regs.f12;
    f12 = f12 + ctx.fpr[30];
    ctx.set_fpu_condition((f12 < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F0598;
      }
      goto L_089F05AC;
    }
}
L_089F05AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1944), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089F05B0;
L_089F05B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-978));
    { const bool branch_taken = g4 != hot_regs.g5;
    g4 = (16403u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F05E8;
      }
      goto L_089F05C0;
    }
}
L_089F05C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1640)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1948)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f15 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F060C;
      }
      goto L_089F05E8;
    }
}
}
L_089F05E8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1640)));
    g4 = (g4 | 13107u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1948)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089F060C;
}
}
L_089F060C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1948)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F063C;
      }
      goto L_089F0620;
    }
L_089F0620:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1948)));
    goto L_089F0624;
L_089F0624:
{
    float f12 = hot_regs.f12;
    f12 = f12 - ctx.fpr[30];
    ctx.set_fpu_condition((f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F0624;
      }
      goto L_089F0638;
    }
}
L_089F0638:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1948), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089F063C;
L_089F063C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F06C0;
      }
      goto L_089F0648;
    }
L_089F0648:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F0674;
      }
      goto L_089F065C;
    }
}
L_089F065C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0678;
      }
      goto L_089F066C;
    }
}
L_089F066C:
    hot_regs.g31 = (0x089F0674u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0674u) goto L_089F0674;
    return;
L_089F0674:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089F0678;
L_089F0678:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089F0690u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0690u) goto L_089F0690;
    return;
L_089F0690:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    hot_regs.g31 = (0x089F06A4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F06A4u) goto L_089F06A4;
    return;
L_089F06A4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x089F06B8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F06B8u) goto L_089F06B8;
    return;
L_089F06B8:
    hot_regs.g31 = (0x089F06C0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F06C0u) goto L_089F06C0;
    return;
L_089F06C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0744;
      }
      goto L_089F06CC;
    }
L_089F06CC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F06F8;
      }
      goto L_089F06E0;
    }
}
L_089F06E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F06FC;
      }
      goto L_089F06F0;
    }
}
L_089F06F0:
    hot_regs.g31 = (0x089F06F8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F06F8u) goto L_089F06F8;
    return;
L_089F06F8:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089F06FC;
L_089F06FC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089F0714u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0714u) goto L_089F0714;
    return;
L_089F0714:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1944)));
    hot_regs.g31 = (0x089F0728u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0728u) goto L_089F0728;
    return;
L_089F0728:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x089F073Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F073Cu) goto L_089F073C;
    return;
L_089F073C:
    hot_regs.g31 = (0x089F0744u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0744u) goto L_089F0744;
    return;
L_089F0744:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F07C8;
      }
      goto L_089F0750;
    }
L_089F0750:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F077C;
      }
      goto L_089F0764;
    }
}
L_089F0764:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0780;
      }
      goto L_089F0774;
    }
}
L_089F0774:
    hot_regs.g31 = (0x089F077Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F077Cu) goto L_089F077C;
    return;
L_089F077C:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089F0780;
L_089F0780:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089F0798u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0798u) goto L_089F0798;
    return;
L_089F0798:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1948)));
    hot_regs.g31 = (0x089F07ACu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F07ACu) goto L_089F07AC;
    return;
L_089F07AC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x089F07C0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F07C0u) goto L_089F07C0;
    return;
L_089F07C0:
    hot_regs.g31 = (0x089F07C8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F07C8u) goto L_089F07C8;
    return;
L_089F07C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F084C;
      }
      goto L_089F07D4;
    }
L_089F07D4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F0800;
      }
      goto L_089F07E8;
    }
}
L_089F07E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0804;
      }
      goto L_089F07F8;
    }
}
L_089F07F8:
    hot_regs.g31 = (0x089F0800u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0800u) goto L_089F0800;
    return;
L_089F0800:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_089F0804;
L_089F0804:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089F081Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F081Cu) goto L_089F081C;
    return;
L_089F081C:
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1948)));
    hot_regs.g31 = (0x089F0830u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0830u) goto L_089F0830;
    return;
L_089F0830:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x089F0844u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0844u) goto L_089F0844;
    return;
L_089F0844:
    hot_regs.g31 = (0x089F084Cu);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F084Cu) goto L_089F084C;
    return;
L_089F084C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F08E0;
      }
      goto L_089F0858;
    }
L_089F0858:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(80));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F0884;
      }
      goto L_089F086C;
    }
}
L_089F086C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0888;
      }
      goto L_089F087C;
    }
}
L_089F087C:
    hot_regs.g31 = (0x089F0884u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0884u) goto L_089F0884;
    return;
L_089F0884:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_089F0888;
L_089F0888:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x089F08A0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08A0u) goto L_089F08A0;
    return;
L_089F08A0:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    hot_regs.g4 = (16050u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 47299u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x089F08C4u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 921u, 0x0885FA00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08C4u) goto L_089F08C4;
    return;
L_089F08C4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x089F08D8u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08D8u) goto L_089F08D8;
    return;
L_089F08D8:
    hot_regs.g31 = (0x089F08E0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08E0u) goto L_089F08E0;
    return;
L_089F08E0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F08ECu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08ECu) goto L_089F08EC;
    return;
L_089F08EC:
    hot_regs.g31 = (0x089F08F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 130u, 0x0884477Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F08F4u) goto L_089F08F4;
    return;
L_089F08F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0918;
      }
      goto L_089F0904;
    }
}
L_089F0904:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0918;
      }
      goto L_089F0910;
    }
L_089F0910:
    hot_regs.g31 = (0x089F0918u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0918u) goto L_089F0918;
    return;
L_089F0918:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F095C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(440)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F0B14;
      }
      goto L_089F0984;
    }
}
L_089F0984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1969)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0B0C;
      }
      goto L_089F09A4;
    }
}
L_089F09A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0B04;
      }
      goto L_089F09B4;
    }
}
L_089F09B4:
    hot_regs.g31 = (0x089F09BCu);
    hot_regs.g4 = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F09BCu) goto L_089F09BC;
    return;
L_089F09BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0AFC;
      }
      goto L_089F09C4;
    }
L_089F09C4:
    hot_regs.g31 = (0x089F09CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F09CCu) goto L_089F09CC;
    return;
L_089F09CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 127u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0AF4;
      }
      goto L_089F09DC;
    }
}
L_089F09DC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F0AEC;
      }
      goto L_089F0A1C;
    }
L_089F0A1C:
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089F0AE4;
      }
      goto L_089F0A50;
    }
L_089F0A50:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F0A60u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0A60u) goto L_089F0A60;
    return;
L_089F0A60:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1969)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F0A78u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 271u, 0x089EDDB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0A78u) goto L_089F0A78;
    return;
L_089F0A78:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F0AA8u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0AA8u) goto L_089F0AA8;
    return;
L_089F0AA8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x089F0ABCu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0ABCu) goto L_089F0ABC;
    return;
L_089F0ABC:
{
    float f12 = hot_regs.f12;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f12 = f12 - hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_089F0B1C;
    }
    goto L_089F0ADC;
}
L_089F0ADC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (16416u << 16u);
      if (branch_taken) {
          goto L_089F0B20;
      }
      goto L_089F0AE4;
    }
L_089F0AE4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0AEC;
    }
L_089F0AEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0AF4;
    }
L_089F0AF4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0AFC;
    }
L_089F0AFC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0B04;
    }
L_089F0B04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0B0C;
    }
L_089F0B0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0B14;
    }
L_089F0B14:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0B1C;
    }
L_089F0B1C:
    hot_regs.g4 = (16416u << 16u);
    goto L_089F0B20;
L_089F0B20:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F0C64;
      }
      goto L_089F0B34;
    }
L_089F0B34:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x089F0B48u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 138u, 0x08AF8918u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0B48u) goto L_089F0B48;
    return;
L_089F0B48:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0B64;
      }
      goto L_089F0B50;
    }
L_089F0B50:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F0C64;
      }
      goto L_089F0B64;
    }
L_089F0B64:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1969)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089F0B8Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 828u, 0x0893FA88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0B8Cu) goto L_089F0B8C;
    return;
L_089F0B8C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0C64;
      }
      goto L_089F0B94;
    }
L_089F0B94:
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (0u | 6u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089F0BB0u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0BB0u) goto L_089F0BB0;
    return;
L_089F0BB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 512u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(2316), ctx.gpr[16]);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089F0BDC;
      }
      goto L_089F0BD0;
    }
}
L_089F0BD0:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(2316));
    hot_regs.g31 = (0x089F0BDCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0BDCu) goto L_089F0BDC;
    return;
L_089F0BDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1969)));
    g4 = (g16 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2320), g4);
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1969)));
    hot_regs.g5 = (0u | 255u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1969), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1969)));
    g4 = (g16 + g4);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(1970), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_089F0C20;
    }
    goto L_089F0C14;
}
L_089F0C14:
    hot_regs.g31 = (0x089F0C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0C1Cu) goto L_089F0C1C;
    return;
L_089F0C1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_089F0C20;
L_089F0C20:
    ctx.gpr[8] = (16512u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089F0C38u);
    hot_regs.g7 = (0u | 167u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0C38u) goto L_089F0C38;
    return;
L_089F0C38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0C5C;
      }
      goto L_089F0C48;
    }
}
L_089F0C48:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0C5C;
      }
      goto L_089F0C54;
    }
L_089F0C54:
    hot_regs.g31 = (0x089F0C5Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0C5Cu) goto L_089F0C5C;
    return;
L_089F0C5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089F0C8C;
      }
      goto L_089F0C64;
    }
L_089F0C64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0C88;
      }
      goto L_089F0C74;
    }
}
L_089F0C74:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0C88;
      }
      goto L_089F0C80;
    }
L_089F0C80:
    hot_regs.g31 = (0x089F0C88u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0C88u) goto L_089F0C88;
    return;
L_089F0C88:
    hot_regs.g2 = (0u | 0u);
    goto L_089F0C8C;
L_089F0C8C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F0CAC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F0D00;
      }
      goto L_089F0CD8;
    }
}
L_089F0CD8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0D00;
      }
      goto L_089F0CF0;
    }
}
L_089F0CF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089F0D00;
}
L_089F0D00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0D2C;
      }
      goto L_089F0D10;
    }
}
L_089F0D10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-972));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F0D60;
      }
      goto L_089F0D24;
    }
}
L_089F0D24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0D34;
      }
      goto L_089F0D2C;
    }
L_089F0D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F110C;
      }
      goto L_089F0D34;
    }
L_089F0D34:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 28u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F0D60;
      }
      goto L_089F0D44;
    }
L_089F0D44:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F0D60;
      }
      goto L_089F0D50;
    }
L_089F0D50:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F0D78;
      }
      goto L_089F0D60;
    }
L_089F0D60:
    hot_regs.g31 = (0x089F0D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0D68u) goto L_089F0D68;
    return;
L_089F0D68:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089F0D98;
      }
      goto L_089F0D70;
    }
L_089F0D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0D88;
      }
      goto L_089F0D78;
    }
L_089F0D78:
    hot_regs.g4 = (0u | 28u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_089F110C;
      }
      goto L_089F0D88;
    }
L_089F0D88:
    hot_regs.g31 = (0x089F0D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0D90u) goto L_089F0D90;
    return;
L_089F0D90:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089F0E00;
      }
      goto L_089F0D98;
    }
L_089F0D98:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g6 = (hot_regs.g4 << 8u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(320)));
    hot_regs.g6 = (16672u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(316)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(316), hot_regs.g5);
    hot_regs.g31 = (0x089F0DE0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0DE0u) goto L_089F0DE0;
    return;
L_089F0DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 & 65535u);
    g5 = (0u | 6000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(g5); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7904)));
    g5 = (ctx.hi);
    g4 = (g5 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7904), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F0E00;
}
L_089F0E00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_089F0E4C;
    }
    goto L_089F0E10;
}
L_089F0E10:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    g5 = (65528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    g5 = (0u + static_cast<std::uint32_t>(-513));
    g4 = (g4 & g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(72), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(f20));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F0E4C;
}
}
L_089F0E4C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g5 = (32u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(944));
    hot_regs.g31 = (0x089F0E78u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(660), hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 420u, 0x08B0DB74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0E78u) goto L_089F0E78;
    return;
L_089F0E78:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F0F70;
      }
      goto L_089F0E84;
    }
L_089F0E84:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F0F70;
      }
      goto L_089F0E94;
    }
L_089F0E94:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 12u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x089F0EA8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0EA8u) goto L_089F0EA8;
    return;
L_089F0EA8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 13u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x089F0EBCu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 310u, 0x088316CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0EBCu) goto L_089F0EBC;
    return;
L_089F0EBC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 18u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089F0ED0u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0ED0u) goto L_089F0ED0;
    return;
L_089F0ED0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 19u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x089F0EE4u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0EE4u) goto L_089F0EE4;
    return;
L_089F0EE4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 10u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x089F0EF8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0EF8u) goto L_089F0EF8;
    return;
L_089F0EF8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x089F0F0Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0F0Cu) goto L_089F0F0C;
    return;
L_089F0F0C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 11u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x089F0F20u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0F20u) goto L_089F0F20;
    return;
L_089F0F20:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x089F0F34u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 341u, 0x088318B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0F34u) goto L_089F0F34;
    return;
L_089F0F34:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 5u);
    hot_regs.g31 = (0x089F0F44u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 275u, 0x08845928u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0F44u) goto L_089F0F44;
    return;
L_089F0F44:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g5 = (2179u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1284)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089F0F5Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(992));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 626u, 0x08972E68u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0F5Cu) goto L_089F0F5C;
    return;
L_089F0F5C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0F70;
      }
      goto L_089F0F68;
    }
L_089F0F68:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_089F0F70;
L_089F0F70:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(666), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1653))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-8));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x089F0FACu);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 572u, 0x08A1BC64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0FACu) goto L_089F0FAC;
    return;
L_089F0FAC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F0FC0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 877u, 0x08AFFAC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F0FC0u) goto L_089F0FC0;
    return;
L_089F0FC0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(706))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-4));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(706), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(618))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-33));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F100Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 604u, 0x08832988u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F100Cu) goto L_089F100C;
    return;
L_089F100C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1038;
      }
      goto L_089F101C;
    }
}
L_089F101C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5452)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5452), g4);
    hot_regs.g4 = g4;
    goto L_089F1038;
}
L_089F1038:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1064;
      }
      goto L_089F1048;
    }
}
L_089F1048:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5456)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5456), g4);
    hot_regs.g4 = g4;
    goto L_089F1064;
}
L_089F1064:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F1070u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1070u) goto L_089F1070;
    return;
L_089F1070:
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x089F1098u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 167u, 0x089D1074u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1098u) goto L_089F1098;
    return;
L_089F1098:
    hot_regs.g31 = (0x089F10A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 544u, 0x08A362BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F10A0u) goto L_089F10A0;
    return;
L_089F10A0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089F10BC;
      }
      goto L_089F10AC;
    }
L_089F10AC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-971));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F10E8;
      }
      goto L_089F10BC;
    }
L_089F10BC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x089F10E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F10E0u) goto L_089F10E0;
    return;
L_089F10E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F110C;
      }
      goto L_089F10E8;
    }
L_089F10E8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 6u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    hot_regs.g31 = (0x089F110Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 287u, 0x089E974Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F110Cu) goto L_089F110C;
    return;
L_089F110C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F112C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[18] = (0u | 261u);
    ctx.gpr[20] = (0u & 255u);
    ctx.gpr[21] = (0u | 30u);
    ctx.gpr[19] = (32u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x089F116Cu);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7612), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F116Cu) goto L_089F116C;
    return;
L_089F116C:
    hot_regs.g31 = (0x089F1174u);
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 1u, 0x08AB4000u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1174u) goto L_089F1174;
    return;
L_089F1174:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[28] | 0u);
    goto L_089F1180;
L_089F1180:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F11C4;
      }
      goto L_089F118C;
    }
L_089F118C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g6 != ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F11C4;
      }
      goto L_089F119C;
    }
}
L_089F119C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(72)));
    g6 = (g6 & ctx.gpr[19]);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F11C4;
      }
      goto L_089F11B0;
    }
}
L_089F11B0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(617))))));
    g6 = (g6 & 4u);
    { const bool branch_taken = g6 != 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F11C4;
      }
      goto L_089F11C4;
    }
}
L_089F11C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1180;
      }
      goto L_089F11D4;
    }
}
L_089F11D4:
    hot_regs.g31 = (0x089F11DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F11DCu) goto L_089F11DC;
    return;
L_089F11DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    g4 = (hot_regs.g2 | g4);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F11F0;
      }
      goto L_089F11EC;
    }
}
L_089F11EC:
    ctx.gpr[17] = (0u | 0u);
    goto L_089F11F0;
L_089F11F0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-9980)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1200;
      }
      goto L_089F11FC;
    }
L_089F11FC:
    ctx.gpr[17] = (0u | 0u);
    goto L_089F1200;
L_089F1200:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1210;
      }
      goto L_089F1208;
    }
L_089F1208:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1214;
      }
      goto L_089F1210;
    }
L_089F1210:
    ctx.gpr[17] = (0u | 0u);
    goto L_089F1214;
L_089F1214:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (0u | 260u);
    hot_regs.g5 = (ctx.gpr[28] | 0u);
    goto L_089F1220;
L_089F1220:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F123C;
      }
      goto L_089F122C;
    }
L_089F122C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = g7 != hot_regs.g6;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089F123C;
      }
      goto L_089F123C;
    }
}
L_089F123C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1220;
      }
      goto L_089F124C;
    }
}
L_089F124C:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089F1258u);
    hot_regs.g4 = (0u | 261u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1258u) goto L_089F1258;
    return;
L_089F1258:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F1260;
    }
L_089F1260:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9704)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F1274;
    }
}
L_089F1274:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    g4 = (g4 + static_cast<std::uint32_t>(15000));
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9704), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F1288;
    }
}
L_089F1288:
    hot_regs.g31 = (0x089F1290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1290u) goto L_089F1290;
    return;
L_089F1290:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089F129Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    goto L_089F1600;
L_089F129C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_089F12C4;
      }
      goto L_089F12A8;
    }
L_089F12A8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9688), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F12B0;
    }
L_089F12B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9688)));
    hot_regs.g31 = (0x089F12BCu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9688));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F12BCu) goto L_089F12BC;
    return;
L_089F12BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F12C4;
    }
L_089F12C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9692)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F12D0;
    }
L_089F12D0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9692), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089F12E4;
      }
      goto L_089F12D8;
    }
L_089F12D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9692)));
    hot_regs.g31 = (0x089F12E4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(9692));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F12E4u) goto L_089F12E4;
    return;
L_089F12E4:
    hot_regs.g4 = (17194u << 16u);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[28] | 0u);
    goto L_089F12F8;
L_089F12F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F13D8;
      }
      goto L_089F1304;
    }
L_089F1304:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[19]);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F132C;
      }
      goto L_089F1318;
    }
}
L_089F1318:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(617))))));
    g4 = (g4 & 4u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1340;
      }
      goto L_089F132C;
    }
}
L_089F132C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    g4 = (g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(9688), 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F13D8;
      }
      goto L_089F1340;
    }
}
L_089F1340:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    g4 = (g4 + static_cast<std::uint32_t>(384));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = g4 != ctx.gpr[21];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F13D8;
      }
      goto L_089F1354;
    }
}
L_089F1354:
    hot_regs.g31 = (0x089F135Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F135Cu) goto L_089F135C;
    return;
L_089F135C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F13D8;
      }
      goto L_089F139C;
    }
L_089F139C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    hot_regs.g31 = (0x089F13A8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F13A8u) goto L_089F13A8;
    return;
L_089F13A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F13D4;
      }
      goto L_089F13B4;
    }
L_089F13B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(9688)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(24));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089F13D4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F13D4u) goto L_089F13D4;
    return;
L_089F13D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(9688), 0u);
    goto L_089F13D8;
L_089F13D8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089F12F8;
      }
      goto L_089F13E8;
    }
}
L_089F13E8:
    hot_regs.g6 = (17096u << 16u);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[28] | 0u);
    goto L_089F13F8;
L_089F13F8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1440;
      }
      goto L_089F1404;
    }
L_089F1404:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    g6 = (g6 + static_cast<std::uint32_t>(384));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(149))))));
    { const bool branch_taken = g6 == ctx.gpr[21];
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F1440;
      }
      goto L_089F1418;
    }
}
L_089F1418:
    if (static_cast<std::int32_t>(ctx.gpr[17]) <= 0) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
        goto L_089F1428;
    }
    goto L_089F1420;
L_089F1420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089F1440;
      }
      goto L_089F1428;
    }
L_089F1428:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(ctx.gpr[21]));
    g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(9688)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = g6;
    goto L_089F1440;
}
L_089F1440:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F13F8;
      }
      goto L_089F1450;
    }
}
L_089F1450:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F1478:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F14B4;
      }
      goto L_089F14A4;
    }
}
L_089F14A4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 + g5);
    ctx.gpr[17] = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    goto L_089F14B4;
}
L_089F14B4:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(304));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089F14CCu);
    hot_regs.g5 = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F14CCu) goto L_089F14CC;
    return;
L_089F14CC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F14F8;
      }
      goto L_089F14D4;
    }
L_089F14D4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (0u | 2u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(264));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F14F8u);
    hot_regs.g5 = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F14F8u) goto L_089F14F8;
    return;
L_089F14F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(628))))));
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F15EC;
      }
      goto L_089F1508;
    }
}
L_089F1508:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(304));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F1524u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1524u) goto L_089F1524;
    return;
L_089F1524:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1550;
      }
      goto L_089F152C;
    }
L_089F152C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(264));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F1550u);
    hot_regs.g5 = (0u | 8u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1550u) goto L_089F1550;
    return;
L_089F1550:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(628))))));
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F15EC;
      }
      goto L_089F1560;
    }
}
L_089F1560:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(304));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F157Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F157Cu) goto L_089F157C;
    return;
L_089F157C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_089F15A8;
      }
      goto L_089F1584;
    }
L_089F1584:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(264));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (0u | 11u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F15A4u);
    hot_regs.g6 = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F15A4u) goto L_089F15A4;
    return;
L_089F15A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_089F15A8;
L_089F15A8:
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(304));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089F15C0u);
    hot_regs.g5 = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F15C0u) goto L_089F15C0;
    return;
L_089F15C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F15EC;
      }
      goto L_089F15C8;
    }
L_089F15C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(264));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089F15ECu);
    hot_regs.g5 = (0u | 9u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F15ECu) goto L_089F15EC;
    return;
L_089F15EC:
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
L_089F1600:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g17);
    g17 = (g5 & 255u);
    g5 = (17274u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g5 = (16800u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    hot_regs.f22 = std::bit_cast<float>(g5);
    ctx.gpr[19] = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = g17 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F1674;
      }
      goto L_089F1644;
    }
}
L_089F1644:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089F1650u);
    hot_regs.g4 = (0u | 2080u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1650u) goto L_089F1650;
    return;
L_089F1650:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g20 == 0u;
    hot_regs.g4 = (g20 | 0u);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089F166C;
      }
      goto L_089F165C;
    }
}
L_089F165C:
    hot_regs.g5 = (0u | 260u);
    hot_regs.g31 = (0x089F1668u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1668u) goto L_089F1668;
    return;
L_089F1668:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_089F166C;
L_089F166C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_089F16A0;
      }
      goto L_089F1674;
    }
L_089F1674:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089F1680u);
    hot_regs.g4 = (0u | 2080u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1680u) goto L_089F1680;
    return;
L_089F1680:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g20 == 0u;
    hot_regs.g4 = (g20 | 0u);
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089F169C;
      }
      goto L_089F168C;
    }
}
L_089F168C:
    hot_regs.g5 = (0u | 261u);
    hot_regs.g31 = (0x089F1698u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 226u, 0x089ED94Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1698u) goto L_089F1698;
    return;
L_089F1698:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    goto L_089F169C;
L_089F169C:
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(384));
    goto L_089F16A0;
L_089F16A0:
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
    hot_regs.g31 = (0x089F16B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F16B0u) goto L_089F16B0;
    return;
L_089F16B0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15560u << 16u);
    g4 = (g4 | 62915u);
    f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
    f14 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = hot_regs.f15 + f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    g4 = (50454u << 16u);
    f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 < f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F1794;
      }
      goto L_089F1740;
    }
}
}
L_089F1740:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (17608u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F1794;
      }
      goto L_089F175C;
    }
L_089F175C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (50426u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F1794;
      }
      goto L_089F1778;
    }
L_089F1778:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (17658u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
        goto L_089F1808;
    }
    goto L_089F1794;
L_089F1794:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    f13 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    f13 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f14 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
    f14 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
    goto L_089F1808;
}
}
L_089F1808:
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x089F1824u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1824u) goto L_089F1824;
    return;
L_089F1824:
{
    float f12 = hot_regs.f12;
    f12 = ctx.fpr[0] + hot_regs.f22;
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = f12;
        goto L_089F1838;
    }
    goto L_089F1838;
}
L_089F1838:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089F1854u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1854u) goto L_089F1854;
    return;
L_089F1854:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(72), g4);
    g4 = (g5 | 8u);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F1878;
}
L_089F1878:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 << 2u);
    g5 = (ctx.gpr[28] + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(9688)));
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F1894;
      }
      goto L_089F188C;
    }
}
L_089F188C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F18AC;
      }
      goto L_089F1894;
    }
L_089F1894:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1878;
      }
      goto L_089F18AC;
    }
}
L_089F18AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F18DC;
      }
      goto L_089F18B4;
    }
L_089F18B4:
    hot_regs.g4 = (0u | 31u);
    hot_regs.g31 = (0x089F18C0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F18C0u) goto L_089F18C0;
    return;
L_089F18C0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089F18D0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 181u, 0x089DD244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F18D0u) goto L_089F18D0;
    return;
L_089F18D0:
    hot_regs.g4 = (0u | 35u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089F18EC;
      }
      goto L_089F18DC;
    }
L_089F18DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 27u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g4 = (0u | 70u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089F18EC;
}
L_089F18EC:
    hot_regs.g4 = (16704u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089F190Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 181u, 0x089DD244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F190Cu) goto L_089F190C;
    return;
L_089F190C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (16672u << 16u);
      if (branch_taken) {
          goto L_089F1938;
      }
      goto L_089F1914;
    }
L_089F1914:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1952)));
    hot_regs.f13 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(1960)));
    g4 = (16752u << 16u);
    f12 = f12 + hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(g4);
    f14 = f14 + hot_regs.f15;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(1952), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(1960), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_089F1938;
}
}
L_089F1938:
    hot_regs.g4 = (15912u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 62915u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089F1950u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1950u) goto L_089F1950;
    return;
L_089F1950:
    hot_regs.g31 = (0x089F1958u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1958u) goto L_089F1958;
    return;
L_089F1958:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F197C;
      }
      goto L_089F1964;
    }
L_089F1964:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(900)));
    g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 + static_cast<std::uint32_t>(468));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g6 & g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F197C;
}
L_089F197C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F19A8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-576));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (0u | 275u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(548), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(552), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(556), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(560), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(564), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F1D34;
      }
      goto L_089F19D4;
    }
}
L_089F19D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    g4 = (16432u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1D34;
      }
      goto L_089F19E4;
    }
}
L_089F19E4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 350u);
    g4 = (16352u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (48896u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F1A18;
      }
      goto L_089F1A14;
    }
}
}
L_089F1A14:
    ctx.gpr[17] = (0u | 700u);
    goto L_089F1A18;
L_089F1A18:
    hot_regs.g31 = (0x089F1A20u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1A20u) goto L_089F1A20;
    return;
L_089F1A20:
    hot_regs.g31 = (0x089F1A28u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 351u, 0x0898CFB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1A28u) goto L_089F1A28;
    return;
L_089F1A28:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1C00;
      }
      goto L_089F1A30;
    }
L_089F1A30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1C00;
      }
      goto L_089F1A48;
    }
}
L_089F1A48:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(88));
    hot_regs.g5 = (0u | 32u);
    hot_regs.g31 = (0x089F1A58u);
    hot_regs.g6 = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1A58u) goto L_089F1A58;
    return;
L_089F1A58:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g31 = (0x089F1A70u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 220u, 0x089ED8FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1A70u) goto L_089F1A70;
    return;
L_089F1A70:
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
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
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_089F1AA0;
    }
    goto L_089F1AA0;
L_089F1AA0:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(88));
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089F1B14u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 614u, 0x08A4B48Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1B14u) goto L_089F1B14;
    return;
L_089F1B14:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1B38u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 220u, 0x089ED8FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1B38u) goto L_089F1B38;
    return;
L_089F1B38:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
        goto L_089F1B64;
    }
    goto L_089F1B64;
L_089F1B64:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(88));
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1BD4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 614u, 0x08A4B48Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1BD4u) goto L_089F1BD4;
    return;
L_089F1BD4:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 55u);
    hot_regs.g31 = (0x089F1BF0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1BF0u) goto L_089F1BF0;
    return;
L_089F1BF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089F1EA0;
      }
      goto L_089F1C00;
    }
L_089F1C00:
    hot_regs.g31 = (0x089F1C08u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1C08u) goto L_089F1C08;
    return;
L_089F1C08:
    hot_regs.g31 = (0x089F1C10u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1C10u) goto L_089F1C10;
    return;
L_089F1C10:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1D2C;
      }
      goto L_089F1C18;
    }
L_089F1C18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(60));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1D2C;
      }
      goto L_089F1C30;
    }
}
L_089F1C30:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1D2C;
      }
      goto L_089F1C3C;
    }
L_089F1C3C:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(200));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 35u);
    hot_regs.g31 = (0x089F1C50u);
    hot_regs.g6 = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1C50u) goto L_089F1C50;
    return;
L_089F1C50:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7616));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1C74u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 220u, 0x089ED8FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1C74u) goto L_089F1C74;
    return;
L_089F1C74:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x089F1CCCu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 46u, 0x08A4842Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1CCCu) goto L_089F1CCC;
    return;
L_089F1CCC:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (15564u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1D00u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1D00u) goto L_089F1D00;
    return;
L_089F1D00:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 55u);
    hot_regs.g31 = (0x089F1D1Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1D1Cu) goto L_089F1D1C;
    return;
L_089F1D1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089F1EA0;
      }
      goto L_089F1D2C;
    }
L_089F1D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E9C;
      }
      goto L_089F1D34;
    }
L_089F1D34:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 263u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F1E9C;
      }
      goto L_089F1D44;
    }
L_089F1D44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48896u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1E9C;
      }
      goto L_089F1D54;
    }
}
L_089F1D54:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16409u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (48968u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 62915u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x089F1D84u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1D84u) goto L_089F1D84;
    return;
L_089F1D84:
    hot_regs.g31 = (0x089F1D8Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 347u, 0x0898CF8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1D8Cu) goto L_089F1D8C;
    return;
L_089F1D8C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E9C;
      }
      goto L_089F1D94;
    }
L_089F1D94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(656)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(40));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1E9C;
      }
      goto L_089F1DAC;
    }
}
L_089F1DAC:
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(328));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 28u);
    hot_regs.g31 = (0x089F1DC0u);
    hot_regs.g6 = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 117u, 0x08A40A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1DC0u) goto L_089F1DC0;
    return;
L_089F1DC0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1DE4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 220u, 0x089ED8FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1DE4u) goto L_089F1DE4;
    return;
L_089F1DE4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(272));
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
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x089F1E3Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 46u, 0x08A4842Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1E3Cu) goto L_089F1E3C;
    return;
L_089F1E3C:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.g4 = (15564u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F1E70u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 255u, 0x08A41568u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1E70u) goto L_089F1E70;
    return;
L_089F1E70:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (0u | 55u);
    hot_regs.g31 = (0x089F1E8Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1E8Cu) goto L_089F1E8C;
    return;
L_089F1E8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(656), hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089F1EA0;
      }
      goto L_089F1E9C;
    }
L_089F1E9C:
    hot_regs.g2 = (0u | 0u);
    goto L_089F1EA0;
L_089F1EA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(548)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(552)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(556)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(560)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(564)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F1EC0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(0u);
    g4 = (16537u << 16u);
    g4 = (g4 | 39322u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7616), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    g4 = (49062u << 16u);
    g4 = (g4 | 26214u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7620), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g4);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7624), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089F1EEC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f13 = f12 / f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    g5 = (65280u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (48896u << 16u);
    hot_regs.g2 = (g4 | 0u);
    f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f14));
    f15 = f14 + f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f14));
    f16 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    f12 = f14 + f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f14));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(f16));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089F1F70:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g19);
    g19 = (2236u << 16u);
    g19 = (g19 + static_cast<std::uint32_t>(29232));
    hot_regs.g5 = (aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(301)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != 0u;
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F1FBC;
      }
      goto L_089F1FA4;
    }
}
L_089F1FA4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_089F1FA8;
L_089F1FA8:
    hot_regs.g31 = (0x089F1FB0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 323u, 0x089B9ABCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F1FB0u) goto L_089F1FB0;
    return;
L_089F1FB0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(301)));
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F1FA8;
      }
      goto L_089F1FBC;
    }
}
L_089F1FBC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (4608u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(387));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F202C;
      }
      goto L_089F1FDC;
    }
}
L_089F1FDC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    g6 = (ctx.gpr[17] >> 8u);
    g7 = (15u << 16u);
    g6 = (g6 & g7);
    g7 = (g18 + static_cast<std::uint32_t>(29552));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(20), g6);
    g7 = (4096u << 16u);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g6 = (256u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g6 = (ctx.gpr[17] & g6);
    g7 = (256u << 16u);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_089F202C;
}
L_089F202C:
    hot_regs.g6 = (1028u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x089F2060u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2060u) goto L_089F2060;
    return;
L_089F2060:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089F2074u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2074u) goto L_089F2074;
    return;
L_089F2074:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g31 = (0x089F208Cu);
    hot_regs.g6 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 498u, 0x088DF9D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F208Cu) goto L_089F208C;
    return;
L_089F208C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (2816u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F20CC:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), 0u);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F20D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(7744));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089F2104u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2104u) goto L_089F2104;
    return;
L_089F2104:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (2236u << 16u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089F216C;
      }
      goto L_089F211C;
    }
}
L_089F211C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (14848u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(9));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (15104u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (g7 >> 8u);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F2190;
      }
      goto L_089F216C;
    }
}
}
L_089F216C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (14848u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089F2190;
}
L_089F2190:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(f12)) && hot_regs.f13 == f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
        goto L_089F21BC;
    }
    goto L_089F21A0;
}
L_089F21A0:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f14)) && f13 == f14));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_089F221C;
    }
    goto L_089F21B8;
}
L_089F21B8:
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089F21BC;
L_089F21BC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g7 = (g5 >> 8u);
    g5 = (15104u << 16u);
    g7 = (g7 | g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f12)) && f13 == f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089F221C;
    }
    goto L_089F21F4;
}
}
L_089F21F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 >> 8u);
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g6 | g5);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    goto L_089F221C;
}
}
L_089F221C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g5 = (g5 >> 8u);
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g8 = (18944u << 16u);
    g5 = (g5 | g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g7 = (g7 >> 8u);
    g6 = (19200u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g7 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g7 = (256u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g7 = (g7 + static_cast<std::uint32_t>(-1));
    g8 = (g6 & g7);
    g9 = (21760u << 16u);
    g9 = (g8 | g9);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (g6 >> 24u);
    g9 = (22528u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g9);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (22016u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g8 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (22272u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g8 | g6);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (50944u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g10 = (15u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g8 = (g4 + static_cast<std::uint32_t>(29552));
    g9 = (g6 >> 8u);
    g9 = (g9 & g10);
    g10 = (4096u << 16u);
    g6 = (g6 & g7);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(20), g9);
    g7 = (g9 | g10);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g7 = (2560u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    g6 = (g6 | g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g6);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(29552)));
    g6 = (0u | 255u);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(29552), g5);
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(20), g6);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F2358:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2360:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g7 = (2207u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (0u | 1936u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089F2384u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(9048));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2384u) goto L_089F2384;
    return;
L_089F2384:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(5808), 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x089F2398u);
    hot_regs.g6 = (0u | 5808u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2398u) goto L_089F2398;
    return;
L_089F2398:
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
L_089F23AC:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(5808), hot_regs.g5);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F23B4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g5 = (0u | 18u);
    { const std::uint32_t dividend = g6; const std::uint32_t divisor = g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g6 = (0u | 6u);
    g5 = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g7 = (ctx.hi);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F23F8;
      }
      goto L_089F23E8;
    }
}
L_089F23E8:
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g5 = (ctx.lo);
    hot_regs.g31 = (0x089F23F8u);
    // nop
    goto L_089F2750;
L_089F23F8:
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
L_089F2404:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g19);
    g19 = (0u | 0u);
    g17 = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(1920), 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[20] = (g17 + static_cast<std::uint32_t>(16));
    g19 = (g5 + g19);
    ctx.gpr[16] = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    goto L_089F2454;
}
L_089F2454:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2590;
      }
      goto L_089F2460;
    }
L_089F2460:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089F247C;
      }
      goto L_089F246C;
    }
L_089F246C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1920), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2590;
      }
      goto L_089F247C;
    }
}
L_089F247C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2494;
      }
      goto L_089F2488;
    }
L_089F2488:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F2494u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2494u) goto L_089F2494;
    return;
L_089F2494:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1920)));
    g4 = (g4 << 6u);
    g4 = (g16 + g4);
    { const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
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
    g5 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & ctx.gpr[23]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g6 = (g6 & 1u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & ctx.gpr[22]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g6 = (g6 & 2u);
    g6 = (g6 >> 1u);
    g6 = (g6 & 1u);
    g6 = (g6 << 1u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & ctx.gpr[21]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g6 = (g6 & 4u);
    g6 = (g6 >> 2u);
    g6 = (g6 & 1u);
    g6 = (g6 << 2u);
    g5 = (g5 | g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1920)));
    g4 = (g4 << 6u);
    g4 = (g16 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F2580;
      }
      goto L_089F2568;
    }
}
}
L_089F2568:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    hot_regs.g4 = (hot_regs.g4 << 6u);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F2580u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2580u) goto L_089F2580;
    return;
L_089F2580:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1920)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1920), g4);
    hot_regs.g4 = g4;
    goto L_089F2590;
}
L_089F2590:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9884)));
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9888)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 31u));
    hot_regs.g6 = (g18 | 0u);
    g8 = (g7 ^ g5);
    g8 = (g8 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (hot_regs.g6 < g4 ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (g8 & g4);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    g4 = (g4 | ctx.gpr[9]);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089F2454;
      }
      goto L_089F25CC;
    }
}
L_089F25CC:
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
L_089F25F8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f13 = hot_regs.f14 - f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f15));
    f12 = hot_regs.f15 - f16;
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
        goto L_089F2624;
    }
    goto L_089F2624;
}
}
L_089F2624:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (16384u << 16u);
    f14 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::sqrt(f12);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089F264C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(86))))));
    g7 = (g7 << 2u);
    g7 = (ctx.gpr[8] + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9896)));
    f13 = f13 + f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089F26AC;
    }
    goto L_089F26AC;
}
}
L_089F26AC:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F26B4:
{
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    g19 = (g29 + static_cast<std::uint32_t>(32));
    g20 = (g29 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (g19 | 0u);
    hot_regs.g31 = (0x089F26F0u);
    hot_regs.g6 = (g20 | 0u);
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    goto L_089F264C;
}
L_089F26F0:
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (16128u << 16u);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2750:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-8576));
    g6 = (g5 << 4u);
    g7 = (0u + g6);
    g6 = (g6 << 3u);
    g7 = (g7 - g6);
    g6 = (g6 << 4u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8528), g16);
    g16 = (g7 + g6);
    g6 = (15820u << 16u);
    g6 = (g6 | 52429u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8512), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g6 = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8516), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    g6 = (16880u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g6);
    g16 = (hot_regs.g4 + g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8484), g5);
    g6 = (16840u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8508), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8520), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8524), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8532), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8536), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8540), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8544), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8548), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8552), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8556), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8560), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8564), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g5) > 0;
    ctx.fpr[28] = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F27F0;
      }
      goto L_089F27DC;
    }
}
L_089F27DC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) < 0;
    // nop
      if (branch_taken) {
          goto L_089F281C;
      }
      goto L_089F27E4;
    }
L_089F27E4:
    hot_regs.g5 = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_089F281C;
      }
      goto L_089F27F0;
    }
L_089F27F0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F280C;
      }
      goto L_089F27FC;
    }
}
L_089F27FC:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2814;
      }
      goto L_089F2804;
    }
L_089F2804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F281C;
      }
      goto L_089F280C;
    }
L_089F280C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_089F281C;
      }
      goto L_089F2814;
    }
L_089F2814:
    hot_regs.g5 = (16800u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    goto L_089F281C;
L_089F281C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(5808)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g31 = (0x089F2830u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8468), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 291u, 0x089D1AECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2830u) goto L_089F2830;
    return;
L_089F2830:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    f12 = f12 - f22;
    f13 = f12 / ctx.fpr[24];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    f13 = f13 + ctx.fpr[26];
    f12 = f12 - f22;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    f12 = f12 + f22;
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    f12 = f12 + f22;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089F2880;
    }
    goto L_089F2880;
}
}
L_089F2880:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_089F288C;
    }
    goto L_089F288C;
L_089F288C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_089F28A0;
    }
    goto L_089F28A0;
}
L_089F28A0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    f12 = f12 / ctx.fpr[24];
    g4 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g4 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
        goto L_089F28C4;
    }
    goto L_089F28C4;
}
}
L_089F28C4:
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089F28D0;
    }
    goto L_089F28D0;
L_089F28D0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g7 != 0u) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g7 = g7;
        goto L_089F28E4;
    }
    goto L_089F28E4;
}
L_089F28E4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f12 = f12 / ctx.fpr[24];
    g7 = (0u | 49u);
    f12 = f12 + ctx.fpr[26];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
        goto L_089F2908;
    }
    goto L_089F2908;
}
}
L_089F2908:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089F2914;
    }
    goto L_089F2914;
L_089F2914:
    hot_regs.g7 = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g5) < 49 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8480), hot_regs.g7);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8480), hot_regs.g5);
        goto L_089F2928;
    }
    goto L_089F2928;
L_089F2928:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    f12 = f12 / ctx.fpr[24];
    g7 = (0u | 49u);
    f12 = f12 + ctx.fpr[28];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
        goto L_089F294C;
    }
    goto L_089F294C;
}
}
L_089F294C:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089F2958;
    }
    goto L_089F2958;
L_089F2958:
    hot_regs.g7 = (0u | 49u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g5) < 49 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8500), hot_regs.g7);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8500), hot_regs.g5);
        goto L_089F296C;
    }
    goto L_089F296C;
L_089F296C:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8464), ctx.gpr[16]);
    { const float fs = f22; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1920), 0u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8500)));
    g7 = (15948u << 16u);
    g7 = (g7 | 52429u);
    f22 = std::bit_cast<float>(g7);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8488), hot_regs.g4);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_089F2DEC;
      }
      goto L_089F2994;
    }
}
}
L_089F2994:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 << 4u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    g4 = (g4 + g5);
    g5 = (g5 + g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8496), hot_regs.g6);
    g4 = (g5 + g4);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8492), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F29B4;
}
L_089F29B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8496)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8480)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8476), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F2DC8;
      }
      goto L_089F29C8;
    }
}
L_089F29C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8492)));
    g4 = (g4 + g5);
    g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (g5 - g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8472), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F29E0;
}
L_089F29E0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8484)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8472)));
      if (branch_taken) {
          goto L_089F2A04;
      }
      goto L_089F29EC;
    }
L_089F29EC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089F2A38;
      }
      goto L_089F29F4;
    }
L_089F29F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2A3C;
      }
      goto L_089F2A04;
    }
}
L_089F2A04:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2A28;
      }
      goto L_089F2A10;
    }
}
L_089F2A10:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2A38;
      }
      goto L_089F2A18;
    }
L_089F2A18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2A3C;
      }
      goto L_089F2A28;
    }
}
L_089F2A28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g4 = (g4 + hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(28));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2A3C;
      }
      goto L_089F2A38;
    }
}
L_089F2A38:
    hot_regs.g4 = (0u | 0u);
    goto L_089F2A3C;
L_089F2A3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8464)));
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2DA4;
      }
      goto L_089F2A4C;
    }
}
L_089F2A4C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8460)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8468)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g6 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    f12 = hot_regs.f13 - f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f26 = f26 + f12;
    ctx.set_fpu_condition((f26 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f14));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_089F2A9C;
      }
      goto L_089F2A94;
    }
}
}
L_089F2A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2D94;
      }
      goto L_089F2A9C;
    }
L_089F2A9C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8448), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g4 + static_cast<std::uint32_t>(16));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8456), g5);
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8452), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F2AE8;
      }
      goto L_089F2AE0;
    }
}
}
L_089F2AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2D94;
      }
      goto L_089F2AE8;
    }
L_089F2AE8:
    ctx.fpr[26] = std::sqrt(ctx.fpr[26]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089F2B50;
      }
      goto L_089F2AF8;
    }
L_089F2AF8:
    hot_regs.g5 = (ctx.gpr[22] + hot_regs.g4);
    goto L_089F2AFC;
L_089F2AFC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g6 = (g6 >> 31u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g6 = (g5 << 6u);
    g6 = (hot_regs.g7 + g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F2B44;
      }
      goto L_089F2B28;
    }
}
L_089F2B28:
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_089F2B3C;
      }
      goto L_089F2B34;
    }
L_089F2B34:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089F2B48;
      }
      goto L_089F2B3C;
    }
L_089F2B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089F2B48;
      }
      goto L_089F2B44;
    }
L_089F2B44:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    goto L_089F2B48;
L_089F2B48:
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[22] + hot_regs.g4);
      if (branch_taken) {
          goto L_089F2AFC;
      }
      goto L_089F2B50;
    }
L_089F2B50:
{
    std::uint32_t g23 = ctx.gpr[23];
    ctx.gpr[20] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(1920)));
    g23 = (ctx.gpr[22] << 6u);
    hot_regs.g4 = (0u | 30u);
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g4;
    g23 = (hot_regs.g7 + g23);
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_089F2B7C;
      }
      goto L_089F2B64;
    }
}
L_089F2B64:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(-2));
    g4 = (g20 << 6u);
    g4 = (hot_regs.g7 + g4);
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f24; const float ft = f24; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_089F2B80;
      }
      goto L_089F2B7C;
    }
}
}
L_089F2B7C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_089F2B80;
L_089F2B80:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[20] << 6u);
      if (branch_taken) {
          goto L_089F2CAC;
      }
      goto L_089F2B90;
    }
L_089F2B90:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    g16 = (hot_regs.g7 + g18);
    ctx.gpr[20] = (g16 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (g16 + static_cast<std::uint32_t>(64));
    g18 = (hot_regs.g7 + g18);
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    goto L_089F2BA4;
}
L_089F2BA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2BBC;
      }
      goto L_089F2BB0;
    }
L_089F2BB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F2BBCu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2BBCu) goto L_089F2BBC;
    return;
L_089F2BBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    { const std::uint32_t vfpu_address = g18 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g19 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(16), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(48)));
    g4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g4 = (g5 & g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g4 = (g4 & ctx.gpr[30]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & 2u);
    g5 = (g5 >> 1u);
    g5 = (g5 & 1u);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    g5 = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g19 + static_cast<std::uint32_t>(52))))));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(52))))));
    g5 = (g5 & 4u);
    g5 = (g5 >> 2u);
    g5 = (g5 & 1u);
    g5 = (g5 << 2u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F2C8C;
      }
      goto L_089F2C80;
    }
}
}
L_089F2C80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089F2C8Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2C8Cu) goto L_089F2C8C;
    return;
L_089F2C8C:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-64));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-64));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-64));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-64));
    hot_regs.g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-64));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089F2BA4;
      }
      goto L_089F2CAC;
    }
}
L_089F2CAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2CC4;
      }
      goto L_089F2CB8;
    }
L_089F2CB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F2CC4u);
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 430u, 0x08A93004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2CC4u) goto L_089F2CC4;
    return;
L_089F2CC4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8448)));
    { const bool branch_taken = g16 == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), g16);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089F2CDC;
      }
      goto L_089F2CD0;
    }
}
L_089F2CD0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F2CDCu);
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2CDCu) goto L_089F2CDC;
    return;
L_089F2CDC:
{
    float f12 = hot_regs.f12;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8456)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8452)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(52))))));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g5 | 1u);
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f28));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8464)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f28));
    aot_mem.aot_store8(g23 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f28));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(52))))));
    g5 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(1920)));
    g9 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9884)));
    g4 = (g4 & ctx.gpr[30]);
    ctx.gpr[8] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9888)));
    aot_mem.aot_store8(g23 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 31u));
    g4 = (g5 | 0u);
    g5 = (g6 | 0u);
    g6 = (g5 ^ g9);
    g6 = (g6 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    g4 = (g6 & g4);
    g4 = (g4 | ctx.gpr[10]);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f28));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F2D94;
      }
      goto L_089F2D88;
    }
}
}
L_089F2D88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(1920)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(1920), g4);
    hot_regs.g4 = g4;
    goto L_089F2D94;
}
L_089F2D94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8460)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8460), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2A4C;
      }
      goto L_089F2DA4;
    }
}
L_089F2DA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8476)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8472)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8480)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8476), g4);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8472), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F29E0;
      }
      goto L_089F2DC8;
    }
}
L_089F2DC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8488)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8492)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8500)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8488), g4);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8492), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089F29B4;
      }
      goto L_089F2DEC;
    }
}
L_089F2DEC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8484)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2E08;
      }
      goto L_089F2DF8;
    }
}
L_089F2DF8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_089F34E8;
      }
      goto L_089F2E00;
    }
L_089F2E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2E20;
      }
      goto L_089F2E08;
    }
L_089F2E08:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089F3170;
      }
      goto L_089F2E10;
    }
L_089F2E10:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F31F4;
      }
      goto L_089F2E18;
    }
L_089F2E18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F34E8;
      }
      goto L_089F2E20;
    }
L_089F2E20:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8464)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F2EA4;
      }
      goto L_089F2E38;
    }
}
L_089F2E38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (49029u << 16u);
    g16 = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    g4 = (g4 | 7864u);
    g16 = (ctx.gpr[17] + g16);
    hot_regs.f20 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_089F2E50;
}
L_089F2E50:
    hot_regs.g31 = (0x089F2E58u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F2E58u) goto L_089F2E58;
    return;
L_089F2E58:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2E6C;
      }
      goto L_089F2E60;
    }
L_089F2E60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    g4 = (g4 | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089F2E6C;
}
L_089F2E6C:
    hot_regs.g31 = (0x089F2E74u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089F3530;
L_089F2E74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9892)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 1u);
    aot_mem.aot_store8(g17 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g17 = (g17 + static_cast<std::uint32_t>(64));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089F2E50;
      }
      goto L_089F2EA4;
    }
}
L_089F2EA4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9892)));
    g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 0u);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(8256));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(8240));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (g29 | 0u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_089F2ED4;
}
}
L_089F2ED4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < 2048 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F2FEC;
      }
      goto L_089F2EE4;
    }
}
L_089F2EE4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2FEC;
      }
      goto L_089F2EEC;
    }
L_089F2EEC:
{
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(48), ctx.gpr[11]);
    g9 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    g9 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(2244)));
    g9 = (static_cast<std::int32_t>(g9) < 2 ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    hot_regs.g5 = (0u | 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089F2FE0;
      }
      goto L_089F2F04;
    }
}
L_089F2F04:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    goto L_089F2F0C;
L_089F2F0C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g2 = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(g2) ? 1u : 0u);
    { const bool branch_taken = g2 == 0u;
    g2 = (static_cast<std::int32_t>(ctx.gpr[17]) < 2048 ? 1u : 0u);
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089F2FBC;
      }
      goto L_089F2F1C;
    }
}
L_089F2F1C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2FBC;
      }
      goto L_089F2F24;
    }
L_089F2F24:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_089F2FB0;
      }
      goto L_089F2F2C;
    }
L_089F2F2C:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    g2 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(2244)));
    g2 = (static_cast<std::int32_t>(g2) < 2 ? 1u : 0u);
    { const bool branch_taken = g2 == 0u;
    // nop
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089F2FB0;
      }
      goto L_089F2F40;
    }
}
L_089F2F40:
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g2 = (ctx.gpr[3] + static_cast<std::uint32_t>(48));
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g2 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g2);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F2FB0;
      }
      goto L_089F2F88;
    }
L_089F2F88:
    hot_regs.g2 = (hot_regs.g5 | 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F2F9C;
      }
      goto L_089F2F94;
    }
L_089F2F94:
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089F2F9C;
L_089F2F9C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g2 = (ctx.gpr[17] << 2u);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (hot_regs.g29 + hot_regs.g2);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    g5 = (0u | 1u);
    hot_regs.g5 = g5;
    goto L_089F2FB0;
}
L_089F2FB0:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089F2F0C;
      }
      goto L_089F2FBC;
    }
L_089F2FBC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (ctx.gpr[17] << 2u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g8 = (hot_regs.g29 + g8);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089F2FE0;
      }
      goto L_089F2FC8;
    }
}
L_089F2FC8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (g17 << 2u);
    g5 = (hot_regs.g29 + g5);
    g17 = (g17 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    goto L_089F2FE0;
}
L_089F2FE0:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_089F2ED4;
      }
      goto L_089F2FEC;
    }
L_089F2FEC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089F3168;
      }
      goto L_089F2FF4;
    }
L_089F2FF4:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3168;
      }
      goto L_089F3000;
    }
L_089F3000:
{
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f30 = std::bit_cast<float>(0u);
    g4 = (16308u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8280), std::bit_cast<std::uint32_t>(f30));
    g4 = (g4 | 31457u);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(8304));
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(8320));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8296), std::bit_cast<std::uint32_t>(f30));
    ctx.gpr[19] = (g29 | 0u);
    hot_regs.g4 = g4;
    ctx.fpr[30] = f30;
    goto L_089F3024;
}
}
L_089F3024:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (g4 << 6u);
    { const bool branch_taken = g4 == ctx.gpr[18];
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F311C;
      }
      goto L_089F3044;
    }
}
L_089F3044:
    hot_regs.g6 = (ctx.gpr[22] + hot_regs.g5);
    goto L_089F3048;
L_089F3048:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_089F3060;
      }
      goto L_089F3054;
    }
L_089F3054:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089F3110;
      }
      goto L_089F3060;
    }
L_089F3060:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    g7 = (g7 << 6u);
    g7 = (ctx.gpr[22] + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    g7 = (g7 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g7 = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g7 + static_cast<std::uint32_t>(32);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8320)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089F30C0;
      }
      goto L_089F30BC;
    }
}
L_089F30BC:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8320)));
    goto L_089F30C0;
L_089F30C0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8320)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F30D8;
      }
      goto L_089F30D4;
    }
L_089F30D4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8320)));
    goto L_089F30D8;
L_089F30D8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8324)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F30F0;
      }
      goto L_089F30EC;
    }
L_089F30EC:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8324)));
    goto L_089F30F0;
L_089F30F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8324)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3108;
      }
      goto L_089F3104;
    }
L_089F3104:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8324)));
    goto L_089F3108;
L_089F3108:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F3110;
L_089F3110:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089F3048;
      }
      goto L_089F311C;
    }
L_089F311C:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9892)));
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g5);
    f20 = f20 - f12;
    f24 = f24 + f12;
    f22 = f22 - f12;
    f26 = f26 + f12;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.g31 = (0x089F314Cu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f26));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
    goto L_089F25F8;
}
L_089F314C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089F3024;
      }
      goto L_089F3158;
    }
L_089F3158:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8276), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8292), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_089F3168;
}
L_089F3168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F34E8;
      }
      goto L_089F3170;
    }
L_089F3170:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8464)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F31EC;
      }
      goto L_089F3188;
    }
}
L_089F3188:
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    goto L_089F3194;
L_089F3194:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F31A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089F3530;
L_089F31A0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(52))))));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (g5 & ctx.gpr[16]);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g18 = (g18 + static_cast<std::uint32_t>(64));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F3194;
      }
      goto L_089F31EC;
    }
}
}
L_089F31EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F34E8;
      }
      goto L_089F31F4;
    }
L_089F31F4:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8464)));
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (18804u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F34E0;
      }
      goto L_089F320C;
    }
}
L_089F320C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (g4 | 9200u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g18 = (0u | 0u);
    g4 = (51572u << 16u);
    g4 = (g4 | 9200u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    g4 = (16256u << 16u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-2));
    ctx.fpr[28] = std::bit_cast<float>(g4);
    g18 = (ctx.gpr[17] + g18);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    goto L_089F3240;
}
L_089F3240:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (hot_regs.g5 << 2u);
    g6 = (g6 + ctx.gpr[20]);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 0u);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[10] = (ctx.gpr[22] | 0u);
    hot_regs.g6 = g6;
    goto L_089F326C;
}
L_089F326C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F32C4;
      }
      goto L_089F3274;
    }
L_089F3274:
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F32C4;
      }
      goto L_089F327C;
    }
L_089F327C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = ctx.gpr[9] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F32B4;
      }
      goto L_089F3288;
    }
L_089F3288:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(40)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (0u | 1u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089F32B4;
}
}
L_089F32B4:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089F326C;
      }
      goto L_089F32C4;
    }
}
L_089F32C4:
    if (hot_regs.g7 != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
        goto L_089F34AC;
    }
    goto L_089F32CC;
L_089F32CC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8336), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8340), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8352), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8360), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_089F3404;
      }
      goto L_089F32F8;
    }
}
L_089F32F8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = (0u | 0u);
    g7 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (0u | 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089F3404;
      }
      goto L_089F330C;
    }
}
L_089F330C:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g8 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(56)));
    g8 = (g8 + hot_regs.g7);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8368), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8372), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9896)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8376), std::bit_cast<std::uint32_t>(f13));
    f14 = f14 + hot_regs.f12;
    g8 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(56)));
    g8 = (g8 + hot_regs.g7);
    ctx.set_fpu_condition((f13 <= f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F33F0;
      }
      goto L_089F334C;
    }
}
}
L_089F334C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8368)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8352)));
    f14 = f14 + hot_regs.f13;
    ctx.set_fpu_condition((f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F3374;
      }
      goto L_089F3368;
    }
}
L_089F3368:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8368)));
    f14 = f14 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8352), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    goto L_089F3374;
}
L_089F3374:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8372)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8356)));
    f14 = f14 + hot_regs.f13;
    ctx.set_fpu_condition((f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F339C;
      }
      goto L_089F3390;
    }
}
L_089F3390:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8372)));
    f14 = f14 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8356), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    goto L_089F339C;
}
L_089F339C:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8368)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8336)));
    f14 = f14 - hot_regs.f13;
    ctx.set_fpu_condition((f14 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F33C4;
      }
      goto L_089F33B8;
    }
}
L_089F33B8:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8368)));
    f14 = f14 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8336), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    goto L_089F33C4;
}
L_089F33C4:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8372)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8340)));
    f14 = f14 - hot_regs.f13;
    ctx.set_fpu_condition((f14 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F33EC;
      }
      goto L_089F33E0;
    }
}
L_089F33E0:
{
    float f13 = hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8372)));
    f13 = hot_regs.f14 - f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8340), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_089F33EC;
}
L_089F33EC:
    hot_regs.g4 = (0u | 1u);
    goto L_089F33F0;
L_089F33F0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(52)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g8 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = g8 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(32));
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089F330C;
      }
      goto L_089F3404;
    }
}
L_089F3404:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3434;
      }
      goto L_089F340C;
    }
L_089F340C:
{
    float f22 = hot_regs.f22;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    hot_regs.g31 = (0x089F3424u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22));
    goto L_089F25F8;
}
L_089F3424:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F34A8;
      }
      goto L_089F3434;
    }
}
L_089F3434:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8336)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8340)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8352)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8356)));
    hot_regs.g31 = (0x089F344Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089F25F8;
}
L_089F344C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8352)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8336)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8356)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8340)));
    f12 = f12 - hot_regs.f13;
    f14 = f14 - hot_regs.f15;
    f12 = f12 / f14;
    f12 = f12 - ctx.fpr[28];
    ctx.set_fpu_condition((f12 < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F349C;
      }
      goto L_089F347C;
    }
}
}
L_089F347C:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F349C;
      }
      goto L_089F348C;
    }
L_089F348C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F34A8;
      }
      goto L_089F349C;
    }
}
L_089F349C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    g4 = (g4 & ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_089F34A8;
}
L_089F34A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    goto L_089F34AC;
L_089F34AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 + ctx.gpr[20]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1920)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g17 = (g17 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F3240;
      }
      goto L_089F34E0;
    }
}
}
L_089F34E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F34E8;
      }
      goto L_089F34E8;
    }
L_089F34E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8504)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8508)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8512)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8516)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8520)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8524)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8528)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8532)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8536)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8540)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8544)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8548)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8552)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8556)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8560)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8564)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(8576));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F3530:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    if (hot_regs.g5 == 0u) {
    g4 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
        goto L_089F3574;
    }
    goto L_089F3560;
}
L_089F3560:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F377C;
      }
      goto L_089F356C;
    }
}
L_089F356C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3758;
      }
      goto L_089F3574;
    }
L_089F3574:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F377C;
      }
      goto L_089F357C;
    }
L_089F357C:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g4 = (4096u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F35B8;
      }
      goto L_089F3594;
    }
}
L_089F3594:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089F3728;
      }
      goto L_089F35B8;
    }
L_089F35B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2244)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.f12 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089F363C;
      }
      goto L_089F35C8;
    }
L_089F35C8:
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089F3718;
      }
      goto L_089F35D4;
    }
L_089F35D4:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1056));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g4 = (15907u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55051u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3728;
      }
      goto L_089F363C;
    }
L_089F363C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 6 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F36B0;
      }
      goto L_089F3648;
    }
}
L_089F3648:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3718;
      }
      goto L_089F3650;
    }
L_089F3650:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1056));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g4 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3728;
      }
      goto L_089F36B0;
    }
L_089F36B0:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(1056));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(hot_regs.g4);
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
    hot_regs.g4 = (16163u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55051u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3728;
      }
      goto L_089F3718;
    }
L_089F3718:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    goto L_089F3728;
}
}
L_089F3728:
    hot_regs.g31 = (0x089F3730u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3730u) goto L_089F3730;
    return;
L_089F3730:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3750;
      }
      goto L_089F3738;
    }
L_089F3738:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    goto L_089F3750;
}
L_089F3750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F377C;
      }
      goto L_089F3758;
    }
L_089F3758:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089F377C;
L_089F377C:
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
L_089F3790:
{
    float f14 = hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (0u | 1u);
    f14 = hot_regs.f15 - hot_regs.f12;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F37C4;
      }
      goto L_089F37B4;
    }
}
L_089F37B4:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 2u);
      if (branch_taken) {
          goto L_089F37F8;
      }
      goto L_089F37C4;
    }
L_089F37C4:
    ctx.set_fpu_condition((hot_regs.f15 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F37E0;
      }
      goto L_089F37D4;
    }
L_089F37D4:
{
    float f15 = hot_regs.f15;
    f15 = f15 + ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089F37F8;
      }
      goto L_089F37E0;
    }
}
L_089F37E0:
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F37F8;
      }
      goto L_089F37F0;
    }
L_089F37F0:
{
    float f15 = hot_regs.f15;
    f15 = f15 - ctx.fpr[16];
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f15 = f15;
    goto L_089F37F8;
}
L_089F37F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3818;
      }
      goto L_089F380C;
    }
L_089F380C:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F3834;
      }
      goto L_089F3818;
    }
L_089F3818:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f15 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3834;
      }
      goto L_089F382C;
    }
L_089F382C:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g2 = (0u | 0u);
    goto L_089F3834;
L_089F3834:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f14 - hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f15 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F385C;
      }
      goto L_089F3850;
    }
}
L_089F3850:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
      if (branch_taken) {
          goto L_089F3898;
      }
      goto L_089F385C;
    }
L_089F385C:
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F387C;
      }
      goto L_089F386C;
    }
L_089F386C:
{
    float f14 = hot_regs.f14;
    f14 = f14 + hot_regs.f12;
    hot_regs.g2 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_089F3898;
      }
      goto L_089F387C;
    }
}
L_089F387C:
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3898;
      }
      goto L_089F388C;
    }
L_089F388C:
{
    float f14 = hot_regs.f14;
    f14 = f14 - hot_regs.f12;
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    goto L_089F3898;
}
L_089F3898:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F38B8;
      }
      goto L_089F38AC;
    }
L_089F38AC:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089F38D4;
      }
      goto L_089F38B8;
    }
L_089F38B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F38D4;
      }
      goto L_089F38CC;
    }
L_089F38CC:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g2 = (0u | 0u);
    goto L_089F38D4;
L_089F38D4:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F38DC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089F3910:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g18);
    g18 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    hot_regs.g7 = (8u << 16u);
    g5 = (g5 & hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F3970;
      }
      goto L_089F3944;
    }
}
L_089F3944:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g5);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F39D4;
      }
      goto L_089F3970;
    }
}
L_089F3970:
    hot_regs.g31 = (0x089F3978u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 621u, 0x0889EB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3978u) goto L_089F3978;
    return;
L_089F3978:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(700)));
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F3998u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 251u, 0x08969194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3998u) goto L_089F3998;
    return;
L_089F3998:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F39A4u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 250u, 0x0896918Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F39A4u) goto L_089F39A4;
    return;
L_089F39A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[16] << 6u);
    g4 = (hot_regs.g2 + g4);
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(0), g5);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089F39D4;
}
L_089F39D4:
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
L_089F39EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f15));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (49024u << 16u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3A58;
      }
      goto L_089F3A50;
    }
L_089F3A50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089F3A6C;
      }
      goto L_089F3A58;
    }
L_089F3A58:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3A6C;
      }
      goto L_089F3A68;
    }
L_089F3A68:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_089F3A6C;
L_089F3A6C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g8);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    g8 = (ctx.vfpu_scalar_bits_ct<64u>());
    f13 = std::bit_cast<float>(g8);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((f13 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.gpr[8] = g8;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089F3AB4;
      }
      goto L_089F3AA8;
    }
}
}
L_089F3AA8:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_089F3AB4;
}
L_089F3AB4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3B00;
      }
      goto L_089F3AF8;
    }
L_089F3AF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089F3B14;
      }
      goto L_089F3B00;
    }
L_089F3B00:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089F3B14;
      }
      goto L_089F3B10;
    }
L_089F3B10:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_089F3B14;
L_089F3B14:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<64u>());
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((f12 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F3B5C;
      }
      goto L_089F3B50;
    }
}
}
L_089F3B50:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_089F3B5C;
}
L_089F3B5C:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g5 = (g29 | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(816));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x089F3B94u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_089F3910;
}
L_089F3B94:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089F3BB0u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3BB0u) goto L_089F3BB0;
    return;
L_089F3BB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f14 = hot_regs.f14 - hot_regs.f15;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089F3BF8u);
    hot_regs.f12 = hot_regs.f15 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3BF8u) goto L_089F3BF8;
    return;
L_089F3BF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089F3C08u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 15u, 0x089F4168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3C08u) goto L_089F3C08;
    return;
L_089F3C08:
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
L_089F3C20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g16);
    g16 = (g4 | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(708)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g6 = (g4 & 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[17] = (g16 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089F3C6C;
      }
      goto L_089F3C54;
    }
}
L_089F3C54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(708)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F3CAC;
      }
      goto L_089F3C6C;
    }
}
L_089F3C6C:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F3C7Cu);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    goto L_089F3F90;
L_089F3C7C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g6 = (2234u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F3C98u);
    g6 = (g6 + static_cast<std::uint32_t>(7224));
    hot_regs.g6 = g6;
    goto L_089F3790;
}
L_089F3C98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(708)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F3CAC;
      }
      goto L_089F3CA8;
    }
}
L_089F3CA8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089F3CAC;
L_089F3CAC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F3CBCu);
    hot_regs.g7 = (0u | 0u);
    goto L_089F3EDC;
L_089F3CBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F3CE8;
      }
      goto L_089F3CCC;
    }
}
L_089F3CCC:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(0u);
    g6 = (2234u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089F3CE8u);
    g6 = (g6 + static_cast<std::uint32_t>(7248));
    hot_regs.g6 = g6;
    goto L_089F3790;
}
L_089F3CE8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089F3D10;
      }
      goto L_089F3CF8;
    }
}
L_089F3CF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (g16 + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(704)));
    g4 = (g16 | 0u);
    hot_regs.g31 = (0x089F3D10u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_089F3EDC;
}
L_089F3D10:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F3D2C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    f12 = std::bit_cast<float>(0u);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(1929))))));
    ctx.gpr[8] = (g7 << 5u);
    g7 = (g7 << 2u);
    g7 = (ctx.gpr[8] - g7);
    g6 = (g6 + g7);
    g6 = (g6 + static_cast<std::uint32_t>(1396));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g7 = (0u | 23u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    { const bool branch_taken = g6 == g7;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F3DDC;
      }
      goto L_089F3D80;
    }
}
}
L_089F3D80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1929))))));
    hot_regs.g6 = (g5 << 5u);
    g5 = (g5 << 2u);
    g5 = (hot_regs.g6 - g5);
    g4 = (g4 + g5);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 22u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089F3DDC;
      }
      goto L_089F3DAC;
    }
}
L_089F3DAC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089F3DBCu);
    hot_regs.g6 = (0u | 4u);
    goto L_089F3910;
L_089F3DBC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (g4 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089F3DEC;
      }
      goto L_089F3DDC;
    }
}
}
L_089F3DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = g4;
    goto L_089F3DEC;
}
L_089F3DEC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089F3E08u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3E08u) goto L_089F3E08;
    return;
L_089F3E08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f13 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x089F3E44u);
    hot_regs.f12 = hot_regs.f15 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3E44u) goto L_089F3E44;
    return;
L_089F3E44:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x089F3E54u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 49u, 0x089F44B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3E54u) goto L_089F3E54;
    return;
L_089F3E54:
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
L_089F3E6C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    hot_regs.f12 = std::bit_cast<float>(0u);
    g17 = (g16 + static_cast<std::uint32_t>(12));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g6 = (2234u << 16u);
    hot_regs.g5 = (g17 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089F3EA0u);
    g6 = (g6 + static_cast<std::uint32_t>(7248));
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    goto L_089F3790;
}
L_089F3EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(704)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089F3EBCu);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g4 = g4;
    goto L_089F3EDC;
}
L_089F3EBC:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    g2 = (ctx.gpr[18] ^ 2u);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F3EDC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (17204u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[18] = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9872));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f22;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089F3F38u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3F38u) goto L_089F3F38;
    return;
L_089F3F38:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-9848));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / hot_regs.f22;
    hot_regs.g31 = (0x089F3F54u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 220u, 0x08968D2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3F54u) goto L_089F3F54;
    return;
L_089F3F54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(44)));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 64u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(44), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(464)));
    g4 = (g4 | 8192u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(464), g4);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089F3F90:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g7 | 0u);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089F3FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 127u, 0x089D89C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3FC0u) goto L_089F3FC0;
    return;
L_089F3FC0:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x089F3FD0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 218u, 0x08968CF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089F3FD0u) goto L_089F3FD0;
    return;
L_089F3FD0:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    ctx.pc = 0x089F4000u; return;}
}

}

void recomp_unit_0123(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0123_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_123(Runtime &runtime) {
    runtime.register_generated_unit(123u, 0x089F0000u, 16384u, &recomp_unit_0123, &recomp_unit_0123_entry);
    runtime.register_function(0x089F0000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0010u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0018u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0020u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F003Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0050u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F010Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0128u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0140u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F015Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F019Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0214u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0224u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0240u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0258u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0264u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F026Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0324u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0358u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0370u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F037Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0390u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0414u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0424u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0438u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F045Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0470u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0484u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0490u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F049Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F04FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F050Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F051Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F052Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F053Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0548u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F054Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F056Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0580u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0594u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0598u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F060Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0620u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0624u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0638u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F063Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0648u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F065Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F066Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0678u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0690u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0714u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0728u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F073Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0744u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0750u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0764u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0774u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F077Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0780u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0798u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0800u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0804u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F081Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0830u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0844u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F084Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0858u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F086Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F087Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0884u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0888u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0904u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0910u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0918u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F095Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0984u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0ABCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0ADCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0DE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0ED0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F100Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F101Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1038u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1048u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1064u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1070u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1098u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F110Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F112Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F116Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1174u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1180u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F118Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F119Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1200u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1208u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1210u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1214u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1220u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F122Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F123Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F124Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1258u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1260u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1274u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1288u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1290u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F129Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1304u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1318u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F132Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1340u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1354u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F135Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F139Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1404u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1418u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1420u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1428u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1440u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1450u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1478u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1508u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1524u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F152Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1550u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1560u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F157Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1584u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1600u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1644u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1650u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F165Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F166Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1680u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F168Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1698u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F169Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1740u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F175Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1778u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1794u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1808u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1824u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1838u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1854u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1878u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F188Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1894u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F190Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1914u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1938u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1950u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1958u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1964u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F197Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1AA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CCCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1F70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F202Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2060u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2074u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F208Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2104u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F211Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F216Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2190u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F221Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2358u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2360u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2384u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2398u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2404u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2454u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2460u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F246Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F247Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2488u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2494u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2568u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2580u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2590u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2624u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F264Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2750u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2804u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F280Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2814u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F281Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2830u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2880u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F288Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2908u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2914u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2928u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F294Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2958u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F296Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2994u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B3Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B7Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2ED4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3024u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3044u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3048u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3054u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3060u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3104u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3110u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F311Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F314Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3158u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3168u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3170u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3188u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3194u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F320Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3240u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F326Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3274u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F327Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3288u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F330Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F334Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3368u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3374u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3390u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F339Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3404u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F340Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3424u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3434u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F344Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F347Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F348Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F349Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3530u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3560u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F356Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3574u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F357Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3594u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F363Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3648u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3650u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3718u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3728u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3730u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3738u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3750u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3758u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F377Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3790u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F380Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3818u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F382Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3834u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3850u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F385Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F386Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F387Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F388Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3898u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3910u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3944u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3970u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3978u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3998u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C20u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C7Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CCCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E44u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FD0u, &recomp_unit_0123, "recomp_unit_0123");
}
} // namespace psprecomp
