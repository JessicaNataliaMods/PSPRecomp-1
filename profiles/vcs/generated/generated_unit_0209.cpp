#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0209[4089] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 0, 0, 0, 6, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0,
    0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0,
    0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0,
    0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46,
    0, 47, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0,
    0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 113, 114, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 138,
    0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145,
    0, 0, 146, 0, 147, 148, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 155, 0, 0,
    0, 156, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 165,
    0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0,
    183, 184, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 201, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209,
    0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0,
    0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0,
    0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0,
    0, 305, 0, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 312, 0, 0,
    0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 0, 0, 329, 0,
    0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0,
    0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 342, 0, 343, 0, 0,
    0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 0, 351,
    0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 363, 0,
    0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 387, 0, 0, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 391, 0, 0,
    0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0,
    0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    0, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 421, 0,
    422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 430,
    0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0,
    0, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 446,
    0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 0, 0, 456, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 473, 474, 0, 0, 0,
    0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 492, 493, 0, 0, 0, 0,
    494, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0,
    502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0,
    508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 519, 520, 0, 0, 521, 522, 0, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528,
    0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 0, 0, 540, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0,
    0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 558,
    0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 563, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0,
    0, 0, 572, 573, 0, 0, 0, 574, 0, 575, 0, 0, 0, 576, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 582, 0, 583, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0,
    0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0,
    599, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0,
    0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 613, 0, 0, 0, 0, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 624, 0, 0,
    0, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 627, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 632, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0,
    0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0,
    640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0,
    0, 648, 0, 0, 0, 0, 0, 649, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651,
};
void recomp_unit_0209_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B48000u;
        entry_id = (entry_delta < 16356u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0209[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B48000;
    case 2u: goto L_08B48014;
    case 3u: goto L_08B48034;
    case 4u: goto L_08B48038;
    case 5u: goto L_08B48088;
    case 6u: goto L_08B48098;
    case 7u: goto L_08B4809C;
    case 8u: goto L_08B480C4;
    case 9u: goto L_08B480E8;
    case 10u: goto L_08B480F8;
    case 11u: goto L_08B48104;
    case 12u: goto L_08B48110;
    case 13u: goto L_08B48264;
    case 14u: goto L_08B48274;
    case 15u: goto L_08B4828C;
    case 16u: goto L_08B482B0;
    case 17u: goto L_08B482B4;
    case 18u: goto L_08B482C8;
    case 19u: goto L_08B482D4;
    case 20u: goto L_08B482DC;
    case 21u: goto L_08B4830C;
    case 22u: goto L_08B48314;
    case 23u: goto L_08B48330;
    case 24u: goto L_08B48338;
    case 25u: goto L_08B48344;
    case 26u: goto L_08B4834C;
    case 27u: goto L_08B483A8;
    case 28u: goto L_08B483AC;
    case 29u: goto L_08B483F8;
    case 30u: goto L_08B48404;
    case 31u: goto L_08B4840C;
    case 32u: goto L_08B4851C;
    case 33u: goto L_08B4852C;
    case 34u: goto L_08B48540;
    case 35u: goto L_08B485E0;
    case 36u: goto L_08B485F8;
    case 37u: goto L_08B48604;
    case 38u: goto L_08B48630;
    case 39u: goto L_08B48850;
    case 40u: goto L_08B48868;
    case 41u: goto L_08B48870;
    case 42u: goto L_08B48878;
    case 43u: goto L_08B48894;
    case 44u: goto L_08B4889C;
    case 45u: goto L_08B488A4;
    case 46u: goto L_08B488FC;
    case 47u: goto L_08B48904;
    case 48u: goto L_08B48914;
    case 49u: goto L_08B48918;
    case 50u: goto L_08B48950;
    case 51u: goto L_08B48958;
    case 52u: goto L_08B48978;
    case 53u: goto L_08B48994;
    case 54u: goto L_08B489A4;
    case 55u: goto L_08B489B4;
    case 56u: goto L_08B489B8;
    case 57u: goto L_08B489C8;
    case 58u: goto L_08B489E4;
    case 59u: goto L_08B48A00;
    case 60u: goto L_08B48A18;
    case 61u: goto L_08B48A20;
    case 62u: goto L_08B48A3C;
    case 63u: goto L_08B48A44;
    case 64u: goto L_08B48A4C;
    case 65u: goto L_08B48A54;
    case 66u: goto L_08B48A68;
    case 67u: goto L_08B48A80;
    case 68u: goto L_08B48A88;
    case 69u: goto L_08B48AA4;
    case 70u: goto L_08B48AB0;
    case 71u: goto L_08B48ACC;
    case 72u: goto L_08B48AE4;
    case 73u: goto L_08B48AF0;
    case 74u: goto L_08B48B20;
    case 75u: goto L_08B48B5C;
    case 76u: goto L_08B48BCC;
    case 77u: goto L_08B48BD8;
    case 78u: goto L_08B48BE0;
    case 79u: goto L_08B48BE8;
    case 80u: goto L_08B48BF0;
    case 81u: goto L_08B48C00;
    case 82u: goto L_08B48C18;
    case 83u: goto L_08B48C2C;
    case 84u: goto L_08B48C38;
    case 85u: goto L_08B48C40;
    case 86u: goto L_08B48C4C;
    case 87u: goto L_08B48C64;
    case 88u: goto L_08B48C6C;
    case 89u: goto L_08B48C84;
    case 90u: goto L_08B48C98;
    case 91u: goto L_08B48CA4;
    case 92u: goto L_08B48CAC;
    case 93u: goto L_08B48CB4;
    case 94u: goto L_08B48D08;
    case 95u: goto L_08B48D14;
    case 96u: goto L_08B48D1C;
    case 97u: goto L_08B48D30;
    case 98u: goto L_08B48D54;
    case 99u: goto L_08B48D5C;
    case 100u: goto L_08B48D78;
    case 101u: goto L_08B48D80;
    case 102u: goto L_08B48DD8;
    case 103u: goto L_08B48DE0;
    case 104u: goto L_08B48DE8;
    case 105u: goto L_08B48E04;
    case 106u: goto L_08B48E0C;
    case 107u: goto L_08B48E1C;
    case 108u: goto L_08B48E24;
    case 109u: goto L_08B48E40;
    case 110u: goto L_08B48E48;
    case 111u: goto L_08B48E50;
    case 112u: goto L_08B48E90;
    case 113u: goto L_08B48E9C;
    case 114u: goto L_08B48EA0;
    case 115u: goto L_08B48EB0;
    case 116u: goto L_08B48EB8;
    case 117u: goto L_08B48EC0;
    case 118u: goto L_08B48EDC;
    case 119u: goto L_08B48EE4;
    case 120u: goto L_08B48EEC;
    case 121u: goto L_08B48F40;
    case 122u: goto L_08B48F4C;
    case 123u: goto L_08B48F54;
    case 124u: goto L_08B48F70;
    case 125u: goto L_08B48F78;
    case 126u: goto L_08B48FBC;
    case 127u: goto L_08B48FC8;
    case 128u: goto L_08B48FF8;
    case 129u: goto L_08B4900C;
    case 130u: goto L_08B4901C;
    case 131u: goto L_08B4902C;
    case 132u: goto L_08B49034;
    case 133u: goto L_08B49044;
    case 134u: goto L_08B49054;
    case 135u: goto L_08B49064;
    case 136u: goto L_08B4906C;
    case 137u: goto L_08B49074;
    case 138u: goto L_08B4907C;
    case 139u: goto L_08B49088;
    case 140u: goto L_08B4909C;
    case 141u: goto L_08B490AC;
    case 142u: goto L_08B490D4;
    case 143u: goto L_08B490E8;
    case 144u: goto L_08B490F4;
    case 145u: goto L_08B490FC;
    case 146u: goto L_08B49108;
    case 147u: goto L_08B49110;
    case 148u: goto L_08B49114;
    case 149u: goto L_08B4911C;
    case 150u: goto L_08B49130;
    case 151u: goto L_08B49140;
    case 152u: goto L_08B49158;
    case 153u: goto L_08B49160;
    case 154u: goto L_08B49170;
    case 155u: goto L_08B49174;
    case 156u: goto L_08B49184;
    case 157u: goto L_08B49188;
    case 158u: goto L_08B49198;
    case 159u: goto L_08B491A4;
    case 160u: goto L_08B491B0;
    case 161u: goto L_08B491B8;
    case 162u: goto L_08B491C4;
    case 163u: goto L_08B491E4;
    case 164u: goto L_08B491F4;
    case 165u: goto L_08B491FC;
    case 166u: goto L_08B4920C;
    case 167u: goto L_08B49218;
    case 168u: goto L_08B49220;
    case 169u: goto L_08B49228;
    case 170u: goto L_08B49230;
    case 171u: goto L_08B49234;
    case 172u: goto L_08B4923C;
    case 173u: goto L_08B49250;
    case 174u: goto L_08B4925C;
    case 175u: goto L_08B49260;
    case 176u: goto L_08B4928C;
    case 177u: goto L_08B4929C;
    case 178u: goto L_08B492AC;
    case 179u: goto L_08B492B4;
    case 180u: goto L_08B492C4;
    case 181u: goto L_08B492E0;
    case 182u: goto L_08B492F0;
    case 183u: goto L_08B49300;
    case 184u: goto L_08B49304;
    case 185u: goto L_08B49310;
    case 186u: goto L_08B49328;
    case 187u: goto L_08B49340;
    case 188u: goto L_08B49358;
    case 189u: goto L_08B49370;
    case 190u: goto L_08B49388;
    case 191u: goto L_08B49398;
    case 192u: goto L_08B493A0;
    case 193u: goto L_08B493A8;
    case 194u: goto L_08B493B0;
    case 195u: goto L_08B493B8;
    case 196u: goto L_08B493C0;
    case 197u: goto L_08B493C8;
    case 198u: goto L_08B493DC;
    case 199u: goto L_08B493EC;
    case 200u: goto L_08B493FC;
    case 201u: goto L_08B49404;
    case 202u: goto L_08B49418;
    case 203u: goto L_08B49428;
    case 204u: goto L_08B49438;
    case 205u: goto L_08B49440;
    case 206u: goto L_08B49454;
    case 207u: goto L_08B49464;
    case 208u: goto L_08B49474;
    case 209u: goto L_08B4947C;
    case 210u: goto L_08B49490;
    case 211u: goto L_08B494A0;
    case 212u: goto L_08B494B0;
    case 213u: goto L_08B494B8;
    case 214u: goto L_08B494C0;
    case 215u: goto L_08B494C8;
    case 216u: goto L_08B494E4;
    case 217u: goto L_08B494EC;
    case 218u: goto L_08B494FC;
    case 219u: goto L_08B49524;
    case 220u: goto L_08B4952C;
    case 221u: goto L_08B49534;
    case 222u: goto L_08B49544;
    case 223u: goto L_08B49588;
    case 224u: goto L_08B49590;
    case 225u: goto L_08B495AC;
    case 226u: goto L_08B495C0;
    case 227u: goto L_08B495CC;
    case 228u: goto L_08B495D8;
    case 229u: goto L_08B495E8;
    case 230u: goto L_08B495F4;
    case 231u: goto L_08B49614;
    case 232u: goto L_08B49620;
    case 233u: goto L_08B49634;
    case 234u: goto L_08B49640;
    case 235u: goto L_08B49650;
    case 236u: goto L_08B4965C;
    case 237u: goto L_08B4968C;
    case 238u: goto L_08B4969C;
    case 239u: goto L_08B496A8;
    case 240u: goto L_08B496B4;
    case 241u: goto L_08B496BC;
    case 242u: goto L_08B496C8;
    case 243u: goto L_08B496D0;
    case 244u: goto L_08B496D8;
    case 245u: goto L_08B496E0;
    case 246u: goto L_08B496EC;
    case 247u: goto L_08B496F4;
    case 248u: goto L_08B49730;
    case 249u: goto L_08B49780;
    case 250u: goto L_08B49788;
    case 251u: goto L_08B497E0;
    case 252u: goto L_08B497E8;
    case 253u: goto L_08B49800;
    case 254u: goto L_08B49808;
    case 255u: goto L_08B49810;
    case 256u: goto L_08B49824;
    case 257u: goto L_08B49844;
    case 258u: goto L_08B49850;
    case 259u: goto L_08B49864;
    case 260u: goto L_08B49884;
    case 261u: goto L_08B49890;
    case 262u: goto L_08B498A0;
    case 263u: goto L_08B498C0;
    case 264u: goto L_08B498CC;
    case 265u: goto L_08B498DC;
    case 266u: goto L_08B498EC;
    case 267u: goto L_08B49908;
    case 268u: goto L_08B49910;
    case 269u: goto L_08B4992C;
    case 270u: goto L_08B4993C;
    case 271u: goto L_08B49950;
    case 272u: goto L_08B49960;
    case 273u: goto L_08B4996C;
    case 274u: goto L_08B499AC;
    case 275u: goto L_08B499E0;
    case 276u: goto L_08B49A0C;
    case 277u: goto L_08B49A40;
    case 278u: goto L_08B49A74;
    case 279u: goto L_08B49A88;
    case 280u: goto L_08B49A98;
    case 281u: goto L_08B49AB0;
    case 282u: goto L_08B49ABC;
    case 283u: goto L_08B49AC4;
    case 284u: goto L_08B49AE4;
    case 285u: goto L_08B49B24;
    case 286u: goto L_08B49BAC;
    case 287u: goto L_08B49BEC;
    case 288u: goto L_08B49C00;
    case 289u: goto L_08B49C18;
    case 290u: goto L_08B49C48;
    case 291u: goto L_08B49C60;
    case 292u: goto L_08B49C78;
    case 293u: goto L_08B49C90;
    case 294u: goto L_08B49CAC;
    case 295u: goto L_08B49CC4;
    case 296u: goto L_08B49D1C;
    case 297u: goto L_08B49D3C;
    case 298u: goto L_08B49D60;
    case 299u: goto L_08B49D88;
    case 300u: goto L_08B49D98;
    case 301u: goto L_08B49DB4;
    case 302u: goto L_08B49DD0;
    case 303u: goto L_08B49DE4;
    case 304u: goto L_08B49DF4;
    case 305u: goto L_08B49E04;
    case 306u: goto L_08B49E14;
    case 307u: goto L_08B49E20;
    case 308u: goto L_08B49E30;
    case 309u: goto L_08B49E44;
    case 310u: goto L_08B49E58;
    case 311u: goto L_08B49E6C;
    case 312u: goto L_08B49E74;
    case 313u: goto L_08B49E84;
    case 314u: goto L_08B49E8C;
    case 315u: goto L_08B49EA8;
    case 316u: goto L_08B49EBC;
    case 317u: goto L_08B49ECC;
    case 318u: goto L_08B49ED4;
    case 319u: goto L_08B49EE4;
    case 320u: goto L_08B49EEC;
    case 321u: goto L_08B49EFC;
    case 322u: goto L_08B49F0C;
    case 323u: goto L_08B49F28;
    case 324u: goto L_08B49F38;
    case 325u: goto L_08B49F40;
    case 326u: goto L_08B49F50;
    case 327u: goto L_08B49F58;
    case 328u: goto L_08B49F68;
    case 329u: goto L_08B49F78;
    case 330u: goto L_08B49F84;
    case 331u: goto L_08B49FA4;
    case 332u: goto L_08B49FAC;
    case 333u: goto L_08B49FB8;
    case 334u: goto L_08B49FD4;
    case 335u: goto L_08B49FF4;
    case 336u: goto L_08B4A004;
    case 337u: goto L_08B4A020;
    case 338u: goto L_08B4A02C;
    case 339u: goto L_08B4A03C;
    case 340u: goto L_08B4A05C;
    case 341u: goto L_08B4A064;
    case 342u: goto L_08B4A06C;
    case 343u: goto L_08B4A074;
    case 344u: goto L_08B4A088;
    case 345u: goto L_08B4A090;
    case 346u: goto L_08B4A098;
    case 347u: goto L_08B4A0B4;
    case 348u: goto L_08B4A0C4;
    case 349u: goto L_08B4A0D8;
    case 350u: goto L_08B4A0E4;
    case 351u: goto L_08B4A0FC;
    case 352u: goto L_08B4A108;
    case 353u: goto L_08B4A12C;
    case 354u: goto L_08B4A150;
    case 355u: goto L_08B4A178;
    case 356u: goto L_08B4A1A0;
    case 357u: goto L_08B4A1AC;
    case 358u: goto L_08B4A1B8;
    case 359u: goto L_08B4A1C4;
    case 360u: goto L_08B4A1CC;
    case 361u: goto L_08B4A1DC;
    case 362u: goto L_08B4A1E8;
    case 363u: goto L_08B4A1F8;
    case 364u: goto L_08B4A204;
    case 365u: goto L_08B4A220;
    case 366u: goto L_08B4A240;
    case 367u: goto L_08B4A26C;
    case 368u: goto L_08B4A27C;
    case 369u: goto L_08B4A284;
    case 370u: goto L_08B4A2CC;
    case 371u: goto L_08B4A33C;
    case 372u: goto L_08B4A358;
    case 373u: goto L_08B4A364;
    case 374u: goto L_08B4A3A8;
    case 375u: goto L_08B4A41C;
    case 376u: goto L_08B4A438;
    case 377u: goto L_08B4A440;
    case 378u: goto L_08B4A44C;
    case 379u: goto L_08B4A478;
    case 380u: goto L_08B4A49C;
    case 381u: goto L_08B4A4B0;
    case 382u: goto L_08B4A4C4;
    case 383u: goto L_08B4A4D8;
    case 384u: goto L_08B4A504;
    case 385u: goto L_08B4A530;
    case 386u: goto L_08B4A534;
    case 387u: goto L_08B4A540;
    case 388u: goto L_08B4A550;
    case 389u: goto L_08B4A558;
    case 390u: goto L_08B4A560;
    case 391u: goto L_08B4A574;
    case 392u: goto L_08B4A590;
    case 393u: goto L_08B4A5A8;
    case 394u: goto L_08B4A5C0;
    case 395u: goto L_08B4A5E4;
    case 396u: goto L_08B4A5EC;
    case 397u: goto L_08B4A604;
    case 398u: goto L_08B4A610;
    case 399u: goto L_08B4A630;
    case 400u: goto L_08B4A648;
    case 401u: goto L_08B4A664;
    case 402u: goto L_08B4A678;
    case 403u: goto L_08B4A6AC;
    case 404u: goto L_08B4A7D0;
    case 405u: goto L_08B4A7DC;
    case 406u: goto L_08B4A7E4;
    case 407u: goto L_08B4A808;
    case 408u: goto L_08B4A814;
    case 409u: goto L_08B4A81C;
    case 410u: goto L_08B4A824;
    case 411u: goto L_08B4A82C;
    case 412u: goto L_08B4A838;
    case 413u: goto L_08B4A864;
    case 414u: goto L_08B4A888;
    case 415u: goto L_08B4A88C;
    case 416u: goto L_08B4A8A8;
    case 417u: goto L_08B4A8B8;
    case 418u: goto L_08B4A8D0;
    case 419u: goto L_08B4A8E8;
    case 420u: goto L_08B4A8F0;
    case 421u: goto L_08B4A8F8;
    case 422u: goto L_08B4A900;
    case 423u: goto L_08B4A910;
    case 424u: goto L_08B4A920;
    case 425u: goto L_08B4A93C;
    case 426u: goto L_08B4A954;
    case 427u: goto L_08B4A95C;
    case 428u: goto L_08B4A964;
    case 429u: goto L_08B4A96C;
    case 430u: goto L_08B4A97C;
    case 431u: goto L_08B4A98C;
    case 432u: goto L_08B4A99C;
    case 433u: goto L_08B4A9A8;
    case 434u: goto L_08B4A9AC;
    case 435u: goto L_08B4A9C8;
    case 436u: goto L_08B4A9D8;
    case 437u: goto L_08B4A9F0;
    case 438u: goto L_08B4AA08;
    case 439u: goto L_08B4AA10;
    case 440u: goto L_08B4AA18;
    case 441u: goto L_08B4AA20;
    case 442u: goto L_08B4AA30;
    case 443u: goto L_08B4AA40;
    case 444u: goto L_08B4AA5C;
    case 445u: goto L_08B4AA74;
    case 446u: goto L_08B4AA7C;
    case 447u: goto L_08B4AA84;
    case 448u: goto L_08B4AA8C;
    case 449u: goto L_08B4AA9C;
    case 450u: goto L_08B4AAAC;
    case 451u: goto L_08B4AABC;
    case 452u: goto L_08B4AAC8;
    case 453u: goto L_08B4AAD8;
    case 454u: goto L_08B4AAE8;
    case 455u: goto L_08B4AAF8;
    case 456u: goto L_08B4AB0C;
    case 457u: goto L_08B4AB10;
    case 458u: goto L_08B4AB28;
    case 459u: goto L_08B4AB3C;
    case 460u: goto L_08B4ABDC;
    case 461u: goto L_08B4AC3C;
    case 462u: goto L_08B4AC48;
    case 463u: goto L_08B4AC5C;
    case 464u: goto L_08B4AC90;
    case 465u: goto L_08B4AC9C;
    case 466u: goto L_08B4ACB0;
    case 467u: goto L_08B4ACE4;
    case 468u: goto L_08B4ACF0;
    case 469u: goto L_08B4AD04;
    case 470u: goto L_08B4AD38;
    case 471u: goto L_08B4AD48;
    case 472u: goto L_08B4AD5C;
    case 473u: goto L_08B4AD6C;
    case 474u: goto L_08B4AD70;
    case 475u: goto L_08B4AD88;
    case 476u: goto L_08B4AD98;
    case 477u: goto L_08B4ADA0;
    case 478u: goto L_08B4ADA8;
    case 479u: goto L_08B4ADBC;
    case 480u: goto L_08B4ADCC;
    case 481u: goto L_08B4ADE0;
    case 482u: goto L_08B4ADF4;
    case 483u: goto L_08B4AE04;
    case 484u: goto L_08B4AE6C;
    case 485u: goto L_08B4AE94;
    case 486u: goto L_08B4AEBC;
    case 487u: goto L_08B4AEE4;
    case 488u: goto L_08B4AF08;
    case 489u: goto L_08B4AF2C;
    case 490u: goto L_08B4AF44;
    case 491u: goto L_08B4AF54;
    case 492u: goto L_08B4AF68;
    case 493u: goto L_08B4AF6C;
    case 494u: goto L_08B4AF80;
    case 495u: goto L_08B4AF84;
    case 496u: goto L_08B4AF8C;
    case 497u: goto L_08B4AF98;
    case 498u: goto L_08B4AFAC;
    case 499u: goto L_08B4AFC4;
    case 500u: goto L_08B4AFDC;
    case 501u: goto L_08B4AFE4;
    case 502u: goto L_08B4B000;
    case 503u: goto L_08B4B01C;
    case 504u: goto L_08B4B034;
    case 505u: goto L_08B4B03C;
    case 506u: goto L_08B4B054;
    case 507u: goto L_08B4B070;
    case 508u: goto L_08B4B080;
    case 509u: goto L_08B4B088;
    case 510u: goto L_08B4B090;
    case 511u: goto L_08B4B098;
    case 512u: goto L_08B4B0E0;
    case 513u: goto L_08B4B124;
    case 514u: goto L_08B4B12C;
    case 515u: goto L_08B4B138;
    case 516u: goto L_08B4B1C4;
    case 517u: goto L_08B4B1E8;
    case 518u: goto L_08B4B1F0;
    case 519u: goto L_08B4B220;
    case 520u: goto L_08B4B224;
    case 521u: goto L_08B4B230;
    case 522u: goto L_08B4B234;
    case 523u: goto L_08B4B244;
    case 524u: goto L_08B4B24C;
    case 525u: goto L_08B4B254;
    case 526u: goto L_08B4B25C;
    case 527u: goto L_08B4B268;
    case 528u: goto L_08B4B27C;
    case 529u: goto L_08B4B284;
    case 530u: goto L_08B4B290;
    case 531u: goto L_08B4B298;
    case 532u: goto L_08B4B2C4;
    case 533u: goto L_08B4B2E0;
    case 534u: goto L_08B4B2E4;
    case 535u: goto L_08B4B30C;
    case 536u: goto L_08B4B328;
    case 537u: goto L_08B4B32C;
    case 538u: goto L_08B4B344;
    case 539u: goto L_08B4B370;
    case 540u: goto L_08B4B38C;
    case 541u: goto L_08B4B394;
    case 542u: goto L_08B4B3A0;
    case 543u: goto L_08B4B3A8;
    case 544u: goto L_08B4B3B0;
    case 545u: goto L_08B4B404;
    case 546u: goto L_08B4B44C;
    case 547u: goto L_08B4B468;
    case 548u: goto L_08B4B470;
    case 549u: goto L_08B4B488;
    case 550u: goto L_08B4B490;
    case 551u: goto L_08B4B4AC;
    case 552u: goto L_08B4B4B4;
    case 553u: goto L_08B4B4CC;
    case 554u: goto L_08B4B4D0;
    case 555u: goto L_08B4B4E4;
    case 556u: goto L_08B4B4EC;
    case 557u: goto L_08B4B4F4;
    case 558u: goto L_08B4B4FC;
    case 559u: goto L_08B4B504;
    case 560u: goto L_08B4B510;
    case 561u: goto L_08B4B53C;
    case 562u: goto L_08B4B558;
    case 563u: goto L_08B4B55C;
    case 564u: goto L_08B4B570;
    case 565u: goto L_08B4B59C;
    case 566u: goto L_08B4B5B8;
    case 567u: goto L_08B4B5C0;
    case 568u: goto L_08B4B5C8;
    case 569u: goto L_08B4B648;
    case 570u: goto L_08B4B664;
    case 571u: goto L_08B4B66C;
    case 572u: goto L_08B4B688;
    case 573u: goto L_08B4B68C;
    case 574u: goto L_08B4B69C;
    case 575u: goto L_08B4B6A4;
    case 576u: goto L_08B4B6B4;
    case 577u: goto L_08B4B6B8;
    case 578u: goto L_08B4B720;
    case 579u: goto L_08B4B73C;
    case 580u: goto L_08B4B744;
    case 581u: goto L_08B4B760;
    case 582u: goto L_08B4B764;
    case 583u: goto L_08B4B76C;
    case 584u: goto L_08B4B798;
    case 585u: goto L_08B4B7B4;
    case 586u: goto L_08B4B7B8;
    case 587u: goto L_08B4B7CC;
    case 588u: goto L_08B4B7F8;
    case 589u: goto L_08B4B814;
    case 590u: goto L_08B4B81C;
    case 591u: goto L_08B4B834;
    case 592u: goto L_08B4B83C;
    case 593u: goto L_08B4B844;
    case 594u: goto L_08B4B850;
    case 595u: goto L_08B4B86C;
    case 596u: goto L_08B4B8A4;
    case 597u: goto L_08B4B8D8;
    case 598u: goto L_08B4B8F8;
    case 599u: goto L_08B4B900;
    case 600u: goto L_08B4B90C;
    case 601u: goto L_08B4B914;
    case 602u: goto L_08B4B924;
    case 603u: goto L_08B4BA10;
    case 604u: goto L_08B4BA18;
    case 605u: goto L_08B4BA2C;
    case 606u: goto L_08B4BA48;
    case 607u: goto L_08B4BA50;
    case 608u: goto L_08B4BA58;
    case 609u: goto L_08B4BA68;
    case 610u: goto L_08B4BA74;
    case 611u: goto L_08B4BA88;
    case 612u: goto L_08B4BAA4;
    case 613u: goto L_08B4BAA8;
    case 614u: goto L_08B4BAC0;
    case 615u: goto L_08B4BAC4;
    case 616u: goto L_08B4BAF4;
    case 617u: goto L_08B4BB5C;
    case 618u: goto L_08B4BB64;
    case 619u: goto L_08B4BB70;
    case 620u: goto L_08B4BC1C;
    case 621u: goto L_08B4BC58;
    case 622u: goto L_08B4BC64;
    case 623u: goto L_08B4BC70;
    case 624u: goto L_08B4BC74;
    case 625u: goto L_08B4BC88;
    case 626u: goto L_08B4BCD8;
    case 627u: goto L_08B4BCDC;
    case 628u: goto L_08B4BD24;
    case 629u: goto L_08B4BD2C;
    case 630u: goto L_08B4BD38;
    case 631u: goto L_08B4BD50;
    case 632u: goto L_08B4BDA0;
    case 633u: goto L_08B4BDA4;
    case 634u: goto L_08B4BDEC;
    case 635u: goto L_08B4BDF4;
    case 636u: goto L_08B4BE10;
    case 637u: goto L_08B4BE24;
    case 638u: goto L_08B4BE30;
    case 639u: goto L_08B4BE64;
    case 640u: goto L_08B4BE80;
    case 641u: goto L_08B4BEB8;
    case 642u: goto L_08B4BEC0;
    case 643u: goto L_08B4BF38;
    case 644u: goto L_08B4BF4C;
    case 645u: goto L_08B4BF54;
    case 646u: goto L_08B4BF68;
    case 647u: goto L_08B4BF78;
    case 648u: goto L_08B4BF84;
    case 649u: goto L_08B4BF9C;
    case 650u: goto L_08B4BFA0;
    case 651u: goto L_08B4BFE0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B48000:
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16672u << 16u);
    hot_regs.g31 = (0x08B48014u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48014u) goto L_08B48014;
    return;
L_08B48014:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f22 - hot_regs.f20;
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08B48034;
}
}
L_08B48034:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    goto L_08B48038;
L_08B48038:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g6 = (g4 << 2u);
    g6 = (g5 + g6);
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (16672u << 16u);
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08B4809C;
    }
    goto L_08B48088;
}
}
L_08B48088:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 5u);
    if (g4 != hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    hot_regs.g4 = g4;
        goto L_08B480C4;
    }
    goto L_08B48098;
}
L_08B48098:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    goto L_08B4809C;
L_08B4809C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g4 + g4);
    g4 = (g4 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g5 = (g5 >> 30u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 2u));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(535))))));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B480C4;
}
L_08B480C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    f12 = std::bit_cast<float>(g4);
    g4 = (0u | 1u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08B480E8;
}
}
L_08B480E8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 244u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B48104;
      }
      goto L_08B480F8;
    }
