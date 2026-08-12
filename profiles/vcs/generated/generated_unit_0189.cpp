#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0189[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0,
    17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 0, 21, 0,
    22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 49,
    0, 0, 0, 50, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 56, 0, 57, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66,
    0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 78, 79, 0, 80, 0, 0, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 0, 87,
    88, 0, 0, 0, 0, 89, 0, 0, 90, 91, 0, 0, 0, 0, 92, 0, 0, 0, 93, 94, 0, 0, 0, 0, 95, 0, 0, 96, 97, 0, 0, 0,
    0, 98, 0, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 0, 104, 0, 0, 105, 106, 0, 0, 0, 107,
    0, 0, 108, 0, 0, 0, 109, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 134, 0, 135, 0, 0, 136, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0,
    141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 163, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    168, 0, 0, 0, 0, 169, 170, 0, 0, 0, 0, 171, 172, 0, 0, 0, 0, 173, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 176, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0,
    197, 0, 0, 198, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 218, 0, 0, 0,
    219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0,
    0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0,
    232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 0, 261,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0,
    279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0,
    0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 291, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0,
    296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 0, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 314, 315, 0, 0, 0, 316, 317, 0, 0, 318, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 325,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327,
    0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334,
    0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0,
    353, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0,
    0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 364, 365, 0, 0, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0,
    0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 374, 0,
    0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0,
    0, 380, 0, 0, 0, 0, 381, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    385, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0,
    0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0,
    0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0,
    0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 416, 0, 0,
    0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 453, 0, 0, 0, 0, 0, 0, 454, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0,
    0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0,
    487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    497, 0, 498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 509, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0,
    524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535,
    0, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0,
    0, 0, 570, 0, 571, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 577,
};
void recomp_unit_0189_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AF8000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0189[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AF8000;
    case 2u: goto L_08AF8008;
    case 3u: goto L_08AF8014;
    case 4u: goto L_08AF8028;
    case 5u: goto L_08AF803C;
    case 6u: goto L_08AF8048;
    case 7u: goto L_08AF805C;
    case 8u: goto L_08AF806C;
    case 9u: goto L_08AF8074;
    case 10u: goto L_08AF80A0;
    case 11u: goto L_08AF80AC;
    case 12u: goto L_08AF80B8;
    case 13u: goto L_08AF80C0;
    case 14u: goto L_08AF80C8;
    case 15u: goto L_08AF80D8;
    case 16u: goto L_08AF80F0;
    case 17u: goto L_08AF8100;
    case 18u: goto L_08AF810C;
    case 19u: goto L_08AF8160;
    case 20u: goto L_08AF816C;
    case 21u: goto L_08AF8178;
    case 22u: goto L_08AF8180;
    case 23u: goto L_08AF8198;
    case 24u: goto L_08AF81B0;
    case 25u: goto L_08AF81C4;
    case 26u: goto L_08AF81D4;
    case 27u: goto L_08AF81E4;
    case 28u: goto L_08AF81F0;
    case 29u: goto L_08AF8204;
    case 30u: goto L_08AF8214;
    case 31u: goto L_08AF821C;
    case 32u: goto L_08AF822C;
    case 33u: goto L_08AF8238;
    case 34u: goto L_08AF824C;
    case 35u: goto L_08AF8258;
    case 36u: goto L_08AF8264;
    case 37u: goto L_08AF826C;
    case 38u: goto L_08AF8278;
    case 39u: goto L_08AF828C;
    case 40u: goto L_08AF829C;
    case 41u: goto L_08AF82A4;
    case 42u: goto L_08AF82A8;
    case 43u: goto L_08AF82B0;
    case 44u: goto L_08AF82C0;
    case 45u: goto L_08AF82CC;
    case 46u: goto L_08AF82E0;
    case 47u: goto L_08AF82F0;
    case 48u: goto L_08AF82F8;
    case 49u: goto L_08AF82FC;
    case 50u: goto L_08AF830C;
    case 51u: goto L_08AF8314;
    case 52u: goto L_08AF831C;
    case 53u: goto L_08AF8328;
    case 54u: goto L_08AF8338;
    case 55u: goto L_08AF8340;
    case 56u: goto L_08AF8344;
    case 57u: goto L_08AF834C;
    case 58u: goto L_08AF8350;
    case 59u: goto L_08AF8358;
    case 60u: goto L_08AF8360;
    case 61u: goto L_08AF8398;
    case 62u: goto L_08AF83AC;
    case 63u: goto L_08AF83B4;
    case 64u: goto L_08AF83C0;
    case 65u: goto L_08AF83D0;
    case 66u: goto L_08AF83FC;
    case 67u: goto L_08AF8404;
    case 68u: goto L_08AF8410;
    case 69u: goto L_08AF8420;
    case 70u: goto L_08AF8428;
    case 71u: goto L_08AF8430;
    case 72u: goto L_08AF843C;
    case 73u: goto L_08AF8444;
    case 74u: goto L_08AF8454;
    case 75u: goto L_08AF8478;
    case 76u: goto L_08AF8484;
    case 77u: goto L_08AF848C;
    case 78u: goto L_08AF84A8;
    case 79u: goto L_08AF84AC;
    case 80u: goto L_08AF84B4;
    case 81u: goto L_08AF84C4;
    case 82u: goto L_08AF84CC;
    case 83u: goto L_08AF84D4;
    case 84u: goto L_08AF84DC;
    case 85u: goto L_08AF84E4;
    case 86u: goto L_08AF84F0;
    case 87u: goto L_08AF84FC;
    case 88u: goto L_08AF8500;
    case 89u: goto L_08AF8514;
    case 90u: goto L_08AF8520;
    case 91u: goto L_08AF8524;
    case 92u: goto L_08AF8538;
    case 93u: goto L_08AF8548;
    case 94u: goto L_08AF854C;
    case 95u: goto L_08AF8560;
    case 96u: goto L_08AF856C;
    case 97u: goto L_08AF8570;
    case 98u: goto L_08AF8584;
    case 99u: goto L_08AF8590;
    case 100u: goto L_08AF8594;
    case 101u: goto L_08AF85A4;
    case 102u: goto L_08AF85B4;
    case 103u: goto L_08AF85D0;
    case 104u: goto L_08AF85DC;
    case 105u: goto L_08AF85E8;
    case 106u: goto L_08AF85EC;
    case 107u: goto L_08AF85FC;
    case 108u: goto L_08AF8608;
    case 109u: goto L_08AF8618;
    case 110u: goto L_08AF861C;
    case 111u: goto L_08AF862C;
    case 112u: goto L_08AF8638;
    case 113u: goto L_08AF864C;
    case 114u: goto L_08AF8650;
    case 115u: goto L_08AF8668;
    case 116u: goto L_08AF86C0;
    case 117u: goto L_08AF86D8;
    case 118u: goto L_08AF86EC;
    case 119u: goto L_08AF8700;
    case 120u: goto L_08AF8758;
    case 121u: goto L_08AF8780;
    case 122u: goto L_08AF8814;
    case 123u: goto L_08AF8834;
    case 124u: goto L_08AF883C;
    case 125u: goto L_08AF8844;
    case 126u: goto L_08AF884C;
    case 127u: goto L_08AF8854;
    case 128u: goto L_08AF8858;
    case 129u: goto L_08AF8874;
    case 130u: goto L_08AF888C;
    case 131u: goto L_08AF88A0;
    case 132u: goto L_08AF88B8;
    case 133u: goto L_08AF88D0;
    case 134u: goto L_08AF88D4;
    case 135u: goto L_08AF88DC;
    case 136u: goto L_08AF88E8;
    case 137u: goto L_08AF88EC;
    case 138u: goto L_08AF8918;
    case 139u: goto L_08AF8924;
    case 140u: goto L_08AF8978;
    case 141u: goto L_08AF8980;
    case 142u: goto L_08AF8990;
    case 143u: goto L_08AF89A8;
    case 144u: goto L_08AF89B0;
    case 145u: goto L_08AF89E0;
    case 146u: goto L_08AF8B48;
    case 147u: goto L_08AF8BBC;
    case 148u: goto L_08AF8BC8;
    case 149u: goto L_08AF8BE8;
    case 150u: goto L_08AF8C14;
    case 151u: goto L_08AF8C40;
    case 152u: goto L_08AF8C5C;
    case 153u: goto L_08AF8C70;
    case 154u: goto L_08AF8C80;
    case 155u: goto L_08AF8C94;
    case 156u: goto L_08AF8CA0;
    case 157u: goto L_08AF8CAC;
    case 158u: goto L_08AF8CC8;
    case 159u: goto L_08AF8D04;
    case 160u: goto L_08AF8D18;
    case 161u: goto L_08AF8D2C;
    case 162u: goto L_08AF8D40;
    case 163u: goto L_08AF8D4C;
    case 164u: goto L_08AF8D50;
    case 165u: goto L_08AF8D5C;
    case 166u: goto L_08AF8D68;
    case 167u: goto L_08AF8D7C;
    case 168u: goto L_08AF8D80;
    case 169u: goto L_08AF8D94;
    case 170u: goto L_08AF8D98;
    case 171u: goto L_08AF8DAC;
    case 172u: goto L_08AF8DB0;
    case 173u: goto L_08AF8DC4;
    case 174u: goto L_08AF8DC8;
    case 175u: goto L_08AF8DFC;
    case 176u: goto L_08AF8E04;
    case 177u: goto L_08AF8E0C;
    case 178u: goto L_08AF8E20;
    case 179u: goto L_08AF8E28;
    case 180u: goto L_08AF8E30;
    case 181u: goto L_08AF8E38;
    case 182u: goto L_08AF8E44;
    case 183u: goto L_08AF8ED0;
    case 184u: goto L_08AF8EE4;
    case 185u: goto L_08AF8F14;
    case 186u: goto L_08AF8F28;
    case 187u: goto L_08AF8F58;
    case 188u: goto L_08AF8F6C;
    case 189u: goto L_08AF8F9C;
    case 190u: goto L_08AF8FB0;
    case 191u: goto L_08AF8FDC;
    case 192u: goto L_08AF8FE8;
    case 193u: goto L_08AF905C;
    case 194u: goto L_08AF9064;
    case 195u: goto L_08AF9070;
    case 196u: goto L_08AF9078;
    case 197u: goto L_08AF9080;
    case 198u: goto L_08AF908C;
    case 199u: goto L_08AF9094;
    case 200u: goto L_08AF909C;
    case 201u: goto L_08AF90DC;
    case 202u: goto L_08AF9114;
    case 203u: goto L_08AF9130;
    case 204u: goto L_08AF9188;
    case 205u: goto L_08AF9198;
    case 206u: goto L_08AF91C8;
    case 207u: goto L_08AF91D8;
    case 208u: goto L_08AF9204;
    case 209u: goto L_08AF9214;
    case 210u: goto L_08AF9240;
    case 211u: goto L_08AF9250;
    case 212u: goto L_08AF926C;
    case 213u: goto L_08AF9280;
    case 214u: goto L_08AF9290;
    case 215u: goto L_08AF92A0;
    case 216u: goto L_08AF92B4;
    case 217u: goto L_08AF92EC;
    case 218u: goto L_08AF92F0;
    case 219u: goto L_08AF9300;
    case 220u: goto L_08AF9310;
    case 221u: goto L_08AF9334;
    case 222u: goto L_08AF9348;
    case 223u: goto L_08AF9350;
    case 224u: goto L_08AF9378;
    case 225u: goto L_08AF9390;
    case 226u: goto L_08AF9398;
    case 227u: goto L_08AF9430;
    case 228u: goto L_08AF9438;
    case 229u: goto L_08AF9498;
    case 230u: goto L_08AF94C0;
    case 231u: goto L_08AF94F8;
    case 232u: goto L_08AF9500;
    case 233u: goto L_08AF9508;
    case 234u: goto L_08AF9510;
    case 235u: goto L_08AF951C;
    case 236u: goto L_08AF952C;
    case 237u: goto L_08AF9538;
    case 238u: goto L_08AF9540;
    case 239u: goto L_08AF954C;
    case 240u: goto L_08AF9564;
    case 241u: goto L_08AF9570;
    case 242u: goto L_08AF9588;
    case 243u: goto L_08AF95D4;
    case 244u: goto L_08AF95EC;
    case 245u: goto L_08AF9604;
    case 246u: goto L_08AF962C;
    case 247u: goto L_08AF9640;
    case 248u: goto L_08AF964C;
    case 249u: goto L_08AF965C;
    case 250u: goto L_08AF96BC;
    case 251u: goto L_08AF96E8;
    case 252u: goto L_08AF96FC;
    case 253u: goto L_08AF9738;
    case 254u: goto L_08AF9740;
    case 255u: goto L_08AF9750;
    case 256u: goto L_08AF976C;
    case 257u: goto L_08AF97A8;
    case 258u: goto L_08AF97C0;
    case 259u: goto L_08AF97DC;
    case 260u: goto L_08AF97E4;
    case 261u: goto L_08AF97FC;
    case 262u: goto L_08AF9848;
    case 263u: goto L_08AF9860;
    case 264u: goto L_08AF9878;
    case 265u: goto L_08AF98A4;
    case 266u: goto L_08AF98B8;
    case 267u: goto L_08AF98C4;
    case 268u: goto L_08AF98D4;
    case 269u: goto L_08AF992C;
    case 270u: goto L_08AF9934;
    case 271u: goto L_08AF9940;
    case 272u: goto L_08AF9948;
    case 273u: goto L_08AF9974;
    case 274u: goto L_08AF9994;
    case 275u: goto L_08AF99C0;
    case 276u: goto L_08AF99C8;
    case 277u: goto L_08AF99D8;
    case 278u: goto L_08AF99F8;
    case 279u: goto L_08AF9A00;
    case 280u: goto L_08AF9A34;
    case 281u: goto L_08AF9A40;
    case 282u: goto L_08AF9A6C;
    case 283u: goto L_08AF9A78;
    case 284u: goto L_08AF9A84;
    case 285u: goto L_08AF9A98;
    case 286u: goto L_08AF9AA4;
    case 287u: goto L_08AF9AAC;
    case 288u: goto L_08AF9AB4;
    case 289u: goto L_08AF9ABC;
    case 290u: goto L_08AF9AC4;
    case 291u: goto L_08AF9AC8;
    case 292u: goto L_08AF9AD0;
    case 293u: goto L_08AF9AE8;
    case 294u: goto L_08AF9AF0;
    case 295u: goto L_08AF9AF8;
    case 296u: goto L_08AF9B00;
    case 297u: goto L_08AF9B08;
    case 298u: goto L_08AF9B10;
    case 299u: goto L_08AF9B18;
    case 300u: goto L_08AF9B20;
    case 301u: goto L_08AF9B28;
    case 302u: goto L_08AF9B38;
    case 303u: goto L_08AF9B40;
    case 304u: goto L_08AF9B48;
    case 305u: goto L_08AF9B50;
    case 306u: goto L_08AF9B58;
    case 307u: goto L_08AF9B60;
    case 308u: goto L_08AF9B70;
    case 309u: goto L_08AF9B84;
    case 310u: goto L_08AF9B98;
    case 311u: goto L_08AF9BB0;
    case 312u: goto L_08AF9BBC;
    case 313u: goto L_08AF9BD0;
    case 314u: goto L_08AF9BD4;
    case 315u: goto L_08AF9BD8;
    case 316u: goto L_08AF9BE8;
    case 317u: goto L_08AF9BEC;
    case 318u: goto L_08AF9BF8;
    case 319u: goto L_08AF9C00;
    case 320u: goto L_08AF9C54;
    case 321u: goto L_08AF9C5C;
    case 322u: goto L_08AF9C64;
    case 323u: goto L_08AF9C6C;
    case 324u: goto L_08AF9C74;
    case 325u: goto L_08AF9C7C;
    case 326u: goto L_08AF9CD0;
    case 327u: goto L_08AF9F7C;
    case 328u: goto L_08AF9F88;
    case 329u: goto L_08AF9F94;
    case 330u: goto L_08AF9FA0;
    case 331u: goto L_08AF9FD4;
    case 332u: goto L_08AF9FDC;
    case 333u: goto L_08AF9FF4;
    case 334u: goto L_08AF9FFC;
    case 335u: goto L_08AFA008;
    case 336u: goto L_08AFA030;
    case 337u: goto L_08AFA098;
    case 338u: goto L_08AFA0A4;
    case 339u: goto L_08AFA0AC;
    case 340u: goto L_08AFA0B4;
    case 341u: goto L_08AFA0DC;
    case 342u: goto L_08AFA144;
    case 343u: goto L_08AFA14C;
    case 344u: goto L_08AFA154;
    case 345u: goto L_08AFA194;
    case 346u: goto L_08AFA19C;
    case 347u: goto L_08AFA1A4;
    case 348u: goto L_08AFA1AC;
    case 349u: goto L_08AFA1B8;
    case 350u: goto L_08AFA1C0;
    case 351u: goto L_08AFA1D0;
    case 352u: goto L_08AFA1F0;
    case 353u: goto L_08AFA200;
    case 354u: goto L_08AFA220;
    case 355u: goto L_08AFA238;
    case 356u: goto L_08AFA244;
    case 357u: goto L_08AFA258;
    case 358u: goto L_08AFA264;
    case 359u: goto L_08AFA274;
    case 360u: goto L_08AFA288;
    case 361u: goto L_08AFA290;
    case 362u: goto L_08AFA298;
    case 363u: goto L_08AFA2AC;
    case 364u: goto L_08AFA2B4;
    case 365u: goto L_08AFA2B8;
    case 366u: goto L_08AFA2CC;
    case 367u: goto L_08AFA2DC;
    case 368u: goto L_08AFA2F8;
    case 369u: goto L_08AFA308;
    case 370u: goto L_08AFA338;
    case 371u: goto L_08AFA3CC;
    case 372u: goto L_08AFA3D4;
    case 373u: goto L_08AFA3EC;
    case 374u: goto L_08AFA3F8;
    case 375u: goto L_08AFA410;
    case 376u: goto L_08AFA448;
    case 377u: goto L_08AFA454;
    case 378u: goto L_08AFA468;
    case 379u: goto L_08AFA474;
    case 380u: goto L_08AFA484;
    case 381u: goto L_08AFA498;
    case 382u: goto L_08AFA49C;
    case 383u: goto L_08AFA4B4;
    case 384u: goto L_08AFA674;
    case 385u: goto L_08AFA680;
    case 386u: goto L_08AFA68C;
    case 387u: goto L_08AFA698;
    case 388u: goto L_08AFA710;
    case 389u: goto L_08AFA724;
    case 390u: goto L_08AFA72C;
    case 391u: goto L_08AFA740;
    case 392u: goto L_08AFA748;
    case 393u: goto L_08AFA758;
    case 394u: goto L_08AFA760;
    case 395u: goto L_08AFA770;
    case 396u: goto L_08AFA784;
    case 397u: goto L_08AFA794;
    case 398u: goto L_08AFA7A8;
    case 399u: goto L_08AFA7BC;
    case 400u: goto L_08AFA7D0;
    case 401u: goto L_08AFA7E0;
    case 402u: goto L_08AFA7F4;
    case 403u: goto L_08AFA808;
    case 404u: goto L_08AFA81C;
    case 405u: goto L_08AFA85C;
    case 406u: goto L_08AFA870;
    case 407u: goto L_08AFA8A8;
    case 408u: goto L_08AFA8CC;
    case 409u: goto L_08AFA8E8;
    case 410u: goto L_08AFA904;
    case 411u: goto L_08AFA928;
    case 412u: goto L_08AFA92C;
    case 413u: goto L_08AFA988;
    case 414u: goto L_08AFA9E4;
    case 415u: goto L_08AFA9EC;
    case 416u: goto L_08AFA9F4;
    case 417u: goto L_08AFAA14;
    case 418u: goto L_08AFAA30;
    case 419u: goto L_08AFAA40;
    case 420u: goto L_08AFAA54;
    case 421u: goto L_08AFAA80;
    case 422u: goto L_08AFAA9C;
    case 423u: goto L_08AFAAF0;
    case 424u: goto L_08AFAB44;
    case 425u: goto L_08AFAB4C;
    case 426u: goto L_08AFAB54;
    case 427u: goto L_08AFAB68;
    case 428u: goto L_08AFAB84;
    case 429u: goto L_08AFABB4;
    case 430u: goto L_08AFABE8;
    case 431u: goto L_08AFABF0;
    case 432u: goto L_08AFAC30;
    case 433u: goto L_08AFAC50;
    case 434u: goto L_08AFAC8C;
    case 435u: goto L_08AFACC0;
    case 436u: goto L_08AFACC8;
    case 437u: goto L_08AFAD08;
    case 438u: goto L_08AFAD28;
    case 439u: goto L_08AFAD64;
    case 440u: goto L_08AFAD98;
    case 441u: goto L_08AFADA0;
    case 442u: goto L_08AFADE0;
    case 443u: goto L_08AFAE00;
    case 444u: goto L_08AFAE40;
    case 445u: goto L_08AFAE74;
    case 446u: goto L_08AFAE7C;
    case 447u: goto L_08AFAEB8;
    case 448u: goto L_08AFAEC0;
    case 449u: goto L_08AFAEE0;
    case 450u: goto L_08AFAF1C;
    case 451u: goto L_08AFAF24;
    case 452u: goto L_08AFAF34;
    case 453u: goto L_08AFAF38;
    case 454u: goto L_08AFAF54;
    case 455u: goto L_08AFAF58;
    case 456u: goto L_08AFAF84;
    case 457u: goto L_08AFAFC0;
    case 458u: goto L_08AFAFCC;
    case 459u: goto L_08AFAFD4;
    case 460u: goto L_08AFAFDC;
    case 461u: goto L_08AFB024;
    case 462u: goto L_08AFB08C;
    case 463u: goto L_08AFB09C;
    case 464u: goto L_08AFB0A4;
    case 465u: goto L_08AFB0B0;
    case 466u: goto L_08AFB0D4;
    case 467u: goto L_08AFB19C;
    case 468u: goto L_08AFB254;
    case 469u: goto L_08AFB424;
    case 470u: goto L_08AFB46C;
    case 471u: goto L_08AFB474;
    case 472u: goto L_08AFB484;
    case 473u: goto L_08AFB4E0;
    case 474u: goto L_08AFB4E8;
    case 475u: goto L_08AFB4F8;
    case 476u: goto L_08AFB504;
    case 477u: goto L_08AFB548;
    case 478u: goto L_08AFB558;
    case 479u: goto L_08AFB560;
    case 480u: goto L_08AFB568;
    case 481u: goto L_08AFB574;
    case 482u: goto L_08AFB5A4;
    case 483u: goto L_08AFB5BC;
    case 484u: goto L_08AFB5C4;
    case 485u: goto L_08AFB5D8;
    case 486u: goto L_08AFB5F0;
    case 487u: goto L_08AFB600;
    case 488u: goto L_08AFB630;
    case 489u: goto L_08AFB638;
    case 490u: goto L_08AFB650;
    case 491u: goto L_08AFB678;
    case 492u: goto L_08AFB68C;
    case 493u: goto L_08AFB694;
    case 494u: goto L_08AFB6B8;
    case 495u: goto L_08AFB6D0;
    case 496u: goto L_08AFB770;
    case 497u: goto L_08AFB780;
    case 498u: goto L_08AFB788;
    case 499u: goto L_08AFB794;
    case 500u: goto L_08AFB7D0;
    case 501u: goto L_08AFB838;
    case 502u: goto L_08AFB850;
    case 503u: goto L_08AFB858;
    case 504u: goto L_08AFB86C;
    case 505u: goto L_08AFB888;
    case 506u: goto L_08AFB89C;
    case 507u: goto L_08AFB8D8;
    case 508u: goto L_08AFB8E0;
    case 509u: goto L_08AFB8F8;
    case 510u: goto L_08AFB920;
    case 511u: goto L_08AFB934;
    case 512u: goto L_08AFB93C;
    case 513u: goto L_08AFB960;
    case 514u: goto L_08AFB978;
    case 515u: goto L_08AFB9E4;
    case 516u: goto L_08AFBA34;
    case 517u: goto L_08AFBA44;
    case 518u: goto L_08AFBA80;
    case 519u: goto L_08AFBAC0;
    case 520u: goto L_08AFBAC8;
    case 521u: goto L_08AFBAD0;
    case 522u: goto L_08AFBAD8;
    case 523u: goto L_08AFBAF4;
    case 524u: goto L_08AFBB00;
    case 525u: goto L_08AFBB08;
    case 526u: goto L_08AFBB10;
    case 527u: goto L_08AFBB18;
    case 528u: goto L_08AFBB20;
    case 529u: goto L_08AFBB2C;
    case 530u: goto L_08AFBB34;
    case 531u: goto L_08AFBB3C;
    case 532u: goto L_08AFBB44;
    case 533u: goto L_08AFBB4C;
    case 534u: goto L_08AFBB68;
    case 535u: goto L_08AFBB7C;
    case 536u: goto L_08AFBB88;
    case 537u: goto L_08AFBB94;
    case 538u: goto L_08AFBB9C;
    case 539u: goto L_08AFBBAC;
    case 540u: goto L_08AFBBB8;
    case 541u: goto L_08AFBBD8;
    case 542u: goto L_08AFBBE0;
    case 543u: goto L_08AFBBF4;
    case 544u: goto L_08AFBC28;
    case 545u: goto L_08AFBC48;
    case 546u: goto L_08AFBC54;
    case 547u: goto L_08AFBC68;
    case 548u: goto L_08AFBC98;
    case 549u: goto L_08AFBCAC;
    case 550u: goto L_08AFBCD8;
    case 551u: goto L_08AFBD00;
    case 552u: goto L_08AFBD34;
    case 553u: goto L_08AFBD3C;
    case 554u: goto L_08AFBD50;
    case 555u: goto L_08AFBD94;
    case 556u: goto L_08AFBDA8;
    case 557u: goto L_08AFBDE8;
    case 558u: goto L_08AFBE10;
    case 559u: goto L_08AFBE44;
    case 560u: goto L_08AFBE4C;
    case 561u: goto L_08AFBE60;
    case 562u: goto L_08AFBE90;
    case 563u: goto L_08AFBEB8;
    case 564u: goto L_08AFBEEC;
    case 565u: goto L_08AFBF04;
    case 566u: goto L_08AFBF40;
    case 567u: goto L_08AFBF48;
    case 568u: goto L_08AFBF68;
    case 569u: goto L_08AFBF70;
    case 570u: goto L_08AFBF88;
    case 571u: goto L_08AFBF90;
    case 572u: goto L_08AFBF98;
    case 573u: goto L_08AFBFA0;
    case 574u: goto L_08AFBFB0;
    case 575u: goto L_08AFBFDC;
    case 576u: goto L_08AFBFF0;
    case 577u: goto L_08AFBFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AF8000:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08AF8014;
      }
      goto L_08AF8008;
    }
