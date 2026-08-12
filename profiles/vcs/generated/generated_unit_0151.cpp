#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[4086] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 16, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 19, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0,
    23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 37, 0,
    0, 0, 0, 38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0,
    0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 49, 0, 50, 0, 51,
    0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0,
    0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    69, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81,
    0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88,
    0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97,
    0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0,
    0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 115, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0,
    0, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167,
    168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0,
    0, 179, 0, 0, 0, 0, 180, 181, 182, 0, 183, 0, 0, 0, 184, 0, 185, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0,
    191, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 202, 0, 0,
    0, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0,
    236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0,
    263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 269, 270, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0,
    0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 0, 0,
    0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0,
    0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 305, 0, 0, 0,
    0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0,
    313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0,
    0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323,
    324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 339,
    0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0,
    348, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 355, 0, 0, 356, 0, 0, 357, 0,
    358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 362, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 0,
    370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 384, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0,
    0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 396, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0,
    0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0,
    0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0,
    428, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 432, 0, 0, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437,
    0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0,
    0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 453, 0, 0,
    0, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 461,
    0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 471, 0, 0, 0, 0, 0,
    0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476,
    0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511,
    0, 0, 512, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0,
    567, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 579, 0, 0, 580, 0,
    0, 0, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0,
    590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0, 595, 0, 596, 597, 0, 0, 0, 598, 0,
    0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    607, 0, 608, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0,
    0, 622, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 0, 633,
    0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0,
    642, 0, 643, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0,
    661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667,
    0, 0, 0, 0, 668, 0, 669, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 16344u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60008;
    case 3u: goto L_08A60014;
    case 4u: goto L_08A60024;
    case 5u: goto L_08A60034;
    case 6u: goto L_08A6003C;
    case 7u: goto L_08A60044;
    case 8u: goto L_08A6005C;
    case 9u: goto L_08A60070;
    case 10u: goto L_08A60078;
    case 11u: goto L_08A6008C;
    case 12u: goto L_08A600A0;
    case 13u: goto L_08A600B4;
    case 14u: goto L_08A600C4;
    case 15u: goto L_08A600E8;
    case 16u: goto L_08A60108;
    case 17u: goto L_08A60110;
    case 18u: goto L_08A6012C;
    case 19u: goto L_08A6014C;
    case 20u: goto L_08A60150;
    case 21u: goto L_08A60168;
    case 22u: goto L_08A60170;
    case 23u: goto L_08A60180;
    case 24u: goto L_08A60198;
    case 25u: goto L_08A601B8;
    case 26u: goto L_08A601C8;
    case 27u: goto L_08A601D4;
    case 28u: goto L_08A601E4;
    case 29u: goto L_08A601F4;
    case 30u: goto L_08A601FC;
    case 31u: goto L_08A60224;
    case 32u: goto L_08A60234;
    case 33u: goto L_08A6023C;
    case 34u: goto L_08A6024C;
    case 35u: goto L_08A6025C;
    case 36u: goto L_08A60264;
    case 37u: goto L_08A60278;
    case 38u: goto L_08A6028C;
    case 39u: goto L_08A60294;
    case 40u: goto L_08A602A8;
    case 41u: goto L_08A602BC;
    case 42u: goto L_08A602D0;
    case 43u: goto L_08A602E0;
    case 44u: goto L_08A60304;
    case 45u: goto L_08A60324;
    case 46u: goto L_08A6032C;
    case 47u: goto L_08A60348;
    case 48u: goto L_08A60368;
    case 49u: goto L_08A6036C;
    case 50u: goto L_08A60374;
    case 51u: goto L_08A6037C;
    case 52u: goto L_08A603A0;
    case 53u: goto L_08A603B8;
    case 54u: goto L_08A603D8;
    case 55u: goto L_08A603E8;
    case 56u: goto L_08A603F4;
    case 57u: goto L_08A60404;
    case 58u: goto L_08A60414;
    case 59u: goto L_08A6041C;
    case 60u: goto L_08A60444;
    case 61u: goto L_08A60470;
    case 62u: goto L_08A60480;
    case 63u: goto L_08A60488;
    case 64u: goto L_08A60498;
    case 65u: goto L_08A604A8;
    case 66u: goto L_08A604F0;
    case 67u: goto L_08A6054C;
    case 68u: goto L_08A60554;
    case 69u: goto L_08A60580;
    case 70u: goto L_08A6058C;
    case 71u: goto L_08A60594;
    case 72u: goto L_08A6059C;
    case 73u: goto L_08A605A4;
    case 74u: goto L_08A605B4;
    case 75u: goto L_08A605C4;
    case 76u: goto L_08A605CC;
    case 77u: goto L_08A6060C;
    case 78u: goto L_08A60624;
    case 79u: goto L_08A60638;
    case 80u: goto L_08A60640;
    case 81u: goto L_08A6067C;
    case 82u: goto L_08A60694;
    case 83u: goto L_08A606A0;
    case 84u: goto L_08A606A8;
    case 85u: goto L_08A606B4;
    case 86u: goto L_08A606BC;
    case 87u: goto L_08A606E0;
    case 88u: goto L_08A606FC;
    case 89u: goto L_08A60704;
    case 90u: goto L_08A6070C;
    case 91u: goto L_08A6072C;
    case 92u: goto L_08A60734;
    case 93u: goto L_08A6073C;
    case 94u: goto L_08A60754;
    case 95u: goto L_08A6075C;
    case 96u: goto L_08A60764;
    case 97u: goto L_08A6077C;
    case 98u: goto L_08A60784;
    case 99u: goto L_08A607A0;
    case 100u: goto L_08A607AC;
    case 101u: goto L_08A607BC;
    case 102u: goto L_08A607CC;
    case 103u: goto L_08A607D8;
    case 104u: goto L_08A607E8;
    case 105u: goto L_08A607F8;
    case 106u: goto L_08A60804;
    case 107u: goto L_08A6080C;
    case 108u: goto L_08A60820;
    case 109u: goto L_08A60830;
    case 110u: goto L_08A6083C;
    case 111u: goto L_08A60878;
    case 112u: goto L_08A60890;
    case 113u: goto L_08A6089C;
    case 114u: goto L_08A608B8;
    case 115u: goto L_08A608BC;
    case 116u: goto L_08A608C8;
    case 117u: goto L_08A608D8;
    case 118u: goto L_08A608F4;
    case 119u: goto L_08A60908;
    case 120u: goto L_08A60910;
    case 121u: goto L_08A6091C;
    case 122u: goto L_08A60924;
    case 123u: goto L_08A60930;
    case 124u: goto L_08A6093C;
    case 125u: goto L_08A60948;
    case 126u: goto L_08A60954;
    case 127u: goto L_08A60960;
    case 128u: goto L_08A60978;
    case 129u: goto L_08A60990;
    case 130u: goto L_08A60998;
    case 131u: goto L_08A609A0;
    case 132u: goto L_08A609C4;
    case 133u: goto L_08A609E8;
    case 134u: goto L_08A60A1C;
    case 135u: goto L_08A60A68;
    case 136u: goto L_08A60AAC;
    case 137u: goto L_08A60ABC;
    case 138u: goto L_08A60AD0;
    case 139u: goto L_08A60B58;
    case 140u: goto L_08A60BA8;
    case 141u: goto L_08A60BCC;
    case 142u: goto L_08A60C20;
    case 143u: goto L_08A60C3C;
    case 144u: goto L_08A60C48;
    case 145u: goto L_08A60C50;
    case 146u: goto L_08A60C58;
    case 147u: goto L_08A60C60;
    case 148u: goto L_08A60C68;
    case 149u: goto L_08A60CC4;
    case 150u: goto L_08A60D20;
    case 151u: goto L_08A60D28;
    case 152u: goto L_08A60D34;
    case 153u: goto L_08A60D40;
    case 154u: goto L_08A60DF4;
    case 155u: goto L_08A60E04;
    case 156u: goto L_08A60E14;
    case 157u: goto L_08A60E38;
    case 158u: goto L_08A60E3C;
    case 159u: goto L_08A60E48;
    case 160u: goto L_08A60E58;
    case 161u: goto L_08A60E78;
    case 162u: goto L_08A60EA0;
    case 163u: goto L_08A60EAC;
    case 164u: goto L_08A60EC0;
    case 165u: goto L_08A60EDC;
    case 166u: goto L_08A60EE8;
    case 167u: goto L_08A60EFC;
    case 168u: goto L_08A60F00;
    case 169u: goto L_08A60F18;
    case 170u: goto L_08A60F2C;
    case 171u: goto L_08A60F40;
    case 172u: goto L_08A60F60;
    case 173u: goto L_08A60F70;
    case 174u: goto L_08A60FA0;
    case 175u: goto L_08A60FBC;
    case 176u: goto L_08A60FD0;
    case 177u: goto L_08A60FE0;
    case 178u: goto L_08A60FF4;
    case 179u: goto L_08A61004;
    case 180u: goto L_08A61018;
    case 181u: goto L_08A6101C;
    case 182u: goto L_08A61020;
    case 183u: goto L_08A61028;
    case 184u: goto L_08A61038;
    case 185u: goto L_08A61040;
    case 186u: goto L_08A61044;
    case 187u: goto L_08A61054;
    case 188u: goto L_08A61064;
    case 189u: goto L_08A61070;
    case 190u: goto L_08A61078;
    case 191u: goto L_08A61080;
    case 192u: goto L_08A61088;
    case 193u: goto L_08A610EC;
    case 194u: goto L_08A6110C;
    case 195u: goto L_08A61124;
    case 196u: goto L_08A6117C;
    case 197u: goto L_08A6118C;
    case 198u: goto L_08A611BC;
    case 199u: goto L_08A611C8;
    case 200u: goto L_08A611D4;
    case 201u: goto L_08A611E8;
    case 202u: goto L_08A611F4;
    case 203u: goto L_08A61204;
    case 204u: goto L_08A61210;
    case 205u: goto L_08A61218;
    case 206u: goto L_08A61220;
    case 207u: goto L_08A6122C;
    case 208u: goto L_08A61264;
    case 209u: goto L_08A612B4;
    case 210u: goto L_08A612D0;
    case 211u: goto L_08A612FC;
    case 212u: goto L_08A6133C;
    case 213u: goto L_08A61344;
    case 214u: goto L_08A61384;
    case 215u: goto L_08A6138C;
    case 216u: goto L_08A613A8;
    case 217u: goto L_08A61418;
    case 218u: goto L_08A61420;
    case 219u: goto L_08A61490;
    case 220u: goto L_08A61498;
    case 221u: goto L_08A614DC;
    case 222u: goto L_08A614E4;
    case 223u: goto L_08A61504;
    case 224u: goto L_08A61508;
    case 225u: goto L_08A61538;
    case 226u: goto L_08A61540;
    case 227u: goto L_08A61548;
    case 228u: goto L_08A615A0;
    case 229u: goto L_08A615B8;
    case 230u: goto L_08A615C8;
    case 231u: goto L_08A61614;
    case 232u: goto L_08A61640;
    case 233u: goto L_08A61648;
    case 234u: goto L_08A61664;
    case 235u: goto L_08A61678;
    case 236u: goto L_08A61680;
    case 237u: goto L_08A616E4;
    case 238u: goto L_08A616EC;
    case 239u: goto L_08A61734;
    case 240u: goto L_08A6173C;
    case 241u: goto L_08A61754;
    case 242u: goto L_08A617B0;
    case 243u: goto L_08A617B8;
    case 244u: goto L_08A617EC;
    case 245u: goto L_08A6180C;
    case 246u: goto L_08A618A8;
    case 247u: goto L_08A61924;
    case 248u: goto L_08A6192C;
    case 249u: goto L_08A61934;
    case 250u: goto L_08A6193C;
    case 251u: goto L_08A61944;
    case 252u: goto L_08A61950;
    case 253u: goto L_08A61960;
    case 254u: goto L_08A6196C;
    case 255u: goto L_08A619A0;
    case 256u: goto L_08A619D4;
    case 257u: goto L_08A619DC;
    case 258u: goto L_08A61A10;
    case 259u: goto L_08A61A60;
    case 260u: goto L_08A61AA0;
    case 261u: goto L_08A61AA8;
    case 262u: goto L_08A61AF0;
    case 263u: goto L_08A61B00;
    case 264u: goto L_08A61B0C;
    case 265u: goto L_08A61B14;
    case 266u: goto L_08A61B1C;
    case 267u: goto L_08A61B30;
    case 268u: goto L_08A61B44;
    case 269u: goto L_08A61B50;
    case 270u: goto L_08A61B54;
    case 271u: goto L_08A61B60;
    case 272u: goto L_08A61B6C;
    case 273u: goto L_08A61B74;
    case 274u: goto L_08A61B94;
    case 275u: goto L_08A61BA4;
    case 276u: goto L_08A61BF4;
    case 277u: goto L_08A61C08;
    case 278u: goto L_08A61C74;
    case 279u: goto L_08A61C88;
    case 280u: goto L_08A61CEC;
    case 281u: goto L_08A61D44;
    case 282u: goto L_08A61D4C;
    case 283u: goto L_08A61D6C;
    case 284u: goto L_08A61D74;
    case 285u: goto L_08A61D94;
    case 286u: goto L_08A61DD4;
    case 287u: goto L_08A61DEC;
    case 288u: goto L_08A61DF4;
    case 289u: goto L_08A61E44;
    case 290u: goto L_08A61E50;
    case 291u: goto L_08A61E54;
    case 292u: goto L_08A61E68;
    case 293u: goto L_08A61E80;
    case 294u: goto L_08A61EA4;
    case 295u: goto L_08A61EBC;
    case 296u: goto L_08A61ECC;
    case 297u: goto L_08A61EDC;
    case 298u: goto L_08A61EE8;
    case 299u: goto L_08A61FC4;
    case 300u: goto L_08A61FD8;
    case 301u: goto L_08A6202C;
    case 302u: goto L_08A62040;
    case 303u: goto L_08A62094;
    case 304u: goto L_08A620E8;
    case 305u: goto L_08A620F0;
    case 306u: goto L_08A62108;
    case 307u: goto L_08A62120;
    case 308u: goto L_08A62138;
    case 309u: goto L_08A6213C;
    case 310u: goto L_08A62154;
    case 311u: goto L_08A62164;
    case 312u: goto L_08A62174;
    case 313u: goto L_08A62180;
    case 314u: goto L_08A62190;
    case 315u: goto L_08A621A8;
    case 316u: goto L_08A621B0;
    case 317u: goto L_08A621BC;
    case 318u: goto L_08A621F4;
    case 319u: goto L_08A62204;
    case 320u: goto L_08A62298;
    case 321u: goto L_08A622AC;
    case 322u: goto L_08A622F4;
    case 323u: goto L_08A622FC;
    case 324u: goto L_08A62300;
    case 325u: goto L_08A62398;
    case 326u: goto L_08A623A8;
    case 327u: goto L_08A623BC;
    case 328u: goto L_08A623D0;
    case 329u: goto L_08A623D4;
    case 330u: goto L_08A62418;
    case 331u: goto L_08A62420;
    case 332u: goto L_08A62424;
    case 333u: goto L_08A624A4;
    case 334u: goto L_08A624B4;
    case 335u: goto L_08A624C8;
    case 336u: goto L_08A624D8;
    case 337u: goto L_08A624E8;
    case 338u: goto L_08A624F4;
    case 339u: goto L_08A624FC;
    case 340u: goto L_08A6250C;
    case 341u: goto L_08A62514;
    case 342u: goto L_08A62520;
    case 343u: goto L_08A6252C;
    case 344u: goto L_08A6253C;
    case 345u: goto L_08A62544;
    case 346u: goto L_08A62550;
    case 347u: goto L_08A62574;
    case 348u: goto L_08A62580;
    case 349u: goto L_08A62590;
    case 350u: goto L_08A625A4;
    case 351u: goto L_08A625AC;
    case 352u: goto L_08A625C4;
    case 353u: goto L_08A625D0;
    case 354u: goto L_08A625D8;
    case 355u: goto L_08A625E0;
    case 356u: goto L_08A625EC;
    case 357u: goto L_08A625F8;
    case 358u: goto L_08A62600;
    case 359u: goto L_08A6260C;
    case 360u: goto L_08A62618;
    case 361u: goto L_08A62620;
    case 362u: goto L_08A62630;
    case 363u: goto L_08A62638;
    case 364u: goto L_08A62644;
    case 365u: goto L_08A6264C;
    case 366u: goto L_08A62658;
    case 367u: goto L_08A62660;
    case 368u: goto L_08A6266C;
    case 369u: goto L_08A62674;
    case 370u: goto L_08A62680;
    case 371u: goto L_08A6268C;
    case 372u: goto L_08A62694;
    case 373u: goto L_08A626A0;
    case 374u: goto L_08A626A8;
    case 375u: goto L_08A626B4;
    case 376u: goto L_08A626C0;
    case 377u: goto L_08A626DC;
    case 378u: goto L_08A626E8;
    case 379u: goto L_08A626F8;
    case 380u: goto L_08A62700;
    case 381u: goto L_08A6270C;
    case 382u: goto L_08A62720;
    case 383u: goto L_08A6272C;
    case 384u: goto L_08A62734;
    case 385u: goto L_08A6273C;
    case 386u: goto L_08A6274C;
    case 387u: goto L_08A62754;
    case 388u: goto L_08A62760;
    case 389u: goto L_08A627B4;
    case 390u: goto L_08A627C0;
    case 391u: goto L_08A627E0;
    case 392u: goto L_08A627E8;
    case 393u: goto L_08A627F4;
    case 394u: goto L_08A62810;
    case 395u: goto L_08A62824;
    case 396u: goto L_08A62830;
    case 397u: goto L_08A62838;
    case 398u: goto L_08A62840;
    case 399u: goto L_08A62850;
    case 400u: goto L_08A62858;
    case 401u: goto L_08A62860;
    case 402u: goto L_08A6286C;
    case 403u: goto L_08A6288C;
    case 404u: goto L_08A628AC;
    case 405u: goto L_08A628B4;
    case 406u: goto L_08A628C4;
    case 407u: goto L_08A628CC;
    case 408u: goto L_08A628D8;
    case 409u: goto L_08A628E4;
    case 410u: goto L_08A628F0;
    case 411u: goto L_08A62910;
    case 412u: goto L_08A62918;
    case 413u: goto L_08A62924;
    case 414u: goto L_08A62938;
    case 415u: goto L_08A6294C;
    case 416u: goto L_08A62958;
    case 417u: goto L_08A62960;
    case 418u: goto L_08A6296C;
    case 419u: goto L_08A62974;
    case 420u: goto L_08A62984;
    case 421u: goto L_08A6298C;
    case 422u: goto L_08A62998;
    case 423u: goto L_08A629A0;
    case 424u: goto L_08A629BC;
    case 425u: goto L_08A629D0;
    case 426u: goto L_08A629E8;
    case 427u: goto L_08A629F4;
    case 428u: goto L_08A62A00;
    case 429u: goto L_08A62A08;
    case 430u: goto L_08A62A18;
    case 431u: goto L_08A62A24;
    case 432u: goto L_08A62A2C;
    case 433u: goto L_08A62A3C;
    case 434u: goto L_08A62A48;
    case 435u: goto L_08A62A54;
    case 436u: goto L_08A62A74;
    case 437u: goto L_08A62A7C;
    case 438u: goto L_08A62A84;
    case 439u: goto L_08A62A94;
    case 440u: goto L_08A62AA0;
    case 441u: goto L_08A62AB4;
    case 442u: goto L_08A62AC0;
    case 443u: goto L_08A62AC8;
    case 444u: goto L_08A62AE4;
    case 445u: goto L_08A62AEC;
    case 446u: goto L_08A62AF8;
    case 447u: goto L_08A62B0C;
    case 448u: goto L_08A62B1C;
    case 449u: goto L_08A62B38;
    case 450u: goto L_08A62B54;
    case 451u: goto L_08A62B5C;
    case 452u: goto L_08A62B6C;
    case 453u: goto L_08A62B74;
    case 454u: goto L_08A62B8C;
    case 455u: goto L_08A62B98;
    case 456u: goto L_08A62BA4;
    case 457u: goto L_08A62BAC;
    case 458u: goto L_08A62BC0;
    case 459u: goto L_08A62BE0;
    case 460u: goto L_08A62BEC;
    case 461u: goto L_08A62BFC;
    case 462u: goto L_08A62C08;
    case 463u: goto L_08A62C30;
    case 464u: goto L_08A62C5C;
    case 465u: goto L_08A62C64;
    case 466u: goto L_08A62C8C;
    case 467u: goto L_08A62C94;
    case 468u: goto L_08A62CA0;
    case 469u: goto L_08A62CB0;
    case 470u: goto L_08A62CDC;
    case 471u: goto L_08A62CE8;
    case 472u: goto L_08A62D04;
    case 473u: goto L_08A62D10;
    case 474u: goto L_08A62D3C;
    case 475u: goto L_08A62D48;
    case 476u: goto L_08A62D7C;
    case 477u: goto L_08A62D88;
    case 478u: goto L_08A62DA4;
    case 479u: goto L_08A62DB0;
    case 480u: goto L_08A62DDC;
    case 481u: goto L_08A62E04;
    case 482u: goto L_08A62E1C;
    case 483u: goto L_08A62E30;
    case 484u: goto L_08A62E40;
    case 485u: goto L_08A62E54;
    case 486u: goto L_08A62E60;
    case 487u: goto L_08A62E88;
    case 488u: goto L_08A62E94;
    case 489u: goto L_08A62EB4;
    case 490u: goto L_08A62EC0;
    case 491u: goto L_08A62EE0;
    case 492u: goto L_08A62EEC;
    case 493u: goto L_08A62F08;
    case 494u: goto L_08A62F14;
    case 495u: goto L_08A62F3C;
    case 496u: goto L_08A62F48;
    case 497u: goto L_08A62F68;
    case 498u: goto L_08A62F74;
    case 499u: goto L_08A62F90;
    case 500u: goto L_08A62FA0;
    case 501u: goto L_08A62FAC;
    case 502u: goto L_08A62FB8;
    case 503u: goto L_08A62FCC;
    case 504u: goto L_08A62FDC;
    case 505u: goto L_08A62FF0;
    case 506u: goto L_08A63024;
    case 507u: goto L_08A63034;
    case 508u: goto L_08A63050;
    case 509u: goto L_08A63060;
    case 510u: goto L_08A63070;
    case 511u: goto L_08A6307C;
    case 512u: goto L_08A63088;
    case 513u: goto L_08A63090;
    case 514u: goto L_08A630A0;
    case 515u: goto L_08A630AC;
    case 516u: goto L_08A630B4;
    case 517u: goto L_08A630CC;
    case 518u: goto L_08A630D4;
    case 519u: goto L_08A630DC;
    case 520u: goto L_08A630E4;
    case 521u: goto L_08A63128;
    case 522u: goto L_08A63130;
    case 523u: goto L_08A63140;
    case 524u: goto L_08A63184;
    case 525u: goto L_08A6318C;
    case 526u: goto L_08A631A0;
    case 527u: goto L_08A631B4;
    case 528u: goto L_08A631BC;
    case 529u: goto L_08A631C4;
    case 530u: goto L_08A631D0;
    case 531u: goto L_08A63218;
    case 532u: goto L_08A63240;
    case 533u: goto L_08A63248;
    case 534u: goto L_08A63250;
    case 535u: goto L_08A63258;
    case 536u: goto L_08A63260;
    case 537u: goto L_08A63268;
    case 538u: goto L_08A63270;
    case 539u: goto L_08A63278;
    case 540u: goto L_08A63298;
    case 541u: goto L_08A632B8;
    case 542u: goto L_08A632C0;
    case 543u: goto L_08A632C8;
    case 544u: goto L_08A63304;
    case 545u: goto L_08A63314;
    case 546u: goto L_08A63324;
    case 547u: goto L_08A6332C;
    case 548u: goto L_08A63338;
    case 549u: goto L_08A63340;
    case 550u: goto L_08A63370;
    case 551u: goto L_08A63380;
    case 552u: goto L_08A6339C;
    case 553u: goto L_08A633B8;
    case 554u: goto L_08A63440;
    case 555u: goto L_08A63448;
    case 556u: goto L_08A63464;
    case 557u: goto L_08A63488;
    case 558u: goto L_08A634AC;
    case 559u: goto L_08A63508;
    case 560u: goto L_08A6358C;
    case 561u: goto L_08A63594;
    case 562u: goto L_08A635B0;
    case 563u: goto L_08A635D0;
    case 564u: goto L_08A635F4;
    case 565u: goto L_08A63654;
    case 566u: goto L_08A6365C;
    case 567u: goto L_08A63680;
    case 568u: goto L_08A6368C;
    case 569u: goto L_08A63694;
    case 570u: goto L_08A6369C;
    case 571u: goto L_08A636A4;
    case 572u: goto L_08A636B0;
    case 573u: goto L_08A636B8;
    case 574u: goto L_08A636C0;
    case 575u: goto L_08A636C8;
    case 576u: goto L_08A636D4;
    case 577u: goto L_08A636DC;
    case 578u: goto L_08A636E4;
    case 579u: goto L_08A636EC;
    case 580u: goto L_08A636F8;
    case 581u: goto L_08A63718;
    case 582u: goto L_08A63724;
    case 583u: goto L_08A6372C;
    case 584u: goto L_08A63734;
    case 585u: goto L_08A6373C;
    case 586u: goto L_08A637A4;
    case 587u: goto L_08A637AC;
    case 588u: goto L_08A637CC;
    case 589u: goto L_08A6385C;
    case 590u: goto L_08A63880;
    case 591u: goto L_08A638B4;
    case 592u: goto L_08A638C0;
    case 593u: goto L_08A638CC;
    case 594u: goto L_08A638D4;
    case 595u: goto L_08A638DC;
    case 596u: goto L_08A638E4;
    case 597u: goto L_08A638E8;
    case 598u: goto L_08A638F8;
    case 599u: goto L_08A6391C;
    case 600u: goto L_08A63930;
    case 601u: goto L_08A6394C;
    case 602u: goto L_08A63954;
    case 603u: goto L_08A63960;
    case 604u: goto L_08A6399C;
    case 605u: goto L_08A639A8;
    case 606u: goto L_08A639F4;
    case 607u: goto L_08A63A00;
    case 608u: goto L_08A63A08;
    case 609u: goto L_08A63A20;
    case 610u: goto L_08A63A38;
    case 611u: goto L_08A63A3C;
    case 612u: goto L_08A63A44;
    case 613u: goto L_08A63A5C;
    case 614u: goto L_08A63A74;
    case 615u: goto L_08A63AA0;
    case 616u: goto L_08A63AB0;
    case 617u: goto L_08A63AC4;
    case 618u: goto L_08A63ACC;
    case 619u: goto L_08A63AE4;
    case 620u: goto L_08A63AF0;
    case 621u: goto L_08A63AF8;
    case 622u: goto L_08A63B04;
    case 623u: goto L_08A63B1C;
    case 624u: goto L_08A63B24;
    case 625u: goto L_08A63B78;
    case 626u: goto L_08A63B98;
    case 627u: goto L_08A63C20;
    case 628u: goto L_08A63C30;
    case 629u: goto L_08A63C50;
    case 630u: goto L_08A63C58;
    case 631u: goto L_08A63C64;
    case 632u: goto L_08A63C6C;
    case 633u: goto L_08A63C7C;
    case 634u: goto L_08A63C84;
    case 635u: goto L_08A63C90;
    case 636u: goto L_08A63C9C;
    case 637u: goto L_08A63CA4;
    case 638u: goto L_08A63CB0;
    case 639u: goto L_08A63CBC;
    case 640u: goto L_08A63CD8;
    case 641u: goto L_08A63CE8;
    case 642u: goto L_08A63D00;
    case 643u: goto L_08A63D08;
    case 644u: goto L_08A63D14;
    case 645u: goto L_08A63D44;
    case 646u: goto L_08A63D58;
    case 647u: goto L_08A63D70;
    case 648u: goto L_08A63E0C;
    case 649u: goto L_08A63E14;
    case 650u: goto L_08A63E4C;
    case 651u: goto L_08A63E54;
    case 652u: goto L_08A63E94;
    case 653u: goto L_08A63E9C;
    case 654u: goto L_08A63EA4;
    case 655u: goto L_08A63EAC;
    case 656u: goto L_08A63EB4;
    case 657u: goto L_08A63EC8;
    case 658u: goto L_08A63EE0;
    case 659u: goto L_08A63EF0;
    case 660u: goto L_08A63EF8;
    case 661u: goto L_08A63F00;
    case 662u: goto L_08A63F38;
    case 663u: goto L_08A63F40;
    case 664u: goto L_08A63F4C;
    case 665u: goto L_08A63F54;
    case 666u: goto L_08A63F6C;
    case 667u: goto L_08A63F7C;
    case 668u: goto L_08A63F90;
    case 669u: goto L_08A63F98;
    case 670u: goto L_08A63F9C;
    case 671u: goto L_08A63FD4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    hot_regs.g31 = (0x08A60008u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60008u) goto L_08A60008;
    return;