L_08B480F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(618))))));
    g4 = (g4 | 32u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B48104;
}
L_08B48104:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(344), static_cast<std::uint16_t>(ctx.gpr[20]));
    hot_regs.g31 = (0x08B48110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48110u) goto L_08B48110;
    return;
L_08B48110:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[21]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (ctx.hi);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(347), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g5 = (g4 << 2u);
    g6 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(24)));
    g5 = (g6 + g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 2u);
    g4 = (g6 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g4 = (g4 + static_cast<std::uint32_t>(16));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f12 = f12 - f13;
    g4 = (16128u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16256u << 16u);
    f15 = std::bit_cast<float>(g4);
    f12 = f12 + f15;
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g9 = (g4 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(532));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g9 = (g4 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(540));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(532)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(540)));
    f13 = f13 - f15;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(536)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(544)));
    f16 = f16 - f17;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(f16));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(592), g4);
    g4 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(596), g4);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(592)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(596)));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(460), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(464), g5);
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(460)));
    { const float fs = f17; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(464)));
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f13 = f13 + f16;
    f13 = std::sqrt(f13);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.set_fpu_condition((f14 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08B48274;
      }
      goto L_08B48264;
    }
}
}
L_08B48264:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B482B4;
      }
      goto L_08B48274;
    }