L_08AF8008:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    hot_regs.g31 = (0x08AF8014u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8014u) goto L_08AF8014;
    return;
L_08AF8014:
{
    std::uint32_t g17 = ctx.gpr[17];
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    g17 = (hot_regs.g4 + g17);
    { const bool branch_taken = g17 == ctx.gpr[18];
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AF80A0;
      }
      goto L_08AF8028;
    }
}
L_08AF8028:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    g4 = (g4 - ctx.gpr[18]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g6 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF8048;
      }
      goto L_08AF803C;
    }
}
L_08AF803C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AF8048u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8048u) goto L_08AF8048;
    return;
L_08AF8048:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (ctx.gpr[18] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF80A0;
      }
      goto L_08AF805C;
    }
}
L_08AF805C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    g5 = (g5 - hot_regs.g4);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF8074;
      }
      goto L_08AF806C;
    }
}
L_08AF806C:
    hot_regs.g31 = (0x08AF8074u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8074u) goto L_08AF8074;
    return;
L_08AF8074:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(77), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(77));
    hot_regs.g31 = (0x08AF80A0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 449u, 0x08AF65F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF80A0u) goto L_08AF80A0;
    return;
L_08AF80A0:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g31 = (0x08AF80ACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 143u, 0x08B6CC70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF80ACu) goto L_08AF80AC;
    return;
L_08AF80AC:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF80D8;
      }
      goto L_08AF80B8;
    }
L_08AF80B8:
    hot_regs.g31 = (0x08AF80C0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF80C0u) goto L_08AF80C0;
    return;
L_08AF80C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF80D8;
      }
      goto L_08AF80C8;
    }
L_08AF80C8:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(632));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AF80D8u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 650u, 0x08B66AF0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF80D8u) goto L_08AF80D8;
    return;