L_08A60008:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(1792));
    hot_regs.g31 = (0x08A60014u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60014u) goto L_08A60014;
    return;
L_08A60014:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A60024u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60024u) goto L_08A60024;
    return;
L_08A60024:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A60034u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60034u) goto L_08A60034;
    return;
L_08A60034:
    hot_regs.g31 = (0x08A6003Cu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6003Cu) goto L_08A6003C;
    return;
L_08A6003C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A60044;
    }
L_08A60044:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    f22 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f22)) && f12 == f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08A60264;
      }
      goto L_08A6005C;
    }
}
L_08A6005C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A60264;
      }
      goto L_08A60070;
    }
}
L_08A60070:
    hot_regs.g31 = (0x08A60078u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60078u) goto L_08A60078;
    return;
L_08A60078:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60264;
      }
      goto L_08A6008C;
    }
L_08A6008C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A600B4;
      }
      goto L_08A600A0;
    }
}
L_08A600A0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A60264;
      }
      goto L_08A600B4;
    }
}
L_08A600B4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A600C4u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A600C4u) goto L_08A600C4;
    return;
L_08A600C4:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (15897u << 16u);
    f20 = f20 - hot_regs.f12;
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f20 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16025u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A60110;
      }
      goto L_08A600E8;
    }
}
}
L_08A600E8:
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1856), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1856));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1860));
    hot_regs.g31 = (0x08A60108u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1860), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60108u) goto L_08A60108;
    return;