L_08B48274:
{
    float f14 = hot_regs.f14;
    f14 = hot_regs.f12 / hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((hot_regs.f15 <= f14));
    // nop
    if (!ctx.fpu_condition()) {
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f14 = f14;
        goto L_08B4828C;
    }
    goto L_08B4828C;
}
L_08B4828C:
{
    float f12 = hot_regs.f12;
    f12 = f12 / hot_regs.f13;
    hot_regs.g4 = (16256u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f15 - f12;
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f12 = f12;
        goto L_08B482B0;
    }
    goto L_08B482B0;
}
L_08B482B0:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B482B4;
L_08B482B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B482D4;
      }
      goto L_08B482C8;
    }
}
L_08B482C8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B482DC;
      }
      goto L_08B482D4;
    }
L_08B482D4:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(346), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B482DC;
L_08B482DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g5 = (0u | 1u);
    g4 = (g4 & 15u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B48338;
      }
      goto L_08B4830C;
    }
}
L_08B4830C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48330;
      }
      goto L_08B48314;
    }
L_08B48314:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48330u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48330u) goto L_08B48330;
    return;
L_08B48330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48338;
    }
L_08B48338:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(344))))));
    if (g4 != g4) {
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
        goto L_08B483AC;
    }
    goto L_08B48344;
}
L_08B48344:
    hot_regs.g31 = (0x08B4834Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4834Cu) goto L_08B4834C;
    return;
L_08B4834C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g5 << 3u);
    g7 = (g5 + g7);
    g5 = (g5 + g7);
    g5 = (g6 + g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8))))));
    ctx.gpr[8] = (hot_regs.g2 & 65535u);
    g6 = (g6 & 15u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(g6); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(344))))));
    g5 = (ctx.hi);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (g6 + g5);
    g6 = (g6 + g6);
    g4 = (g4 + g6);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = g4 == g7;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B48344;
      }
      goto L_08B483A8;
    }
}
L_08B483A8:
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08B483AC;
L_08B483AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g8 = (g6 << 3u);
    g8 = (g6 + g8);
    g8 = (g6 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g7 + g5);
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B48404;
      }
      goto L_08B483F8;
    }
}
L_08B483F8:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B4840C;
      }
      goto L_08B48404;
    }
L_08B48404:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08B4840C;
L_08B4840C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (hot_regs.g5 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[10] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g7 = (hot_regs.g6 << 3u);
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    ctx.gpr[10] = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f14)) && hot_regs.f12 == hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
        goto L_08B4852C;
    }
    goto L_08B4851C;
L_08B4851C:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B48540;
      }
      goto L_08B4852C;
    }
L_08B4852C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = f13 / f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    f12 = hot_regs.f14 / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B48540;
}
}
L_08B48540:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(342));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B485E0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B485E0u) goto L_08B485E0;
    return;
L_08B485E0:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    f20 = std::bit_cast<float>(g6);
    { const bool branch_taken = static_cast<std::int32_t>(g6) >= 0;
    f20 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f20)));
    hot_regs.g6 = g6;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08B48604;
      }
      goto L_08B485F8;
    }
}
}
L_08B485F8:
    hot_regs.g6 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    goto L_08B48604;
L_08B48604:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(496)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f12 = hot_regs.f20 - hot_regs.f12;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g31 = (0x08B48630u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 156u, 0x089DCE98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48630u) goto L_08B48630;
    return;
L_08B48630:
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g6 = (hot_regs.g5 << 3u);
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[10] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (hot_regs.g6 << 3u);
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    ctx.gpr[10] = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g7 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (hot_regs.g7 << 3u);
    ctx.gpr[8] = (hot_regs.g7 + ctx.gpr[8]);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
    ctx.gpr[10] = (hot_regs.g6 + hot_regs.g7);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(520)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f14;
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g7 = (hot_regs.g6 << 3u);
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    ctx.gpr[10] = (hot_regs.g5 + hot_regs.g6);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(504)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (20078u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 27432u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B488A4;
      }
      goto L_08B48850;
    }
L_08B48850:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(604));
    hot_regs.g31 = (0x08B48868u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48868u) goto L_08B48868;
    return;
L_08B48868:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4889C;
      }
      goto L_08B48870;
    }
L_08B48870:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48894;
      }
      goto L_08B48878;
    }
L_08B48878:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48894u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48894u) goto L_08B48894;
    return;
L_08B48894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B4889C;
    }
L_08B4889C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(604)));
      if (branch_taken) {
          goto L_08B489C8;
      }
      goto L_08B488A4;
    }
L_08B488A4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (16320u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (17530u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g31 = (0x08B488FCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B488FCu) goto L_08B488FC;
    return;
L_08B488FC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48918;
      }
      goto L_08B48904;
    }
L_08B48904:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    hot_regs.g31 = (0x08B48914u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48914u) goto L_08B48914;
    return;
L_08B48914:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B48918;
L_08B48918:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    hot_regs.g2 = (50298u << 16u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(224));
    hot_regs.g7 = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x08B48950u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 287u, 0x08891DD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48950u) goto L_08B48950;
    return;
L_08B48950:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B489B8;
      }
      goto L_08B48958;
    }
L_08B48958:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    f12 = f12 - hot_regs.f14;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B48978;
    }
    goto L_08B48978;
}
L_08B48978:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f14 = std::bit_cast<float>(0u);
    f13 = hot_regs.f20 - f13;
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_08B48994;
    }
    goto L_08B48994;
}
L_08B48994:
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B489B8;
      }
      goto L_08B489A4;
    }
L_08B489A4:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    hot_regs.g31 = (0x08B489B4u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B489B4u) goto L_08B489B4;
    return;
L_08B489B4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B489B8;
L_08B489B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(608));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = g4;
    goto L_08B489C8;
}
L_08B489C8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (20078u << 16u);
    g4 = (g4 | 27432u);
    f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f20) || std::isnan(f12)) && hot_regs.f20 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B48A18;
      }
      goto L_08B489E4;
    }
}
}
L_08B489E4:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B48A00;
    }
    goto L_08B48A00;
}
L_08B48A00:
    hot_regs.g4 = (16608u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B48A44;
      }
      goto L_08B48A18;
    }
L_08B48A18:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48A3C;
      }
      goto L_08B48A20;
    }
L_08B48A20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48A3Cu);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48A3Cu) goto L_08B48A3C;
    return;
L_08B48A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48A44;
    }
L_08B48A44:
    hot_regs.g31 = (0x08B48A4Cu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 168u, 0x08AECA18u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48A4Cu) goto L_08B48A4C;
    return;
L_08B48A4C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48A68;
      }
      goto L_08B48A54;
    }
L_08B48A54:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B48A88;
      }
      goto L_08B48A68;
    }
}
L_08B48A68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08B48A80u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48A80u) goto L_08B48A80;
    return;
L_08B48A80:
    hot_regs.f12 = hot_regs.f20 + ctx.fpr[0];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B48A88;
L_08B48A88:
{
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
      if (branch_taken) {
          goto L_08B48AB0;
      }
      goto L_08B48AA4;
    }
}
L_08B48AA4:
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    hot_regs.g31 = (0x08B48AB0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 203u, 0x08AD0EC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48AB0u) goto L_08B48AB0;
    return;
L_08B48AB0:
    ctx.gpr[17] = (ctx.gpr[22] + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(342));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B48ACCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 147u, 0x089DCD44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48ACCu) goto L_08B48ACC;
    return;
L_08B48ACC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(g6);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = static_cast<std::int32_t>(g6) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B48AF0;
      }
      goto L_08B48AE4;
    }
}
}
L_08B48AE4:
    hot_regs.g6 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_08B48AF0;
L_08B48AF0:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(496)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(500)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08B48B20u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 156u, 0x089DCE98u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48B20u) goto L_08B48B20;
    return;
L_08B48B20:
    hot_regs.g4 = (17008u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B48B5Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48B5Cu) goto L_08B48B5C;
    return;
L_08B48B5C:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(496));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 23 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 24 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B48BE0;
      }
      goto L_08B48BCC;
    }
L_08B48BCC:
    hot_regs.g5 = (0u | 13u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B48BF0;
      }
      goto L_08B48BD8;
    }
L_08B48BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48C64;
      }
      goto L_08B48BE0;
    }
L_08B48BE0:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 25 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B48C40;
      }
      goto L_08B48BE8;
    }
L_08B48BE8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48C64;
      }
      goto L_08B48BF0;
    }
L_08B48BF0:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B48C18;
      }
      goto L_08B48C00;
    }
L_08B48C00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B48C2C;
      }
      goto L_08B48C18;
    }
}
L_08B48C18:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    goto L_08B48C2C;
}
L_08B48C2C:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B48C38u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48C38u) goto L_08B48C38;
    return;
L_08B48C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C40;
    }
L_08B48C40:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B48C4Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 450u, 0x08B01B4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48C4Cu) goto L_08B48C4C;
    return;
L_08B48C4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C64;
    }
}
L_08B48C64:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48C84;
      }
      goto L_08B48C6C;
    }
L_08B48C6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 48u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B48C98;
      }
      goto L_08B48C84;
    }
}
L_08B48C84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 32u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    goto L_08B48C98;
}
L_08B48C98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x08B48CA4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48CA4u) goto L_08B48CA4;
    return;
L_08B48CA4:
    hot_regs.g31 = (0x08B48CACu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 50u, 0x08AD0530u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48CACu) goto L_08B48CAC;
    return;
L_08B48CAC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48E50;
      }
      goto L_08B48CB4;
    }
L_08B48CB4:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1952)));
    hot_regs.g4 = (17184u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    hot_regs.g4 = (hot_regs.g4 & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
      if (branch_taken) {
          goto L_08B48D14;
      }
      goto L_08B48D08;
    }
L_08B48D08:
    hot_regs.g4 = (16320u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08B48D1C;
      }
      goto L_08B48D14;
    }
L_08B48D14:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    goto L_08B48D1C;
L_08B48D1C:
{
    float f13 = hot_regs.f13;
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (2236u << 16u);
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B48D54;
      }
      goto L_08B48D30;
    }
}
L_08B48D30:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(32304));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1952)));
    g4 = (17096u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B48D80;
      }
      goto L_08B48D54;
    }
}
}
L_08B48D54:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48D78;
      }
      goto L_08B48D5C;
    }
L_08B48D5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48D78u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48D78u) goto L_08B48D78;
    return;
L_08B48D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48D80;
    }
L_08B48D80:
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
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(640));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1952)));
    hot_regs.g4 = (17061u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B48DE0;
      }
      goto L_08B48DD8;
    }
L_08B48DD8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48E0C;
      }
      goto L_08B48DE0;
    }
L_08B48DE0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48E04;
      }
      goto L_08B48DE8;
    }
L_08B48DE8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48E04u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48E04u) goto L_08B48E04;
    return;
L_08B48E04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48E0C;
    }
L_08B48E0C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 248u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B48E48;
      }
      goto L_08B48E1C;
    }
L_08B48E1C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48E40;
      }
      goto L_08B48E24;
    }
L_08B48E24:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48E40u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48E40u) goto L_08B48E40;
    return;
L_08B48E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48E48;
    }
L_08B48E48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48E50;
    }
L_08B48E50:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
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
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(614))))));
    hot_regs.g4 = (hot_regs.g4 & 128u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (17008u << 16u);
      if (branch_taken) {
          goto L_08B48E9C;
      }
      goto L_08B48E90;
    }
L_08B48E90:
    hot_regs.g4 = (17076u << 16u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08B48EA0;
      }
      goto L_08B48E9C;
    }
L_08B48E9C:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    goto L_08B48EA0;
L_08B48EA0:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48EB0;
    }
L_08B48EB0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B48EE4;
      }
      goto L_08B48EB8;
    }
L_08B48EB8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48EDC;
      }
      goto L_08B48EC0;
    }
L_08B48EC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48EDCu);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48EDCu) goto L_08B48EDC;
    return;
L_08B48EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48EE4;
    }
L_08B48EE4:
    if (ctx.gpr[18] == 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
        goto L_08B48F78;
    }
    goto L_08B48EEC;
L_08B48EEC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(386));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (16800u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.g7 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g31 = (0x08B48F40u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48F40u) goto L_08B48F40;
    return;
L_08B48F40:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(386))))));
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_08B48F78;
    }
    goto L_08B48F4C;
}
L_08B48F4C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B48F70;
      }
      goto L_08B48F54;
    }
L_08B48F54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B48F70u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48F70u) goto L_08B48F70;
    return;
L_08B48F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B48F78;
    }
L_08B48F78:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(386));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g7 = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 1u);
    hot_regs.g31 = (0x08B48FBCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 365u, 0x0889A004u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B48FBCu) goto L_08B48FBC;
    return;
L_08B48FBC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(386))))));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B494C0;
      }
      goto L_08B48FC8;
    }
L_08B48FC8:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(0u);
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < ctx.fpr[16]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B494C0;
      }
      goto L_08B48FF8;
    }
}
}
L_08B48FF8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4901C;
      }
      goto L_08B4900C;
    }
}
L_08B4900C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B4901C;
}
L_08B4901C:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(548));
    hot_regs.g31 = (0x08B4902Cu);
    hot_regs.g6 = (ctx.gpr[22] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 480u, 0x08AA1FE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4902Cu) goto L_08B4902C;
    return;
L_08B4902C:
    hot_regs.g31 = (0x08B49034u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49034u) goto L_08B49034;
    return;
L_08B49034:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 13u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49064;
      }
      goto L_08B49044;
    }
L_08B49044:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 24u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49064;
      }
      goto L_08B49054;
    }
L_08B49054:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 23u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49074;
      }
      goto L_08B49064;
    }
L_08B49064:
    hot_regs.g31 = (0x08B4906Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 466u, 0x08B0DF10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4906Cu) goto L_08B4906C;
    return;
L_08B4906C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49074;
    }
L_08B49074:
    hot_regs.g31 = (0x08B4907Cu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4907Cu) goto L_08B4907C;
    return;
L_08B4907C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49088;
    }
L_08B49088:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08B490E8;
      }
      goto L_08B4909C;
    }
L_08B4909C:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x08B490ACu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B490ACu) goto L_08B490AC;
    return;
L_08B490AC:
{
    float f12 = hot_regs.f12;
    f12 = hot_regs.f22 - hot_regs.f20;
    hot_regs.g5 = (15872u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = (0u | 0u);
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (0u | 1u);
    hot_regs.f12 = f12;
        goto L_08B490D4;
    }
    goto L_08B490D4;
}
L_08B490D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (ctx.gpr[17] + g4);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08B4909C;
      }
      goto L_08B490E8;
    }
}
L_08B490E8:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x08B490F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B490F4u) goto L_08B490F4;
    return;
L_08B490F4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B49174;
      }
      goto L_08B490FC;
    }
L_08B490FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_08B49114;
    }
    goto L_08B49108;
}
L_08B49108:
    hot_regs.g31 = (0x08B49110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49110u) goto L_08B49110;
    return;
L_08B49110:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_08B49114;
L_08B49114:
    hot_regs.g31 = (0x08B4911Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(5544));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 690u, 0x0893ED4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4911Cu) goto L_08B4911C;
    return;
L_08B4911C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B49140;
      }
      goto L_08B49130;
    }
}
L_08B49130:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    g4 = (g4 + hot_regs.g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08B49140;
}
L_08B49140:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(72));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08B49158u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49158u) goto L_08B49158;
    return;
L_08B49158:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B49174;
      }
      goto L_08B49160;
    }
L_08B49160:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
        goto L_08B49170;
    }
    goto L_08B49170;
}
L_08B49170:
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    goto L_08B49174;
L_08B49174:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    hot_regs.g5 = (0u | 9u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49188;
      }
      goto L_08B49184;
    }
L_08B49184:
    ctx.gpr[17] = (0u | 0u);
    goto L_08B49188;