L_08AF80D8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF80F0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AF8100u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1324), hot_regs.g5);
    hot_regs.g29 = g29;
    goto L_08AF8398;
}
L_08AF8100:
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
L_08AF810C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    g16 = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (g9 & 255u);
    g7 = (g7 - ctx.gpr[10]);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 2u));
    g9 = (g9 >> 30u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g17);
    g17 = (g7 + g9);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 2u));
    g7 = (g17 < ctx.gpr[8] ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AF816C;
      }
      goto L_08AF8160;
    }
}
L_08AF8160:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_08AF8178;
      }
      goto L_08AF816C;
    }
L_08AF816C:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_08AF8178;
}
L_08AF8178:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AF81D4;
      }
      goto L_08AF8180;
    }
L_08AF8180:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x08AF8198u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8198u) goto L_08AF8198;
    return;
L_08AF8198:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AF81D4;
      }
      goto L_08AF81B0;
    }
}
L_08AF81B0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x08AF81C4u);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF81C4u) goto L_08AF81C4;
    return;
L_08AF81C4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_08AF81D4;
}
L_08AF81D4:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF821C;
      }
      goto L_08AF81E4;
    }
L_08AF81E4:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
        goto L_08AF8214;
    }
    goto L_08AF81F0;
L_08AF81F0:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g8 = (g9 | 0u);
    if (g8 == 0u) {
    g7 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08AF8214;
    }
    goto L_08AF8204;
}
L_08AF8204:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = g9;
    goto L_08AF8214;
}
L_08AF8214:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF81E4;
      }
      goto L_08AF821C;
    }
L_08AF821C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AF8264;
      }
      goto L_08AF822C;
    }
L_08AF822C:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF8258;
      }
      goto L_08AF8238;
    }
L_08AF8238:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g7 + static_cast<std::uint32_t>(0), g6);
    g7 = (g6 | 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AF8258;
      }
      goto L_08AF824C;
    }
}
L_08AF824C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(0), g6);
    hot_regs.g6 = g6;
    goto L_08AF8258;
}
L_08AF8258:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AF82A8;
      }
      goto L_08AF8264;
    }
L_08AF8264:
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF82A4;
      }
      goto L_08AF826C;
    }
L_08AF826C:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_08AF829C;
    }
    goto L_08AF8278;
L_08AF8278:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g8 + static_cast<std::uint32_t>(0), g9);
    g8 = (g9 | 0u);
    if (g8 == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08AF829C;
    }
    goto L_08AF828C;
}
L_08AF828C:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g9 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = g9;
    goto L_08AF829C;
}
L_08AF829C:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF826C;
      }
      goto L_08AF82A4;
    }
L_08AF82A4:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AF82A8;
L_08AF82A8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF82FC;
      }
      goto L_08AF82B0;
    }
L_08AF82B0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (ctx.gpr[20] | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF82FC;
      }
      goto L_08AF82C0;
    }
}
L_08AF82C0:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_08AF82F0;
    }
    goto L_08AF82CC;
L_08AF82CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g7);
    g6 = (g7 | 0u);
    if (g6 == 0u) {
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
        goto L_08AF82F0;
    }
    goto L_08AF82E0;
}
L_08AF82E0:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g7 = (g7 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), g7);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    goto L_08AF82F0;
}
L_08AF82F0:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AF82C0;
      }
      goto L_08AF82F8;
    }
L_08AF82F8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AF82FC;
L_08AF82FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[20];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AF8350;
      }
      goto L_08AF830C;
    }
L_08AF830C:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08AF8344;
    }
    goto L_08AF8314;
}
L_08AF8314:
{
    std::uint32_t g21 = ctx.gpr[21];
    if (g21 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08AF8344;
    }
    goto L_08AF831C;
}
L_08AF831C:
{
    std::uint32_t g21 = ctx.gpr[21];
    hot_regs.g4 = (aot_mem.aot_load32(g21 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g4 == 0u) {
    g21 = (g21 + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = g21;
        goto L_08AF8344;
    }
    goto L_08AF8328;
}
L_08AF8328:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF8340;
      }
      goto L_08AF8338;
    }
}
L_08AF8338:
    hot_regs.g31 = (0x08AF8340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8340u) goto L_08AF8340;
    return;
L_08AF8340:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    goto L_08AF8344;
L_08AF8344:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AF830C;
      }
      goto L_08AF834C;
    }
L_08AF834C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF8350;
L_08AF8350:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF8360;
      }
      goto L_08AF8358;
    }
L_08AF8358:
    hot_regs.g31 = (0x08AF8360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8360u) goto L_08AF8360;
    return;
L_08AF8360:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g18);
    g4 = (g18 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF8398:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08AF83ACu);
    // nop
    hot_regs.g29 = g29;
    goto L_08AF85B4;
}
L_08AF83AC:
    hot_regs.g31 = (0x08AF83B4u);
    // nop
    goto L_08AF8E04;
L_08AF83B4:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08AF83C0u);
    hot_regs.g4 = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF83C0u) goto L_08AF83C0;
    return;
L_08AF83C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(29232));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF83FC;
      }
      goto L_08AF83D0;
    }
}
L_08AF83D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2235u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-27964));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g6);
    g6 = (2235u << 16u);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-27932));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g6);
    g6 = (2224u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-25904));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g6);
    ctx.gpr[16] = (g5 | 0u);
    hot_regs.g6 = g6;
    goto L_08AF83FC;
}
L_08AF83FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF8410;
      }
      goto L_08AF8404;
    }
L_08AF8404:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    goto L_08AF8410;
}
L_08AF8410:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(308)));
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = g6 == g5;
    g5 = (g6 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AF8454;
      }
      goto L_08AF8420;
    }
}
L_08AF8420:
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AF8444;
      }
      goto L_08AF8428;
    }
L_08AF8428:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AF843C;
      }
      goto L_08AF8430;
    }
L_08AF8430:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    goto L_08AF843C;
}
L_08AF843C:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(308)));
    goto L_08AF8444;
L_08AF8444:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(308), hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(301)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF8484;
      }
      goto L_08AF8454;
    }
}
L_08AF8454:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(304));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (g29 | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x08AF8478u);
    ctx.gpr[9] = (0u | 1u);
    hot_regs.g4 = g4;
    goto L_08AF810C;
}
L_08AF8478:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(301)));
    hot_regs.g4 = g4;
    goto L_08AF8484;
}
L_08AF8484:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF84AC;
      }
      goto L_08AF848C;
    }
L_08AF848C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08AF84A8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84A8u) goto L_08AF84A8;
    return;
L_08AF84A8:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_08AF84AC;
L_08AF84AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF84CC;
      }
      goto L_08AF84B4;
    }
L_08AF84B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF84CC;
      }
      goto L_08AF84C4;
    }
}
L_08AF84C4:
    hot_regs.g31 = (0x08AF84CCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84CCu) goto L_08AF84CC;
    return;
L_08AF84CC:
    hot_regs.g31 = (0x08AF84D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84D4u) goto L_08AF84D4;
    return;
L_08AF84D4:
    hot_regs.g31 = (0x08AF84DCu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1420));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84DCu) goto L_08AF84DC;
    return;
L_08AF84DC:
    hot_regs.g31 = (0x08AF84E4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84E4u) goto L_08AF84E4;
    return;
L_08AF84E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1364)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF8500;
      }
      goto L_08AF84F0;
    }
L_08AF84F0:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1432));
    hot_regs.g31 = (0x08AF84FCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF84FCu) goto L_08AF84FC;
    return;
L_08AF84FC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1364), hot_regs.g2);
    goto L_08AF8500;
L_08AF8500:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1364)));
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1372)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(1360), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF8524;
      }
      goto L_08AF8514;
    }
}
L_08AF8514:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1448));
    hot_regs.g31 = (0x08AF8520u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8520u) goto L_08AF8520;
    return;
L_08AF8520:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1372), hot_regs.g2);
    goto L_08AF8524;
L_08AF8524:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1372)));
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1380)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(1368), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF854C;
      }
      goto L_08AF8538;
    }
}
L_08AF8538:
    hot_regs.g4 = (2232u << 16u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AF8548u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(30456));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8548u) goto L_08AF8548;
    return;
L_08AF8548:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1380), hot_regs.g2);
    goto L_08AF854C;
L_08AF854C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1380)));
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1388)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(1376), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF8570;
      }
      goto L_08AF8560;
    }
}
L_08AF8560:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1456));
    hot_regs.g31 = (0x08AF856Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF856Cu) goto L_08AF856C;
    return;
L_08AF856C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1388), hot_regs.g2);
    goto L_08AF8570;
L_08AF8570:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1388)));
    hot_regs.g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1396)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(1384), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF8594;
      }
      goto L_08AF8584;
    }
}
L_08AF8584:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(1468));
    hot_regs.g31 = (0x08AF8590u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8590u) goto L_08AF8590;
    return;
L_08AF8590:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1396), hot_regs.g2);
    goto L_08AF8594;
L_08AF8594:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1396)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08AF85A4u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1392), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF85A4u) goto L_08AF85A4;
    return;
L_08AF85A4:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08AF85B4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AF85D0u);
    hot_regs.g4 = (0u | 30384u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF85D0u) goto L_08AF85D0;
    return;
L_08AF85D0:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g5 = (16896u << 16u);
      if (branch_taken) {
          goto L_08AF85EC;
      }
      goto L_08AF85DC;
    }
L_08AF85DC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AF85E8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 174u, 0x08A852A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF85E8u) goto L_08AF85E8;
    return;
L_08AF85E8:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AF85EC;
L_08AF85EC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1340), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x08AF85FCu);
    hot_regs.g4 = (0u | 17888u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF85FCu) goto L_08AF85FC;
    return;
L_08AF85FC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (16896u << 16u);
      if (branch_taken) {
          goto L_08AF861C;
      }
      goto L_08AF8608;
    }
L_08AF8608:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AF8618u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 757u, 0x088176C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8618u) goto L_08AF8618;
    return;
L_08AF8618:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08AF861C;
L_08AF861C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1344), ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08AF862Cu);
    hot_regs.g4 = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF862Cu) goto L_08AF862C;
    return;
L_08AF862C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g5 = (17024u << 16u);
      if (branch_taken) {
          goto L_08AF8650;
      }
      goto L_08AF8638;
    }
L_08AF8638:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (16896u << 16u);
    hot_regs.g31 = (0x08AF864Cu);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F1EECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF864Cu) goto L_08AF864C;
    return;
L_08AF864C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AF8650;
L_08AF8650:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1348), ctx.gpr[17]);
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
L_08AF8668:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (g5 & 255u);
    g5 = (16576u << 16u);
    f15 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    g4 = (50454u << 16u);
    f15 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((hot_regs.f12 < f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86C0;
    }
}
}
L_08AF86C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (50426u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86D8;
    }
}
L_08AF86D8:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (17658u << 16u);
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF86EC;
    }
L_08AF86EC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (17664u << 16u);
      if (branch_taken) {
          goto L_08AF884C;
      }
      goto L_08AF8700;
    }
L_08AF8700:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(g4);
    g5 = (15616u << 16u);
    f13 = ctx.fpr[24] + f12;
    g4 = (17352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f15 = std::bit_cast<float>(g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    f13 = f13 + hot_regs.f14;
    f12 = hot_regs.f22 + f12;
    g5 = (0u | 128u);
    { const float fs = f13; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g17 = (std::bit_cast<std::uint32_t>(f13));
    g17 = (g17 << 7u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + g17);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4108)));
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AF8844;
      }
      goto L_08AF8758;
    }
}
}
L_08AF8758:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08AF8780u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 801u, 0x08817F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8780u) goto L_08AF8780;
    return;
L_08AF8780:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (g4 + ctx.gpr[17]);
    g5 = (g5 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(4108)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(g5);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    f16 = f13 - f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    f13 = f13 - f14;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    { const float fs = f16; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    { const float fs = f13; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f16; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f17 + f13;
    { const float fs = f12; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 + f16;
    f12 = f13 + f12;
    f12 = f12 + f15;
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_08AF883C;
      }
      goto L_08AF8814;
    }
}
}
L_08AF8814:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (16968u << 16u);
    f12 = f12 - hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AF8854;
      }
      goto L_08AF8834;
    }
}
L_08AF8834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF8858;
      }
      goto L_08AF883C;
    }
L_08AF883C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF8844;
    }
L_08AF8844:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF884C;
    }
L_08AF884C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF8854;
    }
L_08AF8854:
    hot_regs.g4 = (0u | 1u);
    goto L_08AF8858;
L_08AF8858:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16413u << 16u);
    g5 = (g5 | 16253u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF8874;
    }
}
L_08AF8874:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (50004u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g5 = (49884u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF888C;
    }
}
L_08AF888C:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (50342u << 16u);
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88A0;
    }
L_08AF88A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 16384u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g5 = (50357u << 16u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88B8;
    }
}
L_08AF88B8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 | 24576u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF88D4;
      }
      goto L_08AF88D0;
    }
}
L_08AF88D0:
    hot_regs.g4 = (0u | 1u);
    goto L_08AF88D4;
L_08AF88D4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF88E8;
      }
      goto L_08AF88DC;
    }
L_08AF88DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF88EC;
      }
      goto L_08AF88E8;
    }
L_08AF88E8:
    hot_regs.g2 = (0u | 1u);
    goto L_08AF88EC;
L_08AF88EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF8918:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (17664u << 16u);
      if (branch_taken) {
          goto L_08AF8980;
      }
      goto L_08AF8924;
    }
L_08AF8924:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    f14 = std::bit_cast<float>(g5);
    f12 = f12 + f14;
    g5 = (17352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    g5 = (15616u << 16u);
    f13 = f13 + f14;
    f16 = std::bit_cast<float>(g5);
    f12 = f12 + hot_regs.f15;
    hot_regs.g7 = (0u | 128u);
    { const float fs = f13; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 << 7u);
    g5 = (hot_regs.g6 + g5);
    g5 = (g5 + ctx.gpr[8]);
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(4108)));
    { const bool branch_taken = g5 != hot_regs.g7;
    // nop
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08AF8990;
      }
      goto L_08AF8978;
    }
}
}
L_08AF8978:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AF89A8;
      }
      goto L_08AF8980;
    }
L_08AF8980:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g2 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08AF89A8;
      }
      goto L_08AF8990;
    }
L_08AF8990:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g5 = (g5 << 2u);
    g5 = (g6 + g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g2 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08AF89A8;
}
L_08AF89A8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF89B0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.f14 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    hot_regs.g31 = (0x08AF89E0u);
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 801u, 0x08817F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF89E0u) goto L_08AF89E0;
    return;