L_08A60108:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A60150;
      }
      goto L_08A60110;
    }
L_08A60110:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48547u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (48655u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A60150;
      }
      goto L_08A6012C;
    }
}
L_08A6012C:
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1864), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1864));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1868));
    hot_regs.g31 = (0x08A6014Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1868), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6014Cu) goto L_08A6014C;
    return;
L_08A6014C:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A60150;
L_08A60150:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1808), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A60168u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60168u) goto L_08A60168;
    return;
L_08A60168:
    hot_regs.g31 = (0x08A60170u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 13u, 0x08A58134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60170u) goto L_08A60170;
    return;
L_08A60170:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1812), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1812));
    hot_regs.g31 = (0x08A60180u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1808));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60180u) goto L_08A60180;
    return;
L_08A60180:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(1824));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A60198u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60198u) goto L_08A60198;
    return;
L_08A60198:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A601B8u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601B8u) goto L_08A601B8;
    return;
L_08A601B8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A601C8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601C8u) goto L_08A601C8;
    return;
L_08A601C8:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(1840));
    hot_regs.g31 = (0x08A601D4u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601D4u) goto L_08A601D4;
    return;
L_08A601D4:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A601E4u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601E4u) goto L_08A601E4;
    return;
L_08A601E4:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A601F4u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601F4u) goto L_08A601F4;
    return;
L_08A601F4:
    hot_regs.g31 = (0x08A601FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A601FCu) goto L_08A601FC;
    return;
L_08A601FC:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A60224u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60224u) goto L_08A60224;
    return;
L_08A60224:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A60234u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60234u) goto L_08A60234;
    return;
L_08A60234:
    hot_regs.g31 = (0x08A6023Cu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6023Cu) goto L_08A6023C;
    return;
L_08A6023C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A6024Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6024Cu) goto L_08A6024C;
    return;
L_08A6024C:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A6025Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6025Cu) goto L_08A6025C;
    return;
L_08A6025C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A60264;
    }
L_08A60264:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A60278;
    }
}
L_08A60278:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A6028C;
    }
}
L_08A6028C:
    hot_regs.g31 = (0x08A60294u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60294u) goto L_08A60294;
    return;
L_08A60294:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A602A8;
    }
L_08A602A8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A602D0;
      }
      goto L_08A602BC;
    }
}
L_08A602BC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A604A8;
      }
      goto L_08A602D0;
    }
}
L_08A602D0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A602E0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A602E0u) goto L_08A602E0;
    return;
L_08A602E0:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    g4 = (15897u << 16u);
    f20 = f20 - hot_regs.f12;
    g4 = (g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f20 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16025u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A6032C;
      }
      goto L_08A60304;
    }
}
}
L_08A60304:
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1928), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1928));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1932));
    hot_regs.g31 = (0x08A60324u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1932), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 910u, 0x08A57FE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60324u) goto L_08A60324;
    return;
L_08A60324:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A6036C;
      }
      goto L_08A6032C;
    }
L_08A6032C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (48665u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (48793u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6036C;
      }
      goto L_08A60348;
    }
}
L_08A60348:
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1936), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1936));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1940));
    hot_regs.g31 = (0x08A60368u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1940), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60368u) goto L_08A60368;
    return;
L_08A60368:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6036C;
L_08A6036C:
    hot_regs.g31 = (0x08A60374u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60374u) goto L_08A60374;
    return;
L_08A60374:
    hot_regs.g31 = (0x08A6037Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 13u, 0x08A58134u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6037Cu) goto L_08A6037C;
    return;
L_08A6037C:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1924), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(1872));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1872), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1924));
    hot_regs.g31 = (0x08A603A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A603A0u) goto L_08A603A0;
    return;
L_08A603A0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(1888));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(56)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A603B8u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A603B8u) goto L_08A603B8;
    return;
L_08A603B8:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A603D8u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A603D8u) goto L_08A603D8;
    return;
L_08A603D8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A603E8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A603E8u) goto L_08A603E8;
    return;
L_08A603E8:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(1904));
    hot_regs.g31 = (0x08A603F4u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A603F4u) goto L_08A603F4;
    return;
L_08A603F4:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A60404u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60404u) goto L_08A60404;
    return;
L_08A60404:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A60414u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60414u) goto L_08A60414;
    return;
L_08A60414:
    hot_regs.g31 = (0x08A6041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 52u, 0x08A583C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6041Cu) goto L_08A6041C;
    return;
L_08A6041C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1924)));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1872), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1920));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A60444u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1920), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 907u, 0x08A57FBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60444u) goto L_08A60444;
    return;
L_08A60444:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1072)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(48)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(212)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A60470u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 32u, 0x08A58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60470u) goto L_08A60470;
    return;
L_08A60470:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A60480u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60480u) goto L_08A60480;
    return;
L_08A60480:
    hot_regs.g31 = (0x08A60488u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60488u) goto L_08A60488;
    return;
L_08A60488:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A60498u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60498u) goto L_08A60498;
    return;
L_08A60498:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A604A8u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 84u, 0x08A58628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A604A8u) goto L_08A604A8;
    return;
L_08A604A8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2132)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2136)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2140)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2144)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2148)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2152)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2156)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2160)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2164)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2168)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2172)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2176)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2180)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2184)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2188)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2192)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(2208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A604F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 & 255u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A6054Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6054Cu) goto L_08A6054C;
    return;
L_08A6054C:
    hot_regs.g31 = (0x08A60554u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 392u, 0x0898D168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60554u) goto L_08A60554;
    return;
L_08A60554:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15360u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g4 = (49024u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    g4 = (17279u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A60594;
      }
      goto L_08A60580;
    }
}
L_08A60580:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A6058Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6058Cu) goto L_08A6058C;
    return;
L_08A6058C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A605B4;
      }
      goto L_08A60594;
    }
L_08A60594:
    hot_regs.g31 = (0x08A6059Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6059Cu) goto L_08A6059C;
    return;
L_08A6059C:
    hot_regs.g31 = (0x08A605A4u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 367u, 0x0898D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A605A4u) goto L_08A605A4;
    return;
L_08A605A4:
    hot_regs.g5 = (0u < hot_regs.g2 ? 1u : 0u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08A605B4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A605B4u) goto L_08A605B4;
    return;
L_08A605B4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    hot_regs.g31 = (0x08A605C4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A605C4u) goto L_08A605C4;
    return;
L_08A605C4:
    hot_regs.g31 = (0x08A605CCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A605CCu) goto L_08A605CC;
    return;
L_08A605CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (0u - hot_regs.g2);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(848)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f13 = f15 - f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const float fs = f13; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = ctx.fpr[26] + f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(f13));
    ctx.set_fpu_condition((f13 <= f12));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(848)));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
        goto L_08A6060C;
    }
    goto L_08A6060C;
}
}
L_08A6060C:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = f13;
        goto L_08A60624;
    }
    goto L_08A60624;
}
L_08A60624:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    hot_regs.g31 = (0x08A60638u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60638u) goto L_08A60638;
    return;
L_08A60638:
    hot_regs.g31 = (0x08A60640u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 52u, 0x0898C1C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60640u) goto L_08A60640;
    return;
L_08A60640:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (0u - hot_regs.g2);
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1524)));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[26] + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1524), std::bit_cast<std::uint32_t>(f12));
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    if (!ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1524)));
    hot_regs.f12 = f12;
        goto L_08A6067C;
    }
    goto L_08A6067C;
}
}
L_08A6067C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = f12;
        goto L_08A60694;
    }
    goto L_08A60694;
}
L_08A60694:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1524), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A606A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A606A0u) goto L_08A606A0;
    return;
L_08A606A0:
    hot_regs.g31 = (0x08A606A8u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A606A8u) goto L_08A606A8;
    return;
L_08A606A8:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A606B4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A606B4u) goto L_08A606B4;
    return;
L_08A606B4:
    hot_regs.g31 = (0x08A606BCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A606BCu) goto L_08A606BC;
    return;
L_08A606BC:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    hot_regs.g4 = (ctx.gpr[19] - hot_regs.g2);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    f20 = f20 / ctx.fpr[30];
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08A606E0;
    }
    goto L_08A606E0;
}
L_08A606E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15395u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A607AC;
      }
      goto L_08A606FC;
    }
}
L_08A606FC:
    hot_regs.g31 = (0x08A60704u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60704u) goto L_08A60704;
    return;
L_08A60704:
    hot_regs.g31 = (0x08A6070Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6070Cu) goto L_08A6070C;
    return;
L_08A6070C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (17174u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A607A0;
      }
      goto L_08A6072C;
    }
}
L_08A6072C:
    hot_regs.g31 = (0x08A60734u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60734u) goto L_08A60734;
    return;
L_08A60734:
    hot_regs.g31 = (0x08A6073Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6073Cu) goto L_08A6073C;
    return;
L_08A6073C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A607A0;
      }
      goto L_08A60754;
    }
}
L_08A60754:
    hot_regs.g31 = (0x08A6075Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6075Cu) goto L_08A6075C;
    return;
L_08A6075C:
    hot_regs.g31 = (0x08A60764u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60764u) goto L_08A60764;
    return;
L_08A60764:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[30];
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A6077Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6077Cu) goto L_08A6077C;
    return;
L_08A6077C:
    hot_regs.g31 = (0x08A60784u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898D140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60784u) goto L_08A60784;
    return;
L_08A60784:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f12 = f12 / ctx.fpr[30];
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1384), static_cast<std::uint16_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A607A0;
    }
}
L_08A607A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A607AC;
    }
L_08A607AC:
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A607E8;
      }
      goto L_08A607BC;
    }
L_08A607BC:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A607D8;
      }
      goto L_08A607CC;
    }
L_08A607CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A607D8;
    }
L_08A607D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A607E8;
    }
L_08A607E8:
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60804;
      }
      goto L_08A607F8;
    }
L_08A607F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_08A6080C;
      }
      goto L_08A60804;
    }
L_08A60804:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A6080C;
L_08A6080C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    hot_regs.f12 = f12;
        goto L_08A60830;
    }
    goto L_08A60820;
}
L_08A60820:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7172), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A6083C;
      }
      goto L_08A60830;
    }
}
L_08A60830:
{
    float f12 = hot_regs.f12;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7172), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A6083C;
}
L_08A6083C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (16457u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(104)));
    g4 = (hot_regs.g5 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (17204u << 16u);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 / hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7172)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(614))))));
    g4 = (g4 & 16u);
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A60908;
      }
      goto L_08A60878;
    }
}
}
L_08A60878:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 10u);
    g4 = (g4 & 15u);
    g4 = (g4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6089C;
      }
      goto L_08A60890;
    }
}
L_08A60890:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A6089C;
L_08A6089C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 >> 10u);
    g4 = (g4 + static_cast<std::uint32_t>(6));
    g4 = (g4 & 15u);
    g4 = (g4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A608BC;
      }
      goto L_08A608B8;
    }
}
L_08A608B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A608BC;
L_08A608BC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A608C8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A608C8u) goto L_08A608C8;
    return;
L_08A608C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 & 2048u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15605u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A608F4;
      }
      goto L_08A608D8;
    }
}
L_08A608D8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15779u << 16u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    g4 = (g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A60908;
      }
      goto L_08A608F4;
    }
}
}
L_08A608F4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    g4 = (g4 | 49807u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f12 = f12 - hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08A60908;
}
}
L_08A60908:
    hot_regs.g31 = (0x08A60910u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60910u) goto L_08A60910;
    return;
L_08A60910:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6093C;
      }
      goto L_08A6091C;
    }
L_08A6091C:
    hot_regs.g31 = (0x08A60924u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60924u) goto L_08A60924;
    return;
L_08A60924:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6093C;
      }
      goto L_08A60930;
    }
L_08A60930:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A609E8;
      }
      goto L_08A6093C;
    }
L_08A6093C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60960;
      }
      goto L_08A60948;
    }
L_08A60948:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(4209)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60960;
      }
      goto L_08A60954;
    }
L_08A60954:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(860)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A609E8;
      }
      goto L_08A60960;
    }
L_08A60960:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A60978u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60978u) goto L_08A60978;
    return;