L_08B49188:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B491F4;
      }
      goto L_08B49198;
    }
L_08B49198:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B491A4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 120u, 0x08B007DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B491A4u) goto L_08B491A4;
    return;
L_08B491A4:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B491B0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B491B0u) goto L_08B491B0;
    return;
L_08B491B0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B491E4;
      }
      goto L_08B491B8;
    }
L_08B491B8:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B491C4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B491C4u) goto L_08B491C4;
    return;
L_08B491C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(464));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (4u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8872)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8872), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B491E4;
}
L_08B491E4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B49198;
      }
      goto L_08B491F4;
    }
}
L_08B491F4:
    hot_regs.g31 = (0x08B491FCu);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B491FCu) goto L_08B491FC;
    return;
L_08B491FC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (hot_regs.g2 | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (0u | 4u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B49220;
      }
      goto L_08B4920C;
    }
}
L_08B4920C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49230;
      }
      goto L_08B49218;
    }
}
L_08B49218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 20u);
      if (branch_taken) {
          goto L_08B49234;
      }
      goto L_08B49220;
    }
L_08B49220:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49230;
      }
      goto L_08B49228;
    }
L_08B49228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 40u);
      if (branch_taken) {
          goto L_08B49234;
      }
      goto L_08B49230;
    }
L_08B49230:
    ctx.gpr[16] = (0u | 3u);
    goto L_08B49234;
L_08B49234:
    hot_regs.g31 = (0x08B4923Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4923Cu) goto L_08B4923C;
    return;
L_08B4923C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 127u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
        goto L_08B49260;
    }
    goto L_08B49250;
}
L_08B49250:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(5480)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4928C;
      }
      goto L_08B4925C;
    }
L_08B4925C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(72)));
    goto L_08B49260;
L_08B49260:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g22 + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(72), g4);
    g4 = (0u | 2u);
    g5 = (g5 + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    g4 = (g5 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B4928C;
}
L_08B4928C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 13u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B492AC;
      }
      goto L_08B4929C;
    }
L_08B4929C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 24u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B492B4;
      }
      goto L_08B492AC;
    }
L_08B492AC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5496), hot_regs.g4);
    goto L_08B492B4;
L_08B492B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B492E0;
      }
      goto L_08B492C4;
    }
L_08B492C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 48u);
    aot_mem.aot_store32(g22 + static_cast<std::uint32_t>(72), g4);
    g4 = (0u | 2u);
    aot_mem.aot_store8(g22 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B492E0;
}
L_08B492E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 13u);
    if (g4 == hot_regs.g5) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = g4;
        goto L_08B49304;
    }
    goto L_08B492F0;
}
L_08B492F0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (0u | 24u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B49300;
    }
L_08B49300:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    goto L_08B49304;
L_08B49304:
    hot_regs.g5 = (0u | 204u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B49310;
    }
L_08B49310:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    hot_regs.g5 = (0u | 184u);
    hot_regs.g6 = (0u | 184u);
    hot_regs.g7 = (0u | 184u);
    hot_regs.g31 = (0x08B49328u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49328u) goto L_08B49328;
    return;
L_08B49328:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(684));
    hot_regs.g5 = (0u | 28u);
    hot_regs.g6 = (0u | 41u);
    hot_regs.g7 = (0u | 72u);
    hot_regs.g31 = (0x08B49340u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49340u) goto L_08B49340;
    return;
L_08B49340:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    hot_regs.g5 = (0u | 28u);
    hot_regs.g6 = (0u | 55u);
    hot_regs.g7 = (0u | 111u);
    hot_regs.g31 = (0x08B49358u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49358u) goto L_08B49358;
    return;
L_08B49358:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(692));
    hot_regs.g5 = (0u | 138u);
    hot_regs.g6 = (0u | 58u);
    hot_regs.g7 = (0u | 66u);
    hot_regs.g31 = (0x08B49370u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49370u) goto L_08B49370;
    return;
L_08B49370:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(696));
    hot_regs.g5 = (0u | 36u);
    hot_regs.g6 = (0u | 47u);
    hot_regs.g7 = (0u | 43u);
    hot_regs.g31 = (0x08B49388u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49388u) goto L_08B49388;
    return;
L_08B49388:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5472)));
    g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(g4) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B493B0;
      }
      goto L_08B49398;
    }
}
L_08B49398:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B493A0;
    }
L_08B493A0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) <= 0;
    // nop
      if (branch_taken) {
          goto L_08B493C8;
      }
      goto L_08B493A8;
    }
L_08B493A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B49404;
      }
      goto L_08B493B0;
    }
L_08B493B0:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B49440;
      }
      goto L_08B493B8;
    }
L_08B493B8:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4947C;
      }
      goto L_08B493C0;
    }
L_08B493C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B493C8;
    }
L_08B493C8:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B493EC;
      }
      goto L_08B493DC;
    }
}
L_08B493DC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B493EC;
}
L_08B493EC:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(688));
    hot_regs.g31 = (0x08B493FCu);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B493FCu) goto L_08B493FC;
    return;
L_08B493FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B49404;
    }
L_08B49404:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B49428;
      }
      goto L_08B49418;
    }
}
L_08B49418:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B49428;
}
L_08B49428:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(692));
    hot_regs.g31 = (0x08B49438u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49438u) goto L_08B49438;
    return;
L_08B49438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B49440;
    }
L_08B49440:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B49464;
      }
      goto L_08B49454;
    }
}
L_08B49454:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B49464;
}
L_08B49464:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(696));
    hot_regs.g31 = (0x08B49474u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49474u) goto L_08B49474;
    return;
L_08B49474:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B4947C;
    }
L_08B4947C:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B494A0;
      }
      goto L_08B49490;
    }
}
L_08B49490:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08B494A0;
}
L_08B494A0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(684));
    hot_regs.g31 = (0x08B494B0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(680));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 434u, 0x08AA1BA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B494B0u) goto L_08B494B0;
    return;
L_08B494B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494B8;
      }
      goto L_08B494B8;
    }
L_08B494B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494EC;
      }
      goto L_08B494C0;
    }
L_08B494C0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B494E4;
      }
      goto L_08B494C8;
    }
L_08B494C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08B494E4u);
    hot_regs.g4 = (ctx.gpr[22] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B494E4u) goto L_08B494E4;
    return;
L_08B494E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B494EC;
    }
L_08B494EC:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g31 = (0x08B494FCu);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B494FCu) goto L_08B494FC;
    return;
L_08B494FC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = hot_regs.f22 - hot_regs.f20;
    g4 = (16254u << 16u);
    g4 = (g4 | 47186u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f20 + f12;
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49524;
    }
}
}
L_08B49524:
    hot_regs.g31 = (0x08B4952Cu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(86))))));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 181u, 0x08AECAA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4952Cu) goto L_08B4952C;
    return;
L_08B4952C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49534;
    }
L_08B49534:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49544;
    }
}
L_08B49544:
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (16576u << 16u);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(704));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(720));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08B49588u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 762u, 0x089C7468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49588u) goto L_08B49588;
    return;
L_08B49588:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49590;
    }
L_08B49590:
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B495ACu);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B495ACu) goto L_08B495AC;
    return;
L_08B495AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49634;
      }
      goto L_08B495C0;
    }
}
L_08B495C0:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B495CCu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B495CCu) goto L_08B495CC;
    return;
L_08B495CC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B49620;
      }
      goto L_08B495D8;
    }
L_08B495D8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 16u);
    hot_regs.g31 = (0x08B495E8u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B495E8u) goto L_08B495E8;
    return;
L_08B495E8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08B495F4u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B495F4u) goto L_08B495F4;
    return;
L_08B495F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(1336), ctx.gpr[22]);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(464)));
    hot_regs.g5 = (16384u << 16u);
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(464), g4);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49620;
      }
      goto L_08B49614;
    }
}
L_08B49614:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    hot_regs.g31 = (0x08B49620u);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1336));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49620u) goto L_08B49620;
    return;
L_08B49620:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(565)));
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B495C0;
      }
      goto L_08B49634;
    }
}
L_08B49634:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B49640;
    }
L_08B49640:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 16u);
    hot_regs.g31 = (0x08B49650u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49650u) goto L_08B49650;
    return;
L_08B49650:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x08B4965Cu);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4965Cu) goto L_08B4965C;
    return;
L_08B4965C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(900)));
    g5 = (16384u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(1336), g22);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(900)));
    g4 = (g4 + static_cast<std::uint32_t>(464));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (hot_regs.g6 | g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g4 = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(900)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4969C;
      }
      goto L_08B4968C;
    }
}
L_08B4968C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1336)));
    hot_regs.g31 = (0x08B4969Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1336));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 419u, 0x08A92F78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4969Cu) goto L_08B4969C;
    return;
L_08B4969C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496A8;
    }
L_08B496A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B496D8;
      }
      goto L_08B496B4;
    }
L_08B496B4:
    hot_regs.g31 = (0x08B496BCu);
    hot_regs.g4 = (0u | 408u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B496BCu) goto L_08B496BC;
    return;
L_08B496BC:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496C8;
    }
L_08B496C8:
    hot_regs.g31 = (0x08B496D0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 655u, 0x089F75BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B496D0u) goto L_08B496D0;
    return;
L_08B496D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496D8;
    }
L_08B496D8:
    hot_regs.g31 = (0x08B496E0u);
    hot_regs.g4 = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B496E0u) goto L_08B496E0;
    return;
L_08B496E0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B496F4;
      }
      goto L_08B496EC;
    }
L_08B496EC:
    hot_regs.g31 = (0x08B496F4u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 120u, 0x08AA4C80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B496F4u) goto L_08B496F4;
    return;
L_08B496F4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1088)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1092)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1096)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1100)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1104)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1108)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1112)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1116)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1120)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1124)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1128)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1132)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(1136)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(1152));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B49730:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g16);
    g16 = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(532))))));
    g5 = (0u | 2u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 3u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B497E8;
      }
      goto L_08B49780;
    }
}
L_08B49780:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08B497E8;
      }
      goto L_08B49788;
    }
L_08B49788:
{
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f22 = hot_regs.f22;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (16768u << 16u);
    f22 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    f26 = std::bit_cast<float>(g5);
    g5 = (17056u << 16u);
    hot_regs.f20 = f22 - f26;
    hot_regs.f12 = std::bit_cast<float>(g5);
    f15 = hot_regs.f20 / hot_regs.f12;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (16880u << 16u);
    g4 = (16840u << 16u);
    hot_regs.g7 = (0u | 49u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f22 = f22 + f26;
    ctx.fpr[24] = f14 - f26;
    f26 = f14 + f26;
    f15 = f15 + hot_regs.f13;
    f14 = std::bit_cast<float>(g4);
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f22 = f22;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_08B49800;
      }
      goto L_08B497E0;
    }
}
}
L_08B497E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B49808;
      }
      goto L_08B497E8;
    }
L_08B497E8:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    f0 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f12; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B49AE4;
      }
      goto L_08B49800;
    }
}
L_08B49800:
    hot_regs.g4 = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    goto L_08B49808;
L_08B49808:
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08B49810;
    }
    goto L_08B49810;
L_08B49810:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
        goto L_08B49824;
    }
    goto L_08B49824;
}
L_08B49824:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f15 = ctx.fpr[24] / hot_regs.f12;
    g6 = (0u | 49u);
    f15 = f15 + hot_regs.f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
        goto L_08B49844;
    }
    goto L_08B49844;
}
}
L_08B49844:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08B49850;
    }
    goto L_08B49850;
L_08B49850:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    hot_regs.g6 = g6;
        goto L_08B49864;
    }
    goto L_08B49864;
}
L_08B49864:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f15 = hot_regs.f22 / hot_regs.f12;
    g6 = (0u | 49u);
    f13 = hot_regs.f15 + f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
        goto L_08B49884;
    }
    goto L_08B49884;
}
}
L_08B49884:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08B49890;
    }
    goto L_08B49890;
L_08B49890:
    ctx.gpr[18] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08B498A0;
    }
    goto L_08B498A0;
L_08B498A0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f12 = ctx.fpr[26] / f12;
    g6 = (0u | 49u);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08B498C0;
    }
    goto L_08B498C0;
}
}
L_08B498C0:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_08B498CC;
    }
    goto L_08B498CC;
L_08B498CC:
    ctx.gpr[19] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_08B498DC;
    }
    goto L_08B498DC;
L_08B498DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49908;
      }
      goto L_08B498EC;
    }
}
L_08B498EC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B4992C;
      }
      goto L_08B49908;
    }
}
}
L_08B49908:
    hot_regs.g31 = (0x08B49910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49910u) goto L_08B49910;
    return;
L_08B49910:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B4992C;
}
}
L_08B4992C:
    ctx.gpr[20] = (ctx.gpr[22] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08B49A98;
      }
      goto L_08B4993C;
    }
L_08B4993C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (g22 << 4u);
    g22 = (g22 + g4);
    g4 = (g4 + g22);
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(24));
    g22 = (g4 + g22);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_08B49950;
}
L_08B49950:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[17] + ctx.gpr[22]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49A88;
      }
      goto L_08B49960;
    }
}
L_08B49960:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g4 << 6u);
    g4 = (g4 << 3u);
    g23 = (g23 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_08B4996C;
}
L_08B4996C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[22]);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    ctx.gpr[22] = (hot_regs.g5 + ctx.gpr[23]);
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(28));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    { const float fs = hot_regs.f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B499ACu);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B499ACu) goto L_08B499AC;
    return;
L_08B499AC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B499E0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B499E0u) goto L_08B499E0;
    return;
L_08B499E0:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08B49A0Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 610u, 0x08B42854u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49A0Cu) goto L_08B49A0C;
    return;
L_08B49A0C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(524)));
    f12 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (g16 | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    { const float fs = f15; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08B49A40u);
    f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_08B49B24;
}
}
L_08B49A40:
{
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(524)));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    f13 = std::bit_cast<float>(g5);
    hot_regs.g4 = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g5 = (g16 | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g31 = (0x08B49A74u);
    { const float fs = ctx.fpr[17]; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
    goto L_08B49B24;
}
}
L_08B49A74:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_08B4996C;
      }
      goto L_08B49A88;
    }
}
L_08B49A88:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(50));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_08B49950;
      }
      goto L_08B49A98;
    }
}
L_08B49A98:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(614))))));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(532))))));
    g5 = (g5 | 32u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(614), static_cast<std::uint8_t>(g5));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B49ABC;
      }
      goto L_08B49AB0;
    }
}
L_08B49AB0:
    hot_regs.g5 = (0u | 4u);
    if (hot_regs.g4 != hot_regs.g5) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(535))))));
        goto L_08B49AC4;
    }
    goto L_08B49ABC;
L_08B49ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B49AE4;
      }
      goto L_08B49AC4;
    }
L_08B49AC4:
{
    float f0 = ctx.fpr[0];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f0 = f0 + f12;
    { const float fs = f0; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f0 = std::bit_cast<float>(0x7FC00000u); else f0 = fs * ft; }
    hot_regs.g4 = g4;
    ctx.fpr[0] = f0;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_08B49AE4;
}
}
L_08B49AE4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
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
L_08B49B24:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-208));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g7 = (g7 << 2u);
    g7 = (ctx.gpr[8] + g7);
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), g19);
    g19 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), hot_regs.g31);
    { const bool branch_taken = g19 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B4A284;
      }
      goto L_08B49BAC;
    }
}
L_08B49BAC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(320));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    hot_regs.g5 = (16448u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), g4);
    f12 = ctx.fpr[28] + f12;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    ctx.gpr[20] = (g18 + static_cast<std::uint32_t>(48));
    g4 = (16672u << 16u);
    ctx.gpr[30] = (g18 + static_cast<std::uint32_t>(16));
    ctx.fpr[30] = std::bit_cast<float>(g4);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08B49BEC;
}
}
L_08B49BEC:
{
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[17] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C00;
    }
}
L_08B49C00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C18;
    }
}
L_08B49C18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(g4));
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C48;
    }
}
L_08B49C48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(124)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C60;
    }