L_08AF89E0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[8] = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = hot_regs.f12 - hot_regs.f14;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
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
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f15 = hot_regs.f12 - hot_regs.f15;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
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
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[16];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(212)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8B48:
{
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g4 = (14851u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    g4 = (g4 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f26));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    g5 = (14877u << 16u);
    g5 = (g5 | 18770u);
    g4 = (g4 & 4095u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f24));
    hot_regs.f14 = std::bit_cast<float>(g5);
    f24 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g5 = (16256u << 16u);
    f26 = f26 + hot_regs.f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f24 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08AF8BC8;
      }
      goto L_08AF8BBC;
    }
}
}
L_08AF8BBC:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[24] = ctx.fpr[24] + hot_regs.f12;
    goto L_08AF8BC8;
L_08AF8BC8:
{
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15049u << 16u);
    g4 = (g4 | 3670u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8360)));
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7713)));
    g4 = (g4 | hot_regs.g5);
    { const bool branch_taken = g4 != 0u;
    { const float fs = f24; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08AF8D50;
      }
      goto L_08AF8BE8;
    }
}
}
L_08AF8BE8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1404), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16268u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08AF8C14u);
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C14u) goto L_08AF8C14;
    return;
L_08AF8C14:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08AF8C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C40u) goto L_08AF8C40;
    return;
L_08AF8C40:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1484)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1480)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AF8C5Cu);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C5Cu) goto L_08AF8C5C;
    return;
L_08AF8C5C:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8C70u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C70u) goto L_08AF8C70;
    return;
L_08AF8C70:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08AF8C80u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1412)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C80u) goto L_08AF8C80;
    return;
L_08AF8C80:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8C94u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8C94u) goto L_08AF8C94;
    return;
L_08AF8C94:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8CA0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8CA0u) goto L_08AF8CA0;
    return;
L_08AF8CA0:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08AF8CACu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1416)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8CACu) goto L_08AF8CAC;
    return;
L_08AF8CAC:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (16281u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08AF8CC8u);
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8CC8u) goto L_08AF8CC8;
    return;
L_08AF8CC8:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (16294u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08AF8D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D04u) goto L_08AF8D04;
    return;
L_08AF8D04:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AF8D18u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D18u) goto L_08AF8D18;
    return;
L_08AF8D18:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8D2Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 390u, 0x08B61EF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D2Cu) goto L_08AF8D2C;
    return;
L_08AF8D2C:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8D40u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 395u, 0x08B61F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D40u) goto L_08AF8D40;
    return;
L_08AF8D40:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08AF8D4Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D4Cu) goto L_08AF8D4C;
    return;
L_08AF8D4C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AF8D50;
L_08AF8D50:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1280)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF8D68;
      }
      goto L_08AF8D5C;
    }
L_08AF8D5C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08AF8D68u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 679u, 0x08A775F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF8D68u) goto L_08AF8D68;
    return;
L_08AF8D68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1412)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF8D80;
      }
      goto L_08AF8D7C;
    }
L_08AF8D7C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1412), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08AF8D80;
L_08AF8D80:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1416)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF8D98;
      }
      goto L_08AF8D94;
    }
L_08AF8D94:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1416), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_08AF8D98;
L_08AF8D98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF8DB0;
      }
      goto L_08AF8DAC;
    }
L_08AF8DAC:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1404), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08AF8DB0;
L_08AF8DB0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF8DC8;
      }
      goto L_08AF8DC4;
    }
L_08AF8DC4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1408), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_08AF8DC8;
L_08AF8DC8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF8DFC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E04:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF8E0C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10376)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AF8E38;
      }
      goto L_08AF8E20;
    }
}
L_08AF8E20:
    hot_regs.g31 = (0x08AF8E28u);
    // nop
    goto L_08AF94C0;
L_08AF8E28:
    hot_regs.g31 = (0x08AF8E30u);
    // nop
    goto L_08AF976C;
L_08AF8E30:
    hot_regs.g31 = (0x08AF8E38u);
    // nop
    goto L_08AF9B84;
L_08AF8E38:
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
L_08AF8E44:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16));
    f6 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15));
    f4 = f12 - f6;
    f1 = hot_regs.f13 - f0;
    { const float fs = f4; const float ft = f4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    { const float fs = f1; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3)));
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(3)));
    f14 = f4 + f1;
    hot_regs.g7 = (16256u << 16u);
    g6 = (g6 - g5);
    ctx.fpr[19] = std::bit_cast<float>(hot_regs.g7);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    f5 = std::sqrt(f14);
    f16 = std::bit_cast<float>(g6);
    g6 = (16896u << 16u);
    f15 = std::bit_cast<float>(g6);
    f14 = hot_regs.f13 + f15;
    ctx.fpr[8] = f12 + f15;
    f3 = f14 - f0;
    f5 = f5 - ctx.fpr[17];
    f0 = ctx.fpr[8] - f6;
    f2 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1356)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1352)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f16)));
    ctx.set_fpu_condition((f5 < f2));
    { const float fs = f3; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    { const float fs = f0; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    if (ctx.fpu_condition()) {
    f5 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f2));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
        goto L_08AF8ED0;
    }
    goto L_08AF8ED0;
}
}
L_08AF8ED0:
{
    float f5 = ctx.fpr[5];
    { const float fs = ctx.fpr[18]; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[19] < f5));
    // nop
    if (ctx.fpu_condition()) {
    f5 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[5] = f5;
        goto L_08AF8EE4;
    }
    goto L_08AF8EE4;
}
L_08AF8EE4:
{
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
{
    std::uint32_t g6 = hot_regs.g6;
    { const float fs = f5; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    f4 = f4 + ctx.fpr[3];
    f5 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f5));
    g6 = (std::bit_cast<std::uint32_t>(f5));
    g6 = (hot_regs.g5 + g6);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(g6));
    f4 = std::sqrt(f4);
    f4 = f4 - ctx.fpr[17];
    ctx.set_fpu_condition((f4 < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    f4 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.g6 = g6;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
        goto L_08AF8F14;
    }
    goto L_08AF8F14;
}
}
L_08AF8F14:
{
    float f4 = ctx.fpr[4];
    { const float fs = ctx.fpr[18]; const float ft = f4; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    ctx.set_fpu_condition((f4 <= ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f4 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[4] = f4;
        goto L_08AF8F28;
    }
    goto L_08AF8F28;
}
L_08AF8F28:
{
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
{
    std::uint32_t g6 = hot_regs.g6;
    { const float fs = f4; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    f3 = ctx.fpr[0] + f3;
    f4 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f4));
    g6 = (std::bit_cast<std::uint32_t>(f4));
    g6 = (hot_regs.g5 + g6);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(g6));
    f3 = std::sqrt(f3);
    f3 = f3 - ctx.fpr[17];
    ctx.set_fpu_condition((f3 < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    f3 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.g6 = g6;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
        goto L_08AF8F58;
    }
    goto L_08AF8F58;
}
}
L_08AF8F58:
{
    float f3 = ctx.fpr[3];
    { const float fs = ctx.fpr[18]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    ctx.set_fpu_condition((f3 <= ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f3 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[3] = f3;
        goto L_08AF8F6C;
    }
    goto L_08AF8F6C;
}
L_08AF8F6C:
{
    float f0 = ctx.fpr[0];
    float f3 = ctx.fpr[3];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g6 = hot_regs.g6;
    { const float fs = f3; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f0 = f0 + ctx.fpr[1];
    f3 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f3));
    g6 = (std::bit_cast<std::uint32_t>(f3));
    g6 = (hot_regs.g5 + g6);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(g6));
    f0 = std::sqrt(f0);
    f17 = f0 - f17;
    ctx.set_fpu_condition((f17 < ctx.fpr[2]));
    // nop
    if (ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    hot_regs.g6 = g6;
    ctx.fpr[0] = f0;
    ctx.fpr[3] = f3;
    ctx.fpr[17] = f17;
        goto L_08AF8F9C;
    }
    goto L_08AF8F9C;
}
}
L_08AF8F9C:
{
    float f17 = ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    ctx.set_fpu_condition((f17 <= ctx.fpr[19]));
    // nop
    if (!ctx.fpu_condition()) {
    f17 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = f17;
        goto L_08AF8FB0;
    }
    goto L_08AF8FB0;
}
L_08AF8FB0:
{
    float f16 = ctx.fpr[16];
{
    std::uint32_t g6 = hot_regs.g6;
    { const float fs = ctx.fpr[17]; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    g6 = (hot_regs.g5 | 0u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f16));
    g6 = (g6 + hot_regs.g7);
    hot_regs.g31 = (0x08AF8FDCu);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(g6));
    hot_regs.g6 = g6;
    ctx.fpr[16] = f16;
    goto L_08AFB024;
}
}
L_08AF8FDC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF8FE8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (16768u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f14 = ctx.fpr[24] + hot_regs.f15;
    hot_regs.f13 = hot_regs.f22 + hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (0u | 20u);
    hot_regs.f12 = hot_regs.f20 + ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1332), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (16896u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (16512u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    hot_regs.g31 = (0x08AF905Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 636u, 0x08B133A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF905Cu) goto L_08AF905C;
    return;
L_08AF905C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9078;
      }
      goto L_08AF9064;
    }
L_08AF9064:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(10376)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
      if (branch_taken) {
          goto L_08AF9080;
      }
      goto L_08AF9070;
    }
L_08AF9070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AF90DC;
      }
      goto L_08AF9078;
    }
L_08AF9078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9114;
      }
      goto L_08AF9080;
    }
L_08AF9080:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1281)));
    if (g5 == 0u) {
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
        goto L_08AF909C;
    }
    goto L_08AF908C;
}
L_08AF908C:
    hot_regs.g31 = (0x08AF9094u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7760)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 23u, 0x08818338u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9094u) goto L_08AF9094;
    return;
L_08AF9094:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AF909C;
L_08AF909C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g5);
    g5 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(67)));
    g6 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(66)));
    g5 = (g5 << 24u);
    g6 = (g6 << 16u);
    g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(65)));
    g5 = (g5 + g6);
    g6 = (g7 << 8u);
    g7 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(64)));
    g5 = (g5 + g6);
    g5 = (g5 + g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), g5);
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_08AF90DC;
}
L_08AF90DC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (49024u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1296)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08AF9114u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 789u, 0x08817AACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9114u) goto L_08AF9114;
    return;
L_08AF9114:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF9130:
{
    float f16 = ctx.fpr[16];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (17046u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f16 = hot_regs.f12 - hot_regs.f14;
    g4 = (17352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    g4 = (17664u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(g4);
    f19 = f16 + hot_regs.f15;
    g4 = (15616u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(g4);
    g4 = (16256u << 16u);
    f19 = f19 + ctx.fpr[18];
    f16 = std::bit_cast<float>(g4);
    g6 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    { const float fs = f19; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f19 = f19 - f16;
    f19 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    g4 = (std::bit_cast<std::uint32_t>(f19));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.fpr[16] = f16;
    ctx.fpr[19] = f19;
        goto L_08AF9188;
    }
    goto L_08AF9188;
}
}
L_08AF9188:
    hot_regs.g4 = (0u | 127u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 127 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
        goto L_08AF9198;
    }
    goto L_08AF9198;
L_08AF9198:
{
    float f19 = ctx.fpr[19];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    f19 = hot_regs.f12 + hot_regs.f14;
    g7 = (0u | 0u);
    f19 = f19 + hot_regs.f15;
    hot_regs.g6 = (0u | 0u);
    f19 = f19 + ctx.fpr[18];
    { const float fs = f19; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f19 = f19 + ctx.fpr[16];
    f19 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    g5 = (std::bit_cast<std::uint32_t>(f19));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g7 != 0u) {
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.fpr[19] = f19;
        goto L_08AF91C8;
    }
    goto L_08AF91C8;
}
}
L_08AF91C8:
    hot_regs.g5 = (0u | 127u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 127 ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g5 = (hot_regs.g6 | 0u);
        goto L_08AF91D8;
    }
    goto L_08AF91D8;
L_08AF91D8:
{
    float f19 = ctx.fpr[19];
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    f19 = hot_regs.f13 - hot_regs.f14;
    g8 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    f19 = f19 + ctx.fpr[18];
    { const float fs = f19; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f19 = f19 - ctx.fpr[16];
    f19 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f19));
    g6 = (std::bit_cast<std::uint32_t>(f19));
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g8 != 0u) {
    hot_regs.g7 = (g6 | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.fpr[19] = f19;
        goto L_08AF9204;
    }
    goto L_08AF9204;
}
}
L_08AF9204:
    hot_regs.g6 = (0u | 127u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g7) < 127 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    hot_regs.g6 = (hot_regs.g7 | 0u);
        goto L_08AF9214;
    }
    goto L_08AF9214;
L_08AF9214:
{
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    ctx.fpr[19] = hot_regs.f13 + hot_regs.f14;
    g9 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    f18 = ctx.fpr[19] + f18;
    { const float fs = f18; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f16 = f17 + f16;
    f16 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f16));
    g7 = (std::bit_cast<std::uint32_t>(f16));
    g9 = (static_cast<std::int32_t>(g9) < static_cast<std::int32_t>(g7) ? 1u : 0u);
    if (g9 != 0u) {
    ctx.gpr[8] = (g7 | 0u);
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
        goto L_08AF9240;
    }
    goto L_08AF9240;
}
}
L_08AF9240:
    hot_regs.g7 = (0u | 127u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 127 ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    hot_regs.g7 = (ctx.gpr[8] | 0u);
        goto L_08AF9250;
    }
    goto L_08AF9250;