L_08A60978:
{
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    g5 = (16015u << 16u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    g5 = (g5 | 23593u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.fpr[26] = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A609A0;
      }
      goto L_08A60990;
    }
}
L_08A60990:
    hot_regs.g31 = (0x08A60998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60998u) goto L_08A60998;
    return;
L_08A60998:
    hot_regs.g31 = (0x08A609A0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894CE40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A609A0u) goto L_08A609A0;
    return;
L_08A609A0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A609E8;
      }
      goto L_08A609C4;
    }
L_08A609C4:
    hot_regs.f12 = ctx.fpr[26] / hot_regs.f12;
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A609E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A609E8u) goto L_08A609E8;
    return;
L_08A609E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A60A1C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-2704));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2640), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2644), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2648), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2652), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2656), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2660), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2664), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2668), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2672), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2676), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2680), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2684), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2688), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2692), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2696), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2700), hot_regs.g31);
    hot_regs.g31 = (0x08A60A68u);
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60A68u) goto L_08A60A68;
    return;
L_08A60A68:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g23 = ctx.gpr[23];
    hot_regs.g4 = (aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1504)));
    g5 = (g23 + static_cast<std::uint32_t>(960));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2628), g5);
    g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g5 = (16000u << 16u);
    hot_regs.f20 = std::bit_cast<float>(g5);
    g5 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(0u);
    hot_regs.g6 = (g23 + static_cast<std::uint32_t>(320));
    ctx.fpr[24] = std::bit_cast<float>(g5);
    ctx.gpr[18] = (g23 + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[17] = (0u | 191u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2624), hot_regs.g6);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60D28;
      }
      goto L_08A60AAC;
    }
}
L_08A60AAC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1214)));
    hot_regs.g5 = (0u | 19u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A60D28;
      }
      goto L_08A60ABC;
    }
L_08A60ABC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60DF4;
      }
      goto L_08A60AD0;
    }
L_08A60AD0:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1516)));
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
    f12 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g23 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (16204u << 16u);
    g4 = (g4 | 52429u);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(f16));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1188)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(f16));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(f16));
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(336));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1240)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((f16 < f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08A60BA8;
      }
      goto L_08A60B58;
    }
}
}
L_08A60B58:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1156)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1160)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(352));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A60BA8;
L_08A60BA8:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A60BCCu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60BCCu) goto L_08A60BCC;
    return;
L_08A60BCC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5776)));
    hot_regs.g4 = (0u | 66u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A60C20u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60C20u) goto L_08A60C20;
    return;
L_08A60C20:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1272)));
    hot_regs.g7 = (ctx.gpr[23] + static_cast<std::uint32_t>(1277));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A60C3Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60C3Cu) goto L_08A60C3C;
    return;
L_08A60C3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1504)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A60D20;
      }
      goto L_08A60C48;
    }
L_08A60C48:
    hot_regs.g31 = (0x08A60C50u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1214)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60C50u) goto L_08A60C50;
    return;
L_08A60C50:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A60C68;
      }
      goto L_08A60C58;
    }
L_08A60C58:
    hot_regs.g31 = (0x08A60C60u);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1214)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 234u, 0x08A91E70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60C60u) goto L_08A60C60;
    return;
L_08A60C60:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A60D20;
      }
      goto L_08A60C68;
    }
L_08A60C68:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    hot_regs.g4 = (0u | 67u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A60CC4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60CC4u) goto L_08A60CC4;
    return;
L_08A60CC4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (0u | 67u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A60D20u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60D20u) goto L_08A60D20;
    return;
L_08A60D20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60DF4;
      }
      goto L_08A60D28;
    }
L_08A60D28:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1277)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60D40;
      }
      goto L_08A60D34;
    }
L_08A60D34:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1279)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60DF4;
      }
      goto L_08A60D40;
    }
L_08A60D40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1184)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1188)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(464));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1272)));
    hot_regs.g7 = (ctx.gpr[23] + static_cast<std::uint32_t>(1277));
    hot_regs.g31 = (0x08A60DF4u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 70u, 0x08B205BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A60DF4u) goto L_08A60DF4;
    return;
L_08A60DF4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60EFC;
      }
      goto L_08A60E04;
    }
}
L_08A60E04:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g5 = (static_cast<std::int32_t>(g5) < 20 ? 1u : 0u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    hot_regs.g5 = g5;
        goto L_08A60E3C;
    }
    goto L_08A60E14;
}
L_08A60E14:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    g6 = (16320u << 16u);
    g5 = (g5 & g6);
    g5 = (g5 >> 22u);
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    g5 = (g5 & 63u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g5 != 0u) {
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08A60F00;
    }
    goto L_08A60E38;
}
L_08A60E38:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    goto L_08A60E3C;
L_08A60E3C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(g5) < 7 ? 1u : 0u);
    if (g5 != 0u) {
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = g5;
        goto L_08A60F00;
    }
    goto L_08A60E48;
}
L_08A60E48:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7648)));
    g6 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (16320u << 16u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A60E78;
      }
      goto L_08A60E58;
    }
}
L_08A60E58:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    hot_regs.g7 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7649)));
    g6 = (g6 & hot_regs.g5);
    g6 = (g6 >> 22u);
    g6 = (g6 & 63u);
    g6 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (g6 != 0u) {
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = g6;
        goto L_08A60F00;
    }
    goto L_08A60E78;
}
L_08A60E78:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    g7 = (18243u << 16u);
    g6 = (g6 & hot_regs.g5);
    g6 = (g6 >> 22u);
    f13 = std::bit_cast<float>(g6);
    g7 = (g7 | 20480u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7900)));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const bool branch_taken = static_cast<std::int32_t>(g6) >= 0;
    hot_regs.f14 = std::bit_cast<float>(g7);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A60EAC;
      }
      goto L_08A60EA0;
    }
}
}
L_08A60EA0:
    hot_regs.g6 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    goto L_08A60EAC;
L_08A60EAC:
{
    float f13 = hot_regs.f13;
    f13 = f13 / hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f13 = f13;
        goto L_08A60F00;
    }
    goto L_08A60EC0;
}
L_08A60EC0:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(76)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7888)));
    g5 = (hot_regs.g6 & g5);
    g5 = (g5 >> 22u);
    f13 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) >= 0;
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A60EE8;
      }
      goto L_08A60EDC;
    }
}
}
L_08A60EDC:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f15;
    goto L_08A60EE8;
L_08A60EE8:
{
    float f13 = hot_regs.f13;
    f13 = f13 / hot_regs.f14;
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A60F00;
      }
      goto L_08A60EFC;
    }
}
L_08A60EFC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    goto L_08A60F00;
L_08A60F00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 255u);
    g5 = (g5 & 64u);
    g5 = (g5 >> 6u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F18;
    }
}
L_08A60F18:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 80u);
    g5 = (g5 & 496u);
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F2C;
    }
}
L_08A60F2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 64u);
    g5 = (g5 & 496u);
    { const bool branch_taken = g5 == hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60F60;
      }
      goto L_08A60F40;
    }
}
L_08A60F40:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & 1u);
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 6u);
    g4 = (g5 | g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F60;
    }
}
L_08A60F60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    g4 = (2236u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60F70;
    }
}
L_08A60F70:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    g4 = (g4 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (17096u << 16u);
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g6);
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08A60FA0;
    }
    goto L_08A60FA0;
}
}
L_08A60FA0:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    f13 = f13 - hot_regs.f15;
    ctx.set_fpu_condition((f13 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_08A60FBC;
    }
    goto L_08A60FBC;
}
L_08A60FBC:
{
    float f12 = hot_regs.f12;
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A60FE0;
      }
      goto L_08A60FD0;
    }
}
L_08A60FD0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08A60FE0;
}
L_08A60FE0:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(558)));
    ctx.gpr[30] = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08A6101C;
      }
      goto L_08A60FF4;
    }
L_08A60FF4:
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(558)));
    hot_regs.g7 = (0u | 65535u);
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g5 = (hot_regs.g5 & 255u);
        goto L_08A61020;
    }
    goto L_08A61004;
L_08A61004:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g7 = (0u | 80u);
    g6 = (g6 & 496u);
    { const bool branch_taken = g6 == hot_regs.g7;
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A61020;
      }
      goto L_08A61018;
    }
}
L_08A61018:
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_08A6101C;
L_08A6101C:
    hot_regs.g5 = (hot_regs.g5 & 255u);
    goto L_08A61020;
L_08A61020:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61044;
      }
      goto L_08A61028;
    }
L_08A61028:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g5 = (g5 & 256u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A61040;
      }
      goto L_08A61038;
    }
}
L_08A61038:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A61044;
      }
      goto L_08A61040;
    }
L_08A61040:
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    goto L_08A61044;
L_08A61044:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 16u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A61070;
      }
      goto L_08A61054;
    }
}
L_08A61054:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 64u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A61070;
      }
      goto L_08A61064;
    }
}
L_08A61064:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2632), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A61080;
      }
      goto L_08A61070;
    }
L_08A61070:
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2632), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A61080;
      }
      goto L_08A61078;
    }
L_08A61078:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2632), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A61B1C;
      }
      goto L_08A61080;
    }
L_08A61080:
    hot_regs.g31 = (0x08A61088u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 312u, 0x08A595C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61088u) goto L_08A61088;
    return;
L_08A61088:
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(512));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(640));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2620), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(672));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f22)) && hot_regs.f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(624));
      if (branch_taken) {
          goto L_08A6110C;
      }
      goto L_08A610EC;
    }
L_08A610EC:
    hot_regs.f12 = ctx.fpr[24] / hot_regs.f12;
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61124;
      }
      goto L_08A6110C;
    }
L_08A6110C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (g29 + static_cast<std::uint32_t>(752));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    goto L_08A61124;
}
L_08A61124:
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2632)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) & 0x7FFFFFFFu);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g4);
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) & 0x7FFFFFFFu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g7 = (0u | 0u);
      if (branch_taken) {
          goto L_08A6118C;
      }
      goto L_08A6117C;
    }
L_08A6117C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A6118C;
}
L_08A6118C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g7 + static_cast<std::uint32_t>(96));
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
    g4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(736), 0u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(744)));
    g4 = (g5 & g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(744), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    g5 = (0u | 152u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A61220;
      }
      goto L_08A611BC;
    }
}
L_08A611BC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2636), ctx.gpr[19]);
    hot_regs.g31 = (0x08A611C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A611C8u) goto L_08A611C8;
    return;
L_08A611C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    hot_regs.g31 = (0x08A611D4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 926u, 0x0885FD1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A611D4u) goto L_08A611D4;
    return;
L_08A611D4:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(768));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A611E8u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A611E8u) goto L_08A611E8;
    return;
L_08A611E8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A611F4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A611F4u) goto L_08A611F4;
    return;
L_08A611F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(840)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2636)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A61218;
      }
      goto L_08A61204;
    }
}
L_08A61204:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(832)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61218;
      }
      goto L_08A61210;
    }
L_08A61210:
    hot_regs.g31 = (0x08A61218u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(832)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61218u) goto L_08A61218;
    return;
L_08A61218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6122C;
      }
      goto L_08A61220;
    }
L_08A61220:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    hot_regs.g31 = (0x08A6122Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6122Cu) goto L_08A6122C;
    return;
L_08A6122C:
{
    std::uint32_t g17 = ctx.gpr[17];
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_fpu_condition((ctx.fpr[30] < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16128u << 16u);
      if (branch_taken) {
          goto L_08A614E4;
      }
      goto L_08A61264;
    }
}
L_08A61264:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    f26 = std::bit_cast<float>(g4);
    g5 = (16025u << 16u);
    { const float fs = f12; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.gpr[16] = (0u | 1u);
    g4 = (g5 | 39322u);
    g5 = (49016u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f13;
    g5 = (g5 | 20972u);
    g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(g5);
    f24 = f24 + hot_regs.f14;
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[30] < hot_regs.f15));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = f12; const float ft = f26; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08A61384;
      }
      goto L_08A612B4;
    }
}
}
L_08A612B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2620)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61384;
      }
      goto L_08A612D0;
    }
L_08A612D0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    g6 = (64u << 16u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(204)));
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(6));
    g5 = (g5 & g6);
    g6 = (16281u << 16u);
    g6 = (g6 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g6);
    g6 = (16948u << 16u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.f13 = std::bit_cast<float>(g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A61344;
      }
      goto L_08A612FC;
    }
}
L_08A612FC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g5 = (0u | 150u);
    hot_regs.g6 = (0u | 150u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g7 = (0u | 195u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A6133Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6133Cu) goto L_08A6133C;
    return;
L_08A6133C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61384;
      }
      goto L_08A61344;
    }
L_08A61344:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g5 = (0u | 160u);
    hot_regs.g6 = (0u | 160u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g7 = (0u | 140u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 4u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A61384u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61384u) goto L_08A61384;
    return;
L_08A61384:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61498;
      }
      goto L_08A6138C;
    }
L_08A6138C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (64u << 16u);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(204)));
    hot_regs.g6 = (16968u << 16u);
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A61420;
      }
      goto L_08A613A8;
    }
}
L_08A613A8:
    hot_regs.g4 = (17214u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (17279u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const float fs = hot_regs.f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[10] = (0u | 8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[11] = (0u | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A61418u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61418u) goto L_08A61418;
    return;
L_08A61418:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A61508;
      }
      goto L_08A61420;
    }
L_08A61420:
    hot_regs.g4 = (17234u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (17219u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    { const float fs = hot_regs.f15; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[10] = (0u | 8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[11] = (0u | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08A61490u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61490u) goto L_08A61490;
    return;
L_08A61490:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A61508;
      }
      goto L_08A61498;
    }
L_08A61498:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A614DCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A614DCu) goto L_08A614DC;
    return;
L_08A614DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A61508;
      }
      goto L_08A614E4;
    }
L_08A614E4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A61504u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61504u) goto L_08A61504;
    return;
L_08A61504:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    goto L_08A61508;
L_08A61508:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 5u);
    g5 = (0u - g4);
    g4 = (g4 << 2u);
    g5 = (g5 + g4);
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(112))))));
    hot_regs.g6 = (16256u << 16u);
    g5 = (0u | 16u);
    { const bool branch_taken = g4 != g5;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A61538;
    }
}
L_08A61538:
    hot_regs.g31 = (0x08A61540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61540u) goto L_08A61540;
    return;
L_08A61540:
    { const bool branch_taken = ctx.gpr[23] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A615A0;
      }
      goto L_08A61548;
    }