L_08B49C60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C78;
    }
L_08B49C78:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49C90;
    }
L_08B49C90:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B49CAC;
    }
    goto L_08B49CAC;
}
L_08B49CAC:
    hot_regs.g5 = (16512u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49CC4;
    }
L_08B49CC4:
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((ctx.fpr[28] < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16968u << 16u);
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49D1C;
    }
L_08B49D1C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    ctx.fpr[24] = hot_regs.f22 - ctx.fpr[28];
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49D3C;
    }
}
L_08B49D3C:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13) ^ 0x80000000u);
        goto L_08B49D60;
    }
    goto L_08B49D60;
L_08B49D60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    g4 = (g4 + static_cast<std::uint32_t>(32));
    { const bool branch_taken = g5 != ctx.gpr[23];
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B49D98;
      }
      goto L_08B49D88;
    }
}
L_08B49D88:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16332u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    { const float fs = f14; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.g4 = g4;
    hot_regs.f14 = f14;
    goto L_08B49D98;
}
}
L_08B49D98:
{
    float f16 = ctx.fpr[16];
    hot_regs.g4 = (16128u << 16u);
    f16 = std::bit_cast<float>(hot_regs.g4);
    f16 = hot_regs.f14 + f16;
    ctx.set_fpu_condition((hot_regs.f13 <= f16));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B49DB4;
    }
}
L_08B49DB4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A1B8;
      }
      goto L_08B49DD0;
    }
}
L_08B49DD0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 31u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49DE4;
    }
L_08B49DE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 48u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49DF4;
    }
L_08B49DF4:
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B49F58;
      }
      goto L_08B49E04;
    }
L_08B49E04:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-943));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B49E8C;
      }
      goto L_08B49E14;
    }
L_08B49E14:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    hot_regs.g31 = (0x08B49E20u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E20u) goto L_08B49E20;
    return;
L_08B49E20:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08B49E30u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 341u, 0x08B61B60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E30u) goto L_08B49E30;
    return;
L_08B49E30:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5564)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5560)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08B49E44u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E44u) goto L_08B49E44;
    return;
L_08B49E44:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5572)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5568)));
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08B49E58u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 400u, 0x08B61FD0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E58u) goto L_08B49E58;
    return;
L_08B49E58:
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x08B49E6Cu);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 478u, 0x08B6256Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E6Cu) goto L_08B49E6C;
    return;
L_08B49E6C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49E74;
    }
L_08B49E74:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B49E84u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49E84u) goto L_08B49E84;
    return;
L_08B49E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49E8C;
    }
L_08B49E8C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16025u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B49EEC;
      }
      goto L_08B49EA8;
    }
}
L_08B49EA8:
    hot_regs.f12 = hot_regs.f14 + hot_regs.f15;
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B49ED4;
      }
      goto L_08B49EBC;
    }
L_08B49EBC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B49ECCu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49ECCu) goto L_08B49ECC;
    return;
L_08B49ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49ED4;
    }
L_08B49ED4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B49EE4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49EE4u) goto L_08B49EE4;
    return;
L_08B49EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49EEC;
    }
L_08B49EEC:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49EFC;
    }
L_08B49EFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F0C;
    }
L_08B49F0C:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (48896u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = hot_regs.f14 + f12;
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B49F40;
      }
      goto L_08B49F28;
    }
}
L_08B49F28:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B49F38u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 550u, 0x0891ECB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49F38u) goto L_08B49F38;
    return;
L_08B49F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F40;
    }
L_08B49F40:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B49F50u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 480u, 0x0891E8B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49F50u) goto L_08B49F50;
    return;
L_08B49F50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B49F58;
    }
L_08B49F58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F68;
    }
}
L_08B49F68:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 9u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F78;
    }
L_08B49F78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2276)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B4A064;
      }
      goto L_08B49F84;
    }
L_08B49F84:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x08B49FA4u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49FA4u) goto L_08B49FA4;
    return;
L_08B49FA4:
    hot_regs.g31 = (0x08B49FACu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49FACu) goto L_08B49FAC;
    return;
L_08B49FAC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    hot_regs.g31 = (0x08B49FB8u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B49FB8u) goto L_08B49FB8;
    return;
L_08B49FB8:
{
    float f12 = hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2256)));
    f12 = hot_regs.f20 - f12;
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B49FD4;
    }
    goto L_08B49FD4;
}
L_08B49FD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A004;
      }
      goto L_08B49FF4;
    }
}
L_08B49FF4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    f13 = std::bit_cast<float>(g4);
    f13 = f13 - hot_regs.f12;
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
    goto L_08B4A004;
}
}
L_08B4A004:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A02C;
      }
      goto L_08B4A020;
    }
}
L_08B4A020:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(700)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A05C;
      }
      goto L_08B4A02C;
    }
L_08B4A02C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08B4A03Cu);
    hot_regs.g6 = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 803u, 0x0890B27Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A03Cu) goto L_08B4A03C;
    return;
L_08B4A03C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    hot_regs.g5 = (49152u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(456), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B4A05Cu);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A05Cu) goto L_08B4A05C;
    return;
L_08B4A05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A064;
    }
L_08B4A064:
    hot_regs.g31 = (0x08B4A06Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A06Cu) goto L_08B4A06C;
    return;
L_08B4A06C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A074;
    }
L_08B4A074:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A088;
    }
L_08B4A088:
    hot_regs.g31 = (0x08B4A090u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 620u, 0x08906DE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A090u) goto L_08B4A090;
    return;
L_08B4A090:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A098;
    }
L_08B4A098:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3156)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0B4;
    }
L_08B4A0B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(456)));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0C4;
    }
}
L_08B4A0C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1736)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A0D8;
    }
}
L_08B4A0D8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B4A0E4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 668u, 0x0894751Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A0E4u) goto L_08B4A0E4;
    return;
L_08B4A0E4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x08B4A0FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 442u, 0x08909A64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A0FCu) goto L_08B4A0FC;
    return;
L_08B4A0FC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08B4A108u);
    hot_regs.g5 = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 326u, 0x089092DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A108u) goto L_08B4A108;
    return;
L_08B4A108:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A12C;
    }
}
L_08B4A12C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    hot_regs.g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 - g4);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == ctx.gpr[23];
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A150;
    }
}
L_08B4A150:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 19u);
    { const bool branch_taken = g4 == g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4A1A0;
      }
      goto L_08B4A178;
    }
}
L_08B4A178:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1929))))));
    g5 = (g4 << 5u);
    g4 = (g4 << 2u);
    g4 = (g5 - g4);
    g4 = (ctx.gpr[17] + g4);
    g4 = (g4 + static_cast<std::uint32_t>(1396));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 25u);
    { const bool branch_taken = g4 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4A1AC;
      }
      goto L_08B4A1A0;
    }
}
L_08B4A1A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(464)));
    g4 = (g4 | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(464), g4);
    hot_regs.g4 = g4;
    goto L_08B4A1AC;
}
L_08B4A1AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15820u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f15 = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_08B4A1B8;
}
L_08B4A1B8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08B4A1CC;
      }
      goto L_08B4A1C4;
    }
L_08B4A1C4:
    hot_regs.g4 = (16752u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    goto L_08B4A1CC;
L_08B4A1CC:
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A1DC;
    }
L_08B4A1DC:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A204;
      }
      goto L_08B4A1E8;
    }
L_08B4A1E8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08B4A204;
      }
      goto L_08B4A1F8;
    }
L_08B4A1F8:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(532))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A204;
    }
L_08B4A204:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = ctx.fpr[24] - f12;
    ctx.set_fpu_condition((ctx.fpr[26] <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.f12 = f12;
        goto L_08B4A220;
    }
    goto L_08B4A220;
}
L_08B4A220:
{
    float f12 = hot_regs.f12;
    f12 = f12 / ctx.fpr[30];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = f12;
        goto L_08B4A240;
    }
    goto L_08B4A240;
}
L_08B4A240:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(538))))));
    g4 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g6 = (16384u << 16u);
    g4 = (hot_regs.g5 & g4);
    f12 = std::bit_cast<float>(hot_regs.g6);
    g4 = (g4 | 2u);
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4A27C;
      }
      goto L_08B4A26C;
    }
}
}
L_08B4A26C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(ctx.gpr[22]));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B4A27C;
}
L_08B4A27C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08B49BEC;
      }
      goto L_08B4A284;
    }
L_08B4A284:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4A2CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f22 = hot_regs.f22;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    f12 = f15 + f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    f12 = std::sqrt(f12);
    f22 = std::bit_cast<float>(0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (g5 | 0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f22)) && f12 == f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08B4A358;
      }
      goto L_08B4A33C;
    }
}
}
L_08B4A33C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f13 = f13 / f12;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f12 = hot_regs.f14 / f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08B4A364;
      }
      goto L_08B4A358;
    }
}
}
L_08B4A358:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B4A364;
L_08B4A364:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    f12 = f12 - hot_regs.f13;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    f14 = f14 - hot_regs.f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f14; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08B4A438;
      }
      goto L_08B4A3A8;
    }
}
}
L_08B4A3A8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f22 = hot_regs.f22;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f22));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(320)));
    hot_regs.g4 = (17008u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f24; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f24 = std::bit_cast<float>(0x7FC00000u); else f24 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(324)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    { const float fs = f14; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f22));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f15 = f15 + f16;
    f15 = std::sqrt(f15);
    ctx.set_fpu_condition((!(std::isnan(f15) || std::isnan(f22)) && f15 == f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_08B4A440;
      }
      goto L_08B4A41C;
    }
}
}
L_08B4A41C:
{
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g29 = hot_regs.g29;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    f16 = f16 / f15;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    f15 = ctx.fpr[17] / f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f16));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f15));
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_08B4A44C;
      }
      goto L_08B4A438;
    }
}
}
L_08B4A438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A440;
    }
L_08B4A440:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f15));
    goto L_08B4A44C;
L_08B4A44C:
    ctx.fpr[26] = ctx.fpr[24] - hot_regs.f13;
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.fpr[28] = hot_regs.f12 - hot_regs.f14;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08B4A478u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    goto L_08B4A6AC;
L_08B4A478:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]) ^ 0x80000000u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08B4A49Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08B4A6AC;
L_08B4A49C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = f12;
        goto L_08B4A4B0;
    }
    goto L_08B4A4B0;
}
L_08B4A4B0:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.g4 = (16320u << 16u);
      if (branch_taken) {
          goto L_08B4A534;
      }
      goto L_08B4A4C4;
    }
L_08B4A4C4:
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (15948u << 16u);
      if (branch_taken) {
          goto L_08B4A534;
      }
      goto L_08B4A4D8;
    }
L_08B4A4D8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(g4);
    f13 = hot_regs.f12 - f13;
    g4 = (16196u << 16u);
    g4 = (g4 | 60495u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f22 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
        goto L_08B4A504;
    }
    goto L_08B4A504;
}
}
L_08B4A504:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(538))))));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((hot_regs.f14 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08B4A530;
    }
    goto L_08B4A530;
}
}
L_08B4A530:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08B4A534;
L_08B4A534:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A558;
      }
      goto L_08B4A540;
    }
L_08B4A540:
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16128u << 16u);
      if (branch_taken) {
          goto L_08B4A560;
      }
      goto L_08B4A550;
    }
L_08B4A550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A558;
    }
L_08B4A558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A560;
    }
L_08B4A560:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A574;
    }
L_08B4A574:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A590;
    }
}
L_08B4A590:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(508)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5A8;
    }
}
L_08B4A5A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 - g4);
    g4 = (g4 < static_cast<std::uint32_t>(15001) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5C0;
    }
}
L_08B4A5C0:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g31 = (0x08B4A5E4u);
    hot_regs.f22 = hot_regs.f22 + hot_regs.f14;
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A5E4u) goto L_08B4A5E4;
    return;
L_08B4A5E4:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A5EC;
    }
L_08B4A5EC:
    hot_regs.g4 = (48896u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A604;
    }
L_08B4A604:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (15948u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A678;
      }
      goto L_08B4A610;
    }
}
L_08B4A610:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f13 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.f20 = f20;
        goto L_08B4A630;
    }
    goto L_08B4A630;
}
}
L_08B4A630:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 32u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A664;
      }
      goto L_08B4A648;
    }
}
L_08B4A648:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08B4A664u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4A664u) goto L_08B4A664;
    return;
L_08B4A664:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(512), g4);
    hot_regs.g4 = g4;
    goto L_08B4A678;
}
L_08B4A678:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4A6AC:
{
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    float f7 = ctx.fpr[7];
    float f8 = ctx.fpr[8];
    float f9 = ctx.fpr[9];
    float f10 = ctx.fpr[10];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(86))))));
    f3 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g9 = (g4 + static_cast<std::uint32_t>(48));
    f1 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    g10 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g5 = (g5 + static_cast<std::uint32_t>(48));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g11 = (g8 << 2u);
    f12 = f12 - f13;
    g11 = (g10 + g11);
    g11 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (g8 << 2u);
    f13 = f14 - f13;
    g9 = (aot_mem.aot_load32(g11 + static_cast<std::uint32_t>(20)));
    g5 = (g10 + g5);
    g9 = (g9 + static_cast<std::uint32_t>(32));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    g8 = (g8 << 2u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g8 = (g10 + g8);
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(86))))));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(20)));
    g8 = (g4 << 2u);
    g5 = (g5 + static_cast<std::uint32_t>(16));
    g8 = (g10 + g8);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    g8 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    g8 = (g10 + g8);
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(20)));
    g4 = (g10 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    g4 = (g4 + static_cast<std::uint32_t>(16));
    f19 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f5 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    f6 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const float fs = f3; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f7 = std::bit_cast<float>(0x7FC00000u); else f7 = fs * ft; }
    g5 = (16256u << 16u);
    { const float fs = f1; const float ft = f6; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f8 = std::bit_cast<float>(0x7FC00000u); else f8 = fs * ft; }
    { const float fs = f3; const float ft = f6; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f10 = std::bit_cast<float>(0x7FC00000u); else f10 = fs * ft; }
    { const float fs = f1; const float ft = f5; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f9 = std::bit_cast<float>(0x7FC00000u); else f9 = fs * ft; }
    g4 = (0u | 0u);
    ctx.fpr[0] = std::bit_cast<float>(g5);
    f7 = f7 - f8;
    g5 = (16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f10 = f10 + f9;
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f19 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f19) ^ 0x80000000u);
    f3 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f8 = std::bit_cast<float>(g5);
    ctx.fpr[4] = std::bit_cast<float>(0u);
    { const float fs = f15; const float ft = f8; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f8 = std::bit_cast<float>(0x7FC00000u); else f8 = fs * ft; }
    f9 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f15) ^ 0x80000000u);
    ctx.fpr[11] = f16 + f14;
    ctx.fpr[21] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f16) ^ 0x80000000u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    hot_regs.g29 = g29;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
    ctx.fpr[7] = f7;
    ctx.fpr[8] = f8;
    ctx.fpr[9] = f9;
    ctx.fpr[10] = f10;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[19] = f19;
    goto L_08B4A7D0;
}
}
L_08B4A7D0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 2 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4A814;
      }
      goto L_08B4A7DC;
    }
}
L_08B4A7DC:
    if (static_cast<std::int32_t>(hot_regs.g4) < 0) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
        goto L_08B4A88C;
    }
    goto L_08B4A7E4;