L_08AF9250:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (20501u << 16u);
    g9 = (g9 | 761u);
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    ctx.fpr[16] = std::bit_cast<float>(g9);
    g9 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08AF9310;
      }
      goto L_08AF926C;
    }
}
L_08AF926C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 << 7u);
    g4 = (g9 + g4);
    g9 = (16896u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(g9);
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
    goto L_08AF9280;
}
L_08AF9280:
{
    std::uint32_t g10 = ctx.gpr[10];
    ctx.gpr[9] = (hot_regs.g6 | 0u);
    g10 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = g10 != 0u;
    g10 = (ctx.gpr[8] + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08AF9300;
      }
      goto L_08AF9290;
    }
}
L_08AF9290:
{
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    f17 = std::bit_cast<float>(ctx.gpr[10]);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    { const float fs = f17; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f18 = f18 + ctx.fpr[19];
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    goto L_08AF92A0;
}
L_08AF92A0:
{
    std::uint32_t g10 = ctx.gpr[10];
    g10 = (hot_regs.g4 + ctx.gpr[9]);
    g10 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(4108)));
    g10 = (g10 & 128u);
    { const bool branch_taken = g10 != 0u;
    g10 = (ctx.gpr[9] + static_cast<std::uint32_t>(-64));
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_08AF92F0;
      }
      goto L_08AF92B4;
    }
}
L_08AF92B4:
{
    float f0 = ctx.fpr[0];
    float f17 = ctx.fpr[17];
    f17 = std::bit_cast<float>(ctx.gpr[10]);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f0 = ctx.fpr[18] - hot_regs.f15;
    { const float fs = f17; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f0 = f0 - hot_regs.f12;
    f17 = f17 + ctx.fpr[19];
    { const float fs = f0; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    f17 = f17 - hot_regs.f13;
    { const float fs = f17; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f17 = f0 + f17;
    ctx.set_fpu_condition((ctx.fpr[16] <= f17));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    ctx.fpr[0] = f0;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08AF92F0;
      }
      goto L_08AF92EC;
    }
}
L_08AF92EC:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    goto L_08AF92F0;
L_08AF92F0:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08AF92A0;
      }
      goto L_08AF9300;
    }
}
L_08AF9300:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AF9280;
      }
      goto L_08AF9310;
    }
}
L_08AF9310:
{
    float f12 = hot_regs.f12;
    float f16 = ctx.fpr[16];
    f16 = std::sqrt(f16);
    hot_regs.g4 = (16824u << 16u);
    f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f16 = f16 - hot_regs.f13;
    ctx.set_fpu_condition((f12 <= f16));
    // nop
    if (!ctx.fpu_condition()) {
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    ctx.fpr[16] = f16;
        goto L_08AF9334;
    }
    goto L_08AF9334;
}
L_08AF9334:
{
    float f0 = ctx.fpr[0];
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_fpu_condition((f0 <= ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    f0 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = f0;
        goto L_08AF9348;
    }
    goto L_08AF9348;
}
L_08AF9348:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9350:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AF9498;
      }
      goto L_08AF9378;
    }
}
L_08AF9378:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08AF9390u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-272));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9390u) goto L_08AF9390;
    return;
L_08AF9390:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9498;
      }
      goto L_08AF9398;
    }
L_08AF9398:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[16] = (18944u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    ctx.gpr[18] = (19200u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(29552));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (49312u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    ctx.gpr[20] = (18176u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29552)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g4 = (0u | 3u);
    hot_regs.g31 = (0x08AF9430u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(12016));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 536u, 0x08AEE8E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9430u) goto L_08AF9430;
    return;
L_08AF9430:
    hot_regs.g31 = (0x08AF9438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9438u) goto L_08AF9438;
    return;
L_08AF9438:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(0u);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 >> 8u);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 | ctx.gpr[16]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g5 = (hot_regs.g6 >> 8u);
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (g5 | ctx.gpr[18]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    g5 = (g5 >> 8u);
    g5 = (g5 | ctx.gpr[20]);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_08AF9498;
}
}
L_08AF9498:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
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
L_08AF94C0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g31 = (0x08AF94F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF94F8u) goto L_08AF94F8;
    return;
L_08AF94F8:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9500;
    }
L_08AF9500:
    hot_regs.g31 = (0x08AF9508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9508u) goto L_08AF9508;
    return;
L_08AF9508:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9510;
    }
L_08AF9510:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF952C;
      }
      goto L_08AF951C;
    }
L_08AF951C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(8352))))));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF952C;
    }
L_08AF952C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 7 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9538;
    }
}
L_08AF9538:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9540;
    }
L_08AF9540:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7392)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7408));
      if (branch_taken) {
          goto L_08AF9564;
      }
      goto L_08AF954C;
    }
L_08AF954C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g5 = (0u | 1u);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7392), hot_regs.g5);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7408), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7412), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7416), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AF9564;
}
}
L_08AF9564:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7396)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9588;
      }
      goto L_08AF9570;
    }
L_08AF9570:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g5 = (0u | 1u);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7396), hot_regs.g5);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7424), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7428), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7432), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AF9588;
}
}
L_08AF9588:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (16320u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
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
    g5 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = f14 + f15;
    f13 = f14 + f13;
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AF9740;
      }
      goto L_08AF95D4;
    }
}
}
L_08AF95D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7440)));
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF95EC;
    }
}
L_08AF95EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1488)));
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(1001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF9738;
      }
      goto L_08AF9604;
    }
}
L_08AF9604:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1488), hot_regs.g4);
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17076u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17174u << 16u);
    hot_regs.g31 = (0x08AF962Cu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF962Cu) goto L_08AF962C;
    return;
L_08AF962C:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08AF9640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9640u) goto L_08AF9640;
    return;
L_08AF9640:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 1023u);
    hot_regs.g4 = g4;
        goto L_08AF965C;
    }
    goto L_08AF964C;
}
L_08AF964C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 1023u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF965C;
      }
      goto L_08AF965C;
    }
}
L_08AF965C:
    hot_regs.g5 = (2247u << 16u);
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-8224));
    hot_regs.g6 = (2247u << 16u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-12320));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = (16672u << 16u);
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    { const float fs = hot_regs.f20; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f15;
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = ctx.fpr[16] + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g31 = (0x08AF96BCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF96BCu) goto L_08AF96BC;
    return;
L_08AF96BC:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f22;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (49024u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    hot_regs.g31 = (0x08AF96E8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF96E8u) goto L_08AF96E8;
    return;
L_08AF96E8:
    hot_regs.f12 = ctx.fpr[24] - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08AF96FCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF96FCu) goto L_08AF96FC;
    return;
L_08AF96FC:
    hot_regs.f14 = ctx.fpr[24] - hot_regs.f20;
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 82u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const float fs = hot_regs.f14; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.f13 = hot_regs.f20 + hot_regs.f13;
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08AF9738u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9738u) goto L_08AF9738;
    return;
L_08AF9738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9750;
      }
      goto L_08AF9740;
    }
L_08AF9740:
{
    std::uint32_t g4 = hot_regs.g4;
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
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7440), g4);
    hot_regs.g4 = g4;
    goto L_08AF9750;
}
L_08AF9750:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF976C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(7456));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x08AF97A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF97A8u) goto L_08AF97A8;
    return;
L_08AF97A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7444)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7448)));
    hot_regs.g4 = g4;
        goto L_08AF97DC;
    }
    goto L_08AF97C0;
}
L_08AF97C0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (0u | 1u);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7444), g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7456), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7460), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7464), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7448)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AF97DC;
}
}
L_08AF97DC:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF97FC;
      }
      goto L_08AF97E4;
    }
L_08AF97E4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    hot_regs.g4 = (0u | 1u);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7448), hot_regs.g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7472), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7476), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(7480), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AF97FC;
}
}
L_08AF97FC:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16320u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f14) & 0x7FFFFFFFu);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) & 0x7FFFFFFFu);
    f14 = f14 + f15;
    f13 = f14 + f13;
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AF99C8;
      }
      goto L_08AF9848;
    }
}
}
L_08AF9848:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7488)));
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(5001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF99D8;
      }
      goto L_08AF9860;
    }
}
L_08AF9860:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1492)));
    g4 = (g4 - hot_regs.g5);
    g4 = (g4 < static_cast<std::uint32_t>(4001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9878;
    }
}
L_08AF9878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1492), hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17377u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17467u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 32768u);
    hot_regs.g31 = (0x08AF98A4u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF98A4u) goto L_08AF98A4;
    return;
L_08AF98A4:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08AF98B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF98B8u) goto L_08AF98B8;
    return;
L_08AF98B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(g4) >= 0) {
    g4 = (g4 & 1023u);
    hot_regs.g4 = g4;
        goto L_08AF98D4;
    }
    goto L_08AF98C4;
}
L_08AF98C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u - g4);
    g4 = (g4 & 1023u);
    { const bool branch_taken = 0u == 0u;
    g4 = (0u - g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF98D4;
      }
      goto L_08AF98D4;
    }
}
L_08AF98D4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f18 = ctx.fpr[18];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (2247u << 16u);
    g4 = (g4 << 2u);
    g5 = (g5 + static_cast<std::uint32_t>(-8224));
    g6 = (2247u << 16u);
    g5 = (g4 + g5);
    g6 = (g6 + static_cast<std::uint32_t>(-12320));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + g6);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f14 = f12 - f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g4 = (g29 + static_cast<std::uint32_t>(64));
    f12 = f13 + f12;
    { const float fs = hot_regs.f20; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    f12 = hot_regs.f15 + f18;
    f13 = ctx.fpr[16] + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g31 = (0x08AF992Cu);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[18] = f18;
    goto L_08AF8918;
}
}
L_08AF992C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9934;
    }
L_08AF9934:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AF9940u);
    hot_regs.g5 = (0u | 1u);
    goto L_08AF9A00;
L_08AF9940:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (16664u << 16u);
      if (branch_taken) {
          goto L_08AF99C0;
      }
      goto L_08AF9948;
    }
L_08AF9948:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (48588u << 16u);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08AF9974u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9974u) goto L_08AF9974;
    return;
L_08AF9974:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08AF9994u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9994u) goto L_08AF9994;
    return;
L_08AF9994:
    ctx.gpr[10] = (hot_regs.g2 & 65535u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[10] = (ctx.gpr[10] & 7u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (0u | 83u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x08AF99C0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF99C0u) goto L_08AF99C0;
    return;
L_08AF99C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF99D8;
      }
      goto L_08AF99C8;
    }
L_08AF99C8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7488), hot_regs.g4);
    goto L_08AF99D8;
L_08AF99D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AF99F8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1332)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9A00:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (17056u << 16u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(g6);
    f13 = f13 / hot_regs.f12;
    g6 = (16880u << 16u);
    g7 = (0u | 49u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f13 = f13 + hot_regs.f14;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g6 = (std::bit_cast<std::uint32_t>(f13));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g7 != 0u) {
    g6 = (0u | 49u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f13 = f13;
        goto L_08AF9A34;
    }
    goto L_08AF9A34;
}
}
L_08AF9A34:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 0 ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g6 = (0u | 0u);
        goto L_08AF9A40;
    }
    goto L_08AF9A40;
L_08AF9A40:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = hot_regs.f13 / f12;
    g4 = (16840u << 16u);
    g7 = (0u | 49u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g7 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    hot_regs.f12 = f12;
        goto L_08AF9A6C;
    }
    goto L_08AF9A6C;
}
}
L_08AF9A6C:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08AF9A78;
    }
    goto L_08AF9A78;
L_08AF9A78:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g7 = (hot_regs.g6 | 0u);
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AF9AAC;
      }
      goto L_08AF9A84;
    }
}
L_08AF9A84:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (0u | 50u);
    g6 = (g6 - hot_regs.g5);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AF9AAC;
      }
      goto L_08AF9A98;
    }
}
L_08AF9A98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF9ABC;
      }
      goto L_08AF9AA4;
    }
}
L_08AF9AA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9AB4;
      }
      goto L_08AF9AAC;
    }
L_08AF9AAC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9AC8;
      }
      goto L_08AF9AB4;
    }
L_08AF9AB4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9AC4;
      }
      goto L_08AF9ABC;
    }
L_08AF9ABC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_08AF9AC8;
      }
      goto L_08AF9AC4;
    }
L_08AF9AC4:
    hot_regs.g2 = (0u | 0u);
    goto L_08AF9AC8;
L_08AF9AC8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9AD0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AF9AF8;
      }
      goto L_08AF9AE8;
    }
}
L_08AF9AE8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9AF0;
    }
L_08AF9AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9B08;
      }
      goto L_08AF9AF8;
    }
L_08AF9AF8:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AF9B40;
      }
      goto L_08AF9B00;
    }
L_08AF9B00:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9B08;
    }
L_08AF9B08:
    hot_regs.g31 = (0x08AF9B10u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 192u, 0x08A854E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B10u) goto L_08AF9B10;
    return;
L_08AF9B10:
    hot_regs.g31 = (0x08AF9B18u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 774u, 0x088178A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B18u) goto L_08AF9B18;
    return;
L_08AF9B18:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_08AF9B20;
L_08AF9B20:
    hot_regs.g31 = (0x08AF9B28u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1348)));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 365u, 0x089F1F70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B28u) goto L_08AF9B28;
    return;
L_08AF9B28:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AF9B20;
      }
      goto L_08AF9B38;
    }
}
L_08AF9B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9B70;
      }
      goto L_08AF9B40;
    }
L_08AF9B40:
    hot_regs.g31 = (0x08AF9B48u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 204u, 0x08A856A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B48u) goto L_08AF9B48;
    return;
L_08AF9B48:
    hot_regs.g31 = (0x08AF9B50u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1344)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 788u, 0x08817A98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B50u) goto L_08AF9B50;
    return;
L_08AF9B50:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[28] | 0u);
    goto L_08AF9B58;
L_08AF9B58:
    hot_regs.g31 = (0x08AF9B60u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1348)));
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 375u, 0x089F20CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9B60u) goto L_08AF9B60;
    return;
L_08AF9B60:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 1 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AF9B58;
      }
      goto L_08AF9B70;
    }
}
L_08AF9B70:
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
L_08AF9B84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8816)));
    g4 = (g4 + static_cast<std::uint32_t>(10956));
    ctx.gpr[8] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AF9BF8;
      }
      goto L_08AF9B98;
    }
}
L_08AF9B98:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g6 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    g5 = (g6 + static_cast<std::uint32_t>(-32000));
    g5 = (g5 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (g6 + static_cast<std::uint32_t>(-22000));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BB0;
    }
}
L_08AF9BB0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g7 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF9BD8;
      }
      goto L_08AF9BBC;
    }
}
L_08AF9BBC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(45)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(g5) < 193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF9BD4;
      }
      goto L_08AF9BD0;
    }
}
L_08AF9BD0:
    hot_regs.g5 = (0u | 192u);
    goto L_08AF9BD4;
L_08AF9BD4:
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08AF9BD8;
L_08AF9BD8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g6 + static_cast<std::uint32_t>(-10000));
    g5 = (g5 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AF9BEC;
      }
      goto L_08AF9BE8;
    }
}
L_08AF9BE8:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08AF9BEC;
L_08AF9BEC:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = g8 != 0u;
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AF9B98;
      }
      goto L_08AF9BF8;
    }
}
L_08AF9BF8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AF9C00:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (50716u << 16u);
    g4 = (g4 | 16384u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    g4 = (49864u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) <= 0;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AF9C5C;
      }
      goto L_08AF9C54;
    }
}
}
L_08AF9C54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1332), g4);
    hot_regs.g4 = g4;
    goto L_08AF9C5C;
}
L_08AF9C5C:
    hot_regs.g31 = (0x08AF9C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 866u, 0x08AC36D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9C64u) goto L_08AF9C64;
    return;