L_08A61548:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(848));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(704));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(864));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(880));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(148)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A615A0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A615A0u) goto L_08A615A0;
    return;
L_08A615A0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g4 = (0u | 0u);
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2632)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A615C8;
      }
      goto L_08A615B8;
    }
}
L_08A615B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A615C8;
}
L_08A615C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
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
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
    ctx.set_fpu_condition((ctx.fpr[30] <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16076u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6173C;
      }
      goto L_08A61614;
    }
}
L_08A61614:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f14 = f30 + hot_regs.f20;
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    { const float fs = f30; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16128u << 16u);
    ctx.set_fpu_condition((hot_regs.f15 < hot_regs.f22));
    f30 = std::bit_cast<float>(g4);
    f12 = f12 + f13;
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = hot_regs.f14; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08A61648;
      }
      goto L_08A61640;
    }
}
}
L_08A61640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61754;
      }
      goto L_08A61648;
    }
L_08A61648:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(608)));
    hot_regs.g6 = (16320u << 16u);
    ctx.set_fpu_condition((f14 <= hot_regs.f22));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.fpu_condition();
    f14 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08A61678;
      }
      goto L_08A61664;
    }
}
L_08A61664:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (16025u << 16u);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    g6 = (g6 | 39322u);
    hot_regs.f15 = std::bit_cast<float>(g6);
    ctx.fpr[30] = ctx.fpr[30] + hot_regs.f15;
    hot_regs.g6 = g6;
    goto L_08A61678;
}
L_08A61678:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_08A616EC;
      }
      goto L_08A61680;
    }
L_08A61680:
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (17152u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1960)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[8] = (0u | 255u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A616E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A616E4u) goto L_08A616E4;
    return;
L_08A616E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61754;
      }
      goto L_08A616EC;
    }
L_08A616EC:
    hot_regs.g2 = (hot_regs.g4 | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 8u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A61734u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61734u) goto L_08A61734;
    return;
L_08A61734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61754;
      }
      goto L_08A6173C;
    }
L_08A6173C:
    hot_regs.g6 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(14));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08A61754u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61754u) goto L_08A61754;
    return;
L_08A61754:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(992));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(528));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(544));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(149)));
    ctx.gpr[8] = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A617B0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A617B0u) goto L_08A617B0;
    return;
L_08A617B0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61924;
      }
      goto L_08A617B8;
    }
L_08A617B8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(576));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 + f15;
    ctx.set_fpu_condition((!(std::isnan(f14) || std::isnan(hot_regs.f22)) && f14 == hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08A6180C;
    }
    goto L_08A617EC;
}
}
L_08A617EC:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (std::bit_cast<std::uint32_t>(f14));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f14 = std::bit_cast<float>(g4);
    f15 = std::bit_cast<float>(g4);
    { const float fs = f15; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08A6180C;
}
}
L_08A6180C:
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(644)));
    hot_regs.g4 = (16576u << 16u);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(576)));
    hot_regs.f12 = hot_regs.f15 + ctx.fpr[16];
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(580)));
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(584)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5044)));
    hot_regs.g4 = (16528u << 16u);
    hot_regs.f14 = hot_regs.f14 + ctx.fpr[28];
    hot_regs.g2 = (16608u << 16u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = ctx.fpr[17] + ctx.fpr[18];
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(22));
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = hot_regs.f13 + hot_regs.f12;
    ctx.gpr[8] = (0u | 145u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[9] = (0u | 145u);
    ctx.gpr[10] = (0u | 145u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (49152u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A618A8u);
    { const float fs = ctx.fpr[26]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A618A8u) goto L_08A618A8;
    return;
L_08A618A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(644)));
    hot_regs.g4 = (16640u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(660)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(576)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(580)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5048)));
    hot_regs.g4 = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(25));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 40u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.gpr[9] = (0u | 0u);
    hot_regs.f13 = hot_regs.f15 - hot_regs.f13;
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.f14 = ctx.fpr[17] - hot_regs.f12;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A61924u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 338u, 0x08A96364u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61924u) goto L_08A61924;
    return;
L_08A61924:
    hot_regs.g31 = (0x08A6192Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6192Cu) goto L_08A6192C;
    return;
L_08A6192C:
    { const bool branch_taken = ctx.gpr[23] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08A61AF0;
      }
      goto L_08A61934;
    }
L_08A61934:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A61AF0;
      }
      goto L_08A6193C;
    }
L_08A6193C:
    hot_regs.g31 = (0x08A61944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61944u) goto L_08A61944;
    return;
L_08A61944:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    hot_regs.g31 = (0x08A61950u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61950u) goto L_08A61950;
    return;
L_08A61950:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x08A61960u);
    { const float fs = ctx.fpr[24]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61960u) goto L_08A61960;
    return;
L_08A61960:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    hot_regs.g31 = (0x08A6196Cu);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6196Cu) goto L_08A6196C;
    return;
L_08A6196C:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(320));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (15951u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g4 | 23592u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(944));
    g4 = (16800u << 16u);
    f13 = ctx.fpr[24] + f13;
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A619DC;
      }
      goto L_08A619A0;
    }
}
}
L_08A619A0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(960));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(976));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 1u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 1u);
    hot_regs.g31 = (0x08A619D4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A619D4u) goto L_08A619D4;
    return;
L_08A619D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A10;
      }
      goto L_08A619DC;
    }
L_08A619DC:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(992));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(1008));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 1u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A61A10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61A10u) goto L_08A61A10;
    return;
L_08A61A10:
    hot_regs.g4 = (16512u << 16u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(928));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(912));
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61AA8;
      }
      goto L_08A61A60;
    }
L_08A61A60:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1040), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1044), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1048), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(1040));
    hot_regs.g4 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A61AA0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61AA0u) goto L_08A61AA0;
    return;
L_08A61AA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61AF0;
      }
      goto L_08A61AA8;
    }
L_08A61AA8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1056));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1072), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1076), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1080), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(1072));
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16153u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08A61AF0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61AF0u) goto L_08A61AF0;
    return;
L_08A61AF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(744)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A61B14;
      }
      goto L_08A61B00;
    }
}
L_08A61B00:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(736)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B14;
      }
      goto L_08A61B0C;
    }
L_08A61B0C:
    hot_regs.g31 = (0x08A61B14u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(736)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61B14u) goto L_08A61B14;
    return;
L_08A61B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D94;
      }
      goto L_08A61B1C;
    }
L_08A61B1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 64u);
    g4 = (g4 & 496u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    hot_regs.g4 = g4;
        goto L_08A61B54;
    }
    goto L_08A61B30;
}
L_08A61B30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    hot_regs.g4 = g4;
        goto L_08A61B54;
    }
    goto L_08A61B44;
}
L_08A61B44:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(627)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B6C;
      }
      goto L_08A61B50;
    }
L_08A61B50:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    goto L_08A61B54;
L_08A61B54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A61D94;
      }
      goto L_08A61B60;
    }
}
L_08A61B60:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A61D94;
      }
      goto L_08A61B6C;
    }
L_08A61B6C:
    hot_regs.g31 = (0x08A61B74u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 312u, 0x08A595C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61B74u) goto L_08A61B74;
    return;
L_08A61B74:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g4 = (2236u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1104));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A61BA4;
      }
      goto L_08A61B94;
    }
}
L_08A61B94:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (g6 << 2u);
    g5 = (g5 + g6);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_08A61BA4;
}
L_08A61BA4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (g5 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    g17 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
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
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1088));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A61C08;
      }
      goto L_08A61BF4;
    }
}
L_08A61BF4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61D74;
      }
      goto L_08A61C08;
    }
L_08A61C08:
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1120));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1136));
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
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61D4C;
      }
      goto L_08A61C74;
    }
L_08A61C74:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(604)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A61D6C;
      }
      goto L_08A61C88;
    }
L_08A61C88:
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(14));
    hot_regs.g6 = (16281u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1960)));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g2 = (0u | 1u);
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (0u | 120u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A61CECu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61CECu) goto L_08A61CEC;
    return;
L_08A61CEC:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1152));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(992));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1168));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(1184));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (ctx.gpr[23] + static_cast<std::uint32_t>(976));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(1200));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(149)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A61D44u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 459u, 0x088AB01Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61D44u) goto L_08A61D44;
    return;
L_08A61D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D6C;
      }
      goto L_08A61D4C;
    }
L_08A61D4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1960)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(14));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A61D6Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61D6Cu) goto L_08A61D6C;
    return;
L_08A61D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61D94;
      }
      goto L_08A61D74;
    }
L_08A61D74:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1960)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (16968u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[23] + static_cast<std::uint32_t>(14));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08A61D94u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61D94u) goto L_08A61D94;
    return;
L_08A61D94:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2624)));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15286u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 2922u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 / hot_regs.f12;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f22));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
        goto L_08A61DD4;
    }
    goto L_08A61DD4;
L_08A61DD4:
    hot_regs.g4 = (17076u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2632), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A61DF4;
      }
      goto L_08A61DEC;
    }
L_08A61DEC:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2632), ctx.gpr[18]);
    goto L_08A61DF4;
L_08A61DF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (15395u << 16u);
    g4 = (g4 | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(2608), ctx.gpr[17]);
    g4 = (15651u << 16u);
    g4 = (g4 | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 0u);
    g4 = (15907u << 16u);
    g4 = (g4 | 55050u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[20] = (0u | 0u);
    g4 = (16000u << 16u);
    hot_regs.g7 = (0u | 33u);
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(1280));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(1264));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(1328));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(1344));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(1360));
    hot_regs.g4 = g4;
    goto L_08A61E44;
}
L_08A61E44:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[8];
    ctx.gpr[9] = (0u | 2u);
      if (branch_taken) {
          goto L_08A61E54;
      }
      goto L_08A61E50;
    }
L_08A61E50:
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
    goto L_08A61E54;
L_08A61E54:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[23] + ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1076)));
    g4 = (ctx.gpr[20] << 2u);
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[8];
    g4 = (ctx.gpr[23] + g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61E68;
    }
}
L_08A61E68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1232)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61E80;
    }
L_08A61E80:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2624)));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7176), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61EA4;
    }
L_08A61EA4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (ctx.gpr[20] << 5u);
    g16 = (ctx.gpr[23] + g5);
    g16 = (g16 + static_cast<std::uint32_t>(1088));
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = g5 == ctx.gpr[9];
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61EBC;
    }
}
L_08A61EBC:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61ECC;
    }
L_08A61ECC:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (0u | 18u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61EDC;
    }
L_08A61EDC:
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A620F0;
      }
      goto L_08A61EE8;
    }
L_08A61EE8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1216));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(hot_regs.f13));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1232));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1248));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A61FC4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A61FC4u) goto L_08A61FC4;
    return;
L_08A61FC4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7176)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6202C;
      }
      goto L_08A61FD8;
    }
L_08A61FD8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1312), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1316), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1312));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A6202Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6202Cu) goto L_08A6202C;
    return;
L_08A6202C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7176)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A620E8;
      }
      goto L_08A62040;
    }
L_08A62040:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A62094u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62094u) goto L_08A62094;
    return;
L_08A62094:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1344), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1348), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A620E8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A620E8u) goto L_08A620E8;
    return;
L_08A620E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62190;
      }
      goto L_08A620F0;
    }
L_08A620F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1232)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08A62190;
      }
      goto L_08A62108;
    }
L_08A62108:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    g4 = (ctx.gpr[20] << 5u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6213C;
      }
      goto L_08A62120;
    }
}
L_08A62120:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] << 2u);
    g4 = (ctx.gpr[23] + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1500)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A62190;
      }
      goto L_08A62138;
    }
}
L_08A62138:
    hot_regs.g4 = (ctx.gpr[20] << 5u);
    goto L_08A6213C;
L_08A6213C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[23] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1088));
    hot_regs.g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (0u | 2u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A62180;
      }
      goto L_08A62154;
    }
}
L_08A62154:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A62180;
      }
      goto L_08A62164;
    }
L_08A62164:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(30)));
    hot_regs.g6 = (0u | 18u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08A62180;
      }
      goto L_08A62174;
    }
L_08A62174:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = hot_regs.g5 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A62190;
      }
      goto L_08A62180;
    }
L_08A62180:
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2608)));
    hot_regs.g31 = (0x08A62190u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 544u, 0x08A5A288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62190u) goto L_08A62190;
    return;
L_08A62190:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 24u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 24u));
    g4 = (static_cast<std::int32_t>(g17) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    hot_regs.g7 = (0u | 33u);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A61E44;
      }
      goto L_08A621A8;
    }
}
L_08A621A8:
    hot_regs.g31 = (0x08A621B0u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    goto L_08A63218;
L_08A621B0:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A621BCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A621BCu) goto L_08A621BC;
    return;
L_08A621BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), 0u);
    g5 = (g5 & g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g6 = (16128u << 16u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(48));
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(128));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A62204;
      }
      goto L_08A621F4;
    }
}
L_08A621F4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08A62204;
}
L_08A62204:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(600)));
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
    hot_regs.f13 = std::bit_cast<float>(g4);
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
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
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
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2632)));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2624)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A622AC;
      }
      goto L_08A62298;
    }
}
}
L_08A62298:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A623A8;
      }
      goto L_08A622AC;
    }
L_08A622AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f15 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1232)));
    hot_regs.g7 = (g23 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (g23 + static_cast<std::uint32_t>(144));
    hot_regs.g5 = (g23 + static_cast<std::uint32_t>(128));
    { const float fs = f15; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1236)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1316)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[17]));
    g4 = (g29 + static_cast<std::uint32_t>(144));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f15));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A622FC;
      }
      goto L_08A622F4;
    }
}
}
L_08A622F4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1232)));
      if (branch_taken) {
          goto L_08A62300;
      }
      goto L_08A622FC;
    }
L_08A622FC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1236)));
    goto L_08A62300;
L_08A62300:
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[17]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    hot_regs.f12 = hot_regs.f12 - ctx.fpr[17];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(2384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2400), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2404), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2408), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(2400));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(2368));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(2352));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1376));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x08A62398u);
    hot_regs.g5 = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62398u) goto L_08A62398;
    return;
L_08A62398:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g23 = ctx.gpr[23];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1284)));
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = f12 + ctx.fpr[0];
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A623A8;
}
}
L_08A623A8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
        goto L_08A623D4;
    }
    goto L_08A623BC;