L_08B4A7E4:
{
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f23 = ctx.fpr[23];
    float f25 = ctx.fpr[25];
    f25 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[17]; const float ft = f25; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f1 = std::bit_cast<float>(0x7FC00000u); else f1 = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f23 = std::bit_cast<float>(0x7FC00000u); else f23 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = f25; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f25 = std::bit_cast<float>(0x7FC00000u); else f25 = fs * ft; }
    f1 = hot_regs.f12 + f1;
    { const float fs = ctx.fpr[18]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) > 0;
    f23 = hot_regs.f13 + f23;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    ctx.fpr[23] = f23;
    ctx.fpr[25] = f25;
      if (branch_taken) {
          goto L_08B4A82C;
      }
      goto L_08B4A808;
    }
}
L_08B4A808:
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[23] - ctx.fpr[25];
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A814;
    }
L_08B4A814:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4A838;
      }
      goto L_08B4A81C;
    }
L_08B4A81C:
    if (hot_regs.g5 != 0u) {
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
        goto L_08B4A864;
    }
    goto L_08B4A824;
L_08B4A824:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
      if (branch_taken) {
          goto L_08B4A88C;
      }
      goto L_08B4A82C;
    }
L_08B4A82C:
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[3] = ctx.fpr[23] + ctx.fpr[25];
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A838;
    }
L_08B4A838:
{
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f23 = ctx.fpr[23];
    float f25 = ctx.fpr[25];
    float f27 = ctx.fpr[27];
    f1 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    f3 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f23 = std::bit_cast<float>(0x7FC00000u); else f23 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f25 = std::bit_cast<float>(0x7FC00000u); else f25 = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f27 = std::bit_cast<float>(0x7FC00000u); else f27 = fs * ft; }
    f1 = hot_regs.f12 - f23;
    { const float fs = ctx.fpr[18]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f27 = hot_regs.f13 - f27;
    f1 = f1 + f3;
    { const bool branch_taken = 0u == 0u;
    f3 = f27 - f25;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    ctx.fpr[23] = f23;
    ctx.fpr[25] = f25;
    ctx.fpr[27] = f27;
      if (branch_taken) {
          goto L_08B4A888;
      }
      goto L_08B4A864;
    }
}
L_08B4A864:
{
    float f1 = ctx.fpr[1];
    float f3 = ctx.fpr[3];
    float f23 = ctx.fpr[23];
    float f25 = ctx.fpr[25];
    float f27 = ctx.fpr[27];
    f3 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[19]; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f23 = std::bit_cast<float>(0x7FC00000u); else f23 = fs * ft; }
    { const float fs = ctx.fpr[18]; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f25 = std::bit_cast<float>(0x7FC00000u); else f25 = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f27 = std::bit_cast<float>(0x7FC00000u); else f27 = fs * ft; }
    f1 = hot_regs.f12 - f23;
    { const float fs = ctx.fpr[18]; const float ft = f3; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    f27 = hot_regs.f13 - f27;
    f1 = f1 - f3;
    f3 = f27 + f25;
    ctx.fpr[1] = f1;
    ctx.fpr[3] = f3;
    ctx.fpr[23] = f23;
    ctx.fpr[25] = f25;
    ctx.fpr[27] = f27;
    goto L_08B4A888;
}
L_08B4A888:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[27] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[27] = fs * ft; }
    goto L_08B4A88C;
L_08B4A88C:
{
    float f25 = ctx.fpr[25];
    float f27 = ctx.fpr[27];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f25 = std::bit_cast<float>(0x7FC00000u); else f25 = fs * ft; }
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    f27 = f27 - f25;
    ctx.set_fpu_condition((f27 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f25 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[25] = f25;
    ctx.fpr[27] = f27;
      if (branch_taken) {
          goto L_08B4A900;
      }
      goto L_08B4A8A8;
    }
}
L_08B4A8A8:
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A8F8;
      }
      goto L_08B4A8B8;
    }
L_08B4A8B8:
{
    float f23 = ctx.fpr[23];
    f23 = hot_regs.f15 - ctx.fpr[27];
    f23 = f23 / ctx.fpr[7];
    ctx.set_fpu_condition((f23 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[23] = f23;
      if (branch_taken) {
          goto L_08B4A8F0;
      }
      goto L_08B4A8D0;
    }
}
L_08B4A8D0:
{
    float f27 = ctx.fpr[27];
    f27 = ctx.fpr[8] / ctx.fpr[7];
    f27 = ctx.fpr[23] - f27;
    ctx.set_fpu_condition((f27 < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    ctx.fpr[27] = f27;
        goto L_08B4A9AC;
    }
    goto L_08B4A8E8;
}
L_08B4A8E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A8F0;
    }
L_08B4A8F0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A8F8;
    }
L_08B4A8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A900;
    }
L_08B4A900:
    ctx.set_fpu_condition((ctx.fpr[27] < ctx.fpr[9]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A96C;
      }
      goto L_08B4A910;
    }
L_08B4A910:
    ctx.set_fpu_condition((ctx.fpr[7] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A964;
      }
      goto L_08B4A920;
    }
L_08B4A920:
{
    float f23 = ctx.fpr[23];
    f23 = ctx.fpr[27] + hot_regs.f15;
    f23 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f23) ^ 0x80000000u);
    f23 = f23 / ctx.fpr[7];
    ctx.set_fpu_condition((f23 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[23] = f23;
      if (branch_taken) {
          goto L_08B4A95C;
      }
      goto L_08B4A93C;
    }
}
L_08B4A93C:
{
    float f27 = ctx.fpr[27];
    f27 = ctx.fpr[8] / ctx.fpr[7];
    f27 = ctx.fpr[23] + f27;
    ctx.set_fpu_condition((f27 < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    ctx.fpr[27] = f27;
        goto L_08B4A9AC;
    }
    goto L_08B4A954;
}
L_08B4A954:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[25] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A95C;
    }
L_08B4A95C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A964;
    }
L_08B4A964:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[23] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4A9A8;
      }
      goto L_08B4A96C;
    }
L_08B4A96C:
    ctx.set_fpu_condition((ctx.fpr[7] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4A98C;
      }
      goto L_08B4A97C;
    }
L_08B4A97C:
{
    float f25 = ctx.fpr[25];
    f25 = hot_regs.f15 - ctx.fpr[27];
    f25 = f25 / ctx.fpr[7];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    ctx.fpr[25] = f25;
      if (branch_taken) {
          goto L_08B4A9AC;
      }
      goto L_08B4A98C;
    }
}
L_08B4A98C:
    ctx.set_fpu_condition((ctx.fpr[7] < ctx.fpr[4]));
    // nop
    if (!ctx.fpu_condition()) {
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
        goto L_08B4A9AC;
    }
    goto L_08B4A99C;
L_08B4A99C:
{
    float f25 = ctx.fpr[25];
    f25 = ctx.fpr[27] + hot_regs.f15;
    f25 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f25) ^ 0x80000000u);
    f25 = f25 / ctx.fpr[7];
    ctx.fpr[25] = f25;
    goto L_08B4A9A8;
}
L_08B4A9A8:
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[31] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[31] = fs * ft; }
    goto L_08B4A9AC;
L_08B4A9AC:
{
    float f27 = ctx.fpr[27];
    float f31 = ctx.fpr[31];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f27 = std::bit_cast<float>(0x7FC00000u); else f27 = fs * ft; }
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f31 = f31 + f27;
    ctx.set_fpu_condition((f31 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    f27 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[27] = f27;
    ctx.fpr[31] = f31;
      if (branch_taken) {
          goto L_08B4AA20;
      }
      goto L_08B4A9C8;
    }
}
L_08B4A9C8:
    ctx.set_fpu_condition((ctx.fpr[10] < ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AA18;
      }
      goto L_08B4A9D8;
    }
L_08B4A9D8:
{
    float f27 = ctx.fpr[27];
    f27 = hot_regs.f14 - ctx.fpr[31];
    f27 = f27 / ctx.fpr[10];
    ctx.set_fpu_condition((f27 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[27] = f27;
      if (branch_taken) {
          goto L_08B4AA10;
      }
      goto L_08B4A9F0;
    }
}
L_08B4A9F0:
{
    float f31 = ctx.fpr[31];
    f31 = ctx.fpr[11] / ctx.fpr[10];
    f31 = ctx.fpr[27] - f31;
    ctx.set_fpu_condition((f31 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[31] = f31;
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA08;
    }
}
L_08B4AA08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[31]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA10;
    }
L_08B4AA10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA18;
    }
L_08B4AA18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA20;
    }
L_08B4AA20:
    ctx.set_fpu_condition((ctx.fpr[31] < ctx.fpr[21]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AA8C;
      }
      goto L_08B4AA30;
    }
L_08B4AA30:
    ctx.set_fpu_condition((ctx.fpr[10] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AA84;
      }
      goto L_08B4AA40;
    }
L_08B4AA40:
{
    float f27 = ctx.fpr[27];
    f27 = ctx.fpr[31] + ctx.fpr[16];
    f27 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f27) ^ 0x80000000u);
    f27 = f27 / ctx.fpr[10];
    ctx.set_fpu_condition((f27 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[27] = f27;
      if (branch_taken) {
          goto L_08B4AA7C;
      }
      goto L_08B4AA5C;
    }
}
L_08B4AA5C:
{
    float f31 = ctx.fpr[31];
    f31 = ctx.fpr[11] / ctx.fpr[10];
    f31 = ctx.fpr[27] + f31;
    ctx.set_fpu_condition((f31 < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    ctx.fpr[31] = f31;
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA74;
    }
}
L_08B4AA74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[29] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[31]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA7C;
    }
L_08B4AA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA84;
    }
L_08B4AA84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AA8C;
    }
L_08B4AA8C:
    ctx.set_fpu_condition((ctx.fpr[10] <= ctx.fpr[4]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AAAC;
      }
      goto L_08B4AA9C;
    }
L_08B4AA9C:
{
    float f29 = ctx.fpr[29];
    f29 = hot_regs.f14 - ctx.fpr[31];
    f29 = f29 / ctx.fpr[10];
    { const bool branch_taken = 0u == 0u;
    // nop
    ctx.fpr[29] = f29;
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AAAC;
    }
}
L_08B4AAAC:
    ctx.set_fpu_condition((ctx.fpr[10] < ctx.fpr[4]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AAC8;
      }
      goto L_08B4AABC;
    }
L_08B4AABC:
{
    float f29 = ctx.fpr[29];
    f29 = ctx.fpr[31] + ctx.fpr[16];
    f29 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f29) ^ 0x80000000u);
    f29 = f29 / ctx.fpr[10];
    ctx.fpr[29] = f29;
    goto L_08B4AAC8;
}
L_08B4AAC8:
    ctx.set_fpu_condition((ctx.fpr[23] <= ctx.fpr[27]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[27] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[23]));
        goto L_08B4AAD8;
    }
    goto L_08B4AAD8;
L_08B4AAD8:
    ctx.set_fpu_condition((ctx.fpr[25] <= ctx.fpr[27]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AB10;
      }
      goto L_08B4AAE8;
    }
L_08B4AAE8:
    ctx.set_fpu_condition((ctx.fpr[29] <= ctx.fpr[27]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AB10;
      }
      goto L_08B4AAF8;
    }
L_08B4AAF8:
{
    float f23 = ctx.fpr[23];
    f23 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    ctx.set_fpu_condition((f23 <= ctx.fpr[2]));
    // nop
    if (!ctx.fpu_condition()) {
    f23 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[23] = f23;
        goto L_08B4AB0C;
    }
    goto L_08B4AB0C;
}
L_08B4AB0C:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    goto L_08B4AB10;
L_08B4AB10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4A7D0;
      }
      goto L_08B4AB28;
    }
}
L_08B4AB28:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4AB3C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(320)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(324)));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f14 + f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(f30));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    f14 = std::sqrt(f14);
    g6 = (16076u << 16u);
    g6 = (g6 | 52429u);
    f12 = std::bit_cast<float>(g6);
    f12 = f14 / f12;
    g6 = (16256u << 16u);
    f15 = std::bit_cast<float>(g6);
    f12 = f12 + f15;
    g6 = (16384u << 16u);
    f30 = std::bit_cast<float>(g6);
    ctx.gpr[16] = (g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_fpu_condition((f30 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f30 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[30] = f30;
        goto L_08B4ABDC;
    }
    goto L_08B4ABDC;
}
}
L_08B4ABDC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (16704u << 16u);
    f12 = std::bit_cast<float>(g4);
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[30]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g4 = (17056u << 16u);
    f14 = std::bit_cast<float>(g4);
    f15 = f13 - f26;
    f14 = f15 / f14;
    g6 = (16880u << 16u);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (0u | 49u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f15));
    g4 = (0u | 0u);
    f12 = std::bit_cast<float>(g6);
    ctx.fpr[30] = f13 + f26;
    ctx.fpr[28] = f16 - f26;
    f12 = f14 + f12;
    f26 = f16 + f26;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g18 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    if (g6 != 0u) {
    g18 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[26] = f26;
        goto L_08B4AC3C;
    }
    goto L_08B4AC3C;
}
}
L_08B4AC3C:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08B4AC48;
    }
    goto L_08B4AC48;
L_08B4AC48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 | 0u);
    g18 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g18 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
        goto L_08B4AC5C;
    }
    goto L_08B4AC5C;
}
L_08B4AC5C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = ctx.fpr[28] / f12;
    g6 = (16840u << 16u);
    g5 = (0u | 49u);
    g4 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g19 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (g6 != 0u) {
    g19 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
        goto L_08B4AC90;
    }
    goto L_08B4AC90;
}
}
L_08B4AC90:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_08B4AC9C;
    }
    goto L_08B4AC9C;
L_08B4AC9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g19 | 0u);
    g19 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g19 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
        goto L_08B4ACB0;
    }
    goto L_08B4ACB0;
}
L_08B4ACB0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = ctx.fpr[30] / f12;
    g6 = (16880u << 16u);
    g5 = (0u | 49u);
    g4 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g20 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    if (g6 != 0u) {
    g20 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
        goto L_08B4ACE4;
    }
    goto L_08B4ACE4;
}
}
L_08B4ACE4:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[20] = (hot_regs.g4 | 0u);
        goto L_08B4ACF0;
    }
    goto L_08B4ACF0;
L_08B4ACF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (g20 | 0u);
    g20 = (0u | 49u);
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g20 = (g4 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
        goto L_08B4AD04;
    }
    goto L_08B4AD04;
}
L_08B4AD04:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f12 = ctx.fpr[26] / f12;
    g6 = (16840u << 16u);
    g5 = (0u | 49u);
    g4 = (0u | 0u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08B4AD38;
    }
    goto L_08B4AD38;
}
}
L_08B4AD38:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g6 | 0u);
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08B4AD48;
    }
    goto L_08B4AD48;
}
L_08B4AD48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g21 = ctx.gpr[21];
    g4 = (g5 | 0u);
    g21 = (0u | 49u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    if (g5 != 0u) {
    g21 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[21] = g21;
        goto L_08B4AD5C;
    }
    goto L_08B4AD5C;
}
L_08B4AD5C:
{
    float f22 = hot_regs.f22;
    ctx.set_fpu_condition((!(std::isnan(f22) || std::isnan(f22)) && f22 == f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4AD70;
      }
      goto L_08B4AD6C;
    }
}
L_08B4AD6C:
    hot_regs.f22 = std::bit_cast<float>(0u);
    goto L_08B4AD70;
L_08B4AD70:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    hot_regs.g5 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4AD98;
      }
      goto L_08B4AD88;
    }
}
L_08B4AD88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4ADA8;
      }
      goto L_08B4AD98;
    }
}
L_08B4AD98:
    hot_regs.g31 = (0x08B4ADA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4ADA0u) goto L_08B4ADA0;
    return;
L_08B4ADA0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08B4ADA8;
L_08B4ADA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (50716u << 16u);
    g4 = (g4 | 16282u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
    goto L_08B4ADBC;
}
L_08B4ADBC:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(ctx.fpr[24])) && hot_regs.f12 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4ADE0;
      }
      goto L_08B4ADCC;
    }
L_08B4ADCC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4AF8C;
      }
      goto L_08B4ADE0;
    }
}
L_08B4ADE0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4AF54;
      }
      goto L_08B4ADF4;
    }