L_08AF9C64:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9C74;
      }
      goto L_08AF9C6C;
    }
L_08AF9C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA0B4;
      }
      goto L_08AF9C74;
    }
L_08AF9C74:
    hot_regs.g31 = (0x08AF9C7Cu);
    // nop
    goto L_08AF8B48;
L_08AF9C7C:
    hot_regs.g4 = (0u | 255u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11208)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11212)));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11216)));
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08AF9CD0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 547u, 0x08AEEA94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9CD0u) goto L_08AF9CD0;
    return;
L_08AF9CD0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1404)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1408)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    ctx.gpr[21] = (18944u << 16u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[21]);
    ctx.gpr[20] = (2236u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g5);
    ctx.gpr[19] = (19200u << 16u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[19]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g5 = (14848u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g5 = (15104u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(29552));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (49312u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    ctx.gpr[17] = (18176u << 16u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (21761u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-256));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (22528u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(255));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (22017u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-256));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (22273u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-256));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    hot_regs.g31 = (0x08AF9F7Cu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9F7Cu) goto L_08AF9F7C;
    return;
L_08AF9F7C:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08AF9F88u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9F88u) goto L_08AF9F88;
    return;
L_08AF9F88:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08AF9F94u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9F94u) goto L_08AF9F94;
    return;
L_08AF9F94:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08AF9FA0u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AF9FA0u) goto L_08AF9FA0;
    return;
L_08AF9FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1336)));
    g4 = (g4 ^ 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1336), g4);
    g4 = (2236u << 16u);
    g16 = (g4 + static_cast<std::uint32_t>(32304));
    g16 = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (16752u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08AF9FDC;
      }
      goto L_08AF9FD4;
    }
}
L_08AF9FD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FDC;
    }
L_08AF9FDC:
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FF4;
    }
L_08AF9FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AF9FFC;
      }
      goto L_08AF9FFC;
    }
L_08AF9FFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    hot_regs.g31 = (0x08AFA008u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 207u, 0x08A85850u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA008u) goto L_08AFA008;
    return;
L_08AFA008:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1340)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (16544u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08AFA030u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 205u, 0x08A856B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA030u) goto L_08AFA030;
    return;
L_08AFA030:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 >> 8u);
    hot_regs.g4 = (hot_regs.g4 | ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 >> 8u);
    hot_regs.g5 = (hot_regs.g5 | ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08AFA098u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA098u) goto L_08AFA098;
    return;
L_08AFA098:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08AFA0A4u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA0A4u) goto L_08AFA0A4;
    return;
L_08AFA0A4:
    hot_regs.g31 = (0x08AFA0ACu);
    // nop
    goto L_08AF8E0C;
L_08AFA0AC:
    hot_regs.g31 = (0x08AFA0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA0B4u) goto L_08AFA0B4;
    return;
L_08AFA0B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFA0DC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(244), hot_regs.g31);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1329)));
    hot_regs.g4 = (hot_regs.g4 ^ 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1329), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g31 = (0x08AFA144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 866u, 0x08AC36D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA144u) goto L_08AFA144;
    return;
L_08AFA144:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA19C;
      }
      goto L_08AFA14C;
    }
L_08AFA14C:
    hot_regs.g31 = (0x08AFA154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA154u) goto L_08AFA154;
    return;
L_08AFA154:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    ctx.gpr[20] = (0u | 1u);
    g4 = (2236u << 16u);
    g23 = (g4 + static_cast<std::uint32_t>(32304));
    ctx.gpr[21] = (g23 + static_cast<std::uint32_t>(16));
    g23 = (g23 + static_cast<std::uint32_t>(48));
    g4 = (16752u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[30] = (0u | 255u);
    g4 = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    g4 = (17664u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (15360u << 16u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.fpr[28] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08AFA1A4;
      }
      goto L_08AFA194;
    }
}
L_08AFA194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA1F0;
      }
      goto L_08AFA19C;
    }
L_08AFA19C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAFDC;
      }
      goto L_08AFA1A4;
    }
L_08AFA1A4:
    hot_regs.g31 = (0x08AFA1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA1ACu) goto L_08AFA1AC;
    return;
L_08AFA1AC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AFA1D0;
      }
      goto L_08AFA1B8;
    }
L_08AFA1B8:
    hot_regs.g31 = (0x08AFA1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA1C0u) goto L_08AFA1C0;
    return;
L_08AFA1C0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AFA1F0;
      }
      goto L_08AFA1D0;
    }
L_08AFA1D0:
{
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g28 = ctx.gpr[28];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1316)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1312)));
    f20 = f30 - hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(1308)));
    f20 = f20 + hot_regs.f13;
    { const float fs = f30; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08AFA200;
      }
      goto L_08AFA1F0;
    }
}
}
L_08AFA1F0:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
    f30 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1312)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1308)));
    { const float fs = f30; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08AFA200;
}
L_08AFA200:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    g4 = (48972u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA220;
    }
}
L_08AFA220:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = f12;
        goto L_08AFA244;
    }
    goto L_08AFA238;
}
L_08AFA238:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFA244;
      }
      goto L_08AFA244;
    }
}
L_08AFA244:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((f13 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = f13;
        goto L_08AFA264;
    }
    goto L_08AFA258;
}
L_08AFA258:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AFA264;
      }
      goto L_08AFA264;
    }
}
L_08AFA264:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA298;
      }
      goto L_08AFA274;
    }
L_08AFA274:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA290;
      }
      goto L_08AFA288;
    }
L_08AFA288:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA290;
    }
L_08AFA290:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA298;
    }
L_08AFA298:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA2B4;
      }
      goto L_08AFA2AC;
    }
L_08AFA2AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AFA2B8;
      }
      goto L_08AFA2B4;
    }
L_08AFA2B4:
    ctx.gpr[18] = (0u | 1u);
    goto L_08AFA2B8;
L_08AFA2B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[16] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08AFA2DC;
      }
      goto L_08AFA2CC;
    }
L_08AFA2CC:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1300)));
    { const float fs = f22; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08AFA338;
      }
      goto L_08AFA2DC;
    }
}
L_08AFA2DC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA308;
      }
      goto L_08AFA2F8;
    }
L_08AFA2F8:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1304)));
    { const float fs = f22; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08AFA338;
      }
      goto L_08AFA308;
    }
}
L_08AFA308:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f17 = ctx.fpr[17];
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1304)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1300)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    f14 = f14 - f22;
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (16948u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    f22 = f12 / hot_regs.f15;
    f22 = f13 + f22;
    { const float fs = f22; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(f17));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[17] = f17;
    hot_regs.f22 = f22;
    goto L_08AFA338;
}
L_08AFA338:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[30]));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11208)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(g5));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11212)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(g5));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11216)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(g5));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11208)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(g5));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11212)));
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(g5));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11216)));
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(g5));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11220)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(35)));
    g4 = (static_cast<std::int32_t>(g4) < 200 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AFA3D4;
      }
      goto L_08AFA3CC;
    }
}
}
L_08AFA3CC:
    hot_regs.g4 = (0u | 200u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08AFA3D4;
L_08AFA3D4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1288)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA3F8;
      }
      goto L_08AFA3EC;
    }
L_08AFA3EC:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[30]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AFA4B4;
      }
      goto L_08AFA3F8;
    }
L_08AFA3F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1284)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFA4B4;
      }
      goto L_08AFA410;
    }
L_08AFA410:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1284)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1288)));
    f13 = f14 - f13;
    f12 = f12 / f13;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(35)));
    g5 = (0u | 255u);
    g4 = (g5 - g4);
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g5 = (20224u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    f14 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AFA454;
      }
      goto L_08AFA448;
    }
}
}
L_08AFA448:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    goto L_08AFA454;
L_08AFA454:
{
    float f13 = hot_regs.f13;
    { const float fs = f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = f13 - hot_regs.f14;
    hot_regs.f13 = f13;
        goto L_08AFA474;
    }
    goto L_08AFA468;
}
L_08AFA468:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AFA484;
      }
      goto L_08AFA474;
    }
}
L_08AFA474:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.g5 = (32768u << 16u);
    g4 = (g4 + hot_regs.g5);
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    goto L_08AFA484;
}
}
L_08AFA484:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(35)));
    g4 = (g4 + g5);
    g5 = (g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFA49C;
      }
      goto L_08AFA498;
    }
}
L_08AFA498:
    hot_regs.g4 = (0u | 255u);
    goto L_08AFA49C;
L_08AFA49C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g4));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1292)));
    hot_regs.f14 = ctx.fpr[24] - f13;
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08AFA4B4;
}
L_08AFA4B4:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8452), 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8456), 0u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(10376), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (14848u << 16u);
    hot_regs.g5 = (2236u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g7 = (15104u << 16u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = (hot_regs.g6 >> 8u);
    hot_regs.g6 = (hot_regs.g6 | hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g6);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(29552)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(29552), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1348)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(115)));
    hot_regs.g5 = (hot_regs.g5 << 24u);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(114)));
    hot_regs.g6 = (hot_regs.g6 << 16u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(113)));
    hot_regs.g6 = (hot_regs.g6 << 8u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    hot_regs.g31 = (0x08AFA674u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA674u) goto L_08AFA674;
    return;
L_08AFA674:
    hot_regs.g4 = (0u | 11u);
    hot_regs.g31 = (0x08AFA680u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA680u) goto L_08AFA680;
    return;
L_08AFA680:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x08AFA68Cu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA68Cu) goto L_08AFA68C;
    return;
L_08AFA68C:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x08AFA698u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFA698u) goto L_08AFA698;
    return;
L_08AFA698:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f22 = hot_regs.f22;
    float f26 = ctx.fpr[26];
    float f28 = ctx.fpr[28];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(4)));
    g4 = (17352u << 16u);
    f12 = std::bit_cast<float>(g4);
    f13 = f16 - f22;
    f13 = f13 + f26;
    f13 = f13 + f12;
    { const float fs = f13; const float ft = f28; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    f14 = f16 + f22;
    f14 = f14 + f26;
    f14 = f14 + f12;
    { const float fs = f14; const float ft = f28; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f14 + ctx.fpr[24];
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f14));
    f13 = f15 - f22;
    f13 = f13 + f26;
    { const float fs = f13; const float ft = f28; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[17] = f15 + f22;
    f14 = ctx.fpr[17] + f26;
    { const float fs = f14; const float ft = f28; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f14 = f14 + ctx.fpr[24];
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g23 = (std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08AFA724;
      }
      goto L_08AFA710;
    }
}
}
L_08AFA710:
{
    float f13 = hot_regs.f13;
    f13 = ctx.fpr[16] + ctx.fpr[26];
    f13 = f13 + hot_regs.f12;
    { const float fs = f13; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
    goto L_08AFA724;
}
L_08AFA724:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA740;
      }
      goto L_08AFA72C;
    }
L_08AFA72C:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = ctx.fpr[16] + ctx.fpr[26];
    f12 = hot_regs.f13 + f12;
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AFA740;
}
L_08AFA740:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA758;
      }
      goto L_08AFA748;
    }
L_08AFA748:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f15 + ctx.fpr[26];
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AFA758;
}
L_08AFA758:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFA770;
      }
      goto L_08AFA760;
    }
L_08AFA760:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f15 + ctx.fpr[26];
    { const float fs = f12; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AFA770;
}
L_08AFA770:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g8 != 0u) {
    hot_regs.g7 = (hot_regs.g4 | 0u);
    ctx.gpr[8] = g8;
        goto L_08AFA784;
    }
    goto L_08AFA784;
}
L_08AFA784:
    hot_regs.g4 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g7) < 31 ? 1u : 0u);
    if (ctx.gpr[8] != 0u) {
    hot_regs.g4 = (hot_regs.g7 | 0u);
        goto L_08AFA794;
    }
    goto L_08AFA794;
L_08AFA794:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    if (g8 != 0u) {
    hot_regs.g7 = (hot_regs.g6 | 0u);
    ctx.gpr[8] = g8;
        goto L_08AFA7A8;
    }
    goto L_08AFA7A8;
}
L_08AFA7A8:
    hot_regs.g6 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g7) < 31 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g6);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g7);
        goto L_08AFA7BC;
    }
    goto L_08AFA7BC;
L_08AFA7BC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g7 != 0u) {
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = g7;
        goto L_08AFA7D0;
    }
    goto L_08AFA7D0;
}
L_08AFA7D0:
    hot_regs.g7 = (0u | 31u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g6) < 31 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g7 = (hot_regs.g6 | 0u);
        goto L_08AFA7E0;
    }
    goto L_08AFA7E0;
L_08AFA7E0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    hot_regs.g5 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (g6 != 0u) {
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g6 = g6;
        goto L_08AFA7F4;
    }
    goto L_08AFA7F4;
}
L_08AFA7F4:
    hot_regs.g6 = (0u | 31u);
    ctx.gpr[8] = (static_cast<std::int32_t>(hot_regs.g5) < 31 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g6);
    if (ctx.gpr[8] != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g5);
        goto L_08AFA808;
    }
    goto L_08AFA808;
L_08AFA808:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g4);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFAFC0;
      }
      goto L_08AFA81C;
    }
}
L_08AFA81C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), hot_regs.g7);
    g20 = (2246u << 16u);
    g20 = (g20 + static_cast<std::uint32_t>(1840));
    g5 = (16768u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g5);
    f12 = hot_regs.f20 + ctx.fpr[30];
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    g5 = (g4 << 7u);
    g4 = (g4 + g4);
    hot_regs.g6 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
    goto L_08AFA85C;
}
}
L_08AFA85C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFAF84;
      }
      goto L_08AFA870;
    }
}
L_08AFA870:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    g5 = (g5 + static_cast<std::uint32_t>(-16));
    g6 = (17152u << 16u);
    f12 = std::bit_cast<float>(g6);
    g6 = (17352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f14 = std::bit_cast<float>(g5);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 - hot_regs.f13;
    g4 = (g4 + g4);
    ctx.gpr[23] = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    goto L_08AFA8A8;
}
}
L_08AFA8A8:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g6 = (g6 + hot_regs.g4);
    g6 = (g6 + hot_regs.g5);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(12)));
    g6 = (g6 & 128u);
    if (g6 == 0u) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = g6;
        goto L_08AFA92C;
    }
    goto L_08AFA8CC;
}
L_08AFA8CC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g6 = (g6 + hot_regs.g4);
    g6 = (g6 + hot_regs.g5);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(76)));
    g6 = (g6 & 128u);
    if (g6 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = g6;
        goto L_08AFA92C;
    }
    goto L_08AFA8E8;
}
L_08AFA8E8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g6 = (g6 + hot_regs.g4);
    g6 = (g6 + hot_regs.g5);
    g6 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(13)));
    g6 = (g6 & 128u);
    if (g6 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g6 = g6;
        goto L_08AFA92C;
    }
    goto L_08AFA904;
}
L_08AFA904:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (hot_regs.g6 + g4);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(77)));
    g4 = (g4 & 128u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    hot_regs.g4 = g4;
        goto L_08AFAF58;
    }
    goto L_08AFA928;
}
L_08AFA928:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_08AFA92C;
L_08AFA92C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 + static_cast<std::uint32_t>(-16));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (17152u << 16u);
    f13 = std::bit_cast<float>(g4);
    g4 = (17024u << 16u);
    f17 = std::bit_cast<float>(g4);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = f14 + f17;
    f13 = f13 + f17;
    f18 = ctx.fpr[16] - f14;
    { const float fs = f18; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f19 = hot_regs.f15 - f13;
    { const float fs = f19; const float ft = f19; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f12 = f12 + f19;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((f12 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFA988;
    }
}
}
L_08AFA988:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[17] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g4 = (17205u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
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
          goto L_08AFA9EC;
      }
      goto L_08AFA9E4;
    }