L_08A623BC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A624D8;
      }
      goto L_08A623D0;
    }
L_08A623D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    goto L_08A623D4;
L_08A623D4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f22));
    f13 = f12 + f13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1240)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1244)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1324)));
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g4 = (g23 + static_cast<std::uint32_t>(112));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (g23 + static_cast<std::uint32_t>(144));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    hot_regs.g6 = (g23 + static_cast<std::uint32_t>(128));
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(144));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62418;
    }
}
}
L_08A62418:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1240)));
      if (branch_taken) {
          goto L_08A62424;
      }
      goto L_08A62420;
    }
L_08A62420:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1244)));
    goto L_08A62424;
L_08A62424:
    { const float fs = hot_regs.f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.f15 = hot_regs.f14 - hot_regs.f15;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f14 = hot_regs.f15 - hot_regs.f14;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f14));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(2512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2528), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2532), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(2536), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(2528));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(2496));
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
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(2480));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1392));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08A624A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A624A4u) goto L_08A624A4;
    return;
L_08A624A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1504)));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A624B4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 101u, 0x08A58758u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A624B4u) goto L_08A624B4;
    return;
L_08A624B4:
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A624C8u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A624C8u) goto L_08A624C8;
    return;
L_08A624C8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g23 = ctx.gpr[23];
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1288)));
    f12 = f12 + ctx.fpr[0];
    aot_mem.aot_store32(g23 + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A624D8;
}
}
L_08A624D8:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    hot_regs.g31 = (0x08A624E8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A624E8u) goto L_08A624E8;
    return;
L_08A624E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626B4;
      }
      goto L_08A624F4;
    }
L_08A624F4:
    hot_regs.g31 = (0x08A624FCu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1544)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A624FCu) goto L_08A624FC;
    return;
L_08A624FC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A6250Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6250Cu) goto L_08A6250C;
    return;
L_08A6250C:
    hot_regs.g31 = (0x08A62514u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62514u) goto L_08A62514;
    return;
L_08A62514:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A62520u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62520u) goto L_08A62520;
    return;
L_08A62520:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1408));
    hot_regs.g31 = (0x08A6252Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 17u, 0x08A58194u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6252Cu) goto L_08A6252C;
    return;
L_08A6252C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1488));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1472), hot_regs.g4);
    hot_regs.g31 = (0x08A6253Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6253Cu) goto L_08A6253C;
    return;
L_08A6253C:
    hot_regs.g31 = (0x08A62544u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62544u) goto L_08A62544;
    return;
L_08A62544:
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(1568));
    hot_regs.g31 = (0x08A62550u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 104u, 0x08A58774u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62550u) goto L_08A62550;
    return;
L_08A62550:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (17204u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[26];
    hot_regs.g31 = (0x08A62574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62574u) goto L_08A62574;
    return;
L_08A62574:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A62580u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 104u, 0x08A58774u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62580u) goto L_08A62580;
    return;
L_08A62580:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 / ctx.fpr[26];
    hot_regs.g31 = (0x08A62590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62590u) goto L_08A62590;
    return;
L_08A62590:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A625A4u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625A4u) goto L_08A625A4;
    return;
L_08A625A4:
    hot_regs.g31 = (0x08A625ACu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 12u, 0x08A5810Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625ACu) goto L_08A625AC;
    return;
L_08A625AC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1512)));
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(1552));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08A625C4u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 180u, 0x08B1D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625C4u) goto L_08A625C4;
    return;
L_08A625C4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1472)));
    hot_regs.g31 = (0x08A625D0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625D0u) goto L_08A625D0;
    return;
L_08A625D0:
    hot_regs.g31 = (0x08A625D8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625D8u) goto L_08A625D8;
    return;
L_08A625D8:
    hot_regs.g31 = (0x08A625E0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625E0u) goto L_08A625E0;
    return;
L_08A625E0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A625ECu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625ECu) goto L_08A625EC;
    return;
L_08A625EC:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A625F8u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A625F8u) goto L_08A625F8;
    return;
L_08A625F8:
    hot_regs.g31 = (0x08A62600u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62600u) goto L_08A62600;
    return;
L_08A62600:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A6260Cu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 7u, 0x08860358u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6260Cu) goto L_08A6260C;
    return;
L_08A6260C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1564)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626A8;
      }
      goto L_08A62618;
    }
L_08A62618:
    hot_regs.g31 = (0x08A62620u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1564)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62620u) goto L_08A62620;
    return;
L_08A62620:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A62630u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62630u) goto L_08A62630;
    return;
L_08A62630:
    hot_regs.g31 = (0x08A62638u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62638u) goto L_08A62638;
    return;
L_08A62638:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A62644u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62644u) goto L_08A62644;
    return;
L_08A62644:
    hot_regs.g31 = (0x08A6264Cu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6264Cu) goto L_08A6264C;
    return;
L_08A6264C:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A6266C;
      }
      goto L_08A62658;
    }
L_08A62658:
    hot_regs.g31 = (0x08A62660u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 56u, 0x08A583ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62660u) goto L_08A62660;
    return;
L_08A62660:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A62694;
      }
      goto L_08A6266C;
    }
L_08A6266C:
    hot_regs.g31 = (0x08A62674u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62674u) goto L_08A62674;
    return;
L_08A62674:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62680u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62680u) goto L_08A62680;
    return;
L_08A62680:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A6268Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6268Cu) goto L_08A6268C;
    return;
L_08A6268C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626A0;
      }
      goto L_08A62694;
    }
L_08A62694:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A626A0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 36u, 0x08A582B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626A0u) goto L_08A626A0;
    return;
L_08A626A0:
    hot_regs.g31 = (0x08A626A8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626A8u) goto L_08A626A8;
    return;
L_08A626A8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A626B4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626B4u) goto L_08A626B4;
    return;
L_08A626B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1548)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62734;
      }
      goto L_08A626C0;
    }
L_08A626C0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1304)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1312)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1356)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08A626DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 4u, 0x08A58054u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626DCu) goto L_08A626DC;
    return;
L_08A626DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1548)));
    hot_regs.g31 = (0x08A626E8u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626E8u) goto L_08A626E8;
    return;
L_08A626E8:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A626F8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A626F8u) goto L_08A626F8;
    return;
L_08A626F8:
    hot_regs.g31 = (0x08A62700u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62700u) goto L_08A62700;
    return;
L_08A62700:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A6270Cu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6270Cu) goto L_08A6270C;
    return;
L_08A6270C:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A62720u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62720u) goto L_08A62720;
    return;
L_08A62720:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A6272Cu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6272Cu) goto L_08A6272C;
    return;
L_08A6272C:
    hot_regs.g31 = (0x08A62734u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62734u) goto L_08A62734;
    return;
L_08A62734:
    hot_regs.g31 = (0x08A6273Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1552)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6273Cu) goto L_08A6273C;
    return;
L_08A6273C:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A6274Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6274Cu) goto L_08A6274C;
    return;
L_08A6274C:
    hot_regs.g31 = (0x08A62754u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62754u) goto L_08A62754;
    return;
L_08A62754:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A62760u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62760u) goto L_08A62760;
    return;
L_08A62760:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1300)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1364)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1308)));
    f13 = f12 - f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1360)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    f12 = f12 - hot_regs.f14;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g23 + static_cast<std::uint32_t>(1368)));
    f13 = f13 + ctx.fpr[16];
    g4 = (aot_mem.aot_load8(g23 + static_cast<std::uint32_t>(1076)));
    { const float fs = f12; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.gpr[19] = (0u | 1u);
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 - hot_regs.f15;
    f12 = f13 - f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = g4 != ctx.gpr[19];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A627E8;
      }
      goto L_08A627B4;
    }
}
}
L_08A627B4:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    hot_regs.g31 = (0x08A627C0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A627C0u) goto L_08A627C0;
    return;
L_08A627C0:
    hot_regs.g4 = (15692u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A627E0u);
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A627E0u) goto L_08A627E0;
    return;
L_08A627E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A627F4;
      }
      goto L_08A627E8;
    }
L_08A627E8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1284)));
    hot_regs.g31 = (0x08A627F4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A627F4u) goto L_08A627F4;
    return;
L_08A627F4:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16156)));
    hot_regs.g4 = (16256u << 16u);
    f24 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f24)) && f12 == f24));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08A62824;
      }
      goto L_08A62810;
    }
}
L_08A62810:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16156)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62824u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62824u) goto L_08A62824;
    return;
L_08A62824:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62830u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62830u) goto L_08A62830;
    return;
L_08A62830:
    hot_regs.g31 = (0x08A62838u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62838u) goto L_08A62838;
    return;
L_08A62838:
    hot_regs.g31 = (0x08A62840u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1560)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62840u) goto L_08A62840;
    return;
L_08A62840:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A62850u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62850u) goto L_08A62850;
    return;
L_08A62850:
    hot_regs.g31 = (0x08A62858u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62858u) goto L_08A62858;
    return;
L_08A62858:
    hot_regs.g31 = (0x08A62860u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62860u) goto L_08A62860;
    return;
L_08A62860:
    hot_regs.g4 = (0u | 212u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A6288C;
      }
      goto L_08A6286C;
    }
L_08A6286C:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f22));
    hot_regs.g4 = (49024u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(f22));
    hot_regs.f12 = f12;
    goto L_08A6288C;
}
}
L_08A6288C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08A628ACu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628ACu) goto L_08A628AC;
    return;
L_08A628AC:
    hot_regs.g31 = (0x08A628B4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1556)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628B4u) goto L_08A628B4;
    return;
L_08A628B4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A628C4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628C4u) goto L_08A628C4;
    return;
L_08A628C4:
    hot_regs.g31 = (0x08A628CCu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628CCu) goto L_08A628CC;
    return;
L_08A628CC:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A628D8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628D8u) goto L_08A628D8;
    return;
L_08A628D8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1077)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A62918;
      }
      goto L_08A628E4;
    }
L_08A628E4:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1288)));
    hot_regs.g31 = (0x08A628F0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A628F0u) goto L_08A628F0;
    return;
L_08A628F0:
    hot_regs.g4 = (15759u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62910u);
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62910u) goto L_08A62910;
    return;
L_08A62910:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62924;
      }
      goto L_08A62918;
    }
L_08A62918:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1288)));
    hot_regs.g31 = (0x08A62924u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62924u) goto L_08A62924;
    return;
L_08A62924:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16156)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[24])) && f12 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A6294C;
      }
      goto L_08A62938;
    }
}
L_08A62938:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16156)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A6294Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 3u, 0x0886004Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6294Cu) goto L_08A6294C;
    return;
L_08A6294C:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62958u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62958u) goto L_08A62958;
    return;
L_08A62958:
    hot_regs.g31 = (0x08A62960u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62960u) goto L_08A62960;
    return;
L_08A62960:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1540)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62A08;
      }
      goto L_08A6296C;
    }
L_08A6296C:
    hot_regs.g31 = (0x08A62974u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1540)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 892u, 0x08A57E54u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62974u) goto L_08A62974;
    return;
L_08A62974:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A62984u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 18u, 0x08A581B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62984u) goto L_08A62984;
    return;
L_08A62984:
    hot_regs.g31 = (0x08A6298Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 35u, 0x08A582ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6298Cu) goto L_08A6298C;
    return;
L_08A6298C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08A62998u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62998u) goto L_08A62998;
    return;
L_08A62998:
    hot_regs.g31 = (0x08A629A0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 44u, 0x08A5832Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A629A0u) goto L_08A629A0;
    return;
L_08A629A0:
    hot_regs.g4 = (16230u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (hot_regs.g4 | 26214u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.g31 = (0x08A629BCu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A629BCu) goto L_08A629BC;
    return;
L_08A629BC:
    hot_regs.f15 = ctx.fpr[24] - ctx.fpr[0];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    hot_regs.g31 = (0x08A629D0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f15));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 8u, 0x08A580BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A629D0u) goto L_08A629D0;
    return;
L_08A629D0:
    hot_regs.g4 = (48460u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A629E8u);
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A629E8u) goto L_08A629E8;
    return;
L_08A629E8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1516)));
    hot_regs.g31 = (0x08A629F4u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 925u, 0x0885FC3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A629F4u) goto L_08A629F4;
    return;
L_08A629F4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A62A00u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 38u, 0x08A582D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A00u) goto L_08A62A00;
    return;
L_08A62A00:
    hot_regs.g31 = (0x08A62A08u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A08u) goto L_08A62A08;
    return;
L_08A62A08:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62A18;
    }
}
L_08A62A18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    hot_regs.g31 = (0x08A62A24u);
    hot_regs.g5 = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 91u, 0x08A58700u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A24u) goto L_08A62A24;
    return;
L_08A62A24:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62A2C;
    }
L_08A62A2C:
    hot_regs.g5 = (17154u << 16u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A62A3Cu);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A3Cu) goto L_08A62A3C;
    return;
L_08A62A3C:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A62A48u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A5829Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A48u) goto L_08A62A48;
    return;
L_08A62A48:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62A54u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 900u, 0x08A57F04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A54u) goto L_08A62A54;
    return;
L_08A62A54:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15286u << 16u);
    g4 = (g4 | 2922u);
    f20 = std::bit_cast<float>(g4);
    f20 = ctx.fpr[0] / f20;
    ctx.set_fpu_condition((ctx.fpr[26] <= f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62A74;
    }
}
}
L_08A62A74:
    hot_regs.g31 = (0x08A62A7Cu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A7Cu) goto L_08A62A7C;
    return;
L_08A62A7C:
    hot_regs.g31 = (0x08A62A84u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 41u, 0x08A58304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A84u) goto L_08A62A84;
    return;
L_08A62A84:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1600));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A62A94u);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 105u, 0x08A5877Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62A94u) goto L_08A62A94;
    return;
L_08A62A94:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62AA0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62AA0u) goto L_08A62AA0;
    return;
L_08A62AA0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1584));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08A62AB4u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62AB4u) goto L_08A62AB4;
    return;
L_08A62AB4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62AC0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 461u, 0x08A93198u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62AC0u) goto L_08A62AC0;
    return;
L_08A62AC0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62AC8;
    }
L_08A62AC8:
    hot_regs.g4 = (16672u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1640), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(1648));
      if (branch_taken) {
          goto L_08A62B54;
      }
      goto L_08A62AE4;
    }
L_08A62AE4:
    hot_regs.g31 = (0x08A62AECu);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5800Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62AECu) goto L_08A62AEC;
    return;