L_08B4ADF4:
    ctx.gpr[23] = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4AF44;
      }
      goto L_08B4AE04;
    }
L_08B4AE04:
    hot_regs.g4 = (ctx.gpr[22] << 4u);
    hot_regs.g5 = (ctx.gpr[22] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (ctx.gpr[23] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    hot_regs.g5 = (hot_regs.g4 << 6u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g4 = (hot_regs.g4 << 3u);
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[30] = (hot_regs.g6 + hot_regs.g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B4AE6Cu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 660u, 0x08B42DB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AE6Cu) goto L_08B4AE6C;
    return;
L_08B4AE6C:
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B4AE94u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 660u, 0x08B42DB8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AE94u) goto L_08B4AE94;
    return;
L_08B4AE94:
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(36));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B4AEBCu);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 677u, 0x08B430D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AEBCu) goto L_08B4AEBC;
    return;
L_08B4AEBC:
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(40));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08B4AEE4u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 677u, 0x08B430D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AEE4u) goto L_08B4AEE4;
    return;
L_08B4AEE4:
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08B4AF08u);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 749u, 0x08B43868u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AF08u) goto L_08B4AF08;
    return;
L_08B4AF08:
    hot_regs.g4 = (ctx.gpr[30] + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x08B4AF2Cu);
    hot_regs.g7 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 749u, 0x08B43868u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AF2Cu) goto L_08B4AF2C;
    return;
L_08B4AF2C:
{
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g23 = (g23 + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08B4AE04;
      }
      goto L_08B4AF44;
    }
}
L_08B4AF44:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g22 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(g22) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08B4ADF4;
      }
      goto L_08B4AF54;
    }
}
L_08B4AF54:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4AF6C;
      }
      goto L_08B4AF68;
    }
}
L_08B4AF68:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_08B4AF6C;
L_08B4AF6C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f12)) && f12 == f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08B4AF84;
      }
      goto L_08B4AF80;
    }
}
L_08B4AF80:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    goto L_08B4AF84;
L_08B4AF84:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B4ADBC;
      }
      goto L_08B4AF8C;
    }
L_08B4AF8C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g31 = (0x08B4AF98u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AF98u) goto L_08B4AF98;
    return;
L_08B4AF98:
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[0]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x08B4AFACu);
    hot_regs.f12 = hot_regs.f22 + hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AFACu) goto L_08B4AFAC;
    return;
L_08B4AFAC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = hot_regs.f12 - hot_regs.f22;
    hot_regs.g31 = (0x08B4AFC4u);
    hot_regs.f20 = hot_regs.f20 - hot_regs.f22;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AFC4u) goto L_08B4AFC4;
    return;
L_08B4AFC4:
{
    float f24 = ctx.fpr[24];
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f24 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24) ^ 0x80000000u);
    ctx.fpr[24] = f24;
        goto L_08B4AFDC;
    }
    goto L_08B4AFDC;
}
L_08B4AFDC:
    hot_regs.g31 = (0x08B4AFE4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4AFE4u) goto L_08B4AFE4;
    return;
L_08B4AFE4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20) ^ 0x80000000u);
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
        goto L_08B4B000;
    }
    goto L_08B4B000;
}
L_08B4B000:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (16329u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B03C;
      }
      goto L_08B4B01C;
    }
}
L_08B4B01C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B03C;
      }
      goto L_08B4B034;
    }
}
L_08B4B034:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B03C;
    }
L_08B4B03C:
{
    float f13 = hot_regs.f13;
    f13 = ctx.fpr[24] - hot_regs.f12;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f13 < hot_regs.f14));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) ^ 0x80000000u);
    hot_regs.f13 = f13;
        goto L_08B4B054;
    }
    goto L_08B4B054;
}
L_08B4B054:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15779u << 16u);
    g4 = (g4 | 55050u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B088;
      }
      goto L_08B4B070;
    }
}
L_08B4B070:
    ctx.set_fpu_condition((ctx.fpr[24] < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4B090;
      }
      goto L_08B4B080;
    }
L_08B4B080:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B088;
    }
L_08B4B088:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B090;
    }
L_08B4B090:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08B4B098;
      }
      goto L_08B4B098;
    }
L_08B4B098:
{
    std::uint32_t g29 = hot_regs.g29;
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
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4B0E0:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(560)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 == 0u;
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B4B138;
      }
      goto L_08B4B124;
    }
}
L_08B4B124:
    hot_regs.g31 = (0x08B4B12Cu);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B12Cu) goto L_08B4B12C;
    return;
L_08B4B12C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B4B138;
}
L_08B4B138:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g22 = ctx.gpr[22];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (g20 + g20);
    g5 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (g20 + g4);
    g7 = (g5 + g5);
    g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
    g4 = (g4 + g4);
    g5 = (g5 + g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    g4 = (g6 + g4);
    g5 = (g5 + g5);
    g6 = (g6 + g5);
    g22 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g30 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(2))))));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g30));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g5));
    aot_mem.aot_store16(g18 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g7));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g7 = (g30 << 3u);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g20 = (g30 + g7);
    g20 = (g30 + g20);
    g7 = (g8 + g20);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g5 << 2u);
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(8))))));
    g5 = (g8 + g4);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    g7 = (g22 << 3u);
    g19 = (g22 + g7);
    g23 = (g23 & 15u);
    g5 = (g5 & 16383u);
    { const bool branch_taken = g5 != g30;
    g19 = (g22 + g19);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[19] = g19;
    ctx.gpr[20] = g20;
    ctx.gpr[22] = g22;
    ctx.gpr[23] = g23;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_08B4B1F0;
      }
      goto L_08B4B1C4;
    }
}
L_08B4B1C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g5 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g5 = (g4 & 7u);
    hot_regs.g7 = (g4 & 56u);
    g4 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B1E8;
    }
}
L_08B4B1E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B1F0;
    }
L_08B4B1F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g4 = (g5 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g5 = (g4 & 56u);
    g5 = (g5 >> 3u);
    g5 = (g5 << 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    hot_regs.g7 = (g4 & 7u);
    g4 = (g5 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g7 != 0u;
    g5 = (static_cast<std::int32_t>(g5) < 3 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4B224;
      }
      goto L_08B4B220;
    }
}
L_08B4B220:
    ctx.gpr[17] = (0u | 1u);
    goto L_08B4B224;
L_08B4B224:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08B4B234;
      }
      goto L_08B4B230;
    }
L_08B4B230:
    ctx.gpr[21] = (0u | 4u);
    goto L_08B4B234;
L_08B4B234:
{
    std::uint32_t g6 = hot_regs.g6;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = g6 != hot_regs.g4;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B24C;
      }
      goto L_08B4B244;
    }
}
L_08B4B244:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 | 2u);
    g21 = (g21 & 255u);
    ctx.gpr[21] = g21;
    goto L_08B4B24C;
}
L_08B4B24C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B25C;
      }
      goto L_08B4B254;
    }
L_08B4B254:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08B4B268;
      }
      goto L_08B4B25C;
    }
L_08B4B25C:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[17]));
    g21 = (g21 & 255u);
    ctx.gpr[21] = g21;
    goto L_08B4B268;
}
L_08B4B268:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 1u);
    hot_regs.g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g7 = (g5 | 0u);
    hot_regs.g4 = (g5 | 0u);
    hot_regs.g5 = g5;
    goto L_08B4B27C;
}
L_08B4B27C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B284;
    }
L_08B4B284:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[8];
    hot_regs.g6 = (hot_regs.g6 & ctx.gpr[21]);
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B290;
    }
L_08B4B290:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B298;
    }
L_08B4B298:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 << 3u);
    g9 = (g8 + g9);
    g8 = (g8 + g9);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 16u);
    if (g6 == 0u) {
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08B4B2E4;
    }
    goto L_08B4B2C4;
}
L_08B4B2C4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + ctx.gpr[19]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 16u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B2E0;
    }
}
L_08B4B2E0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B2E4;
L_08B4B2E4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 << 3u);
    g9 = (g8 + g9);
    g8 = (g8 + g9);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 32u);
    if (g6 == 0u) {
    g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
        goto L_08B4B32C;
    }
    goto L_08B4B30C;
}
L_08B4B30C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + ctx.gpr[19]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 32u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B328;
    }
}
L_08B4B328:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    goto L_08B4B32C;
L_08B4B32C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(538))))));
    g6 = (g6 & 4u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B38C;
      }
      goto L_08B4B344;
    }
}
L_08B4B344:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g9 = (g8 << 3u);
    g9 = (g8 + g9);
    g8 = (g8 + g9);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 64u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08B4B38C;
      }
      goto L_08B4B370;
    }
}
L_08B4B370:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + ctx.gpr[19]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 64u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B38C;
    }
}
L_08B4B38C:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B3A8;
      }
      goto L_08B4B394;
    }
L_08B4B394:
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B3A0;
    }
L_08B4B3A0:
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B4E4;
      }
      goto L_08B4B3A8;
    }
L_08B4B3A8:
    hot_regs.g31 = (0x08B4B3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B3B0u) goto L_08B4B3B0;
    return;
L_08B4B3B0:
    hot_regs.g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(30040)));
    hot_regs.g4 = (hot_regs.g5 + ctx.gpr[20]);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(6))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[8] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    hot_regs.g5 = (hot_regs.g5 + ctx.gpr[17]);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g5 & 16383u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g7 + static_cast<std::uint32_t>(0))))));
    hot_regs.g31 = (0x08B4B404u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 763u, 0x08B439ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B404u) goto L_08B4B404;
    return;
L_08B4B404:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[17]);
    g8 = (g5 + g5);
    g8 = (g7 + g8);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g8 << 2u);
    g8 = (ctx.gpr[9] + g4);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g8 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (hot_regs.g2 | 0u);
    g5 = (0u | 0u);
    g8 = (g8 & 16383u);
    { const bool branch_taken = g8 != ctx.gpr[30];
    g7 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B4B490;
      }
      goto L_08B4B44C;
    }
}
L_08B4B44C:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g8 = (g8 + hot_regs.g4);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(2))))));
    g8 = (g8 & 56u);
    if (g8 != 0u) {
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = g8;
        goto L_08B4B470;
    }
    goto L_08B4B468;
}
L_08B4B468:
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B470;
L_08B4B470:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g4 = (g8 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B488;
    }
}
L_08B4B488:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B490;
    }
L_08B4B490:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g8 = (g8 + hot_regs.g4);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(2))))));
    g8 = (g8 & 7u);
    if (g8 != 0u) {
    g8 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    ctx.gpr[8] = g8;
        goto L_08B4B4B4;
    }
    goto L_08B4B4AC;
}
L_08B4B4AC:
    hot_regs.g5 = (0u | 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B4B4;
L_08B4B4B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    g4 = (g8 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 56u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B4B4D0;
      }
      goto L_08B4B4CC;
    }
}
L_08B4B4CC:
    hot_regs.g7 = (0u | 1u);
    goto L_08B4B4D0;
L_08B4B4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    { const bool branch_taken = 0u == 0u;
    g4 = (static_cast<std::int32_t>(g16) < 15 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4B27C;
      }
      goto L_08B4B4E4;
    }
}
L_08B4B4E4:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B4EC;
    }
L_08B4B4EC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    goto L_08B4B4F4;
L_08B4B4F4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 15 ? 1u : 0u);
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B4FC;
    }
L_08B4B4FC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B504;
    }
L_08B4B504:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B510;
    }
L_08B4B510:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 << 3u);
    g8 = (g7 + g8);
    g7 = (g7 + g8);
    g6 = (g6 + g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 32u);
    if (g6 == 0u) {
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
        goto L_08B4B55C;
    }
    goto L_08B4B53C;
}
L_08B4B53C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + ctx.gpr[19]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 32u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B558;
    }
}
L_08B4B558:
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    goto L_08B4B55C;
L_08B4B55C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 4u);
    g6 = (0u < g6 ? 1u : 0u);
    g6 = (g6 & 255u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B5B8;
      }
      goto L_08B4B570;
    }
}
L_08B4B570:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (g7 << 3u);
    g8 = (g7 + g8);
    g7 = (g7 + g8);
    g6 = (g6 + g7);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 64u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B4B5B8;
      }
      goto L_08B4B59C;
    }
}
L_08B4B59C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g6 = (g6 + ctx.gpr[19]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(8))))));
    g6 = (g6 & 64u);
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B5C0;
      }
      goto L_08B4B5B8;
    }
}
L_08B4B5B8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B69C;
      }
      goto L_08B4B5C0;
    }
L_08B4B5C0:
    hot_regs.g31 = (0x08B4B5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B5C8u) goto L_08B4B5C8;
    return;
L_08B4B5C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (hot_regs.g2 & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g4); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[23]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + ctx.gpr[20]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g7 = (ctx.hi);
    g17 = (g7 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    g6 = (g6 + g17);
    g6 = (g6 + g6);
    g4 = (g4 + g6);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g6 = (g6 + ctx.gpr[20]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(6))))));
    g6 = (g6 + g17);
    g6 = (g6 + g6);
    g6 = (g7 + g6);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (g6 << 2u);
    g6 = (g7 + g4);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    g6 = (g6 & 16383u);
    { const bool branch_taken = g6 != ctx.gpr[30];
    g5 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08B4B66C;
      }
      goto L_08B4B648;
    }
}
L_08B4B648:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g4 = (g6 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 56u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B664;
    }
}
L_08B4B664:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B66C;
    }
L_08B4B66C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g4 = (g6 + g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 7u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4B68C;
      }
      goto L_08B4B688;
    }
}
L_08B4B688:
    hot_regs.g5 = (0u | 1u);
    goto L_08B4B68C;
L_08B4B68C:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (g16 + static_cast<std::uint32_t>(1));
    g16 = (hot_regs.g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4B4F4;
      }
      goto L_08B4B69C;
    }
}
L_08B4B69C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_08B4B844;
      }
      goto L_08B4B6A4;
    }
L_08B4B6A4:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B834;
      }
      goto L_08B4B6B4;
    }
L_08B4B6B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4B6B8;
L_08B4B6B8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[17]);
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    g4 = (g4 + ctx.gpr[20]);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(6))))));
    g8 = (g8 + ctx.gpr[17]);
    g8 = (g8 + g8);
    g7 = (g7 + g8);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g5 = (g7 << 2u);
    g7 = (g8 + g5);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    g7 = (g7 & 16383u);
    { const bool branch_taken = g7 != ctx.gpr[30];
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08B4B744;
      }
      goto L_08B4B720;
    }
}
L_08B4B720:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g5 = (g7 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2))))));
    g5 = (g5 & 56u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B73C;
    }
}
L_08B4B73C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B744;
    }
L_08B4B744:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    g5 = (g7 + g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(2))))));
    g5 = (g5 & 7u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4B764;
      }
      goto L_08B4B760;
    }
}
L_08B4B760:
    hot_regs.g4 = (0u | 1u);
    goto L_08B4B764;
L_08B4B764:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B76C;
    }
L_08B4B76C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g5 << 3u);
    g7 = (g5 + g7);
    g5 = (g5 + g7);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    if (g4 == 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
        goto L_08B4B7B8;
    }
    goto L_08B4B798;
}
L_08B4B798:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 32u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B7B4;
    }
}
L_08B4B7B4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    goto L_08B4B7B8;
L_08B4B7B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 4u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B814;
      }
      goto L_08B4B7CC;
    }
}
L_08B4B7CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (g5 << 3u);
    g7 = (g5 + g7);
    g5 = (g5 + g7);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08B4B814;
      }
      goto L_08B4B7F8;
    }
}
L_08B4B7F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[19]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (g4 & 64u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4B81C;
      }
      goto L_08B4B814;
    }
}
L_08B4B814:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B834;
      }
      goto L_08B4B81C;
    }
L_08B4B81C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(1));
    g17 = (g4 << 16u);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    hot_regs.g6 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
        goto L_08B4B6B8;
    }
    goto L_08B4B834;
}
L_08B4B834:
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08B4B844;
      }
      goto L_08B4B83C;
    }
L_08B4B83C:
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[22]));
    goto L_08B4B844;
L_08B4B844:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[22] != hot_regs.g4;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08B4B86C;
      }
      goto L_08B4B850;
    }
L_08B4B850:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 | 48u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x08B4B86Cu);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 365u, 0x08B41608u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B86Cu) goto L_08B4B86C;
    return;
L_08B4B86C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g5 = (g5 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[17]);
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(g4));
    g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (0u | 1u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08B4B8D8;
      }
      goto L_08B4B8A4;
    }
}
L_08B4B8A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g4 = (g4 & 56u);
    g4 = (g4 >> 3u);
    g16 = (g4 << 16u);
    { const bool branch_taken = 0u == 0u;
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4B8F8;
      }
      goto L_08B4B8D8;
    }
}
L_08B4B8D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 << 2u);
    g4 = (g4 + g5);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    g16 = (g16 & 7u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    goto L_08B4B8F8;
}
L_08B4B8F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08B4B90C;
      }
      goto L_08B4B900;
    }
L_08B4B900:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(5))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08B4BAA8;
      }
      goto L_08B4B90C;
    }
L_08B4B90C:
    hot_regs.g31 = (0x08B4B914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4B914u) goto L_08B4B914;
    return;
L_08B4B914:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 & 65535u);
    g4 = (g4 & 1536u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4B924;
    }
}
L_08B4B924:
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
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g9 = (g4 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    g6 = (g5 << 3u);
    g6 = (g5 + g6);
    g5 = (g5 + g6);
    g9 = (g4 + g5);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(0))))));
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g9 + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(g8);
    ctx.set_vfpu_scalar_bits_ct<33u>(g9);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    g4 = (g29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    f12 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g4);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    g4 = (17220u << 16u);
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4BA10;
    }
}
}
L_08B4BA10:
    hot_regs.g31 = (0x08B4BA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BA18u) goto L_08B4BA18;
    return;
L_08B4BA18:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5516)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5512)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08B4BA2Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BA2Cu) goto L_08B4BA2C;
    return;
L_08B4BA2C:
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
          goto L_08B4BA50;
      }
      goto L_08B4BA48;
    }
}
L_08B4BA48:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08B4BA50;
      }
      goto L_08B4BA50;
    }
L_08B4BA50:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4BA68;
      }
      goto L_08B4BA58;
    }
L_08B4BA58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4BA74;
      }
      goto L_08B4BA68;
    }
}
L_08B4BA68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B4BA74;
}
L_08B4BA74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    if (g4 != 0u) {
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B4BA88;
    }
    goto L_08B4BA88;
}
L_08B4BA88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store8(g18 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(g16));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(5))))));
    g4 = (0u | 0u);
    g16 = (0u | 0u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g4 != 0u) {
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g18 + static_cast<std::uint32_t>(5))))));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08B4BAA4;
    }
    goto L_08B4BAA4;
}
L_08B4BAA4:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08B4BAA8;
L_08B4BAA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(538))))));
    g4 = (g4 & 8u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4BAC4;
      }
      goto L_08B4BAC0;
    }
}
L_08B4BAC0:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    goto L_08B4BAC4;
L_08B4BAC4:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08B4BAF4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    hot_regs.g7 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(560)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[20]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 2u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), hot_regs.g31);
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), hot_regs.g6);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08B4BB70;
      }
      goto L_08B4BB5C;
    }
}
L_08B4BB5C:
    hot_regs.g31 = (0x08B4BB64u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 107u, 0x08B2090Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BB64u) goto L_08B4BB64;
    return;
L_08B4BB64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(560)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
    goto L_08B4BB70;
}
L_08B4BB70:
    ctx.gpr[21] = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
    hot_regs.g4 = (ctx.gpr[20] + ctx.gpr[20]);
    hot_regs.g4 = (ctx.gpr[20] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[21] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g5);
    ctx.gpr[21] = (ctx.gpr[21] + hot_regs.g5);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), hot_regs.g4);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[22] << 3u);
    ctx.gpr[20] = (ctx.gpr[22] + hot_regs.g5);
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[20]);
    ctx.gpr[10] = (hot_regs.g4 + ctx.gpr[20]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[10]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<96u, 1u>(vfpu_value); }
    { const std::uint16_t vfpu_half = 22080u;
      const std::uint32_t vfpu_sign = static_cast<std::uint32_t>(vfpu_half & 0x8000u) << 16u;
      std::uint32_t vfpu_exponent = (vfpu_half >> 10u) & 0x1Fu;
      std::uint32_t vfpu_mantissa = vfpu_half & 0x03FFu;
      std::uint32_t vfpu_bits = 0u;
      if (vfpu_exponent == 0u) {
        if (vfpu_mantissa == 0u) vfpu_bits = vfpu_sign;
        else {
          std::uint32_t shift = 0u;
          while ((vfpu_mantissa & 0x0400u) == 0u) { vfpu_mantissa <<= 1u; ++shift; }
          vfpu_mantissa &= 0x03FFu;
          vfpu_bits = vfpu_sign | ((113u - shift) << 23u) | (vfpu_mantissa << 13u);
        }
      } else if (vfpu_exponent == 31u) {
        vfpu_bits = vfpu_sign | 0x7F800000u | (vfpu_mantissa << 13u);
      } else {
        vfpu_bits = vfpu_sign | ((vfpu_exponent + 112u) << 23u) | (vfpu_mantissa << 13u);
      }
      const float vfpu_value[1]{std::bit_cast<float>(vfpu_bits)};
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<32u, 1u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<1u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(0u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 1u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<66u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<66u, 96u, 1u, 2u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<66u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmov_ct<66u, 98u, 1u, 0u, false>();
    { float vfpu_value[4]{1.0f, 1.0f, 1.0f, 1.0f};
      ctx.write_vfpu_vector_with_destination_prefix_ct<98u, 1u>(vfpu_value); }
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = (17096u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08B4BC1Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 267u, 0x08B40DF8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BC1Cu) goto L_08B4BC1C;
    return;
L_08B4BC1C:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[30] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(60));
    ctx.gpr[11] = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[3] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    hot_regs.g31 = (0x08B4BC58u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g2);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 607u, 0x08976C80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BC58u) goto L_08B4BC58;
    return;
L_08B4BC58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(60))))));
    if (g4 == ctx.gpr[17]) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
        goto L_08B4BC74;
    }
    goto L_08B4BC64;
}
L_08B4BC64:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B4BD2C;
      }
      goto L_08B4BC70;
    }
L_08B4BC70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BC74;
L_08B4BC74:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[20]);
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4BD2C;
      }
      goto L_08B4BC88;
    }
}
L_08B4BC88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 10u);
    g5 = (g5 - g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    g5 = (g6 + ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = g4 == ctx.gpr[19];
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BCD8;
    }
}
L_08B4BCD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BCDC;
L_08B4BCDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g17 = (g5 << 16u);
    g5 = (hot_regs.g6 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    g5 = (g5 + g17);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    if (g4 != ctx.gpr[19]) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
        goto L_08B4BCDC;
    }
    goto L_08B4BD24;
}
L_08B4BD24:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08B4BFA0;
      }
      goto L_08B4BD2C;
    }
L_08B4BD2C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(60))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08B4BDF4;
      }
      goto L_08B4BD38;
    }
L_08B4BD38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 + ctx.gpr[20]);
    { const bool branch_taken = hot_regs.g5 == g4;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08B4BDF4;
      }
      goto L_08B4BD50;
    }
}
L_08B4BD50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 10u);
    g5 = (g5 - g6);
    { const std::int32_t dividend = static_cast<std::int32_t>(g5); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g7); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    g5 = (g6 + ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    ctx.gpr[19] = (ctx.lo);
    { const bool branch_taken = g4 == ctx.gpr[19];
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BDA0;
    }
}
L_08B4BDA0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    goto L_08B4BDA4;
L_08B4BDA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g5 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g17 = (g5 << 16u);
    g5 = (hot_regs.g6 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 16u));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    g5 = (g5 + g17);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 16383u);
    g4 = (g4 << 16u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 16u));
    if (g4 != ctx.gpr[19]) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
        goto L_08B4BDA4;
    }
    goto L_08B4BDEC;
}
L_08B4BDEC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08B4BFA0;
      }
      goto L_08B4BDF4;
    }
L_08B4BDF4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    hot_regs.f13 = hot_regs.f20 - hot_regs.f13;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08B4BE10u);
    hot_regs.f12 = hot_regs.f22 - hot_regs.f12;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BE10u) goto L_08B4BE10;
    return;
L_08B4BE10:
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((hot_regs.f20 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (16585u << 16u);
      if (branch_taken) {
          goto L_08B4BE30;
      }
      goto L_08B4BE24;
    }
L_08B4BE24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    hot_regs.g4 = g4;
    goto L_08B4BE30;
}
L_08B4BE30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (g4 + ctx.gpr[20]);
    g23 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(8))))));
    g4 = (16672u << 16u);
    g23 = (g23 & 15u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    ctx.gpr[17] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08B4BF9C;
      }
      goto L_08B4BE64;
    }
}
L_08B4BE64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(76));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(68));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    goto L_08B4BE80;
}
L_08B4BE80:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(30040)));
    g5 = (g5 + ctx.gpr[20]);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(6))))));
    g5 = (g5 + ctx.gpr[18]);
    g5 = (g5 + g5);
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(192)));
    g4 = (g4 & 16383u);
    g16 = (g4 << 16u);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 16u));
    { const bool branch_taken = g16 != g5;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08B4BEC0;
      }
      goto L_08B4BEB8;
    }
}
L_08B4BEB8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08B4BF84;
      }
      goto L_08B4BEC0;
    }
L_08B4BEC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[16] << 3u);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[16] + hot_regs.g5);
    ctx.gpr[9] = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (hot_regs.g4 + ctx.gpr[20]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<33u>(ctx.gpr[9]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(3u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(76)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f13 = hot_regs.f13 - hot_regs.f12;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.g31 = (0x08B4BF38u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f14;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BF38u) goto L_08B4BF38;
    return;
L_08B4BF38:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = f12 + hot_regs.f22;
    hot_regs.f12 = f12;
        goto L_08B4BF4C;
    }
    goto L_08B4BF4C;
}
L_08B4BF4C:
    hot_regs.g31 = (0x08B4BF54u);
    hot_regs.f12 = hot_regs.f12 - hot_regs.f20;
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 580u, 0x08A8F0B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08B4BF54u) goto L_08B4BF54;
    return;
L_08B4BF54:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.f12 = f12;
        goto L_08B4BF68;
    }
    goto L_08B4BF68;
}
L_08B4BF68:
    ctx.set_fpu_condition((ctx.fpr[26] < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08B4BF84;
      }
      goto L_08B4BF78;
    }
L_08B4BF78:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_08B4BF84;
L_08B4BF84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(1));
    g18 = (g4 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
        goto L_08B4BE80;
    }
    goto L_08B4BF9C;
}
L_08B4BF9C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(196)));
    goto L_08B4BFA0;
L_08B4BFA0:
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[20]);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(6))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(204)));
    hot_regs.g6 = (hot_regs.g6 + ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g7) < static_cast<std::int32_t>(hot_regs.g6) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0210_entry, 210u, 2u, 0x08B4C00Cu>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08B4BFE0;
    }
L_08B4BFE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16928)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(2))))));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (g6 << 2u);
    g4 = (g4 + g6);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(2))))));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.pc = 0x08B4C000u; return;}

}

void recomp_unit_0209(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0209_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_209(Runtime &runtime) {
    runtime.register_generated_unit(209u, 0x08B48000u, 16384u, &recomp_unit_0209, &recomp_unit_0209_entry);
    runtime.register_function(0x08B48000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48014u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48038u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4809Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B480F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48104u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48264u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48274u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4828Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B482DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4830Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48314u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48330u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48338u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48344u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4834Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B483F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4840Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4851Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4852Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48540u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B485F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48604u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48630u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48868u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48870u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48878u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48894u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4889Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B488FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48904u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48914u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48918u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48950u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48958u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48978u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48994u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B489E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48A88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48ACCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48AF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48B20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48B5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48BF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48C98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48CB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48D80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48DE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48E9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48EECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48F78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B48FF8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4900Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4901Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4902Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49044u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49054u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49064u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4906Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49074u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4907Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4909Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490D4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B490FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49108u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49110u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49114u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4911Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49130u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49140u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49158u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49160u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49170u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49174u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49184u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49188u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49198u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B491FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4920Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49218u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49228u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49230u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49234u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4923Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49250u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4925Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49260u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4928Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4929Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B492F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49300u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49304u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49310u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49328u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49340u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49358u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49370u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49388u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49398u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B493FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49418u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49428u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49438u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49440u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49454u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49464u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49474u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4947Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49490u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B494FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49524u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4952Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49534u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49544u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49588u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49590u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B495F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49614u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49620u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49634u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49640u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49650u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4965Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4968Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4969Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496BCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B496F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49730u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49780u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49788u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B497E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B497E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49800u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49808u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49810u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49824u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49844u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49864u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49884u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49890u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B498ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49908u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49910u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4992Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4993Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49950u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49960u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4996Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B499E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49A98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ABCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49AE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49B24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49BACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49BECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C00u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49C90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49CACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49CC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D60u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49D98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DB4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DD0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49DF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E14u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49E8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ECCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49ED4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49EFCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49F84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FD4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B49FF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A004u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A020u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A02Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A03Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A05Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A064u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A06Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A074u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A090u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A0FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A108u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A12Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A150u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A178u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A1F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A204u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A240u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A26Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A27Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A284u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A2CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A33Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A358u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A364u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A3A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A41Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A438u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A440u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A44Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A478u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A49Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A4D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A504u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A530u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A534u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A540u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A550u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A558u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A560u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A574u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A590u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A5ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A604u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A610u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A630u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A648u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A664u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A678u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A6ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7DCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A7E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A808u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A814u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A81Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A824u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A82Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A838u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A864u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A888u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A88Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A8F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A900u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A910u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A920u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A93Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A954u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A95Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A964u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A96Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A97Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A98Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A99Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4A9F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA20u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA40u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA7Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AA9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AABCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAC8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAE8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AAF8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB0Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB28u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AB3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ABDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC3Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC90u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AC9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACB0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ACF0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AD98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADCCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADE0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4ADF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE04u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AE94u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEBCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AEE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF08u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF44u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF6Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF8Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AF98u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4AFE4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B000u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B01Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B034u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B03Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B054u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B070u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B080u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B088u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B090u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B098u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B0E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B124u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B12Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B138u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1E8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B1F0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B220u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B224u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B230u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B234u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B244u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B24Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B254u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B25Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B268u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B27Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B284u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B290u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B298u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2C4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2E0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B2E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B30Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B328u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B32Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B344u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B370u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B38Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B394u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3A0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3A8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B3B0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B404u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B44Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B468u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B470u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B488u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B490u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4ACu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4D0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4E4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4ECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4F4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B4FCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B504u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B510u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B53Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B558u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B55Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B570u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B59Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5C0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B5C8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B648u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B664u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B66Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B688u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B68Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B69Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B6B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B720u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B73Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B744u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B760u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B764u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B76Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B798u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7B4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7B8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7CCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B7F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B814u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B81Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B834u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B83Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B844u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B850u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B86Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8A4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8D8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B8F8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B900u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B90Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B914u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4B924u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA18u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA48u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BA88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAA8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAC4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BAF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB5Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BB70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC1Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC58u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC70u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC74u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BC88u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BCD8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BCDCu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD2Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BD50u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDA4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDECu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BDF4u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE10u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE24u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE30u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE64u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BE80u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BEB8u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BEC0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF38u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF4Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF54u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF68u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF78u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF84u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BF9Cu, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFA0u, &recomp_unit_0209, "recomp_unit_0209");
    runtime.register_function(0x08B4BFE0u, &recomp_unit_0209, "recomp_unit_0209");
}
} // namespace psprecomp