L_08AFA9E4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08AFA9EC;
}
L_08AFA9EC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFA9F4;
    }
L_08AFA9F4:
{
    float f13 = hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f15));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1320)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFAA14;
    }
}
L_08AFAA14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFAF54;
      }
      goto L_08AFAA30;
    }
}
L_08AFAA30:
    ctx.gpr[21] = (hot_regs.g4 << 6u);
    ctx.gpr[17] = (hot_regs.g4 << 8u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    goto L_08AFAA40;
L_08AFAA40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g4 = g4;
        goto L_08AFAF38;
    }
    goto L_08AFAA54;
}
L_08AFAA54:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    g6 = (17024u << 16u);
    f12 = std::bit_cast<float>(g6);
    g5 = (g5 + static_cast<std::uint32_t>(-32));
    g6 = (17352u << 16u);
    f28 = std::bit_cast<float>(g6);
    f15 = std::bit_cast<float>(g5);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f28 = f12 - f28;
    ctx.gpr[16] = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    ctx.fpr[28] = f28;
    goto L_08AFAA80;
}
}
L_08AFAA80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 + ctx.gpr[21]);
    g4 = (g4 + ctx.gpr[18]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(12)));
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFAF24;
      }
      goto L_08AFAA9C;
    }
}
L_08AFAA9C:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f20 = hot_regs.f20;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g4 = (17024u << 16u);
    f20 = std::bit_cast<float>(g4);
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-32));
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g4 = (16896u << 16u);
    f24 = std::bit_cast<float>(g4);
    ctx.fpr[26] = hot_regs.f22 + f24;
    f24 = f20 + f24;
    f15 = hot_regs.f14 - ctx.fpr[26];
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = hot_regs.f13 - f24;
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f12 = f12 + f16;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    ctx.set_fpu_condition((f12 < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    hot_regs.f20 = f20;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08AFAF24;
      }
      goto L_08AFAAF0;
    }
}
}
L_08AFAAF0:
    hot_regs.f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g4 = (17077u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
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
          goto L_08AFAB4C;
      }
      goto L_08AFAB44;
    }
L_08AFAB44:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08AFAB4C;
}
L_08AFAB4C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAB54;
    }
L_08AFAB54:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFAEC0;
      }
      goto L_08AFAB68;
    }
L_08AFAB68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4108)));
    g4 = (g4 & 128u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFAC30;
      }
      goto L_08AFAB84;
    }
}
L_08AFAB84:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = ctx.fpr[28] + ctx.fpr[30];
    hot_regs.f15 = hot_regs.f20 + ctx.fpr[30];
    f12 = hot_regs.f14 - f12;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 - hot_regs.f15;
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((f12 < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AFABF0;
      }
      goto L_08AFABB4;
    }
}
L_08AFABB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4108)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AFABE8u);
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8FE8;
}
L_08AFABE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAC30;
      }
      goto L_08AFABF0;
    }
L_08AFABF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4108)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08AFAC30u);
    g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8E44;
}
L_08AFAC30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4236)));
    g4 = (g4 & 128u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = g4 != 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFAD08;
      }
      goto L_08AFAC50;
    }
}
L_08AFAC50:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    hot_regs.g4 = (16896u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f15 = ctx.fpr[28] + ctx.fpr[30];
    f12 = f15 + f12;
    ctx.fpr[16] = hot_regs.f20 + ctx.fpr[30];
    f12 = hot_regs.f14 - f12;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 - ctx.fpr[16];
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((f12 < f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AFACC8;
      }
      goto L_08AFAC8C;
    }
}
L_08AFAC8C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4236)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AFACC0u);
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8FE8;
}
L_08AFACC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAD08;
      }
      goto L_08AFACC8;
    }
L_08AFACC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4236)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08AFAD08u);
    g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8E44;
}
L_08AFAD08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4109)));
    g4 = (g4 & 128u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = g4 != 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFADE0;
      }
      goto L_08AFAD28;
    }
}
L_08AFAD28:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    f12 = ctx.fpr[28] + ctx.fpr[30];
    hot_regs.g4 = (16896u << 16u);
    f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[16] = hot_regs.f20 + ctx.fpr[30];
    f15 = ctx.fpr[16] + f15;
    f12 = hot_regs.f14 - f12;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = f13 - f15;
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((f12 < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08AFADA0;
      }
      goto L_08AFAD64;
    }
}
L_08AFAD64:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4109)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AFAD98u);
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8FE8;
}
L_08AFAD98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFADE0;
      }
      goto L_08AFADA0;
    }
L_08AFADA0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4109)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08AFADE0u);
    g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8E44;
}
L_08AFADE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4237)));
    g4 = (g4 & 128u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = g4 != 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAE00;
    }
}
L_08AFAE00:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    hot_regs.g4 = (16896u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f15 = ctx.fpr[28] + ctx.fpr[30];
    f15 = f15 + f12;
    ctx.fpr[16] = hot_regs.f20 + ctx.fpr[30];
    f12 = ctx.fpr[16] + f12;
    f15 = hot_regs.f14 - f15;
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f15 + f12;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((f12 < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
        goto L_08AFAE7C;
    }
    goto L_08AFAE40;
}
L_08AFAE40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4237)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08AFAE74u);
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8FE8;
}
L_08AFAE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAE7C;
    }
L_08AFAE7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[17]);
    g4 = (g4 + ctx.gpr[16]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(4237)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08AFAEB8u);
    g5 = (ctx.gpr[19] | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08AF8E44;
}
L_08AFAEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAEC0;
    }
L_08AFAEC0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (49024u << 16u);
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1282)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFAF1C;
      }
      goto L_08AFAEE0;
    }
}
}
L_08AFAEE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1348)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1324)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[21]);
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[18]);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g31 = (0x08AFAF1Cu);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 376u, 0x089F20D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFAF1Cu) goto L_08AFAF1C;
    return;
L_08AFAF1C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    goto L_08AFAF24;
L_08AFAF24:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08AFAA80;
      }
      goto L_08AFAF34;
    }
}
L_08AFAF34:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    goto L_08AFAF38;
L_08AFAF38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), g4);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(256));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFAA40;
      }
      goto L_08AFAF54;
    }
}
L_08AFAF54:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    goto L_08AFAF58;
L_08AFAF58:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(2));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g5);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = g4 == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFA8A8;
      }
      goto L_08AFAF84;
    }
}
L_08AFAF84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g4);
    g5 = (g5 + static_cast<std::uint32_t>(128));
    g6 = (g6 + static_cast<std::uint32_t>(2));
    g7 = (g7 + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g6);
    g4 = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g7);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AFA85C;
      }
      goto L_08AFAFC0;
    }
}
L_08AFAFC0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    hot_regs.g31 = (0x08AFAFCCu);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFAFCCu) goto L_08AFAFCC;
    return;
L_08AFAFCC:
    hot_regs.g31 = (0x08AFAFD4u);
    // nop
    goto L_08AF9350;
L_08AFAFD4:
    hot_regs.g31 = (0x08AFAFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 579u, 0x0889E7C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFAFDCu) goto L_08AFAFDC;
    return;
L_08AFAFDC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFB024:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8452)));
    g6 = (static_cast<std::int32_t>(g6) < 1018 ? 1u : 0u);
    g18 = (2238u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(-272));
    ctx.gpr[19] = (g18 + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (g18 + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (g18 + static_cast<std::uint32_t>(72));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const bool branch_taken = g6 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AFB09C;
      }
      goto L_08AFB08C;
    }
}
L_08AFB08C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g4 = (static_cast<std::int32_t>(g4) < 508 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB0A4;
      }
      goto L_08AFB09C;
    }
}
L_08AFB09C:
    hot_regs.g31 = (0x08AFB0A4u);
    // nop
    goto L_08AF9350;
L_08AFB0A4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1360)));
    hot_regs.g31 = (0x08AFB0B0u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB0B0u) goto L_08AFB0B0;
    return;
L_08AFB0B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[18]);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AFB19C;
      }
      goto L_08AFB0D4;
    }
}
L_08AFB0D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g28 = ctx.gpr[28];
    g8 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g8));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[19]);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g8));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[20]);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g8));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[21]);
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    g8 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g8));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    { const bool branch_taken = 0u == 0u;
    g4 = (g4 + ctx.gpr[18]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AFB254;
      }
      goto L_08AFB19C;
    }
}
L_08AFB19C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g5));
    g5 = (0u | 255u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + ctx.gpr[19]);
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g8 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + ctx.gpr[20]);
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g8 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g6 = (g4 + g4);
    g4 = (g4 + g6);
    g4 = (g4 + ctx.gpr[21]);
    g6 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1)));
    g8 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(g8));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + ctx.gpr[18]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_08AFB254;
}
L_08AFB254:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g5 = (15616u << 16u);
    f12 = std::bit_cast<float>(g5);
    { const float fs = f26; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g18);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g19);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g19);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g20);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g18);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f20));
    g5 = (16128u << 16u);
    f12 = std::bit_cast<float>(g5);
    f12 = ctx.fpr[24] - f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g19);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f20));
    f13 = f22 + f26;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g20);
    f14 = f20 + f26;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g4 = (g4 << 3u);
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g21);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8456)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8452)));
    g6 = (g5 + g5);
    g7 = (2238u << 16u);
    g7 = (g7 + static_cast<std::uint32_t>(12016));
    g6 = (g6 + g7);
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g7 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g7));
    g8 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(g4));
    g8 = (g4 + static_cast<std::uint32_t>(3));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(g8));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(g7));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8456), g4);
    g4 = (g5 + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8452), g4);
    f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g19 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g20 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g21 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
    hot_regs.f22 = f22;
    ctx.fpr[26] = f26;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AFB424:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8664), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10288), 0u);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(10416), 0u);
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8668), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08AFB46Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 497u, 0x08A05F1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB46Cu) goto L_08AFB46C;
    return;
L_08AFB46C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) < 0;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1552), hot_regs.g2);
      if (branch_taken) {
          goto L_08AFB484;
      }
      goto L_08AFB474;
    }
L_08AFB474:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1552)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AFB484u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 501u, 0x08A05F5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB484u) goto L_08AFB484;
    return;
L_08AFB484:
    hot_regs.g4 = (16179u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 13107u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8576));
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
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB4E0:
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(hot_regs.g4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB4E8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(8344), static_cast<std::uint16_t>(g4));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(g28 + static_cast<std::uint32_t>(8352), static_cast<std::uint16_t>(g4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFB4F8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    jump_target = hot_regs.g31;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(10284), static_cast<std::uint16_t>(hot_regs.g4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFB504:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AFB560;
      }
      goto L_08AFB548;
    }
}
L_08AFB548:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g4 = (static_cast<std::int32_t>(g4) < 7 ? 1u : 0u);
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g4 = g4;
        goto L_08AFB568;
    }
    goto L_08AFB558;
}
L_08AFB558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB788;
      }
      goto L_08AFB560;
    }
L_08AFB560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB794;
      }
      goto L_08AFB568;
    }
L_08AFB568:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 18 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB788;
      }
      goto L_08AFB574;
    }
}
L_08AFB574:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(g4));
    hot_regs.g5 = (0u | 24u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(g4));
    g16 = (2236u << 16u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(hot_regs.g5));
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1984)));
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(16));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08AFB5BC;
      }
      goto L_08AFB5A4;
    }
}
L_08AFB5A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB5C4;
      }
      goto L_08AFB5BC;
    }
}
L_08AFB5BC:
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
    goto L_08AFB5C4;
L_08AFB5C4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08AFB5D8u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB5D8u) goto L_08AFB5D8;
    return;
L_08AFB5D8:
{
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    f26 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 != 0u;
    f26 = ctx.fpr[0] + f26;
    hot_regs.g4 = g4;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08AFB600;
      }
      goto L_08AFB5F0;
    }
}
}
L_08AFB5F0:
{
    float f26 = ctx.fpr[26];
    f26 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16192u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    f26 = f26 + hot_regs.f12;
    ctx.fpr[26] = f26;
    goto L_08AFB600;
}
L_08AFB600:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15308u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (g4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 0u);
    g4 = (15477u << 16u);
    g4 = (g4 | 49807u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    g4 = (49440u << 16u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08AFB630;
}
L_08AFB630:
    hot_regs.g31 = (0x08AFB638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB638u) goto L_08AFB638;
    return;
L_08AFB638:
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08AFB650u);
    hot_regs.f20 = ctx.fpr[24] + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB650u) goto L_08AFB650;
    return;
L_08AFB650:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15232u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 32897u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08AFB678u);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB678u) goto L_08AFB678;
    return;
L_08AFB678:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    hot_regs.g5 = (g4 & 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB6B8;
      }
      goto L_08AFB68C;
    }
}
L_08AFB68C:
    hot_regs.g31 = (0x08AFB694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB694u) goto L_08AFB694;
    return;
L_08AFB694:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15560u << 16u);
    g4 = (g4 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFB6D0;
      }
      goto L_08AFB6B8;
    }
}
}
L_08AFB6B8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-128));
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AFB6D0;
}
}
L_08AFB6D0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<1u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f15 + hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 32u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08AFB770u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB770u) goto L_08AFB770;
    return;
L_08AFB770:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AFB630;
      }
      goto L_08AFB780;
    }
}
L_08AFB780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFB794;
      }
      goto L_08AFB788;
    }
L_08AFB788:
    hot_regs.g4 = (0u | 800u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(0u));
    goto L_08AFB794;
L_08AFB794:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFB7D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g16);
    hot_regs.g5 = (0u | 32u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(g4));
    g16 = (2236u << 16u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(hot_regs.g5));
    g16 = (g16 + static_cast<std::uint32_t>(32304));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1984)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08AFB850;
      }
      goto L_08AFB838;
    }
}
L_08AFB838:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1984)));
    g4 = (g4 + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB858;
      }
      goto L_08AFB850;
    }
}
L_08AFB850:
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
    goto L_08AFB858;
L_08AFB858:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08AFB86Cu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB86Cu) goto L_08AFB86C;
    return;
L_08AFB86C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    f12 = ctx.fpr[0] + f12;
    g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFB89C;
      }
      goto L_08AFB888;
    }
}
}
L_08AFB888:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08AFB89C;
}
L_08AFB89C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15308u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    g4 = (47875u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    g4 = (g4 | 4719u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 0u);
    g4 = (15477u << 16u);
    g4 = (g4 | 49807u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    g4 = (49440u << 16u);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(36));
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08AFB8D8;
}
L_08AFB8D8:
    hot_regs.g31 = (0x08AFB8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB8E0u) goto L_08AFB8E0;
    return;
L_08AFB8E0:
    hot_regs.g4 = (16880u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[24];
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08AFB8F8u);
    hot_regs.f20 = ctx.fpr[24] + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB8F8u) goto L_08AFB8F8;
    return;
L_08AFB8F8:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g4 = (15232u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 32897u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08AFB920u);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB920u) goto L_08AFB920;
    return;
L_08AFB920:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    hot_regs.g5 = (g4 & 1u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFB960;
      }
      goto L_08AFB934;
    }
}
L_08AFB934:
    hot_regs.g31 = (0x08AFB93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFB93Cu) goto L_08AFB93C;
    return;
L_08AFB93C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (15560u << 16u);
    g4 = (g4 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFB978;
      }
      goto L_08AFB960;
    }
}
}
L_08AFB960:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(-128));
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1968)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08AFB978;
}
}
L_08AFB978:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
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
    { const float fs = hot_regs.f20; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f13 = f13 + f14;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
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
    f14 = std::bit_cast<float>(g4);
    { const float fs = hot_regs.f20; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f13 + f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f15));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08AFBA34;
      }
      goto L_08AFB9E4;
    }
}
}
L_08AFB9E4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (0u | 32u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08AFBA34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBA34u) goto L_08AFBA34;
    return;
L_08AFBA34:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < 20 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AFB8D8;
      }
      goto L_08AFBA44;
    }
}
L_08AFBA44:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFBA80:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g31);
    hot_regs.g31 = (0x08AFBAC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBAC0u) goto L_08AFBAC0;
    return;
L_08AFBAC0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAC8;
    }
L_08AFBAC8:
    hot_regs.g31 = (0x08AFBAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 542u, 0x08AAE9E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBAD0u) goto L_08AFBAD0;
    return;
L_08AFBAD0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAD8;
    }
L_08AFBAD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11240)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AFBB10;
      }
      goto L_08AFBAF4;
    }
L_08AFBAF4:
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g31 = (0x08AFBB00u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 68u, 0x08A1C714u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBB00u) goto L_08AFBB00;
    return;
L_08AFBB00:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB18;
      }
      goto L_08AFBB08;
    }
L_08AFBB08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB10;
    }
L_08AFBB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBB18;
    }
L_08AFBB18:
    hot_regs.g31 = (0x08AFBB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBB20u) goto L_08AFBB20;
    return;
L_08AFBB20:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB2C;
    }
L_08AFBB2C:
    hot_regs.g31 = (0x08AFBB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 289u, 0x08B01038u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBB34u) goto L_08AFBB34;
    return;
L_08AFBB34:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBB4C;
      }
      goto L_08AFBB3C;
    }
L_08AFBB3C:
    hot_regs.g31 = (0x08AFBB44u);
    hot_regs.g4 = (0u | 85u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 729u, 0x088FF1B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBB44u) goto L_08AFBB44;
    return;
L_08AFBB44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBB4C;
    }
L_08AFBB4C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFBB7C;
      }
      goto L_08AFBB68;
    }
}
L_08AFBB68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 800u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), g4);
    g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBB7C;
    }
}
L_08AFBB7C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBB88;
    }
L_08AFBB88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1556)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AFBBAC;
      }
      goto L_08AFBB94;
    }
L_08AFBB94:
    hot_regs.g31 = (0x08AFBB9Cu);
    // nop
    goto L_08AFB504;
L_08AFBB9C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(1556)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFBBB8;
      }
      goto L_08AFBBAC;
    }
}
L_08AFBBAC:
    hot_regs.g4 = (0u | 800u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(1556), hot_regs.g4);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(1544), static_cast<std::uint8_t>(0u));
    goto L_08AFBBB8;
L_08AFBBB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16268u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8348)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFBBE0;
      }
      goto L_08AFBBD8;
    }
}
L_08AFBBD8:
    hot_regs.g31 = (0x08AFBBE0u);
    // nop
    goto L_08AFB7D0;
L_08AFBBE0:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (16544u << 16u);
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBBF4;
    }
L_08AFBBF4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(g4);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    g4 = (16928u << 16u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[20] = (0u | 0u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AFBF04;
      }
      goto L_08AFBC28;
    }
}
}
L_08AFBC28:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (16880u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[19] = (0u | 5u);
    g4 = (16192u << 16u);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(32));
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = g4;
    goto L_08AFBC48;
}
L_08AFBC48:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    hot_regs.g31 = (0x08AFBC54u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBC54u) goto L_08AFBC54;
    return;
L_08AFBC54:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    hot_regs.g31 = (0x08AFBC68u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBC68u) goto L_08AFBC68;
    return;
L_08AFBC68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.gpr[22] = (ctx.lo);
    hot_regs.g31 = (0x08AFBC98u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBC98u) goto L_08AFBC98;
    return;
L_08AFBC98:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AFBCACu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBCACu) goto L_08AFBCAC;
    return;
L_08AFBCAC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08AFBCD8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBCD8u) goto L_08AFBCD8;
    return;
L_08AFBCD8:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[28];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[22] = (hot_regs.g4 & 3u);
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    hot_regs.g31 = (0x08AFBD00u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBD00u) goto L_08AFBD00;
    return;
L_08AFBD00:
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f22;
    hot_regs.g4 = (0u | 85u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08AFBD34u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBD34u) goto L_08AFBD34;
    return;
L_08AFBD34:
    hot_regs.g31 = (0x08AFBD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBD3Cu) goto L_08AFBD3C;
    return;
L_08AFBD3C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    hot_regs.g31 = (0x08AFBD50u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBD50u) goto L_08AFBD50;
    return;
L_08AFBD50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8740)));
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g6 = (hot_regs.g2 >> 31u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g6 = (ctx.gpr[1] | hot_regs.g6);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g5 = (hot_regs.g5 >> 31u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[20] = (ctx.lo);
    hot_regs.g31 = (0x08AFBD94u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBD94u) goto L_08AFBD94;
    return;
L_08AFBD94:
    hot_regs.g6 = (ctx.gpr[22] - ctx.gpr[20]);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AFBDA8u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBDA8u) goto L_08AFBDA8;
    return;
L_08AFBDA8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g7 = (hot_regs.g6 < hot_regs.g4 ? 1u : 0u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g31 = (0x08AFBDE8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBDE8u) goto L_08AFBDE8;
    return;
L_08AFBDE8:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[28];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[20] = (hot_regs.g4 & 3u);
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    hot_regs.g31 = (0x08AFBE10u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBE10u) goto L_08AFBE10;
    return;
L_08AFBE10:
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f22;
    hot_regs.g4 = (0u | 85u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08AFBE44u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBE44u) goto L_08AFBE44;
    return;
L_08AFBE44:
    hot_regs.g31 = (0x08AFBE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBE4Cu) goto L_08AFBE4C;
    return;
L_08AFBE4C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-8744)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08AFBE60u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBE60u) goto L_08AFBE60;
    return;
L_08AFBE60:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08AFBE90u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBE90u) goto L_08AFBE90;
    return;
L_08AFBE90:
    hot_regs.f12 = hot_regs.f20 - ctx.fpr[28];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7896)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[20] = (hot_regs.g4 & 3u);
    hot_regs.f12 = ctx.fpr[28] + hot_regs.f12;
    hot_regs.g31 = (0x08AFBEB8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBEB8u) goto L_08AFBEB8;
    return;
L_08AFBEB8:
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f22;
    hot_regs.g4 = (0u | 85u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (0u | 0u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[20] | 0u);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.g31 = (0x08AFBEECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 90u, 0x0890043Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBEECu) goto L_08AFBEEC;
    return;
L_08AFBEEC:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08AFBC48;
      }
      goto L_08AFBF04;
    }
}
L_08AFBF04:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AFBF40:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AFBF48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    hot_regs.g31 = (0x08AFBF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBF68u) goto L_08AFBF68;
    return;
L_08AFBF68:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AFBF90;
      }
      goto L_08AFBF70;
    }
L_08AFBF70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    hot_regs.g5 = (0u | 10u);
    { const std::uint32_t dividend = g4; const std::uint32_t divisor = hot_regs.g5; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    g4 = (ctx.hi);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AFBF98;
      }
      goto L_08AFBF88;
    }
}
L_08AFBF88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AFBF90;
    }
L_08AFBF90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AFBF98;
    }
L_08AFBF98:
    hot_regs.g31 = (0x08AFBFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBFA0u) goto L_08AFBFA0;
    return;
L_08AFBFA0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    hot_regs.g4 = (hot_regs.g4 & 5u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 4u, 0x08AFC0B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AFBFB0;
    }
L_08AFBFB0:
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
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (17076u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17174u << 16u);
    hot_regs.g31 = (0x08AFBFDCu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBFDCu) goto L_08AFBFDC;
    return;
L_08AFBFDC:
    hot_regs.f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g31 = (0x08AFBFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AFBFF0u) goto L_08AFBFF0;
    return;
L_08AFBFF0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    if (static_cast<std::int32_t>(hot_regs.g4) >= 0) {
    hot_regs.g4 = (hot_regs.g4 & 1023u);
        (void)rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 2u, 0x08AFC00Cu>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_08AFBFFC;
L_08AFBFFC:
    hot_regs.g4 = (0u - hot_regs.g4);
    ctx.pc = 0x08AFC000u; return;
}

void recomp_unit_0189(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0189_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_189(Runtime &runtime) {
    runtime.register_generated_unit(189u, 0x08AF8000u, 16384u, &recomp_unit_0189, &recomp_unit_0189_entry);
    runtime.register_function(0x08AF8000u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8008u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8014u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8028u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF803Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8048u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF805Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF806Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8074u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF80F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8100u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF810Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8160u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF816Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8178u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8180u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8198u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF81F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8214u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF821Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF822Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8238u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF824Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8258u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8264u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF826Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8278u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF828Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF829Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF82FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF830Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8314u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF831Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8328u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8338u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8340u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8344u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF834Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8358u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8360u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8398u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF83FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8404u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8410u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8420u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8428u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8430u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF843Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8444u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8454u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8478u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF848Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF84FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8500u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8514u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8520u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8524u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8538u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8548u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF854Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8560u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF856Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8584u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8590u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8594u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF85FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8608u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8618u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF861Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF862Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8638u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF864Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8650u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8668u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF86ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8700u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8758u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8814u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8834u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF883Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8844u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF884Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8854u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8858u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8874u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF888Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF88ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8918u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8924u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8978u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8980u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8990u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF89E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8B48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8BE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8C94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8CC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8D98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8DFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E0Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8E44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8ED0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8EE4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8F9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF8FE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF905Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9064u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9070u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9078u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9080u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF908Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9094u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF909Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF90DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9114u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9130u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9188u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9198u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF91D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9204u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9214u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9240u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9250u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF926Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9280u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9290u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92A0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF92F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9300u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9310u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9334u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9348u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9350u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9378u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9390u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9398u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9430u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9438u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9498u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF94F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9500u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9508u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9510u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF951Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF952Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9538u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9540u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF954Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9564u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9570u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9588u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF95ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9604u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF962Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9640u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF964Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF965Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF96FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9738u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9740u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9750u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF976Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF97FCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9848u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9860u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9878u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF98D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF992Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9934u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9940u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9948u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9974u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9994u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99C8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF99F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A78u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9A98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AA4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9ABCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AC4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9AF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9B98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BBCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9BF8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C5Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C6Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9C7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9CD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9F94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AF9FFCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA008u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA030u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA098u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA0DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA144u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA14Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA154u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA194u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA19Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1C0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA1F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA200u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA220u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA238u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA244u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA258u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA264u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA274u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA288u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA290u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA298u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2ACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2DCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA2F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA308u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA338u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA3F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA410u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA448u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA454u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA468u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA474u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA498u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA49Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA4B4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA674u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA680u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA68Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA698u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA710u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA724u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA72Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA740u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA748u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA758u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA760u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA770u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA784u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA794u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA7F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA808u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA81Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA85Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA870u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8A8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8CCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA8E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA904u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA928u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA92Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA988u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9ECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFA9F4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA14u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAA9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAAF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAB84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABB4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFABF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC30u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAC8Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFACC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD64u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAD98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFADE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE74u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAE7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAEE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF1Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF24u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF38u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF58u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAF84u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFCCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFD4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFAFDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB024u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB08Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB09Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0B0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB0D4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB19Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB254u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB424u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB46Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB474u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB484u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4E8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB4F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB504u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB548u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB558u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB560u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB568u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB574u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5A4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5BCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5C4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB5F0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB600u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB630u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB638u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB650u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB678u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB68Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB694u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6B8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB6D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB770u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB780u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB788u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB794u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB7D0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB838u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB850u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB858u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB86Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB888u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB89Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8D8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8E0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB8F8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB920u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB934u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB93Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB960u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB978u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFB9E4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBA80u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAC0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAC8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAD0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBAF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB08u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB18u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB20u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB2Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB7Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBB9Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBE0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBBF4u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC28u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC54u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBC98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCACu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBCD8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD00u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD34u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD3Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD50u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBD94u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDA8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBDE8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE10u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE44u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE4Cu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE60u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBE90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEB8u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBEECu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF04u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF40u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF48u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF68u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF70u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF88u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF90u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBF98u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFA0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFB0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFDCu, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFF0u, &recomp_unit_0189, "recomp_unit_0189");
    runtime.register_function(0x08AFBFFCu, &recomp_unit_0189, "recomp_unit_0189");
}
} // namespace psprecomp