L_08A62AEC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(600)));
    hot_regs.g31 = (0x08A62AF8u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A58030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62AF8u) goto L_08A62AF8;
    return;
L_08A62AF8:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1680));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A62B0Cu);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B0Cu) goto L_08A62B0C;
    return;
L_08A62B0C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1696));
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A62B1Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 897u, 0x08A57E9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B1Cu) goto L_08A62B1C;
    return;
L_08A62B1C:
    hot_regs.g4 = (48501u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (48373u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.g31 = (0x08A62B38u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B38u) goto L_08A62B38;
    return;
L_08A62B38:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1696)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1700)));
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A62B74;
      }
      goto L_08A62B54;
    }
}
}
L_08A62B54:
    hot_regs.g31 = (0x08A62B5Cu);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B5Cu) goto L_08A62B5C;
    return;
L_08A62B5C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A62B6Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1632), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 79u, 0x08A585E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B6Cu) goto L_08A62B6C;
    return;
L_08A62B6C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1636), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08A62B74;
L_08A62B74:
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(1616));
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A62B8Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B8Cu) goto L_08A62B8C;
    return;
L_08A62B8C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A62B98u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62B98u) goto L_08A62B98;
    return;
L_08A62B98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(352)));
    hot_regs.g31 = (0x08A62BA4u);
    hot_regs.g5 = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 91u, 0x08A58700u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62BA4u) goto L_08A62BA4;
    return;
L_08A62BA4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62BEC;
      }
      goto L_08A62BAC;
    }
L_08A62BAC:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(1728));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A62BC0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62BC0u) goto L_08A62BC0;
    return;
L_08A62BC0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(1728)));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1712));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(1728), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x08A62BE0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62BE0u) goto L_08A62BE0;
    return;
L_08A62BE0:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1664));
    hot_regs.g31 = (0x08A62BECu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62BECu) goto L_08A62BEC;
    return;
L_08A62BEC:
    hot_regs.g4 = (16448u << 16u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08A62BFCu);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 74u, 0x08A5852Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62BFCu) goto L_08A62BFC;
    return;
L_08A62BFC:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g31 = (0x08A62C08u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 114u, 0x08A587D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62C08u) goto L_08A62C08;
    return;
L_08A62C08:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16268u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5772)));
    f12 = ctx.fpr[0] + f12;
    { const float fs = f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62C30;
    }
}
}
L_08A62C30:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1632));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (0u | 65u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A62C5Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62C5Cu) goto L_08A62C5C;
    return;
L_08A62C5C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C8C;
      }
      goto L_08A62C64;
    }
L_08A62C64:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(1664));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (0u | 65u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A62C8Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62C8Cu) goto L_08A62C8C;
    return;
L_08A62C8C:
    hot_regs.g31 = (0x08A62C94u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 68u, 0x08A584FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62C94u) goto L_08A62C94;
    return;
L_08A62C94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 191u);
    { const bool branch_taken = hot_regs.g2 != g4;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A631BC;
      }
      goto L_08A62CA0;
    }
}
L_08A62CA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(618))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A631BC;
      }
      goto L_08A62CB0;
    }
}
L_08A62CB0:
    hot_regs.g5 = (16088u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (hot_regs.g5 | 37749u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(1744));
    hot_regs.g5 = (48754u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 | 45089u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62CDCu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62CDCu) goto L_08A62CDC;
    return;
L_08A62CDC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1792));
    hot_regs.g31 = (0x08A62CE8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62CE8u) goto L_08A62CE8;
    return;
L_08A62CE8:
    hot_regs.g5 = (15983u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 | 40370u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62D04u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D04u) goto L_08A62D04;
    return;
L_08A62D04:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1808));
    hot_regs.g31 = (0x08A62D10u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D10u) goto L_08A62D10;
    return;
L_08A62D10:
    hot_regs.g4 = (16030u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 47186u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (49029u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 33030u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16244u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 14680u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08A62D3Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D3Cu) goto L_08A62D3C;
    return;
L_08A62D3C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1824));
    hot_regs.g31 = (0x08A62D48u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D48u) goto L_08A62D48;
    return;
L_08A62D48:
    hot_regs.g5 = (49073u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 26739u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (15948u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (48780u << 16u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.g31 = (0x08A62D7Cu);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D7Cu) goto L_08A62D7C;
    return;
L_08A62D7C:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1840));
    hot_regs.g31 = (0x08A62D88u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62D88u) goto L_08A62D88;
    return;
L_08A62D88:
    hot_regs.g5 = (16009u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (hot_regs.g5 | 14156u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A62DA4u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62DA4u) goto L_08A62DA4;
    return;
L_08A62DA4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1856));
    hot_regs.g31 = (0x08A62DB0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62DB0u) goto L_08A62DB0;
    return;
L_08A62DB0:
    ctx.gpr[30] = (0u | 255u);
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2616), static_cast<std::uint8_t>(ctx.gpr[30]));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2615), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2614), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2613), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x08A62DDCu);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2612), static_cast<std::uint8_t>(hot_regs.g5));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 47u, 0x08A5834Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62DDCu) goto L_08A62DDC;
    return;
L_08A62DDC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (16076u << 16u);
    g6 = (g6 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g6);
    hot_regs.g4 = (hot_regs.g2 & 1023u);
    hot_regs.g7 = (16968u << 16u);
    g6 = (16320u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.f20 = std::bit_cast<float>(g6);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08A62E1C;
      }
      goto L_08A62E04;
    }
}
L_08A62E04:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g5 = (16936u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_08A62E30;
      }
      goto L_08A62E1C;
    }
L_08A62E1C:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g5 = (16936u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g5);
    goto L_08A62E30;
L_08A62E30:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 511u);
    hot_regs.g5 = (g4 < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A62EE0;
      }
      goto L_08A62E40;
    }
}
L_08A62E40:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (17096u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08A62E60;
      }
      goto L_08A62E54;
    }
}
L_08A62E54:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_08A62E60;
L_08A62E60:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g5 = hot_regs.g5;
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f28; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g5 = (g5 & 255u);
    f28 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    f28 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f28)));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08A62E94;
      }
      goto L_08A62E88;
    }
}
}
L_08A62E88:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_08A62E94;
L_08A62E94:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g17 = ctx.gpr[17];
    f12 = f12 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[26]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    g17 = (std::bit_cast<std::uint32_t>(f15));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    g17 = (g17 & 255u);
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A62EC0;
      }
      goto L_08A62EB4;
    }
}
}
L_08A62EB4:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    goto L_08A62EC0;
L_08A62EC0:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = f12 / hot_regs.f13;
    { const float fs = f30; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    f30 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    f30 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f30)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
      if (branch_taken) {
          goto L_08A62F90;
      }
      goto L_08A62EE0;
    }
}
}
L_08A62EE0:
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(413) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A62F90;
      }
      goto L_08A62EEC;
    }
L_08A62EEC:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 512u);
    g4 = (g5 - g4);
    f13 = std::bit_cast<float>(g4);
    g5 = (17096u << 16u);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) >= 0;
    hot_regs.f12 = std::bit_cast<float>(g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08A62F14;
      }
      goto L_08A62F08;
    }
}
}
L_08A62F08:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08A62F14;
L_08A62F14:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
    float f28 = ctx.fpr[28];
{
    std::uint32_t g5 = hot_regs.g5;
    f13 = f13 / hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f28; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g5 = (g5 & 255u);
    f28 = std::bit_cast<float>(g5);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    f28 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f28)));
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
    ctx.fpr[28] = f28;
      if (branch_taken) {
          goto L_08A62F48;
      }
      goto L_08A62F3C;
    }
}
}
L_08A62F3C:
    hot_regs.g5 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08A62F48;
L_08A62F48:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g17 = ctx.gpr[17];
    f13 = f13 / hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[26]; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    g17 = (std::bit_cast<std::uint32_t>(f15));
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    g17 = (g17 & 255u);
    ctx.gpr[17] = g17;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08A62F74;
      }
      goto L_08A62F68;
    }
}
}
L_08A62F68:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = hot_regs.f13 + hot_regs.f14;
    goto L_08A62F74;
L_08A62F74:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f13 / f12;
    { const float fs = f30; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & 255u);
    f30 = std::bit_cast<float>(g4);
    f30 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f30)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_08A62F90;
}
}
L_08A62F90:
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(1872));
    hot_regs.g31 = (0x08A62FA0u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 40u, 0x08A582FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FA0u) goto L_08A62FA0;
    return;
L_08A62FA0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A62FACu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 11u, 0x08A580FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FACu) goto L_08A62FAC;
    return;
L_08A62FAC:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(1760));
    hot_regs.g31 = (0x08A62FB8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 34u, 0x08A582A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FB8u) goto L_08A62FB8;
    return;
L_08A62FB8:
    hot_regs.g6 = (16384u << 16u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08A62FCCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 904u, 0x08A57F64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FCCu) goto L_08A62FCC;
    return;
L_08A62FCC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A62FDCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 902u, 0x08A57F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FDCu) goto L_08A62FDC;
    return;
L_08A62FDC:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(1776));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08A62FF0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 9u, 0x08A580C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A62FF0u) goto L_08A62FF0;
    return;
L_08A62FF0:
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[9] = (16704u << 16u);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.g4 = (0u | 0u);
    hot_regs.f13 = ctx.fpr[28] / hot_regs.f22;
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    hot_regs.f14 = hot_regs.f14 / hot_regs.f22;
    hot_regs.f15 = ctx.fpr[30] / hot_regs.f22;
    hot_regs.g31 = (0x08A63024u);
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0200_entry, 200u, 403u, 0x08B25C64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63024u) goto L_08A63024;
    return;
L_08A63024:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(1888));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(1904));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(1984));
    goto L_08A63034;
}
L_08A63034:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g16 = (g17 << 4u);
    g16 = (hot_regs.g29 + g16);
    g19 = (ctx.gpr[23] + g17);
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 2 ? 1u : 0u);
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(1792));
    { const bool branch_taken = hot_regs.g4 == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(21));
    ctx.gpr[16] = g16;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08A63090;
      }
      goto L_08A63050;
    }
}
L_08A63050:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g31 = (0x08A63060u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 935u, 0x0885FEC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63060u) goto L_08A63060;
    return;
L_08A63060:
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(1792));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08A63070u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63070u) goto L_08A63070;
    return;
L_08A63070:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A6307Cu);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6307Cu) goto L_08A6307C;
    return;
L_08A6307C:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A63088u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63088u) goto L_08A63088;
    return;
L_08A63088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A630AC;
      }
      goto L_08A63090;
    }
L_08A63090:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(2628)));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(1792));
    hot_regs.g31 = (0x08A630A0u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A630A0u) goto L_08A630A0;
    return;
L_08A630A0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A630ACu);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 15u, 0x08A58168u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A630ACu) goto L_08A630AC;
    return;
L_08A630AC:
    hot_regs.g31 = (0x08A630B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 47u, 0x08A5834Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A630B4u) goto L_08A630B4;
    return;
L_08A630B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] << 6u);
    g4 = (hot_regs.g2 + g4);
    g4 = (g4 >> 8u);
    g4 = (g4 & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    hot_regs.g5 = (0u | 2u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A630DC;
      }
      goto L_08A630CC;
    }
}
L_08A630CC:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6318C;
      }
      goto L_08A630D4;
    }
L_08A630D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63130;
      }
      goto L_08A630DC;
    }
L_08A630DC:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A6318C;
      }
      goto L_08A630E4;
    }
L_08A630E4:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2613)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2612)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08A63128u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63128u) goto L_08A63128;
    return;
L_08A63128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631A0;
      }
      goto L_08A63130;
    }
L_08A63130:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g6 = (0u | 1u);
    if (ctx.gpr[17] == hot_regs.g6) {
    hot_regs.g4 = (hot_regs.g5 | 0u);
        goto L_08A63140;
    }
    goto L_08A63140;
L_08A63140:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2616)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2615)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(2614)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[11] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A63184u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 311u, 0x08981324u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63184u) goto L_08A63184;
    return;
L_08A63184:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631A0;
      }
      goto L_08A6318C;
    }
L_08A6318C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08A631A0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 313u, 0x08981398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A631A0u) goto L_08A631A0;
    return;
L_08A631A0:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g17 & 255u);
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08A63034;
      }
      goto L_08A631B4;
    }
}
L_08A631B4:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    goto L_08A631BC;
L_08A631BC:
    hot_regs.g31 = (0x08A631C4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A631C4u) goto L_08A631C4;
    return;
L_08A631C4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08A631D0u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 24u, 0x08A5822Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A631D0u) goto L_08A631D0;
    return;
L_08A631D0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2640)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2644)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2648)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2652)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2656)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2660)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2664)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2668)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2672)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2676)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2680)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2684)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2688)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2692)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2696)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(2700)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(2704));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A63218:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(512), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(516), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(520), hot_regs.g31);
    hot_regs.g31 = (0x08A63240u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63240u) goto L_08A63240;
    return;
L_08A63240:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    hot_regs.g4 = (2236u << 16u);
      if (branch_taken) {
          goto L_08A63258;
      }
      goto L_08A63248;
    }
L_08A63248:
    hot_regs.g31 = (0x08A63250u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 63u, 0x08A1C6C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63250u) goto L_08A63250;
    return;
L_08A63250:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63270;
      }
      goto L_08A63258;
    }
L_08A63258:
    hot_regs.g31 = (0x08A63260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63260u) goto L_08A63260;
    return;
L_08A63260:
    if (ctx.gpr[16] != hot_regs.g2) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08A63278;
    }
    goto L_08A63268;
L_08A63268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63298;
      }
      goto L_08A63270;
    }
L_08A63270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A63278;
    }
L_08A63278:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16320u << 16u);
    g4 = (g4 & g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A632C0;
      }
      goto L_08A63298;
    }
}
L_08A63298:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (17442u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    g4 = (g4 | 32768u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A632C8;
      }
      goto L_08A632B8;
    }
}
L_08A632B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A632C0;
    }
L_08A632C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A632C8;
    }
L_08A632C8:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A63314;
      }
      goto L_08A63304;
    }
L_08A63304:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A63314;
}
L_08A63314:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    hot_regs.g6 = (0u | 1u);
    if (g4 != hot_regs.g6) {
    g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = g4;
        goto L_08A6332C;
    }
    goto L_08A63324;
}
L_08A63324:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A63340;
      }
      goto L_08A6332C;
    }
L_08A6332C:
    hot_regs.g6 = (0u | 2u);
    if (hot_regs.g4 != hot_regs.g6) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
        goto L_08A63340;
    }
    goto L_08A63338;
L_08A63338:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A63340;
      }
      goto L_08A63340;
    }
L_08A63340:
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = (16076u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A63370u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63370u) goto L_08A63370;
    return;
L_08A63370:
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x08A63380u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 312u, 0x08A595C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63380u) goto L_08A63380;
    return;
L_08A63380:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A6339C;
    }
L_08A6339C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17312u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63448;
      }
      goto L_08A633B8;
    }
L_08A633B8:
    hot_regs.g4 = (15948u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(960));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 56u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A63440u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63440u) goto L_08A63440;
    return;
L_08A63440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A63448;
    }
L_08A63448:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17347u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (16320u << 16u);
      if (branch_taken) {
          goto L_08A63594;
      }
      goto L_08A63464;
    }
L_08A63464:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 + g4);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(960));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A634AC;
      }
      goto L_08A63488;
    }
}
L_08A63488:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 & 3u);
    g5 = (0u | 2u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A63508;
      }
      goto L_08A634AC;
    }
}
L_08A634AC:
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 33u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A63508u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63508u) goto L_08A63508;
    return;
L_08A63508:
    hot_regs.g4 = (16025u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15651u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (0u | 55u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A6358Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6358Cu) goto L_08A6358C;
    return;
L_08A6358C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A63594;
    }
L_08A63594:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17382u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6365C;
      }
      goto L_08A635B0;
    }
L_08A635B0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 + g4);
    g4 = (g4 & 3u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A635F4;
      }
      goto L_08A635D0;
    }
}
L_08A635D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 & 3u);
    g5 = (0u | 2u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A635F4;
    }
}
L_08A635F4:
    hot_regs.g4 = (15733u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 49807u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(960));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (0u | 33u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A63654u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63654u) goto L_08A63654;
    return;
L_08A63654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A6365C;
    }
L_08A6365C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (g5 + g4);
    g4 = (g4 & 255u);
    g5 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A63694;
      }
      goto L_08A63680;
    }
}
L_08A63680:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 70 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 26 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A6369C;
      }
      goto L_08A6368C;
    }
}
L_08A6368C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636A4;
      }
      goto L_08A63694;
    }
L_08A63694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A6369C;
    }
L_08A6369C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636B8;
      }
      goto L_08A636A4;
    }
L_08A636A4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 160 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 101 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A636C0;
      }
      goto L_08A636B0;
    }
}
L_08A636B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636C8;
      }
      goto L_08A636B8;
    }
L_08A636B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A636C0;
    }
L_08A636C0:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636DC;
      }
      goto L_08A636C8;
    }
L_08A636C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 200 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 176 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A636E4;
      }
      goto L_08A636D4;
    }
}
L_08A636D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A636EC;
      }
      goto L_08A636DC;
    }
L_08A636DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A636E4;
    }
L_08A636E4:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63734;
      }
      goto L_08A636EC;
    }
L_08A636EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 236 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15692u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6372C;
      }
      goto L_08A636F8;
    }
}
L_08A636F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g31 = (0x08A63718u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 56u, 0x08A1C658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63718u) goto L_08A63718;
    return;
L_08A63718:
    hot_regs.g4 = (0u | 3u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A6373C;
      }
      goto L_08A63724;
    }
L_08A63724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A637AC;
      }
      goto L_08A6372C;
    }
L_08A6372C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A63734;
    }
L_08A63734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A6373C;
    }
L_08A6373C:
    hot_regs.g4 = (15779u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(960));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 33u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A637A4u);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A637A4u) goto L_08A637A4;
    return;
L_08A637A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A637AC;
    }
L_08A637AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & ctx.gpr[17]);
    g4 = (g4 >> 22u);
    g4 = (hot_regs.g5 + g4);
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6385C;
      }
      goto L_08A637CC;
    }
}
L_08A637CC:
    hot_regs.g4 = (16204u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(208));
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15759u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 23593u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(960));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (0u | 33u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    hot_regs.g31 = (0x08A6385Cu);
    ctx.gpr[11] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 716u, 0x088FF060u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6385Cu) goto L_08A6385C;
    return;
L_08A6385C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(496)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(504)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(508)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(512)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(516)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(520)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A63880:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (g5 & 255u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    ctx.gpr[18] = (hot_regs.g6 & 255u);
    g5 = (g5 & 8u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08A638D4;
      }
      goto L_08A638B4;
    }
}
L_08A638B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 14 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (0u | 15u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A638DC;
      }
      goto L_08A638C0;
    }
}
L_08A638C0:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 13 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A638E8;
      }
      goto L_08A638CC;
    }
L_08A638CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A638E8;
      }
      goto L_08A638D4;
    }
L_08A638D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A638DC;
    }
L_08A638DC:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A638E8;
      }
      goto L_08A638E4;
    }
L_08A638E4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A638E8;
L_08A638E8:
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[17]);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A639F4;
      }
      goto L_08A638F8;
    }
L_08A638F8:
    hot_regs.g5 = (0u | 1u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(1076), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g7 = (16256u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g31 = (0x08A6391Cu);
    hot_regs.g6 = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A05F80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6391Cu) goto L_08A6391C;
    return;
L_08A6391C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 32u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A6394C;
      }
      goto L_08A63930;
    }
}
L_08A63930:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08A6394Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6394Cu) goto L_08A6394C;
    return;
L_08A6394C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A639F4;
      }
      goto L_08A63954;
    }
L_08A63954:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5848)));
    hot_regs.g31 = (0x08A63960u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63960u) goto L_08A63960;
    return;
L_08A63960:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A6399Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A6399Cu) goto L_08A6399C;
    return;
L_08A6399C:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5848)));
    hot_regs.g31 = (0x08A639A8u);
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A639A8u) goto L_08A639A8;
    return;
L_08A639A8:
    hot_regs.f12 = hot_regs.f20 - hot_regs.f22;
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A639F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A639F4u) goto L_08A639F4;
    return;
L_08A639F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    g4 = (0u | 13u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63A00;
    }
}
L_08A63A00:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    hot_regs.g5 = (0u | 14u);
      if (branch_taken) {
          goto L_08A63A3C;
      }
      goto L_08A63A08;
    }
L_08A63A08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1232)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63A74;
      }
      goto L_08A63A20;
    }
L_08A63A20:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63A74;
      }
      goto L_08A63A38;
    }
L_08A63A38:
    hot_regs.g5 = (0u | 14u);
    goto L_08A63A3C;
L_08A63A3C:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63A44;
    }
L_08A63A44:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63A74;
      }
      goto L_08A63A5C;
    }
L_08A63A5C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5888)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63A74;
    }
L_08A63A74:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
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
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5844)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63AA0;
    }
L_08A63AA0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 496u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08A63AC4;
      }
      goto L_08A63AB0;
    }
}
L_08A63AB0:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5840)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63AC4;
    }
L_08A63AC4:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A63B24;
      }
      goto L_08A63ACC;
    }
L_08A63ACC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 42u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08A63AE4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63AE4u) goto L_08A63AE4;
    return;
L_08A63AE4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A63AF0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63AF0u) goto L_08A63AF0;
    return;
L_08A63AF0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63AF8;
    }
L_08A63AF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08A63B04u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63B04u) goto L_08A63B04;
    return;
L_08A63B04:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 42u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08A63B1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 212u, 0x08B04D14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63B1Cu) goto L_08A63B1C;
    return;
L_08A63B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B78;
      }
      goto L_08A63B24;
    }
L_08A63B24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-5848)));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08A63B78u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63B78u) goto L_08A63B78;
    return;
L_08A63B78:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08A63B98:
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
          goto L_08A63C30;
      }
      goto L_08A63C20;
    }
}
L_08A63C20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08A63C30;
}
L_08A63C30:
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
        goto L_08A63C58;
    }
    goto L_08A63C50;
}
}
L_08A63C50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A63C6C;
      }
      goto L_08A63C58;
    }
L_08A63C58:
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[8];
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
      if (branch_taken) {
          goto L_08A63C6C;
      }
      goto L_08A63C64;
    }
L_08A63C64:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A63C6C;
      }
      goto L_08A63C6C;
    }
L_08A63C6C:
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
          goto L_08A63C84;
      }
      goto L_08A63C7C;
    }
L_08A63C7C:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A63C90;
      }
      goto L_08A63C84;
    }
L_08A63C84:
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
    goto L_08A63C90;
L_08A63C90:
    hot_regs.g4 = (0u | 10u);
    { const bool branch_taken = ctx.gpr[17] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A63CA4;
      }
      goto L_08A63C9C;
    }
L_08A63C9C:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_08A63CB0;
      }
      goto L_08A63CA4;
    }
L_08A63CA4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A63CB0;
}
L_08A63CB0:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08A63CBCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 899u, 0x08A57EDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63CBCu) goto L_08A63CBC;
    return;
L_08A63CBC:
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
    hot_regs.g31 = (0x08A63CD8u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 395u, 0x089B16E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63CD8u) goto L_08A63CD8;
    return;
L_08A63CD8:
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
          goto L_08A63D44;
      }
      goto L_08A63CE8;
    }
L_08A63CE8:
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
          goto L_08A63D08;
      }
      goto L_08A63D00;
    }
}
L_08A63D00:
    { const bool branch_taken = ctx.gpr[17] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08A63D14;
      }
      goto L_08A63D08;
    }
L_08A63D08:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_08A63D14;
}
L_08A63D14:
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
    hot_regs.g31 = (0x08A63D44u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63D44u) goto L_08A63D44;
    return;
L_08A63D44:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63D70;
      }
      goto L_08A63D58;
    }
L_08A63D58:
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
    goto L_08A63D70;
}
}
L_08A63D70:
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
    hot_regs.g31 = (0x08A63E0Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63E0Cu) goto L_08A63E0C;
    return;
L_08A63E0C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EAC;
      }
      goto L_08A63E14;
    }
L_08A63E14:
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
    hot_regs.g31 = (0x08A63E4Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 487u, 0x0889ACD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63E4Cu) goto L_08A63E4C;
    return;
L_08A63E4C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EA4;
      }
      goto L_08A63E54;
    }
L_08A63E54:
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
    hot_regs.g31 = (0x08A63E94u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63E94u) goto L_08A63E94;
    return;
L_08A63E94:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08A63EB4;
      }
      goto L_08A63E9C;
    }
L_08A63E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63EE0;
      }
      goto L_08A63EA4;
    }
L_08A63EA4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A63F9C;
      }
      goto L_08A63EAC;
    }
L_08A63EAC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A63F9C;
      }
      goto L_08A63EB4;
    }
L_08A63EB4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((hot_regs.f22 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63EE0;
      }
      goto L_08A63EC8;
    }
L_08A63EC8:
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
          goto L_08A63EF8;
      }
      goto L_08A63EE0;
    }
}
L_08A63EE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08A63F00;
      }
      goto L_08A63EF0;
    }
}
L_08A63EF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F54;
      }
      goto L_08A63EF8;
    }
L_08A63EF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A63F9C;
      }
      goto L_08A63F00;
    }
L_08A63F00:
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
    hot_regs.g31 = (0x08A63F38u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63F38u) goto L_08A63F38;
    return;
L_08A63F38:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F4C;
      }
      goto L_08A63F40;
    }
L_08A63F40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08A63F6C;
      }
      goto L_08A63F4C;
    }
L_08A63F4C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A63F9C;
      }
      goto L_08A63F54;
    }
L_08A63F54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(196));
    hot_regs.g31 = (0x08A63F6Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08A63F6Cu) goto L_08A63F6C;
    return;
L_08A63F6C:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f22) || std::isnan(hot_regs.f20)) && hot_regs.f22 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63F98;
      }
      goto L_08A63F7C;
    }
L_08A63F7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A63F98;
      }
      goto L_08A63F90;
    }
L_08A63F90:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08A63F9C;
      }
      goto L_08A63F98;
    }
L_08A63F98:
    hot_regs.g2 = (ctx.gpr[23] | 0u);
    goto L_08A63F9C;
L_08A63F9C:
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
L_08A63FD4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[30]);
    ctx.gpr[23] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g29 = g29;
    ctx.pc = 0x08A64000u; return;}

}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x08A60000u, 16384u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60008u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60014u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6003Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60044u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6005Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60070u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6008Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60108u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60110u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6012Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6014Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60150u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60168u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60198u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6023Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6024Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6025Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6028Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60294u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60304u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60324u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6032Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60348u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60368u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6036Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60374u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6037Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60404u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6041Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60470u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60488u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60498u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6054Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60554u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60580u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6058Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60594u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6059Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6060Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60624u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60638u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60640u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6067Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60694u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60704u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6070Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6072Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6073Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60754u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6075Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60764u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6077Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60784u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60804u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6080Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60820u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6083Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60878u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60890u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6089Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60908u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60910u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6091Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60930u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6093Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60948u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60978u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60990u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60998u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ABCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61004u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61018u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6101Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61020u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61028u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61038u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61044u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61054u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61064u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61070u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61080u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6110Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61124u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6117Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6118Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61204u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61210u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61220u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6122Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6133Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61344u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61384u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6138Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61418u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61490u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61498u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61504u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61540u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61548u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61614u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61640u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61664u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61678u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6173Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61754u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6180Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6192Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61934u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6193Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61950u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6196Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6202Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62094u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62108u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62120u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6213Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62154u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62174u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62190u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62204u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62298u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62300u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62398u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62418u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62424u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6250Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62520u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6252Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6253Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62550u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62574u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62580u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6260Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62618u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62620u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62630u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62638u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62644u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6264Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62658u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62660u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6266Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62674u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6268Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62694u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62700u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6270Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62720u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6272Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6273Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6274Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62754u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62760u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62810u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62824u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62838u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62840u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62850u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62858u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62860u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6286Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6288Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62910u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62918u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6294Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62958u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6296Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62974u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62984u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6298Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62998u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63024u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63050u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63060u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63070u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6307Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63090u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63128u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63130u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63184u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6318Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63240u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63248u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63250u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63258u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63260u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63268u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63298u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63304u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63314u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63324u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6332Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63340u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63370u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6339Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63440u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63448u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63464u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63488u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6358Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63594u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63654u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6365Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6368Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63694u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6369Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63718u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63724u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6372Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6373Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6385Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6391Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63930u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6394Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6399Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ACCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD4u, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp
