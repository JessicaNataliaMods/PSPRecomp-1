#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0037[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 30,
    0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 41, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0,
    0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0,
    69, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0,
    0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 98,
    0, 99, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 0, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0,
    0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 129,
    0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 134, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0,
    0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 148, 0,
    149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0,
    0, 0, 158, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0,
    0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 194,
    0, 195, 0, 196, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0,
    0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0,
    223, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0,
    237, 0, 0, 0, 238, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0,
    247, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 0, 261,
    0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0,
    275, 0, 0, 276, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281,
    0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0,
    0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0,
    0, 0, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 306,
    0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0,
    0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316,
    0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    328, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0,
    0, 0, 334, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0,
    341, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357,
    0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0,
    0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0,
    0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0,
    0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0,
    0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0,
    0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0,
    417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0,
    436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0,
    0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464,
    0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 479,
    0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484,
    485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0,
    0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0,
    0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0,
    531, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 538,
    0, 0, 539, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    0, 546, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 553,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 0,
    0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 573, 0, 574,
    0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 583, 584, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 593, 594,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 602, 603, 0, 604, 0, 605, 0, 606, 0, 607, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 614,
    0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 618, 619, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0, 625, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 631,
    0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 0, 635, 0, 636, 0, 0, 0, 637, 0, 0, 638, 639, 0, 0, 0, 0, 640, 0, 641, 0, 0,
    642, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 650, 0, 651, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 676, 0, 0,
    0, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 682, 683, 0,
    0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0,
    696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 700, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 703, 0, 704, 0, 0,
    0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 708,
};
void recomp_unit_0037_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08898000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0037[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08898000;
    case 2u: goto L_08898024;
    case 3u: goto L_08898030;
    case 4u: goto L_08898068;
    case 5u: goto L_08898074;
    case 6u: goto L_088980AC;
    case 7u: goto L_088980B8;
    case 8u: goto L_088980F0;
    case 9u: goto L_088980FC;
    case 10u: goto L_08898154;
    case 11u: goto L_08898164;
    case 12u: goto L_08898170;
    case 13u: goto L_0889817C;
    case 14u: goto L_088981B8;
    case 15u: goto L_08898208;
    case 16u: goto L_08898218;
    case 17u: goto L_08898220;
    case 18u: goto L_0889822C;
    case 19u: goto L_08898268;
    case 20u: goto L_088982B8;
    case 21u: goto L_088982C8;
    case 22u: goto L_088982DC;
    case 23u: goto L_08898334;
    case 24u: goto L_08898340;
    case 25u: goto L_0889834C;
    case 26u: goto L_08898358;
    case 27u: goto L_08898394;
    case 28u: goto L_088983E4;
    case 29u: goto L_088983F4;
    case 30u: goto L_088983FC;
    case 31u: goto L_08898408;
    case 32u: goto L_08898444;
    case 33u: goto L_08898494;
    case 34u: goto L_088984A4;
    case 35u: goto L_088984B8;
    case 36u: goto L_088984C4;
    case 37u: goto L_088984D0;
    case 38u: goto L_08898508;
    case 39u: goto L_08898554;
    case 40u: goto L_08898564;
    case 41u: goto L_0889856C;
    case 42u: goto L_08898578;
    case 43u: goto L_088985B0;
    case 44u: goto L_088985FC;
    case 45u: goto L_0889860C;
    case 46u: goto L_08898614;
    case 47u: goto L_08898664;
    case 48u: goto L_08898670;
    case 49u: goto L_088986A8;
    case 50u: goto L_088986B4;
    case 51u: goto L_088986EC;
    case 52u: goto L_088986F8;
    case 53u: goto L_08898730;
    case 54u: goto L_0889873C;
    case 55u: goto L_08898794;
    case 56u: goto L_088987A4;
    case 57u: goto L_088987B0;
    case 58u: goto L_088987BC;
    case 59u: goto L_088987F8;
    case 60u: goto L_08898848;
    case 61u: goto L_08898858;
    case 62u: goto L_08898860;
    case 63u: goto L_0889886C;
    case 64u: goto L_088988A8;
    case 65u: goto L_088988F8;
    case 66u: goto L_08898908;
    case 67u: goto L_0889891C;
    case 68u: goto L_08898974;
    case 69u: goto L_08898980;
    case 70u: goto L_0889898C;
    case 71u: goto L_08898998;
    case 72u: goto L_088989D4;
    case 73u: goto L_08898A24;
    case 74u: goto L_08898A34;
    case 75u: goto L_08898A3C;
    case 76u: goto L_08898A48;
    case 77u: goto L_08898A84;
    case 78u: goto L_08898AD4;
    case 79u: goto L_08898AE4;
    case 80u: goto L_08898AF8;
    case 81u: goto L_08898B04;
    case 82u: goto L_08898B10;
    case 83u: goto L_08898B48;
    case 84u: goto L_08898B94;
    case 85u: goto L_08898BA4;
    case 86u: goto L_08898BAC;
    case 87u: goto L_08898BB8;
    case 88u: goto L_08898BF0;
    case 89u: goto L_08898C3C;
    case 90u: goto L_08898C4C;
    case 91u: goto L_08898C6C;
    case 92u: goto L_08898C70;
    case 93u: goto L_08898CA4;
    case 94u: goto L_08898CCC;
    case 95u: goto L_08898CD4;
    case 96u: goto L_08898CE0;
    case 97u: goto L_08898CF0;
    case 98u: goto L_08898CFC;
    case 99u: goto L_08898D04;
    case 100u: goto L_08898D08;
    case 101u: goto L_08898D10;
    case 102u: goto L_08898D1C;
    case 103u: goto L_08898D28;
    case 104u: goto L_08898D40;
    case 105u: goto L_08898D58;
    case 106u: goto L_08898D64;
    case 107u: goto L_08898D6C;
    case 108u: goto L_08898D84;
    case 109u: goto L_08898D9C;
    case 110u: goto L_08898DA4;
    case 111u: goto L_08898DAC;
    case 112u: goto L_08898DB4;
    case 113u: goto L_08898DBC;
    case 114u: goto L_08898DCC;
    case 115u: goto L_08898DD4;
    case 116u: goto L_08898DDC;
    case 117u: goto L_08898DE4;
    case 118u: goto L_08898DF0;
    case 119u: goto L_08898E08;
    case 120u: goto L_08898E10;
    case 121u: goto L_08898E1C;
    case 122u: goto L_08898E30;
    case 123u: goto L_08898E38;
    case 124u: goto L_08898E50;
    case 125u: goto L_08898E58;
    case 126u: goto L_08898E60;
    case 127u: goto L_08898E68;
    case 128u: goto L_08898E70;
    case 129u: goto L_08898E7C;
    case 130u: goto L_08898E94;
    case 131u: goto L_08898E9C;
    case 132u: goto L_08898EA4;
    case 133u: goto L_08898EB0;
    case 134u: goto L_08898EB8;
    case 135u: goto L_08898EBC;
    case 136u: goto L_08898EC8;
    case 137u: goto L_08898ED0;
    case 138u: goto L_08898EE8;
    case 139u: goto L_08898EF0;
    case 140u: goto L_08898EF8;
    case 141u: goto L_08898F18;
    case 142u: goto L_08898F24;
    case 143u: goto L_08898F2C;
    case 144u: goto L_08898F44;
    case 145u: goto L_08898F50;
    case 146u: goto L_08898F58;
    case 147u: goto L_08898F70;
    case 148u: goto L_08898F78;
    case 149u: goto L_08898F80;
    case 150u: goto L_08898F90;
    case 151u: goto L_08898FA0;
    case 152u: goto L_08898FA8;
    case 153u: goto L_08898FB0;
    case 154u: goto L_08898FB8;
    case 155u: goto L_08898FC0;
    case 156u: goto L_08898FD4;
    case 157u: goto L_08898FF8;
    case 158u: goto L_08899008;
    case 159u: goto L_08899010;
    case 160u: goto L_08899018;
    case 161u: goto L_08899030;
    case 162u: goto L_0889903C;
    case 163u: goto L_08899044;
    case 164u: goto L_0889905C;
    case 165u: goto L_08899064;
    case 166u: goto L_0889906C;
    case 167u: goto L_0889907C;
    case 168u: goto L_0889908C;
    case 169u: goto L_08899094;
    case 170u: goto L_0889909C;
    case 171u: goto L_088990A4;
    case 172u: goto L_088990AC;
    case 173u: goto L_088990C0;
    case 174u: goto L_088990E0;
    case 175u: goto L_088990F8;
    case 176u: goto L_08899104;
    case 177u: goto L_0889910C;
    case 178u: goto L_08899114;
    case 179u: goto L_0889912C;
    case 180u: goto L_08899138;
    case 181u: goto L_08899140;
    case 182u: goto L_08899148;
    case 183u: goto L_08899150;
    case 184u: goto L_08899158;
    case 185u: goto L_08899170;
    case 186u: goto L_0889917C;
    case 187u: goto L_0889919C;
    case 188u: goto L_088991B4;
    case 189u: goto L_088991C0;
    case 190u: goto L_088991C8;
    case 191u: goto L_088991D0;
    case 192u: goto L_088991E8;
    case 193u: goto L_088991F4;
    case 194u: goto L_088991FC;
    case 195u: goto L_08899204;
    case 196u: goto L_0889920C;
    case 197u: goto L_08899214;
    case 198u: goto L_08899224;
    case 199u: goto L_08899230;
    case 200u: goto L_08899250;
    case 201u: goto L_08899288;
    case 202u: goto L_08899294;
    case 203u: goto L_0889929C;
    case 204u: goto L_088992B4;
    case 205u: goto L_088992BC;
    case 206u: goto L_088992C4;
    case 207u: goto L_088992CC;
    case 208u: goto L_088992D4;
    case 209u: goto L_088992EC;
    case 210u: goto L_0889930C;
    case 211u: goto L_08899314;
    case 212u: goto L_08899324;
    case 213u: goto L_08899344;
    case 214u: goto L_0889935C;
    case 215u: goto L_08899364;
    case 216u: goto L_0889936C;
    case 217u: goto L_08899384;
    case 218u: goto L_088993A4;
    case 219u: goto L_088993AC;
    case 220u: goto L_088993C0;
    case 221u: goto L_088993E0;
    case 222u: goto L_088993F8;
    case 223u: goto L_08899400;
    case 224u: goto L_08899408;
    case 225u: goto L_08899420;
    case 226u: goto L_0889944C;
    case 227u: goto L_08899454;
    case 228u: goto L_0889945C;
    case 229u: goto L_08899468;
    case 230u: goto L_0889948C;
    case 231u: goto L_088994A4;
    case 232u: goto L_088994BC;
    case 233u: goto L_088994C4;
    case 234u: goto L_088994D0;
    case 235u: goto L_088994EC;
    case 236u: goto L_088994F8;
    case 237u: goto L_08899500;
    case 238u: goto L_08899510;
    case 239u: goto L_08899514;
    case 240u: goto L_08899520;
    case 241u: goto L_08899530;
    case 242u: goto L_0889953C;
    case 243u: goto L_08899550;
    case 244u: goto L_08899568;
    case 245u: goto L_08899570;
    case 246u: goto L_08899578;
    case 247u: goto L_08899580;
    case 248u: goto L_08899590;
    case 249u: goto L_08899598;
    case 250u: goto L_088995A0;
    case 251u: goto L_088995A8;
    case 252u: goto L_088995B0;
    case 253u: goto L_088995B8;
    case 254u: goto L_088995C0;
    case 255u: goto L_088995C8;
    case 256u: goto L_088995D0;
    case 257u: goto L_088995D8;
    case 258u: goto L_088995E0;
    case 259u: goto L_088995E8;
    case 260u: goto L_088995F0;
    case 261u: goto L_088995FC;
    case 262u: goto L_08899604;
    case 263u: goto L_0889960C;
    case 264u: goto L_08899618;
    case 265u: goto L_08899620;
    case 266u: goto L_08899628;
    case 267u: goto L_08899630;
    case 268u: goto L_08899638;
    case 269u: goto L_0889964C;
    case 270u: goto L_08899658;
    case 271u: goto L_08899660;
    case 272u: goto L_08899668;
    case 273u: goto L_08899670;
    case 274u: goto L_08899678;
    case 275u: goto L_08899680;
    case 276u: goto L_0889968C;
    case 277u: goto L_08899694;
    case 278u: goto L_0889969C;
    case 279u: goto L_088996CC;
    case 280u: goto L_088996F4;
    case 281u: goto L_088996FC;
    case 282u: goto L_08899710;
    case 283u: goto L_08899718;
    case 284u: goto L_08899720;
    case 285u: goto L_08899734;
    case 286u: goto L_0889973C;
    case 287u: goto L_08899758;
    case 288u: goto L_08899824;
    case 289u: goto L_08899830;
    case 290u: goto L_08899844;
    case 291u: goto L_08899868;
    case 292u: goto L_08899874;
    case 293u: goto L_08899888;
    case 294u: goto L_088998AC;
    case 295u: goto L_088998B8;
    case 296u: goto L_088998C8;
    case 297u: goto L_088998EC;
    case 298u: goto L_088998F8;
    case 299u: goto L_0889990C;
    case 300u: goto L_0889991C;
    case 301u: goto L_08899924;
    case 302u: goto L_0889992C;
    case 303u: goto L_08899934;
    case 304u: goto L_0889994C;
    case 305u: goto L_08899968;
    case 306u: goto L_0889997C;
    case 307u: goto L_08899990;
    case 308u: goto L_088999A4;
    case 309u: goto L_088999C4;
    case 310u: goto L_088999E4;
    case 311u: goto L_088999F0;
    case 312u: goto L_08899A10;
    case 313u: goto L_08899A30;
    case 314u: goto L_08899A3C;
    case 315u: goto L_08899A5C;
    case 316u: goto L_08899A7C;
    case 317u: goto L_08899A84;
    case 318u: goto L_08899AA4;
    case 319u: goto L_08899AC4;
    case 320u: goto L_08899AD0;
    case 321u: goto L_08899AF0;
    case 322u: goto L_08899B10;
    case 323u: goto L_08899B1C;
    case 324u: goto L_08899B48;
    case 325u: goto L_08899B5C;
    case 326u: goto L_08899B80;
    case 327u: goto L_08899BB4;
    case 328u: goto L_08899C80;
    case 329u: goto L_08899C8C;
    case 330u: goto L_08899CA0;
    case 331u: goto L_08899CC4;
    case 332u: goto L_08899CD0;
    case 333u: goto L_08899CE4;
    case 334u: goto L_08899D08;
    case 335u: goto L_08899D14;
    case 336u: goto L_08899D24;
    case 337u: goto L_08899D48;
    case 338u: goto L_08899D54;
    case 339u: goto L_08899D68;
    case 340u: goto L_08899D78;
    case 341u: goto L_08899D80;
    case 342u: goto L_08899D88;
    case 343u: goto L_08899D90;
    case 344u: goto L_08899DA8;
    case 345u: goto L_08899DC4;
    case 346u: goto L_08899DD8;
    case 347u: goto L_08899DEC;
    case 348u: goto L_08899E00;
    case 349u: goto L_08899E24;
    case 350u: goto L_08899E48;
    case 351u: goto L_08899E54;
    case 352u: goto L_08899E78;
    case 353u: goto L_08899E9C;
    case 354u: goto L_08899EA8;
    case 355u: goto L_08899ECC;
    case 356u: goto L_08899EF0;
    case 357u: goto L_08899EFC;
    case 358u: goto L_08899F20;
    case 359u: goto L_08899F44;
    case 360u: goto L_08899F50;
    case 361u: goto L_08899F74;
    case 362u: goto L_08899F98;
    case 363u: goto L_08899FAC;
    case 364u: goto L_08899FD0;
    case 365u: goto L_0889A004;
    case 366u: goto L_0889A0C8;
    case 367u: goto L_0889A0D4;
    case 368u: goto L_0889A0E8;
    case 369u: goto L_0889A10C;
    case 370u: goto L_0889A118;
    case 371u: goto L_0889A12C;
    case 372u: goto L_0889A150;
    case 373u: goto L_0889A15C;
    case 374u: goto L_0889A16C;
    case 375u: goto L_0889A190;
    case 376u: goto L_0889A19C;
    case 377u: goto L_0889A1B0;
    case 378u: goto L_0889A1C0;
    case 379u: goto L_0889A1C8;
    case 380u: goto L_0889A1D0;
    case 381u: goto L_0889A1D8;
    case 382u: goto L_0889A1EC;
    case 383u: goto L_0889A204;
    case 384u: goto L_0889A218;
    case 385u: goto L_0889A22C;
    case 386u: goto L_0889A240;
    case 387u: goto L_0889A260;
    case 388u: goto L_0889A280;
    case 389u: goto L_0889A2A0;
    case 390u: goto L_0889A2C0;
    case 391u: goto L_0889A2CC;
    case 392u: goto L_0889A2EC;
    case 393u: goto L_0889A30C;
    case 394u: goto L_0889A32C;
    case 395u: goto L_0889A338;
    case 396u: goto L_0889A358;
    case 397u: goto L_0889A378;
    case 398u: goto L_0889A384;
    case 399u: goto L_0889A3A4;
    case 400u: goto L_0889A3C4;
    case 401u: goto L_0889A3D0;
    case 402u: goto L_0889A3F0;
    case 403u: goto L_0889A410;
    case 404u: goto L_0889A420;
    case 405u: goto L_0889A444;
    case 406u: goto L_0889A478;
    case 407u: goto L_0889A52C;
    case 408u: goto L_0889A538;
    case 409u: goto L_0889A54C;
    case 410u: goto L_0889A570;
    case 411u: goto L_0889A57C;
    case 412u: goto L_0889A590;
    case 413u: goto L_0889A5B4;
    case 414u: goto L_0889A5C0;
    case 415u: goto L_0889A5D0;
    case 416u: goto L_0889A5F4;
    case 417u: goto L_0889A600;
    case 418u: goto L_0889A614;
    case 419u: goto L_0889A624;
    case 420u: goto L_0889A62C;
    case 421u: goto L_0889A634;
    case 422u: goto L_0889A63C;
    case 423u: goto L_0889A650;
    case 424u: goto L_0889A668;
    case 425u: goto L_0889A67C;
    case 426u: goto L_0889A690;
    case 427u: goto L_0889A6A4;
    case 428u: goto L_0889A6C0;
    case 429u: goto L_0889A6DC;
    case 430u: goto L_0889A6F8;
    case 431u: goto L_0889A714;
    case 432u: goto L_0889A720;
    case 433u: goto L_0889A73C;
    case 434u: goto L_0889A758;
    case 435u: goto L_0889A764;
    case 436u: goto L_0889A780;
    case 437u: goto L_0889A79C;
    case 438u: goto L_0889A7A8;
    case 439u: goto L_0889A7C4;
    case 440u: goto L_0889A7E0;
    case 441u: goto L_0889A7EC;
    case 442u: goto L_0889A808;
    case 443u: goto L_0889A824;
    case 444u: goto L_0889A834;
    case 445u: goto L_0889A858;
    case 446u: goto L_0889A888;
    case 447u: goto L_0889A944;
    case 448u: goto L_0889A950;
    case 449u: goto L_0889A964;
    case 450u: goto L_0889A984;
    case 451u: goto L_0889A990;
    case 452u: goto L_0889A9A4;
    case 453u: goto L_0889A9C4;
    case 454u: goto L_0889A9D0;
    case 455u: goto L_0889A9E0;
    case 456u: goto L_0889AA00;
    case 457u: goto L_0889AA0C;
    case 458u: goto L_0889AA20;
    case 459u: goto L_0889AA30;
    case 460u: goto L_0889AA38;
    case 461u: goto L_0889AA40;
    case 462u: goto L_0889AA48;
    case 463u: goto L_0889AA60;
    case 464u: goto L_0889AA7C;
    case 465u: goto L_0889AA90;
    case 466u: goto L_0889AAA4;
    case 467u: goto L_0889AAB8;
    case 468u: goto L_0889AAD8;
    case 469u: goto L_0889AAF8;
    case 470u: goto L_0889AB18;
    case 471u: goto L_0889AB38;
    case 472u: goto L_0889AB44;
    case 473u: goto L_0889AB64;
    case 474u: goto L_0889AB84;
    case 475u: goto L_0889AB90;
    case 476u: goto L_0889ABB0;
    case 477u: goto L_0889ABD0;
    case 478u: goto L_0889ABDC;
    case 479u: goto L_0889ABFC;
    case 480u: goto L_0889AC1C;
    case 481u: goto L_0889AC28;
    case 482u: goto L_0889AC48;
    case 483u: goto L_0889AC68;
    case 484u: goto L_0889AC7C;
    case 485u: goto L_0889AC80;
    case 486u: goto L_0889ACA0;
    case 487u: goto L_0889ACD0;
    case 488u: goto L_0889AD98;
    case 489u: goto L_0889ADA4;
    case 490u: goto L_0889ADB8;
    case 491u: goto L_0889ADE0;
    case 492u: goto L_0889ADEC;
    case 493u: goto L_0889AE00;
    case 494u: goto L_0889AE28;
    case 495u: goto L_0889AE34;
    case 496u: goto L_0889AE48;
    case 497u: goto L_0889AE70;
    case 498u: goto L_0889AE7C;
    case 499u: goto L_0889AE90;
    case 500u: goto L_0889AEA4;
    case 501u: goto L_0889AEB4;
    case 502u: goto L_0889AEBC;
    case 503u: goto L_0889AEC4;
    case 504u: goto L_0889AED8;
    case 505u: goto L_0889AF00;
    case 506u: goto L_0889AF14;
    case 507u: goto L_0889AF2C;
    case 508u: goto L_0889AF44;
    case 509u: goto L_0889AF68;
    case 510u: goto L_0889AF74;
    case 511u: goto L_0889AF98;
    case 512u: goto L_0889AFA4;
    case 513u: goto L_0889AFC8;
    case 514u: goto L_0889AFD4;
    case 515u: goto L_0889AFF8;
    case 516u: goto L_0889B004;
    case 517u: goto L_0889B00C;
    case 518u: goto L_0889B014;
    case 519u: goto L_0889B01C;
    case 520u: goto L_0889B024;
    case 521u: goto L_0889B030;
    case 522u: goto L_0889B054;
    case 523u: goto L_0889B060;
    case 524u: goto L_0889B084;
    case 525u: goto L_0889B090;
    case 526u: goto L_0889B098;
    case 527u: goto L_0889B0A0;
    case 528u: goto L_0889B0AC;
    case 529u: goto L_0889B0D0;
    case 530u: goto L_0889B0DC;
    case 531u: goto L_0889B100;
    case 532u: goto L_0889B10C;
    case 533u: goto L_0889B114;
    case 534u: goto L_0889B11C;
    case 535u: goto L_0889B128;
    case 536u: goto L_0889B14C;
    case 537u: goto L_0889B158;
    case 538u: goto L_0889B17C;
    case 539u: goto L_0889B188;
    case 540u: goto L_0889B190;
    case 541u: goto L_0889B198;
    case 542u: goto L_0889B1A4;
    case 543u: goto L_0889B1C8;
    case 544u: goto L_0889B1D4;
    case 545u: goto L_0889B1F8;
    case 546u: goto L_0889B204;
    case 547u: goto L_0889B20C;
    case 548u: goto L_0889B214;
    case 549u: goto L_0889B220;
    case 550u: goto L_0889B244;
    case 551u: goto L_0889B250;
    case 552u: goto L_0889B258;
    case 553u: goto L_0889B27C;
    case 554u: goto L_0889B2A0;
    case 555u: goto L_0889B2A4;
    case 556u: goto L_0889B2D8;
    case 557u: goto L_0889B338;
    case 558u: goto L_0889B34C;
    case 559u: goto L_0889B354;
    case 560u: goto L_0889B40C;
    case 561u: goto L_0889B418;
    case 562u: goto L_0889B43C;
    case 563u: goto L_0889B444;
    case 564u: goto L_0889B450;
    case 565u: goto L_0889B458;
    case 566u: goto L_0889B474;
    case 567u: goto L_0889B48C;
    case 568u: goto L_0889B494;
    case 569u: goto L_0889B4B4;
    case 570u: goto L_0889B4C4;
    case 571u: goto L_0889B4D4;
    case 572u: goto L_0889B4EC;
    case 573u: goto L_0889B4F4;
    case 574u: goto L_0889B4FC;
    case 575u: goto L_0889B504;
    case 576u: goto L_0889B514;
    case 577u: goto L_0889B578;
    case 578u: goto L_0889B5B8;
    case 579u: goto L_0889B5C4;
    case 580u: goto L_0889B5E0;
    case 581u: goto L_0889B5EC;
    case 582u: goto L_0889B5FC;
    case 583u: goto L_0889B614;
    case 584u: goto L_0889B618;
    case 585u: goto L_0889B620;
    case 586u: goto L_0889B630;
    case 587u: goto L_0889B63C;
    case 588u: goto L_0889B644;
    case 589u: goto L_0889B64C;
    case 590u: goto L_0889B654;
    case 591u: goto L_0889B664;
    case 592u: goto L_0889B670;
    case 593u: goto L_0889B678;
    case 594u: goto L_0889B67C;
    case 595u: goto L_0889B6AC;
    case 596u: goto L_0889B708;
    case 597u: goto L_0889B714;
    case 598u: goto L_0889B71C;
    case 599u: goto L_0889B72C;
    case 600u: goto L_0889B734;
    case 601u: goto L_0889B748;
    case 602u: goto L_0889B750;
    case 603u: goto L_0889B754;
    case 604u: goto L_0889B75C;
    case 605u: goto L_0889B764;
    case 606u: goto L_0889B76C;
    case 607u: goto L_0889B774;
    case 608u: goto L_0889B77C;
    case 609u: goto L_0889B7BC;
    case 610u: goto L_0889B7C4;
    case 611u: goto L_0889B7D4;
    case 612u: goto L_0889B7E8;
    case 613u: goto L_0889B7F4;
    case 614u: goto L_0889B7FC;
    case 615u: goto L_0889B80C;
    case 616u: goto L_0889B814;
    case 617u: goto L_0889B828;
    case 618u: goto L_0889B830;
    case 619u: goto L_0889B834;
    case 620u: goto L_0889B840;
    case 621u: goto L_0889B884;
    case 622u: goto L_0889B894;
    case 623u: goto L_0889B8A0;
    case 624u: goto L_0889B8A8;
    case 625u: goto L_0889B8B0;
    case 626u: goto L_0889B8BC;
    case 627u: goto L_0889B8C8;
    case 628u: goto L_0889B8D0;
    case 629u: goto L_0889B8DC;
    case 630u: goto L_0889B8E8;
    case 631u: goto L_0889B8FC;
    case 632u: goto L_0889B908;
    case 633u: goto L_0889B910;
    case 634u: goto L_0889B920;
    case 635u: goto L_0889B930;
    case 636u: goto L_0889B938;
    case 637u: goto L_0889B948;
    case 638u: goto L_0889B954;
    case 639u: goto L_0889B958;
    case 640u: goto L_0889B96C;
    case 641u: goto L_0889B974;
    case 642u: goto L_0889B980;
    case 643u: goto L_0889B988;
    case 644u: goto L_0889B9A4;
    case 645u: goto L_0889B9B4;
    case 646u: goto L_0889B9B8;
    case 647u: goto L_0889B9CC;
    case 648u: goto L_0889B9E8;
    case 649u: goto L_0889B9FC;
    case 650u: goto L_0889BA10;
    case 651u: goto L_0889BA18;
    case 652u: goto L_0889BA20;
    case 653u: goto L_0889BA28;
    case 654u: goto L_0889BA34;
    case 655u: goto L_0889BA6C;
    case 656u: goto L_0889BAD8;
    case 657u: goto L_0889BB00;
    case 658u: goto L_0889BB18;
    case 659u: goto L_0889BB28;
    case 660u: goto L_0889BB30;
    case 661u: goto L_0889BB4C;
    case 662u: goto L_0889BB64;
    case 663u: goto L_0889BB7C;
    case 664u: goto L_0889BB94;
    case 665u: goto L_0889BBA4;
    case 666u: goto L_0889BBB4;
    case 667u: goto L_0889BBC4;
    case 668u: goto L_0889BBD4;
    case 669u: goto L_0889BBE4;
    case 670u: goto L_0889BC28;
    case 671u: goto L_0889BC58;
    case 672u: goto L_0889BC84;
    case 673u: goto L_0889BCA8;
    case 674u: goto L_0889BCCC;
    case 675u: goto L_0889BCF0;
    case 676u: goto L_0889BCF4;
    case 677u: goto L_0889BD08;
    case 678u: goto L_0889BD10;
    case 679u: goto L_0889BD38;
    case 680u: goto L_0889BD50;
    case 681u: goto L_0889BD5C;
    case 682u: goto L_0889BD74;
    case 683u: goto L_0889BD78;
    case 684u: goto L_0889BD8C;
    case 685u: goto L_0889BDA4;
    case 686u: goto L_0889BDB0;
    case 687u: goto L_0889BDC8;
    case 688u: goto L_0889BDD0;
    case 689u: goto L_0889BDD8;
    case 690u: goto L_0889BDE0;
    case 691u: goto L_0889BE28;
    case 692u: goto L_0889BEA0;
    case 693u: goto L_0889BEB8;
    case 694u: goto L_0889BEC0;
    case 695u: goto L_0889BEE0;
    case 696u: goto L_0889BF00;
    case 697u: goto L_0889BF08;
    case 698u: goto L_0889BF14;
    case 699u: goto L_0889BF34;
    case 700u: goto L_0889BF38;
    case 701u: goto L_0889BF40;
    case 702u: goto L_0889BF4C;
    case 703u: goto L_0889BF6C;
    case 704u: goto L_0889BF74;
    case 705u: goto L_0889BF84;
    case 706u: goto L_0889BFC0;
    case 707u: goto L_0889BFD8;
    case 708u: goto L_0889BFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08898000:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    f12 = hot_regs.f15 / f12;
    g6 = (16880u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g18 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(hot_regs.g5) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    if (g6 != 0u) {
    g18 = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
        goto L_08898024;
    }
    goto L_08898024;
}
}
L_08898024:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08898030;
    }
    goto L_08898030;
L_08898030:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16880u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g20 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    if (g6 != 0u) {
    g20 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
        goto L_08898068;
    }
    goto L_08898068;
}
}
L_08898068:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[20] = (hot_regs.g4 | 0u);
        goto L_08898074;
    }
    goto L_08898074;
L_08898074:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g16 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    if (g6 != 0u) {
    g16 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
        goto L_088980AC;
    }
    goto L_088980AC;
}
}
L_088980AC:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
        goto L_088980B8;
    }
    goto L_088980B8;
L_088980B8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g19 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (g6 != 0u) {
    g19 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
        goto L_088980F0;
    }
    goto L_088980F0;
}
}
L_088980F0:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_088980FC;
    }
    goto L_088980FC;
L_088980FC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (17056u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f13 = f13 - f15;
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = f12 / f14;
    g6 = (16840u << 16u);
    f15 = std::bit_cast<float>(g6);
    f12 = f12 + f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08898154;
    }
    goto L_08898154;
}
}
L_08898154:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
        goto L_08898164;
    }
    goto L_08898164;
}
L_08898164:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898220;
      }
      goto L_08898170;
    }
L_08898170:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898218;
      }
      goto L_0889817C;
    }
L_0889817C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(700), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088981B8u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088981B8u) goto L_088981B8;
    return;
L_088981B8:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g31 = (0x08898208u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898208u) goto L_08898208;
    return;
L_08898208:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(700)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889817C;
      }
      goto L_08898218;
    }
}
L_08898218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088982C8;
      }
      goto L_08898220;
    }
L_08898220:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088982C8;
      }
      goto L_0889822C;
    }
L_0889822C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(700), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(288));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898268u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898268u) goto L_08898268;
    return;
L_08898268:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g31 = (0x088982B8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088982B8u) goto L_088982B8;
    return;
L_088982B8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(700)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889822C;
      }
      goto L_088982C8;
    }
}
L_088982C8:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088984B8;
      }
      goto L_088982DC;
    }
}
L_088982DC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-29));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (17056u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f13 = f13 - f15;
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = f12 / f14;
    g6 = (16840u << 16u);
    f15 = std::bit_cast<float>(g6);
    f12 = f12 + f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g17 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    if (g6 != 0u) {
    g17 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08898334;
    }
    goto L_08898334;
}
}
L_08898334:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
        goto L_08898340;
    }
    goto L_08898340;
L_08898340:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088983FC;
      }
      goto L_0889834C;
    }
L_0889834C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088983F4;
      }
      goto L_08898358;
    }
L_08898358:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(336));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898394u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898394u) goto L_08898394;
    return;
L_08898394:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g31 = (0x088983E4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088983E4u) goto L_088983E4;
    return;
L_088983E4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(704)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898358;
      }
      goto L_088983F4;
    }
}
L_088983F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088984A4;
      }
      goto L_088983FC;
    }
L_088983FC:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088984A4;
      }
      goto L_08898408;
    }
L_08898408:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(704), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898444u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898444u) goto L_08898444;
    return;
L_08898444:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g2);
    hot_regs.g31 = (0x08898494u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898494u) goto L_08898494;
    return;
L_08898494:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(704)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898408;
      }
      goto L_088984A4;
    }
}
L_088984A4:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088982DC;
      }
      goto L_088984B8;
    }
}
L_088984B8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_0889856C;
      }
      goto L_088984C4;
    }
L_088984C4:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898564;
      }
      goto L_088984D0;
    }
L_088984D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[20] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(400));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898508u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898508u) goto L_08898508;
    return;
L_08898508:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g31 = (0x08898554u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898554u) goto L_08898554;
    return;
L_08898554:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088984D0;
      }
      goto L_08898564;
    }
}
L_08898564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889860C;
      }
      goto L_0889856C;
    }
L_0889856C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889860C;
      }
      goto L_08898578;
    }
L_08898578:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[20] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(432));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088985B0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088985B0u) goto L_088985B0;
    return;
L_088985B0:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g31 = (0x088985FCu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088985FCu) goto L_088985FC;
    return;
L_088985FC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898578;
      }
      goto L_0889860C;
    }
}
L_0889860C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898C4C;
      }
      goto L_08898614;
    }
L_08898614:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g18 = ctx.gpr[18];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    f20 = f12 - f13;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f14 = f14 - f15;
    f20 = f20 / f14;
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    g6 = (17056u << 16u);
    f12 = std::bit_cast<float>(g6);
    f12 = f15 / f12;
    g6 = (16880u << 16u);
    f13 = std::bit_cast<float>(g6);
    f12 = f12 + f13;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g18 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    if (g6 != 0u) {
    g18 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
        goto L_08898664;
    }
    goto L_08898664;
}
}
L_08898664:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[18] = (hot_regs.g4 | 0u);
        goto L_08898670;
    }
    goto L_08898670;
L_08898670:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g20 = ctx.gpr[20];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16880u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g20 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g20) ? 1u : 0u);
    if (g6 != 0u) {
    g20 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[20] = g20;
    hot_regs.f12 = f12;
        goto L_088986A8;
    }
    goto L_088986A8;
}
}
L_088986A8:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[20] = (hot_regs.g4 | 0u);
        goto L_088986B4;
    }
    goto L_088986B4;
L_088986B4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g16 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    if (g6 != 0u) {
    g16 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
        goto L_088986EC;
    }
    goto L_088986EC;
}
}
L_088986EC:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
        goto L_088986F8;
    }
    goto L_088986F8;
L_088986F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    hot_regs.g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    g6 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g6);
    f12 = f12 / hot_regs.f13;
    g6 = (16840u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g19 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g19) ? 1u : 0u);
    if (g6 != 0u) {
    g19 = (g5 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
        goto L_08898730;
    }
    goto L_08898730;
}
}
L_08898730:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[19] = (hot_regs.g4 | 0u);
        goto L_0889873C;
    }
    goto L_0889873C;
L_0889873C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (17056u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f13 = f13 - f15;
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = f12 / f14;
    g6 = (16840u << 16u);
    f15 = std::bit_cast<float>(g6);
    f12 = f12 + f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g7 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g6 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08898794;
    }
    goto L_08898794;
}
}
L_08898794:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g6 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    g17 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
        goto L_088987A4;
    }
    goto L_088987A4;
}
L_088987A4:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898860;
      }
      goto L_088987B0;
    }
L_088987B0:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898858;
      }
      goto L_088987BC;
    }
L_088987BC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(708), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(480));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088987F8u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088987F8u) goto L_088987F8;
    return;
L_088987F8:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    hot_regs.g31 = (0x08898848u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898848u) goto L_08898848;
    return;
L_08898848:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(708)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088987BC;
      }
      goto L_08898858;
    }
}
L_08898858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898908;
      }
      goto L_08898860;
    }
L_08898860:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898908;
      }
      goto L_0889886C;
    }
L_0889886C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(708), ctx.gpr[19]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[19] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(512));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088988A8u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088988A8u) goto L_088988A8;
    return;
L_088988A8:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    hot_regs.g31 = (0x088988F8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088988F8u) goto L_088988F8;
    return;
L_088988F8:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(708)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889886C;
      }
      goto L_08898908;
    }
}
L_08898908:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08898AF8;
      }
      goto L_0889891C;
    }
}
L_0889891C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-30));
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    g4 = (17056u << 16u);
    f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f13 = f13 - f15;
    { const float fs = f13; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    g4 = (0u | 0u);
    g5 = (0u | 49u);
    f12 = f12 / f14;
    g6 = (16840u << 16u);
    f15 = std::bit_cast<float>(g6);
    f12 = f12 + f15;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g17 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g17) ? 1u : 0u);
    if (g6 != 0u) {
    g17 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
        goto L_08898974;
    }
    goto L_08898974;
}
}
L_08898974:
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
        goto L_08898980;
    }
    goto L_08898980;
L_08898980:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898A3C;
      }
      goto L_0889898C;
    }
L_0889898C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898A34;
      }
      goto L_08898998;
    }
L_08898998:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(712), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(560));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088989D4u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088989D4u) goto L_088989D4;
    return;
L_088989D4:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    hot_regs.g31 = (0x08898A24u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898A24u) goto L_08898A24;
    return;
L_08898A24:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(712)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898998;
      }
      goto L_08898A34;
    }
}
L_08898A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898AE4;
      }
      goto L_08898A3C;
    }
L_08898A3C:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898AE4;
      }
      goto L_08898A48;
    }
L_08898A48:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[18] + hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(712), ctx.gpr[18]);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(592));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898A84u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898A84u) goto L_08898A84;
    return;
L_08898A84:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    hot_regs.g31 = (0x08898AD4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898AD4u) goto L_08898AD4;
    return;
L_08898AD4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(712)));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898A48;
      }
      goto L_08898AE4;
    }
}
L_08898AE4:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    g18 = (g18 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0889891C;
      }
      goto L_08898AF8;
    }
}
L_08898AF8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(688)));
      if (branch_taken) {
          goto L_08898BAC;
      }
      goto L_08898B04;
    }
L_08898B04:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898BA4;
      }
      goto L_08898B10;
    }
L_08898B10:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[20] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(624));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898B48u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898B48u) goto L_08898B48;
    return;
L_08898B48:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g31 = (0x08898B94u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898B94u) goto L_08898B94;
    return;
L_08898B94:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898B10;
      }
      goto L_08898BA4;
    }
}
L_08898BA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898C4C;
      }
      goto L_08898BAC;
    }
L_08898BAC:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08898C4C;
      }
      goto L_08898BB8;
    }
L_08898BB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    hot_regs.g5 = (ctx.gpr[16] << 4u);
    hot_regs.g6 = (ctx.gpr[16] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (ctx.gpr[20] + hot_regs.g5);
    hot_regs.g6 = (hot_regs.g5 << 6u);
    hot_regs.g5 = (hot_regs.g5 << 3u);
    hot_regs.g5 = (hot_regs.g6 - hot_regs.g5);
    ctx.gpr[18] = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(656));
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08898BF0u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 61u, 0x08AA0468u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898BF0u) goto L_08898BF0;
    return;
L_08898BF0:
    hot_regs.g7 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(696)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(695)));
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(694)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(693)));
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(692)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g2);
    hot_regs.g2 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(691)));
    ctx.gpr[3] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(690)));
    ctx.gpr[12] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(689)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g2);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    hot_regs.g31 = (0x08898C3Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 333u, 0x08895844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898C3Cu) goto L_08898C3C;
    return;
L_08898C3C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898BB8;
      }
      goto L_08898C4C;
    }
}
L_08898C4C:
    hot_regs.g4 = (0u | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (0u | 1u);
        goto L_08898C6C;
    }
    goto L_08898C6C;
L_08898C6C:
    hot_regs.g2 = (hot_regs.g4 & 255u);
    goto L_08898C70;
L_08898C70:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(716)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(720)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(724)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(728)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(732)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(736)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(740)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(744)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(748)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(752)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(756)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(768));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08898CA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 63u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08898CD4;
      }
      goto L_08898CCC;
    }
}
L_08898CCC:
    hot_regs.g31 = (0x08898CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 385u, 0x08A92DB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898CD4u) goto L_08898CD4;
    return;
L_08898CD4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8424)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898DE4;
      }
      goto L_08898CE0;
    }
L_08898CE0:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 50 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898DCC;
      }
      goto L_08898CF0;
    }
L_08898CF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
        goto L_08898D08;
    }
    goto L_08898CFC;
}
L_08898CFC:
    hot_regs.g31 = (0x08898D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D04u) goto L_08898D04;
    return;
L_08898D04:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08898D08;
L_08898D08:
    hot_regs.g31 = (0x08898D10u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 95u, 0x0884C914u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D10u) goto L_08898D10;
    return;
L_08898D10:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898DBC;
      }
      goto L_08898D1C;
    }
L_08898D1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898DBC;
      }
      goto L_08898D28;
    }
L_08898D28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(136));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08898D40u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D40u) goto L_08898D40;
    return;
L_08898D40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898D58u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D58u) goto L_08898D58;
    return;
L_08898D58:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898D6C;
      }
      goto L_08898D64;
    }
L_08898D64:
    hot_regs.g31 = (0x08898D6Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D6Cu) goto L_08898D6C;
    return;
L_08898D6C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(88));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08898D84u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D84u) goto L_08898D84;
    return;
L_08898D84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898D9Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898D9Cu) goto L_08898D9C;
    return;
L_08898D9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898DAC;
      }
      goto L_08898DA4;
    }
L_08898DA4:
    hot_regs.g31 = (0x08898DACu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898DACu) goto L_08898DAC;
    return;
L_08898DAC:
    hot_regs.g31 = (0x08898DB4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898DB4u) goto L_08898DB4;
    return;
L_08898DB4:
    hot_regs.g31 = (0x08898DBCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898DBCu) goto L_08898DBC;
    return;
L_08898DBC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 50 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08898CF0;
      }
      goto L_08898DCC;
    }
}
L_08898DCC:
    hot_regs.g31 = (0x08898DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 158u, 0x08990B78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898DD4u) goto L_08898DD4;
    return;
L_08898DD4:
    hot_regs.g31 = (0x08898DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 157u, 0x08990B70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898DDCu) goto L_08898DDC;
    return;
L_08898DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889973C;
      }
      goto L_08898DE4;
    }
L_08898DE4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898E58;
      }
      goto L_08898DF0;
    }
L_08898DF0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[16] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08898E10;
      }
      goto L_08898E08;
    }
}
L_08898E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898E50;
      }
      goto L_08898E10;
    }
L_08898E10:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898E38;
      }
      goto L_08898E1C;
    }
L_08898E1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08898E38;
      }
      goto L_08898E30;
    }
}
L_08898E30:
    hot_regs.g31 = (0x08898E38u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 698u, 0x0890EFA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E38u) goto L_08898E38;
    return;
L_08898E38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(136));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898E50u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E50u) goto L_08898E50;
    return;
L_08898E50:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08898DF0;
      }
      goto L_08898E58;
    }
L_08898E58:
    hot_regs.g31 = (0x08898E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 443u, 0x08896270u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E60u) goto L_08898E60;
    return;
L_08898E60:
    hot_regs.g31 = (0x08898E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 69u, 0x088188D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E68u) goto L_08898E68;
    return;
L_08898E68:
    hot_regs.g31 = (0x08898E70u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 236u, 0x088195ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E70u) goto L_08898E70;
    return;
L_08898E70:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898FC0;
      }
      goto L_08898E7C;
    }
L_08898E7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08898EA4;
      }
      goto L_08898E94;
    }
}
L_08898E94:
    hot_regs.g31 = (0x08898E9Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 93u, 0x088947D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898E9Cu) goto L_08898E9C;
    return;
L_08898E9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08898FB8;
      }
      goto L_08898EA4;
    }
L_08898EA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    hot_regs.g4 = g4;
        goto L_08898EBC;
    }
    goto L_08898EB0;
}
L_08898EB0:
    hot_regs.g31 = (0x08898EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 683u, 0x08B66DBCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898EB8u) goto L_08898EB8;
    return;
L_08898EB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5884)));
    goto L_08898EBC;
L_08898EBC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08898ED0;
      }
      goto L_08898EC8;
    }
}
L_08898EC8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08898F24;
      }
      goto L_08898ED0;
    }
L_08898ED0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(40));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898EE8u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898EE8u) goto L_08898EE8;
    return;
L_08898EE8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898EF8;
      }
      goto L_08898EF0;
    }
L_08898EF0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08898F24;
      }
      goto L_08898EF8;
    }
L_08898EF8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08898F24;
      }
      goto L_08898F18;
    }
}
L_08898F18:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(619))))));
    g5 = (g5 | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(619), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08898F24;
}
L_08898F24:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898F80;
      }
      goto L_08898F2C;
    }
L_08898F2C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898F44u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898F44u) goto L_08898F44;
    return;
L_08898F44:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898F58;
      }
      goto L_08898F50;
    }
L_08898F50:
    hot_regs.g31 = (0x08898F58u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898F58u) goto L_08898F58;
    return;
L_08898F58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(88));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08898F70u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898F70u) goto L_08898F70;
    return;
L_08898F70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08898F80;
      }
      goto L_08898F78;
    }
L_08898F78:
    hot_regs.g31 = (0x08898F80u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898F80u) goto L_08898F80;
    return;
L_08898F80:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08898FA0;
      }
      goto L_08898F90;
    }
}
L_08898F90:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08898FA8;
      }
      goto L_08898FA0;
    }
}
L_08898FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08898FA8;
}
L_08898FA8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08898FB8;
      }
      goto L_08898FB0;
    }
L_08898FB0:
    hot_regs.g31 = (0x08898FB8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08898FB8u) goto L_08898FB8;
    return;
L_08898FB8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08898E7C;
      }
      goto L_08898FC0;
    }
L_08898FC0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(7893), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088990AC;
      }
      goto L_08898FD4;
    }
L_08898FD4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088990A4;
      }
      goto L_08898FF8;
    }
}
L_08898FF8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899018;
      }
      goto L_08899008;
    }
}
L_08899008:
    hot_regs.g31 = (0x08899010u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 93u, 0x088947D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899010u) goto L_08899010;
    return;
L_08899010:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088990A4;
      }
      goto L_08899018;
    }
L_08899018:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08899030u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899030u) goto L_08899030;
    return;
L_08899030:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899044;
      }
      goto L_0889903C;
    }
L_0889903C:
    hot_regs.g31 = (0x08899044u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899044u) goto L_08899044;
    return;
L_08899044:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(88));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0889905Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889905Cu) goto L_0889905C;
    return;
L_0889905C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889906C;
      }
      goto L_08899064;
    }
L_08899064:
    hot_regs.g31 = (0x0889906Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889906Cu) goto L_0889906C;
    return;
L_0889906C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889908C;
      }
      goto L_0889907C;
    }
}
L_0889907C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    g5 = (g5 & 2048u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 & 255u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08899094;
      }
      goto L_0889908C;
    }
}
L_0889908C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_08899094;
}
L_08899094:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088990A4;
      }
      goto L_0889909C;
    }
L_0889909C:
    hot_regs.g31 = (0x088990A4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 475u, 0x08A660DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088990A4u) goto L_088990A4;
    return;
L_088990A4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08898FD4;
      }
      goto L_088990AC;
    }
L_088990AC:
{
    std::uint32_t g28 = ctx.gpr[28];
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(7893), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(8421), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899158;
      }
      goto L_088990C0;
    }
}
L_088990C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08899150;
      }
      goto L_088990E0;
    }
}
L_088990E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088990F8u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088990F8u) goto L_088990F8;
    return;
L_088990F8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889910C;
      }
      goto L_08899104;
    }
L_08899104:
    hot_regs.g31 = (0x0889910Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889910Cu) goto L_0889910C;
    return;
L_0889910C:
    hot_regs.g31 = (0x08899114u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 195u, 0x08891738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899114u) goto L_08899114;
    return;
L_08899114:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0889912Cu);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889912Cu) goto L_0889912C;
    return;
L_0889912C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8428), 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899140;
      }
      goto L_08899138;
    }
L_08899138:
    hot_regs.g31 = (0x08899140u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899140u) goto L_08899140;
    return;
L_08899140:
    hot_regs.g31 = (0x08899148u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899148u) goto L_08899148;
    return;
L_08899148:
    hot_regs.g31 = (0x08899150u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899150u) goto L_08899150;
    return;
L_08899150:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088990C0;
      }
      goto L_08899158;
    }
L_08899158:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8421), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899224;
      }
      goto L_08899170;
    }
}
L_08899170:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899214;
      }
      goto L_0889917C;
    }
L_0889917C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    ctx.gpr[18] = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0889920C;
      }
      goto L_0889919C;
    }
}
L_0889919C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088991B4u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088991B4u) goto L_088991B4;
    return;
L_088991B4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088991C8;
      }
      goto L_088991C0;
    }
L_088991C0:
    hot_regs.g31 = (0x088991C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088991C8u) goto L_088991C8;
    return;
L_088991C8:
    hot_regs.g31 = (0x088991D0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 195u, 0x08891738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088991D0u) goto L_088991D0;
    return;
L_088991D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088991E8u);
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088991E8u) goto L_088991E8;
    return;
L_088991E8:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8428), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088991FC;
      }
      goto L_088991F4;
    }
L_088991F4:
    hot_regs.g31 = (0x088991FCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088991FCu) goto L_088991FC;
    return;
L_088991FC:
    hot_regs.g31 = (0x08899204u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899204u) goto L_08899204;
    return;
L_08899204:
    hot_regs.g31 = (0x0889920Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889920Cu) goto L_0889920C;
    return;
L_0889920C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889917C;
      }
      goto L_08899214;
    }
L_08899214:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08899170;
      }
      goto L_08899224;
    }
}
L_08899224:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899314;
      }
      goto L_08899230;
    }
L_08899230:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0889930C;
      }
      goto L_08899250;
    }
}
L_08899250:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g4 & 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-16385));
    hot_regs.g5 = (hot_regs.g5 & hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 14u);
    hot_regs.g4 = (hot_regs.g5 | hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(168));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x08899288u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899288u) goto L_08899288;
    return;
L_08899288:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889929C;
      }
      goto L_08899294;
    }
L_08899294:
    hot_regs.g31 = (0x0889929Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 457u, 0x089C62C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889929Cu) goto L_0889929C;
    return;
L_0889929C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088992B4u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088992B4u) goto L_088992B4;
    return;
L_088992B4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088992C4;
      }
      goto L_088992BC;
    }
L_088992BC:
    hot_regs.g31 = (0x088992C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 450u, 0x089C6278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088992C4u) goto L_088992C4;
    return;
L_088992C4:
    hot_regs.g31 = (0x088992CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088992CCu) goto L_088992CC;
    return;
L_088992CC:
    hot_regs.g31 = (0x088992D4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088992D4u) goto L_088992D4;
    return;
L_088992D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889930C;
      }
      goto L_088992EC;
    }
}
L_088992EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u | 1u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-16385));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 14u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889930C;
}
L_0889930C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08899230;
      }
      goto L_08899314;
    }
L_08899314:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8425), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088993AC;
      }
      goto L_08899324;
    }
L_08899324:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[16] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088993A4;
      }
      goto L_08899344;
    }
}
L_08899344:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(104));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x0889935Cu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889935Cu) goto L_0889935C;
    return;
L_0889935C:
    hot_regs.g31 = (0x08899364u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899364u) goto L_08899364;
    return;
L_08899364:
    hot_regs.g31 = (0x0889936Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889936Cu) goto L_0889936C;
    return;
L_0889936C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088993A4;
      }
      goto L_08899384;
    }
}
L_08899384:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u | 1u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-16385));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 14u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088993A4;
}
L_088993A4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08899324;
      }
      goto L_088993AC;
    }
L_088993AC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(8425), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088994C4;
      }
      goto L_088993C0;
    }
L_088993C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[16] = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088994BC;
      }
      goto L_088993E0;
    }
}
L_088993E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(104));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088993F8u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088993F8u) goto L_088993F8;
    return;
L_088993F8:
    hot_regs.g31 = (0x08899400u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899400u) goto L_08899400;
    return;
L_08899400:
    hot_regs.g31 = (0x08899408u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899408u) goto L_08899408;
    return;
L_08899408:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 32768u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088994BC;
      }
      goto L_08899420;
    }
}
L_08899420:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u | 1u);
    g4 = (g4 & 1u);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-16385));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 << 14u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), g4);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08899454;
      }
      goto L_0889944C;
    }
}
L_0889944C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08899454;
      }
      goto L_08899454;
    }
L_08899454:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088994BC;
      }
      goto L_0889945C;
    }
L_0889945C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25500)));
    hot_regs.g31 = (0x08899468u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 219u, 0x08891948u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899468u) goto L_08899468;
    return;
L_08899468:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0889948Cu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889948Cu) goto L_0889948C;
    return;
L_0889948C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(192));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088994A4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088994A4u) goto L_088994A4;
    return;
L_088994A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(200));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x088994BCu);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088994BCu) goto L_088994BC;
    return;
L_088994BC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088993C0;
      }
      goto L_088994C4;
    }
L_088994C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7636)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899678;
      }
      goto L_088994D0;
    }
L_088994D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g16 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 6u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08899638;
      }
      goto L_088994EC;
    }
}
L_088994EC:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088994F8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 195u, 0x08910B38u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088994F8u) goto L_088994F8;
    return;
L_088994F8:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
        goto L_08899514;
    }
    goto L_08899500;
L_08899500:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 53u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08899530;
      }
      goto L_08899510;
    }
L_08899510:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    goto L_08899514;
L_08899514:
    hot_regs.g5 = (0u | 61u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08899530;
      }
      goto L_08899520;
    }
L_08899520:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 59u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889960C;
      }
      goto L_08899530;
    }
L_08899530:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088995F0;
      }
      goto L_0889953C;
    }
L_0889953C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2228)));
    g5 = (g4 + static_cast<std::uint32_t>(-57));
    g5 = (g5 < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(-57));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088995D0;
      }
      goto L_08899550;
    }
}
L_08899550:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-22856)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08899568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995D8;
      }
      goto L_08899570;
    }
L_08899570:
    hot_regs.g31 = (0x08899578u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 714u, 0x089AEEB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899578u) goto L_08899578;
    return;
L_08899578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995D8;
      }
      goto L_08899580;
    }
L_08899580:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2232)));
    hot_regs.g5 = (0u | 60u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088995A0;
      }
      goto L_08899590;
    }
L_08899590:
    hot_regs.g31 = (0x08899598u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 610u, 0x089AE7A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899598u) goto L_08899598;
    return;
L_08899598:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995A8;
      }
      goto L_088995A0;
    }
L_088995A0:
    hot_regs.g31 = (0x088995A8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995A8u) goto L_088995A8;
    return;
L_088995A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995D8;
      }
      goto L_088995B0;
    }
L_088995B0:
    hot_regs.g31 = (0x088995B8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 610u, 0x089AE7A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995B8u) goto L_088995B8;
    return;
L_088995B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995D8;
      }
      goto L_088995C0;
    }
L_088995C0:
    hot_regs.g31 = (0x088995C8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 333u, 0x089AD2F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995C8u) goto L_088995C8;
    return;
L_088995C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088995D8;
      }
      goto L_088995D0;
    }
L_088995D0:
    hot_regs.g31 = (0x088995D8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 107u, 0x0892892Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995D8u) goto L_088995D8;
    return;
L_088995D8:
    hot_regs.g31 = (0x088995E0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995E0u) goto L_088995E0;
    return;
L_088995E0:
    hot_regs.g31 = (0x088995E8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995E8u) goto L_088995E8;
    return;
L_088995E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08899630;
      }
      goto L_088995F0;
    }
L_088995F0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088995FCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088995FCu) goto L_088995FC;
    return;
L_088995FC:
    hot_regs.g31 = (0x08899604u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899604u) goto L_08899604;
    return;
L_08899604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08899630;
      }
      goto L_0889960C;
    }
L_0889960C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2120)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899630;
      }
      goto L_08899618;
    }
L_08899618:
    hot_regs.g31 = (0x08899620u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 149u, 0x0892CEB0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899620u) goto L_08899620;
    return;
L_08899620:
    hot_regs.g31 = (0x08899628u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899628u) goto L_08899628;
    return;
L_08899628:
    hot_regs.g31 = (0x08899630u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899630u) goto L_08899630;
    return;
L_08899630:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08899670;
      }
      goto L_08899638;
    }
L_08899638:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    hot_regs.g5 = (0u | 8u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899670;
      }
      goto L_0889964C;
    }
}
L_0889964C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899670;
      }
      goto L_08899658;
    }
L_08899658:
    hot_regs.g31 = (0x08899660u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 436u, 0x0882BBDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899660u) goto L_08899660;
    return;
L_08899660:
    hot_regs.g31 = (0x08899668u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899668u) goto L_08899668;
    return;
L_08899668:
    hot_regs.g31 = (0x08899670u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 66u, 0x08AD065Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899670u) goto L_08899670;
    return;
L_08899670:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088994D0;
      }
      goto L_08899678;
    }
L_08899678:
    hot_regs.g31 = (0x08899680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 169u, 0x08AB8BACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899680u) goto L_08899680;
    return;
L_08899680:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08899694;
      }
      goto L_0889968C;
    }
L_0889968C:
    hot_regs.g31 = (0x08899694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 748u, 0x08B671D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899694u) goto L_08899694;
    return;
L_08899694:
    hot_regs.g31 = (0x0889969Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5888)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 273u, 0x0886DAC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889969Cu) goto L_0889969C;
    return;
L_0889969C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 << 8u);
    hot_regs.g6 = (g4 + g4);
    g4 = (g4 + hot_regs.g6);
    g4 = (g4 << 5u);
    g4 = (g5 + g4);
    g5 = (2238u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088996F4;
      }
      goto L_088996CC;
    }
}
L_088996CC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 << 8u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g31 = (0x088996F4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 282u, 0x08961854u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088996F4u) goto L_088996F4;
    return;
L_088996F4:
    hot_regs.g31 = (0x088996FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 157u, 0x08990B70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088996FCu) goto L_088996FC;
    return;
L_088996FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 7u);
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899720;
      }
      goto L_08899710;
    }
}
L_08899710:
    hot_regs.g31 = (0x08899718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 665u, 0x08893FDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899718u) goto L_08899718;
    return;
L_08899718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889973C;
      }
      goto L_08899720;
    }
L_08899720:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7764)));
    g4 = (g4 & 7u);
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889973C;
      }
      goto L_08899734;
    }
}
L_08899734:
    hot_regs.g31 = (0x0889973Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 23u, 0x08894244u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889973Cu) goto L_0889973C;
    return;
L_0889973C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08899758:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g30);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g31);
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g17 = (g4 | 0u);
    ctx.gpr[20] = (g5 & 255u);
    g19 = (g7 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    g4 = (ctx.gpr[9] & 255u);
    g5 = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g4);
    g4 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(g5));
    g30 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g30 = (g30 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    g4 = (0u | 49u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    f14 = f12 - f20;
    g5 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f15 = f14 / hot_regs.f13;
    g5 = (16880u << 16u);
    f14 = std::bit_cast<float>(g5);
    f15 = f15 + f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (16840u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
        goto L_08899824;
    }
    goto L_08899824;
}
}
L_08899824:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899830;
    }
    goto L_08899830;
L_08899830:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[23] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_08899844;
    }
    goto L_08899844;
}
L_08899844:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f17 = hot_regs.f15 - hot_regs.f20;
    f17 = f17 / hot_regs.f13;
    f17 = f17 + ctx.fpr[16];
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.fpr[17] = f17;
        goto L_08899868;
    }
    goto L_08899868;
}
}
L_08899868:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899874;
    }
    goto L_08899874;
L_08899874:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_08899888;
    }
    goto L_08899888;
}
L_08899888:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = f12 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_088998AC;
    }
    goto L_088998AC;
}
}
L_088998AC:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_088998B8;
    }
    goto L_088998B8;
L_088998B8:
    ctx.gpr[22] = (0u | 49u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 49 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[22] = (hot_regs.g5 | 0u);
        goto L_088998C8;
    }
    goto L_088998C8;
L_088998C8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = hot_regs.f15 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + ctx.fpr[16];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_088998EC;
    }
    goto L_088998EC;
}
}
L_088998EC:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_088998F8;
    }
    goto L_088998F8;
L_088998F8:
    hot_regs.g6 = (0u | 49u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 49 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g5);
        goto L_0889990C;
    }
    goto L_0889990C;
L_0889990C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 65535u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08899924;
      }
      goto L_0889991C;
    }
}
L_0889991C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08899934;
      }
      goto L_08899924;
    }
L_08899924:
    hot_regs.g31 = (0x0889992Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889992Cu) goto L_0889992C;
    return;
L_0889992C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08899934;
L_08899934:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899B80;
      }
      goto L_0889994C;
    }
}
L_0889994C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g5 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08899968;
}
L_08899968:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (hot_regs.g5 | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08899B5C;
      }
      goto L_0889997C;
    }
L_0889997C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    g4 = (hot_regs.g5 + g4);
    g22 = (g4 << 6u);
    g4 = (g4 << 3u);
    g22 = (g22 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_08899990;
}
L_08899990:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g16 + ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088999E4;
      }
      goto L_088999A4;
    }
}
L_088999A4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088999C4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088999C4u) goto L_088999C4;
    return;
L_088999C4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088999E4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088999E4u) goto L_088999E4;
    return;
L_088999E4:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(41)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899A30;
      }
      goto L_088999F0;
    }
L_088999F0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899A10u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899A10u) goto L_08899A10;
    return;
L_08899A10:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899A30u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899A30u) goto L_08899A30;
    return;
L_08899A30:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899A7C;
      }
      goto L_08899A3C;
    }
L_08899A3C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899A5Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899A5Cu) goto L_08899A5C;
    return;
L_08899A5C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899A7Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899A7Cu) goto L_08899A7C;
    return;
L_08899A7C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08899AC4;
      }
      goto L_08899A84;
    }
L_08899A84:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899AA4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899AA4u) goto L_08899AA4;
    return;
L_08899AA4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899AC4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899AC4u) goto L_08899AC4;
    return;
L_08899AC4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899B10;
      }
      goto L_08899AD0;
    }
L_08899AD0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899AF0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899AF0u) goto L_08899AF0;
    return;
L_08899AF0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x08899B10u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 362u, 0x088926A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899B10u) goto L_08899B10;
    return;
L_08899B10:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899B48;
      }
      goto L_08899B1C;
    }
L_08899B1C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(41)));
    ctx.gpr[11] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899B48u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 375u, 0x0889277Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899B48u) goto L_08899B48;
    return;
L_08899B48:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_08899990;
      }
      goto L_08899B5C;
    }
}
L_08899B5C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    g6 = (g6 + static_cast<std::uint32_t>(50));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g5);
    { const bool branch_taken = g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08899968;
      }
      goto L_08899B80;
    }
}
L_08899B80:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08899BB4:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g21 = ctx.gpr[21];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g21);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g19 = (g5 | 0u);
    ctx.gpr[30] = (g4 | 0u);
    ctx.gpr[22] = (g6 & 255u);
    g21 = (ctx.gpr[8] << 16u);
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 16u));
    g4 = (ctx.gpr[10] & 255u);
    g5 = (ctx.gpr[11] & 255u);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g4);
    g4 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g6 = (0u | 49u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(0)));
    f14 = f12 - f20;
    g4 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    f15 = f14 / hot_regs.f13;
    g4 = (16880u << 16u);
    f14 = std::bit_cast<float>(g4);
    f15 = f15 + f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    g4 = (16840u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[20] = (hot_regs.g7 | 0u);
    ctx.gpr[23] = (ctx.gpr[9] | 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[19] = g19;
    ctx.gpr[21] = g21;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
        goto L_08899C80;
    }
    goto L_08899C80;
}
}
L_08899C80:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899C8C;
    }
    goto L_08899C8C;
L_08899C8C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_08899CA0;
    }
    goto L_08899CA0;
}
L_08899CA0:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f17 = hot_regs.f15 - hot_regs.f20;
    f17 = f17 / hot_regs.f13;
    f17 = f17 + ctx.fpr[16];
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.fpr[17] = f17;
        goto L_08899CC4;
    }
    goto L_08899CC4;
}
}
L_08899CC4:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899CD0;
    }
    goto L_08899CD0;
L_08899CD0:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_08899CE4;
    }
    goto L_08899CE4;
}
L_08899CE4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = f12 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08899D08;
    }
    goto L_08899D08;
}
}
L_08899D08:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899D14;
    }
    goto L_08899D14;
L_08899D14:
    ctx.gpr[17] = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[17] = (hot_regs.g5 | 0u);
        goto L_08899D24;
    }
    goto L_08899D24;
L_08899D24:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = hot_regs.f15 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + ctx.fpr[16];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_08899D48;
    }
    goto L_08899D48;
}
}
L_08899D48:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_08899D54;
    }
    goto L_08899D54;
L_08899D54:
    hot_regs.g6 = (0u | 50u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
        goto L_08899D68;
    }
    goto L_08899D68;
L_08899D68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 65535u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08899D80;
      }
      goto L_08899D78;
    }
}
L_08899D78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08899D90;
      }
      goto L_08899D80;
    }
L_08899D80:
    hot_regs.g31 = (0x08899D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899D88u) goto L_08899D88;
    return;
L_08899D88:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_08899D90;
L_08899D90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08899FD0;
      }
      goto L_08899DA8;
    }
}
L_08899DA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g5 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08899DC4;
}
L_08899DC4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (hot_regs.g5 | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
      if (branch_taken) {
          goto L_08899FAC;
      }
      goto L_08899DD8;
    }
L_08899DD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    g4 = (hot_regs.g5 + g4);
    g17 = (g4 << 6u);
    g4 = (g4 << 3u);
    g17 = (g17 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    goto L_08899DEC;
}
L_08899DEC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g16 + ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08899E48;
      }
      goto L_08899E00;
    }
}
L_08899E00:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899E24u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899E24u) goto L_08899E24;
    return;
L_08899E24:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899E48u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899E48u) goto L_08899E48;
    return;
L_08899E48:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899E9C;
      }
      goto L_08899E54;
    }
L_08899E54:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899E78u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899E78u) goto L_08899E78;
    return;
L_08899E78:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899E9Cu);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899E9Cu) goto L_08899E9C;
    return;
L_08899E9C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899EF0;
      }
      goto L_08899EA8;
    }
L_08899EA8:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899ECCu);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899ECCu) goto L_08899ECC;
    return;
L_08899ECC:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899EF0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899EF0u) goto L_08899EF0;
    return;
L_08899EF0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899F44;
      }
      goto L_08899EFC;
    }
L_08899EFC:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899F20u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899F20u) goto L_08899F20;
    return;
L_08899F20:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899F44u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899F44u) goto L_08899F44;
    return;
L_08899F44:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08899F98;
      }
      goto L_08899F50;
    }
L_08899F50:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899F74u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899F74u) goto L_08899F74;
    return;
L_08899F74:
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x08899F98u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x0889298Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08899F98u) goto L_08899F98;
    return;
L_08899F98:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g18) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08899DEC;
      }
      goto L_08899FAC;
    }
}
L_08899FAC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g6 = (g6 + static_cast<std::uint32_t>(50));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    { const bool branch_taken = g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08899DC4;
      }
      goto L_08899FD0;
    }
}
L_08899FD0:
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
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0889A004:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g19);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g17 = (g4 | 0u);
    ctx.gpr[20] = (g5 & 255u);
    g19 = (g7 << 16u);
    g19 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g19) >> 16u));
    g4 = (ctx.gpr[9] & 255u);
    g5 = (ctx.gpr[10] & 255u);
    g7 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g7);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (0u | 49u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    f14 = f12 - f20;
    g5 = (17056u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    f15 = f14 / hot_regs.f13;
    g5 = (16880u << 16u);
    f14 = std::bit_cast<float>(g5);
    f15 = f15 + f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (16840u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    hot_regs.f20 = f20;
        goto L_0889A0C8;
    }
    goto L_0889A0C8;
}
}
L_0889A0C8:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A0D4;
    }
    goto L_0889A0D4;
L_0889A0D4:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[22] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A0E8;
    }
    goto L_0889A0E8;
}
L_0889A0E8:
{
    float f17 = ctx.fpr[17];
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f17 = hot_regs.f15 - hot_regs.f20;
    f17 = f17 / hot_regs.f13;
    f17 = f17 + ctx.fpr[16];
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.fpr[17] = f17;
        goto L_0889A10C;
    }
    goto L_0889A10C;
}
}
L_0889A10C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A118;
    }
    goto L_0889A118;
L_0889A118:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A12C;
    }
    goto L_0889A12C;
}
L_0889A12C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = f12 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_0889A150;
    }
    goto L_0889A150;
}
}
L_0889A150:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A15C;
    }
    goto L_0889A15C;
L_0889A15C:
    ctx.gpr[30] = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[30] = (hot_regs.g5 | 0u);
        goto L_0889A16C;
    }
    goto L_0889A16C;
L_0889A16C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = hot_regs.f15 + hot_regs.f20;
    f12 = f12 / hot_regs.f13;
    f12 = f12 + ctx.fpr[16];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_0889A190;
    }
    goto L_0889A190;
}
}
L_0889A190:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A19C;
    }
    goto L_0889A19C;
L_0889A19C:
    hot_regs.g6 = (0u | 50u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g5);
        goto L_0889A1B0;
    }
    goto L_0889A1B0;
L_0889A1B0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 65535u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889A1C8;
      }
      goto L_0889A1C0;
    }
}
L_0889A1C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0889A1D8;
      }
      goto L_0889A1C8;
    }
L_0889A1C8:
    hot_regs.g31 = (0x0889A1D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A1D0u) goto L_0889A1D0;
    return;
L_0889A1D0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_0889A1D8;
L_0889A1D8:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889A444;
      }
      goto L_0889A1EC;
    }
}
L_0889A1EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889A204;
}
L_0889A204:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A420;
      }
      goto L_0889A218;
    }
L_0889A218:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    g4 = (g4 + hot_regs.g5);
    g22 = (g4 << 6u);
    g4 = (g4 << 3u);
    g22 = (g22 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_0889A22C;
}
L_0889A22C:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g16 + ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889A2C0;
      }
      goto L_0889A240;
    }
}
L_0889A240:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A260u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A260u) goto L_0889A260;
    return;
L_0889A260:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A280u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A280u) goto L_0889A280;
    return;
L_0889A280:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A2A0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A2A0u) goto L_0889A2A0;
    return;
L_0889A2A0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A2C0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A2C0u) goto L_0889A2C0;
    return;
L_0889A2C0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A32C;
      }
      goto L_0889A2CC;
    }
L_0889A2CC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A2ECu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A2ECu) goto L_0889A2EC;
    return;
L_0889A2EC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A30Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A30Cu) goto L_0889A30C;
    return;
L_0889A30C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A32Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A32Cu) goto L_0889A32C;
    return;
L_0889A32C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A378;
      }
      goto L_0889A338;
    }
L_0889A338:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A358u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A358u) goto L_0889A358;
    return;
L_0889A358:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A378u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A378u) goto L_0889A378;
    return;
L_0889A378:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A3C4;
      }
      goto L_0889A384;
    }
L_0889A384:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A3A4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A3A4u) goto L_0889A3A4;
    return;
L_0889A3A4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A3C4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A3C4u) goto L_0889A3C4;
    return;
L_0889A3C4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A410;
      }
      goto L_0889A3D0;
    }
L_0889A3D0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A3F0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A3F0u) goto L_0889A3F0;
    return;
L_0889A3F0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0889A410u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 416u, 0x08892A7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A410u) goto L_0889A410;
    return;
L_0889A410:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_0889A22C;
      }
      goto L_0889A420;
    }
}
L_0889A420:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0889A204;
      }
      goto L_0889A444;
    }
}
L_0889A444:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
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
L_0889A478:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), hot_regs.g31);
    ctx.gpr[17] = (g5 | 0u);
    g18 = (g4 | 0u);
    g20 = (g7 << 16u);
    g20 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g20) >> 16u));
    g4 = (ctx.gpr[9] & 255u);
    g5 = (ctx.gpr[10] & 255u);
    g7 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g5);
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g7);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (0u | 49u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g5);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g5 = (17056u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    f14 = f13 / hot_regs.f12;
    g5 = (16880u << 16u);
    f13 = std::bit_cast<float>(g5);
    f14 = f14 + f13;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    g7 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (16840u << 16u);
    f14 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[19] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (ctx.gpr[8] | 0u);
    if (g7 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[18] = g18;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_0889A52C;
    }
    goto L_0889A52C;
}
}
L_0889A52C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A538;
    }
    goto L_0889A538;
L_0889A538:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[22] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A54C;
    }
    goto L_0889A54C;
}
L_0889A54C:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f15 = f15 / hot_regs.f12;
    f15 = f15 + hot_regs.f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g5 = (std::bit_cast<std::uint32_t>(f15));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f15 = f15;
        goto L_0889A570;
    }
    goto L_0889A570;
}
}
L_0889A570:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A57C;
    }
    goto L_0889A57C;
L_0889A57C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A590;
    }
    goto L_0889A590;
}
L_0889A590:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    f15 = f15 / hot_regs.f12;
    f13 = f15 + f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
        goto L_0889A5B4;
    }
    goto L_0889A5B4;
}
}
L_0889A5B4:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A5C0;
    }
    goto L_0889A5C0;
L_0889A5C0:
    ctx.gpr[30] = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[30] = (hot_regs.g5 | 0u);
        goto L_0889A5D0;
    }
    goto L_0889A5D0;
L_0889A5D0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = hot_regs.f13 / f12;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_0889A5F4;
    }
    goto L_0889A5F4;
}
}
L_0889A5F4:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A600;
    }
    goto L_0889A600;
L_0889A600:
    hot_regs.g6 = (0u | 50u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), hot_regs.g5);
        goto L_0889A614;
    }
    goto L_0889A614;
L_0889A614:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 65535u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889A62C;
      }
      goto L_0889A624;
    }
}
L_0889A624:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0889A63C;
      }
      goto L_0889A62C;
    }
L_0889A62C:
    hot_regs.g31 = (0x0889A634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A634u) goto L_0889A634;
    return;
L_0889A634:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_0889A63C;
L_0889A63C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889A858;
      }
      goto L_0889A650;
    }
}
L_0889A650:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889A668;
}
L_0889A668:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889A834;
      }
      goto L_0889A67C;
    }
L_0889A67C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    g4 = (g4 + hot_regs.g5);
    g22 = (g4 << 6u);
    g4 = (g4 << 3u);
    g22 = (g22 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
    goto L_0889A690;
}
L_0889A690:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g16 + ctx.gpr[22]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889A714;
      }
      goto L_0889A6A4;
    }
}
L_0889A6A4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A6C0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A6C0u) goto L_0889A6C0;
    return;
L_0889A6C0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A6DCu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A6DCu) goto L_0889A6DC;
    return;
L_0889A6DC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A6F8u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A6F8u) goto L_0889A6F8;
    return;
L_0889A6F8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A714u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A714u) goto L_0889A714;
    return;
L_0889A714:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A758;
      }
      goto L_0889A720;
    }
L_0889A720:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A73Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A73Cu) goto L_0889A73C;
    return;
L_0889A73C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A758u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A758u) goto L_0889A758;
    return;
L_0889A758:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A79C;
      }
      goto L_0889A764;
    }
L_0889A764:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A780u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A780u) goto L_0889A780;
    return;
L_0889A780:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A79Cu);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A79Cu) goto L_0889A79C;
    return;
L_0889A79C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A7E0;
      }
      goto L_0889A7A8;
    }
L_0889A7A8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A7C4u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A7C4u) goto L_0889A7C4;
    return;
L_0889A7C4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A7E0u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A7E0u) goto L_0889A7E0;
    return;
L_0889A7E0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889A824;
      }
      goto L_0889A7EC;
    }
L_0889A7EC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A808u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A808u) goto L_0889A808;
    return;
L_0889A808:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889A824u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 430u, 0x08892B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889A824u) goto L_0889A824;
    return;
L_0889A824:
{
    std::uint32_t g23 = ctx.gpr[23];
    g23 = (g23 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(56));
    ctx.gpr[23] = g23;
      if (branch_taken) {
          goto L_0889A690;
      }
      goto L_0889A834;
    }
}
L_0889A834:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g4);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0889A668;
      }
      goto L_0889A858;
    }
}
L_0889A858:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0889A888:
{
    float f12 = hot_regs.f12;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    f16 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[21] = (g5 | 0u);
    ctx.gpr[22] = (g4 | 0u);
    g18 = (g8 << 16u);
    g18 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g18) >> 16u));
    g4 = (ctx.gpr[10] & 255u);
    g5 = (ctx.gpr[11] & 255u);
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g4);
    g4 = (g8 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g8 = (0u | 49u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f17 = f16 / f12;
    g4 = (16880u << 16u);
    f16 = std::bit_cast<float>(g4);
    f17 = f17 + f16;
    f17 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f17));
    g5 = (std::bit_cast<std::uint32_t>(f17));
    g8 = (static_cast<std::int32_t>(g8) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    g4 = (16840u << 16u);
    f17 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    ctx.gpr[20] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g7 | 0u);
    ctx.gpr[19] = (ctx.gpr[9] | 0u);
    if (g8 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
        goto L_0889A944;
    }
    goto L_0889A944;
}
}
L_0889A944:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A950;
    }
    goto L_0889A950;
L_0889A950:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[30] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A964;
    }
    goto L_0889A964;
}
L_0889A964:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f13 = f13 / hot_regs.f12;
    f13 = f13 + ctx.fpr[17];
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
        goto L_0889A984;
    }
    goto L_0889A984;
}
}
L_0889A984:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A990;
    }
    goto L_0889A990;
L_0889A990:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_0889A9A4;
    }
    goto L_0889A9A4;
}
L_0889A9A4:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f13 = hot_regs.f14 / hot_regs.f12;
    f13 = f13 + ctx.fpr[16];
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g5 = (std::bit_cast<std::uint32_t>(f13));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f13 = f13;
        goto L_0889A9C4;
    }
    goto L_0889A9C4;
}
}
L_0889A9C4:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889A9D0;
    }
    goto L_0889A9D0;
L_0889A9D0:
    ctx.gpr[23] = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    ctx.gpr[23] = (hot_regs.g5 | 0u);
        goto L_0889A9E0;
    }
    goto L_0889A9E0;
L_0889A9E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f12 = hot_regs.f15 / f12;
    f12 = f12 + ctx.fpr[17];
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g5 = (std::bit_cast<std::uint32_t>(f12));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
        goto L_0889AA00;
    }
    goto L_0889AA00;
}
}
L_0889AA00:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_0889AA0C;
    }
    goto L_0889AA0C;
L_0889AA0C:
    hot_regs.g6 = (0u | 50u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g5);
        goto L_0889AA20;
    }
    goto L_0889AA20;
L_0889AA20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 65535u);
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889AA38;
      }
      goto L_0889AA30;
    }
}
L_0889AA30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_0889AA48;
      }
      goto L_0889AA38;
    }
L_0889AA38:
    hot_regs.g31 = (0x0889AA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AA40u) goto L_0889AA40;
    return;
L_0889AA40:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_0889AA48;
L_0889AA48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889ACA0;
      }
      goto L_0889AA60;
    }
}
L_0889AA60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g5 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889AA7C;
}
L_0889AA7C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (g5 | 0u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g5 = g5;
        goto L_0889AC80;
    }
    goto L_0889AA90;
}
L_0889AA90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    g4 = (hot_regs.g5 + g4);
    g23 = (g4 << 6u);
    g4 = (g4 << 3u);
    g23 = (g23 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_0889AAA4;
}
L_0889AAA4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g16 + ctx.gpr[23]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889AB38;
      }
      goto L_0889AAB8;
    }
}
L_0889AAB8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AAD8u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AAD8u) goto L_0889AAD8;
    return;
L_0889AAD8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AAF8u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AAF8u) goto L_0889AAF8;
    return;
L_0889AAF8:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AB18u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AB18u) goto L_0889AB18;
    return;
L_0889AB18:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AB38u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AB38u) goto L_0889AB38;
    return;
L_0889AB38:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AB84;
      }
      goto L_0889AB44;
    }
L_0889AB44:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AB64u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AB64u) goto L_0889AB64;
    return;
L_0889AB64:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AB84u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AB84u) goto L_0889AB84;
    return;
L_0889AB84:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889ABD0;
      }
      goto L_0889AB90;
    }
L_0889AB90:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889ABB0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889ABB0u) goto L_0889ABB0;
    return;
L_0889ABB0:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889ABD0u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889ABD0u) goto L_0889ABD0;
    return;
L_0889ABD0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC1C;
      }
      goto L_0889ABDC;
    }
L_0889ABDC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889ABFCu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889ABFCu) goto L_0889ABFC;
    return;
L_0889ABFC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AC1Cu);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AC1Cu) goto L_0889AC1C;
    return;
L_0889AC1C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889AC68;
      }
      goto L_0889AC28;
    }
L_0889AC28:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AC48u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AC48u) goto L_0889AC48;
    return;
L_0889AC48:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0889AC68u);
    ctx.gpr[10] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 445u, 0x08892D0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AC68u) goto L_0889AC68;
    return;
L_0889AC68:
{
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (g30 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(56));
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_0889AAA4;
      }
      goto L_0889AC7C;
    }
}
L_0889AC7C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    goto L_0889AC80;
L_0889AC80:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    g5 = (g5 + static_cast<std::uint32_t>(1));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    g6 = (g6 + static_cast<std::uint32_t>(50));
    g7 = (static_cast<std::int32_t>(g7) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g5);
    { const bool branch_taken = g7 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g6);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_0889AA7C;
      }
      goto L_0889ACA0;
    }
}
L_0889ACA0:
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
L_0889ACD0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), g18);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), hot_regs.g31);
    f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    g6 = (g6 & 255u);
    g7 = (g7 & 255u);
    g8 = (g8 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g6);
    g6 = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g7);
    g7 = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g8);
    g8 = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g7);
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    g6 = (g6 & 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(g8));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g6);
    g6 = (g7 & 255u);
    g18 = (g4 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(g6));
    ctx.gpr[20] = (0u | 0u);
    g6 = (0u | 49u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    f13 = f12 - f20;
    g4 = (17056u << 16u);
    f12 = std::bit_cast<float>(g4);
    f14 = f13 / f12;
    g4 = (16880u << 16u);
    f13 = std::bit_cast<float>(g4);
    f14 = f14 + f13;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g4 = (std::bit_cast<std::uint32_t>(f14));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    g7 = (16840u << 16u);
    f14 = std::bit_cast<float>(g7);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    if (g6 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f20 = f20;
        goto L_0889AD98;
    }
    goto L_0889AD98;
}
}
L_0889AD98:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_0889ADA4;
    }
    goto L_0889ADA4;
L_0889ADA4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_0889ADB8;
    }
    goto L_0889ADB8;
}
L_0889ADB8:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f15 = f15 - hot_regs.f20;
    f15 = f15 / hot_regs.f12;
    f15 = f15 + hot_regs.f14;
    f15 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f15));
    g4 = (std::bit_cast<std::uint32_t>(f15));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f15 = f15;
        goto L_0889ADE0;
    }
    goto L_0889ADE0;
}
}
L_0889ADE0:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_0889ADEC;
    }
    goto L_0889ADEC;
L_0889ADEC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(hot_regs.g4) ? 1u : 0u);
    if (g5 != 0u) {
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
        goto L_0889AE00;
    }
    goto L_0889AE00;
}
L_0889AE00:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    f15 = f15 + hot_regs.f20;
    f15 = f15 / hot_regs.f12;
    f13 = f15 + f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    hot_regs.f15 = f15;
        goto L_0889AE28;
    }
    goto L_0889AE28;
}
}
L_0889AE28:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_0889AE34;
    }
    goto L_0889AE34;
L_0889AE34:
    hot_regs.g5 = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g5);
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), hot_regs.g4);
        goto L_0889AE48;
    }
    goto L_0889AE48;
L_0889AE48:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f13 = f13 + hot_regs.f20;
    f12 = f13 / f12;
    f12 = f12 + hot_regs.f14;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g5 != 0u) {
    g4 = (0u | 49u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0889AE70;
    }
    goto L_0889AE70;
}
}
L_0889AE70:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_0889AE7C;
    }
    goto L_0889AE7C;
L_0889AE7C:
    hot_regs.g5 = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g5);
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), hot_regs.g4);
        goto L_0889AE90;
    }
    goto L_0889AE90;
L_0889AE90:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    hot_regs.g5 = (0u | 65535u);
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889AEB4;
      }
      goto L_0889AEA4;
    }
}
L_0889AEA4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889AEC4;
      }
      goto L_0889AEB4;
    }
}
L_0889AEB4:
    hot_regs.g31 = (0x0889AEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 274u, 0x088954BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889AEBCu) goto L_0889AEBC;
    return;
L_0889AEBC:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_0889AEC4;
L_0889AEC4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B2A0;
      }
      goto L_0889AED8;
    }
}
L_0889AED8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(64));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(96));
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889AF00;
}
L_0889AF00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889B27C;
      }
      goto L_0889AF14;
    }
}
L_0889AF14:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    g4 = (g4 + g5);
    g5 = (g4 << 6u);
    g4 = (g4 << 3u);
    g4 = (g5 - g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0889AF2C;
}
L_0889AF2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g16 = (g4 + g16);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889B024;
      }
      goto L_0889AF44;
    }
}
L_0889AF44:
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889AF68u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889AF68:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B01C;
      }
      goto L_0889AF74;
    }
L_0889AF74:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
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
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889AF98u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889AF98:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B014;
      }
      goto L_0889AFA4;
    }
L_0889AFA4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
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
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889AFC8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889AFC8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B00C;
      }
      goto L_0889AFD4;
    }
L_0889AFD4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
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
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889AFF8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889AFF8:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B024;
      }
      goto L_0889B004;
    }
L_0889B004:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B00C;
    }
L_0889B00C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B014;
    }
L_0889B014:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B01C;
    }
L_0889B01C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B024;
    }
L_0889B024:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B0A0;
      }
      goto L_0889B030;
    }
L_0889B030:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B054u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B054:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B098;
      }
      goto L_0889B060;
    }
L_0889B060:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B084u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B084:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B0A0;
      }
      goto L_0889B090;
    }
L_0889B090:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B098;
    }
L_0889B098:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B0A0;
    }
L_0889B0A0:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B11C;
      }
      goto L_0889B0AC;
    }
L_0889B0AC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B0D0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B0D0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B114;
      }
      goto L_0889B0DC;
    }
L_0889B0DC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B100u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B100:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B11C;
      }
      goto L_0889B10C;
    }
L_0889B10C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B114;
    }
L_0889B114:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B11C;
    }
L_0889B11C:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B198;
      }
      goto L_0889B128;
    }
L_0889B128:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (0x0889B14Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_0889B2D8;
L_0889B14C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B190;
      }
      goto L_0889B158;
    }
L_0889B158:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(137)));
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (0x0889B17Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_0889B2D8;
L_0889B17C:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B198;
      }
      goto L_0889B188;
    }
L_0889B188:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B190;
    }
L_0889B190:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B198;
    }
L_0889B198:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B214;
      }
      goto L_0889B1A4;
    }
L_0889B1A4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B1C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B1C8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B20C;
      }
      goto L_0889B1D4;
    }
L_0889B1D4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
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
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B1F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B1F8:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B214;
      }
      goto L_0889B204;
    }
L_0889B204:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B20C;
    }
L_0889B20C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B214;
    }
L_0889B214:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B258;
      }
      goto L_0889B220;
    }
L_0889B220:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x0889B244u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0889B2D8;
L_0889B244:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B258;
      }
      goto L_0889B250;
    }
L_0889B250:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0889B2A4;
      }
      goto L_0889B258;
    }
L_0889B258:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    g5 = (g5 + static_cast<std::uint32_t>(56));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), g4);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0889AF2C;
      }
      goto L_0889B27C;
    }
}
L_0889B27C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), g4);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0889AF00;
      }
      goto L_0889B2A0;
    }
}
L_0889B2A0:
    hot_regs.g2 = (ctx.gpr[20] | 0u);
    goto L_0889B2A4;
L_0889B2A4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0889B2D8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), hot_regs.g31);
    ctx.gpr[21] = (g7 & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[19] = (g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), 0u);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    g7 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(6032)));
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0889B354;
      }
      goto L_0889B338;
    }
}
L_0889B338:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(6032), hot_regs.g4);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g31 = (0x0889B34Cu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(27952));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B34Cu) goto L_0889B34C;
    return;
L_0889B34C:
    hot_regs.g31 = (0x0889B354u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-25464));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 68u, 0x08B60680u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B354u) goto L_0889B354;
    return;
L_0889B354:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.gpr[8] = (2235u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(27952), hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[8] + static_cast<std::uint32_t>(27952));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(4), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(56), hot_regs.g4);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(0u));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x0889B40Cu);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B40Cu) goto L_0889B40C;
    return;
L_0889B40C:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g18 == 0u;
    // nop
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0889B654;
      }
      goto L_0889B418;
    }
}
L_0889B418:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0889B450;
      }
      goto L_0889B43C;
    }
}
L_0889B43C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B450;
      }
      goto L_0889B444;
    }
L_0889B444:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B450;
    }
L_0889B450:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B458;
    }
L_0889B458:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 8u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B4B4;
      }
      goto L_0889B474;
    }
}
L_0889B474:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(483))))));
    g4 = (g4 & 2u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B4B4;
      }
      goto L_0889B48C;
    }
}
L_0889B48C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B4B4;
      }
      goto L_0889B494;
    }
L_0889B494:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    g4 = (16168u << 16u);
    g4 = (g4 | 62915u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B4B4;
    }
}
L_0889B4B4:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B4C4;
    }
L_0889B4C4:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(hot_regs.g4));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B4D4;
    }
L_0889B4D4:
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
          goto L_0889B64C;
      }
      goto L_0889B4EC;
    }
}
L_0889B4EC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B504;
      }
      goto L_0889B4F4;
    }
L_0889B4F4:
    hot_regs.g31 = (0x0889B4FCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 434u, 0x088961FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B4FCu) goto L_0889B4FC;
    return;
L_0889B4FC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B504;
    }
L_0889B504:
    ctx.gpr[22] = (hot_regs.g29 + static_cast<std::uint32_t>(176));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B514u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 222u, 0x088919A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B514u) goto L_0889B514;
    return;
L_0889B514:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.f12 = hot_regs.f20 + hot_regs.f12;
    ctx.set_fpu_condition((hot_regs.f22 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B578;
    }
L_0889B578:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[22] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (2235u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(27952));
    ctx.gpr[8] = (2246u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2032));
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x0889B5B8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B5B8u) goto L_0889B5B8;
    return;
L_0889B5B8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B618;
      }
      goto L_0889B5C4;
    }
L_0889B5C4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 4u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0889B618;
      }
      goto L_0889B5E0;
    }
}
L_0889B5E0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B618;
      }
      goto L_0889B5EC;
    }
L_0889B5EC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-950));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0889B618;
      }
      goto L_0889B5FC;
    }
L_0889B5FC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    f12 = hot_regs.f20 + f12;
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0889B618;
      }
      goto L_0889B614;
    }
}
L_0889B614:
    hot_regs.g4 = (0u | 1u);
    goto L_0889B618;
L_0889B618:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B64C;
      }
      goto L_0889B620;
    }
L_0889B620:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B644;
      }
      goto L_0889B630;
    }
}
L_0889B630:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B644;
      }
      goto L_0889B63C;
    }
L_0889B63C:
    hot_regs.g31 = (0x0889B644u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B644u) goto L_0889B644;
    return;
L_0889B644:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0889B67C;
      }
      goto L_0889B64C;
    }
L_0889B64C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B418;
      }
      goto L_0889B654;
    }
L_0889B654:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B678;
      }
      goto L_0889B664;
    }
}
L_0889B664:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B678;
      }
      goto L_0889B670;
    }
L_0889B670:
    hot_regs.g31 = (0x0889B678u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B678u) goto L_0889B678;
    return;
L_0889B678:
    hot_regs.g2 = (0u | 0u);
    goto L_0889B67C;
L_0889B67C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0889B6AC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g20);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g23);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    g5 = (g5 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    g17 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g23 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g20 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g23) ? 1u : 0u);
    ctx.gpr[21] = (hot_regs.g4 | 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[20] = g20;
    ctx.gpr[23] = g23;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0889B7D4;
      }
      goto L_0889B708;
    }
}
L_0889B708:
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    ctx.gpr[18] = (0u | 0u);
    goto L_0889B714;
L_0889B714:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889B72C;
      }
      goto L_0889B71C;
    }
L_0889B71C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_0889B734;
    }
    goto L_0889B72C;
}
L_0889B72C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0889B754;
      }
      goto L_0889B734;
    }
L_0889B734:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[20]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_0889B750;
    }
    goto L_0889B748;
}
L_0889B748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0889B754;
      }
      goto L_0889B750;
    }
L_0889B750:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[18]);
    goto L_0889B754;
L_0889B754:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B7C4;
      }
      goto L_0889B75C;
    }
L_0889B75C:
    hot_regs.g31 = (0x0889B764u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B764u) goto L_0889B764;
    return;
L_0889B764:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_0889B7C4;
      }
      goto L_0889B76C;
    }
L_0889B76C:
    hot_regs.g31 = (0x0889B774u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 128u, 0x0890C798u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B774u) goto L_0889B774;
    return;
L_0889B774:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B7C4;
      }
      goto L_0889B77C;
    }
L_0889B77C:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0889B7C4;
      }
      goto L_0889B7BC;
    }
}
L_0889B7BC:
    hot_regs.g31 = (0x0889B7C4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B7C4u) goto L_0889B7C4;
    return;
L_0889B7C4:
{
    std::uint32_t g20 = ctx.gpr[20];
    g20 = (g20 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(3344));
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_0889B714;
      }
      goto L_0889B7D4;
    }
}
L_0889B7D4:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (hot_regs.g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
        goto L_0889B9B8;
    }
    goto L_0889B7E8;
L_0889B7E8:
    { const float fs = hot_regs.f20; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    ctx.gpr[30] = (0u | 207u);
    ctx.gpr[20] = (0u | 0u);
    goto L_0889B7F4;
L_0889B7F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_0889B80C;
      }
      goto L_0889B7FC;
    }
L_0889B7FC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_0889B814;
    }
    goto L_0889B80C;
}
L_0889B80C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889B834;
      }
      goto L_0889B814;
    }
L_0889B814:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[19]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_0889B830;
    }
    goto L_0889B828;
}
L_0889B828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0889B834;
      }
      goto L_0889B830;
    }
L_0889B830:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[20]);
    goto L_0889B834;
L_0889B834:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B9A4;
      }
      goto L_0889B840;
    }
L_0889B840:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    f12 = f12 - hot_regs.f13;
    { const float fs = f12; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    f14 = f14 - hot_regs.f15;
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f12 + f14;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0889B9A4;
      }
      goto L_0889B884;
    }
}
}
L_0889B884:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 8u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B8A0;
      }
      goto L_0889B894;
    }
}
L_0889B894:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(86))))));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0889B9A4;
      }
      goto L_0889B8A0;
    }
L_0889B8A0:
    hot_regs.g31 = (0x0889B8A8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 772u, 0x08AFF508u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B8A8u) goto L_0889B8A8;
    return;
L_0889B8A8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B9A4;
      }
      goto L_0889B8B0;
    }
L_0889B8B0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B8E8;
      }
      goto L_0889B8BC;
    }
L_0889B8BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(900)));
    hot_regs.g31 = (0x0889B8C8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 78u, 0x08B00578u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B8C8u) goto L_0889B8C8;
    return;
L_0889B8C8:
    hot_regs.g31 = (0x0889B8D0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B8D0u) goto L_0889B8D0;
    return;
L_0889B8D0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B8DCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 72u, 0x08B00520u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B8DCu) goto L_0889B8DC;
    return;
L_0889B8DC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0889B8E8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B8E8u) goto L_0889B8E8;
    return;
L_0889B8E8:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889B96C;
      }
      goto L_0889B8FC;
    }
}
L_0889B8FC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B908u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B908u) goto L_0889B908;
    return;
L_0889B908:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B958;
      }
      goto L_0889B910;
    }
L_0889B910:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B920u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B920u) goto L_0889B920;
    return;
L_0889B920:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B930u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 40u, 0x08B00384u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B930u) goto L_0889B930;
    return;
L_0889B930:
    hot_regs.g31 = (0x0889B938u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B938u) goto L_0889B938;
    return;
L_0889B938:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0889B948u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 664u, 0x08AFEF90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B948u) goto L_0889B948;
    return;
L_0889B948:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x0889B954u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B954u) goto L_0889B954;
    return;
L_0889B954:
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    goto L_0889B958;
L_0889B958:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(565)));
    g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_0889B8FC;
      }
      goto L_0889B96C;
    }
}
L_0889B96C:
    hot_regs.g31 = (0x0889B974u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 369u, 0x08B41658u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B974u) goto L_0889B974;
    return;
L_0889B974:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0889B980u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B980u) goto L_0889B980;
    return;
L_0889B980:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889B9A4;
      }
      goto L_0889B988;
    }
L_0889B988:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[18] + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x0889B9A4u);
    hot_regs.g5 = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B9A4u) goto L_0889B9A4;
    return;
L_0889B9A4:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2080));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0889B7F4;
      }
      goto L_0889B9B4;
    }
}
L_0889B9B4:
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    goto L_0889B9B8;
L_0889B9B8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0889B9CCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 77u, 0x0882C4C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B9CCu) goto L_0889B9CC;
    return;
L_0889B9CC:
    hot_regs.g4 = (2238u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(14864));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0889B9E8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 32u, 0x089D0284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B9E8u) goto L_0889B9E8;
    return;
L_0889B9E8:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0889B9FCu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 177u, 0x08894D40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889B9FCu) goto L_0889B9FC;
    return;
L_0889B9FC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x0889BA10u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 262u, 0x089E94F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BA10u) goto L_0889BA10;
    return;
L_0889BA10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BA28;
      }
      goto L_0889BA18;
    }
L_0889BA18:
    hot_regs.g31 = (0x0889BA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 66u, 0x088807A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BA20u) goto L_0889BA20;
    return;
L_0889BA20:
    hot_regs.g31 = (0x0889BA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 487u, 0x08A974F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BA28u) goto L_0889BA28;
    return;
L_0889BA28:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x0889BA34u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 700u, 0x088F38D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BA34u) goto L_0889BA34;
    return;
L_0889BA34:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
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
L_0889BA6C:
{
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g29 = (g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g30);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), hot_regs.g31);
    g30 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    { const bool branch_taken = g30 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    hot_regs.g29 = g29;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_0889BDE0;
      }
      goto L_0889BAD8;
    }
}
L_0889BAD8:
{
    float f12 = hot_regs.f12;
    float f30 = ctx.fpr[30];
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(32));
    f12 = hot_regs.f22 + ctx.fpr[26];
    hot_regs.g4 = (16128u << 16u);
    f30 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f12; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(0u);
    hot_regs.f13 = hot_regs.f20 + ctx.fpr[24];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f12));
    { const float fs = hot_regs.f13; const float ft = f30; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f30 = std::bit_cast<float>(0x7FC00000u); else f30 = fs * ft; }
    hot_regs.f12 = f12;
    ctx.fpr[30] = f30;
    goto L_0889BB00;
}
}
L_0889BB00:
{
    std::uint32_t g30 = ctx.gpr[30];
    ctx.gpr[20] = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(0)));
    g30 = (aot_mem.aot_load32(g30 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB18;
    }
}
L_0889BB18:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g31 = (0x0889BB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 28u, 0x089602C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BB28u) goto L_0889BB28;
    return;
L_0889BB28:
    { const bool branch_taken = ctx.gpr[20] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB30;
    }
L_0889BB30:
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB4C;
    }
L_0889BB4C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB64;
    }
L_0889BB64:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB7C;
    }
L_0889BB7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BB94;
    }
L_0889BB94:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BBA4;
    }
}
L_0889BBA4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889BBE4;
      }
      goto L_0889BBB4;
    }
L_0889BBB4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889BBE4;
      }
      goto L_0889BBC4;
    }
L_0889BBC4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 4u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889BBE4;
      }
      goto L_0889BBD4;
    }
L_0889BBD4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (0u | 5u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BBE4;
    }
L_0889BBE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (0u | 1u);
    aot_mem.aot_store8(g20 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(512), g4);
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g20 + static_cast<std::uint32_t>(86))))));
    g4 = (g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889BD08;
      }
      goto L_0889BC28;
    }
}
L_0889BC28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[16]);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0889BC58u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 194u, 0x08891710u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BC58u) goto L_0889BC58;
    return;
L_0889BC58:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0889BCF4;
      }
      goto L_0889BC84;
    }
}
}
L_0889BC84:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0889BCF4;
      }
      goto L_0889BCA8;
    }
}
}
L_0889BCA8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f12 = f12 + hot_regs.f13;
    ctx.set_fpu_condition((f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0889BCF4;
      }
      goto L_0889BCCC;
    }
}
}
L_0889BCCC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    g4 = (g4 + ctx.gpr[16]);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0889BCF4;
      }
      goto L_0889BCF0;
    }
}
}
L_0889BCF0:
    ctx.gpr[19] = (0u | 1u);
    goto L_0889BCF4;
L_0889BCF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_0889BC28;
      }
      goto L_0889BD08;
    }
}
L_0889BD08:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BDD8;
      }
      goto L_0889BD10;
    }
L_0889BD10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889BD5C;
      }
      goto L_0889BD38;
    }
}
L_0889BD38:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = f12;
        goto L_0889BD50;
    }
    goto L_0889BD50;
}
L_0889BD50:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BD78;
      }
      goto L_0889BD5C;
    }
L_0889BD5C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.f12 = f12;
        goto L_0889BD74;
    }
    goto L_0889BD74;
}
L_0889BD74:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0889BD78;
L_0889BD78:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((hot_regs.f12 <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0889BDB0;
      }
      goto L_0889BD8C;
    }
L_0889BD8C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = f12;
        goto L_0889BDA4;
    }
    goto L_0889BDA4;
}
L_0889BDA4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_0889BDD0;
      }
      goto L_0889BDB0;
    }
L_0889BDB0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.f12 = f12;
        goto L_0889BDC8;
    }
    goto L_0889BDC8;
}
L_0889BDC8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    goto L_0889BDD0;
L_0889BDD0:
    hot_regs.g31 = (0x0889BDD8u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BDD8u) goto L_0889BDD8;
    return;
L_0889BDD8:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889BB00;
      }
      goto L_0889BDE0;
    }
L_0889BDE0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0889BE28:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-704));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(644), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(648), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(652), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(656), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(660), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(664), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(668), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(672), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(676), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(680), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(684), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(688), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(692), hot_regs.g31);
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(604), ctx.gpr[8]);
    ctx.gpr[20] = (hot_regs.g6 | 0u);
    ctx.gpr[21] = (hot_regs.g5 | 0u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    hot_regs.g5 = (ctx.gpr[10] & 255u);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(628), hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x0889BEA0u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 67u, 0x089903B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0889BEA0u) goto L_0889BEA0;
    return;
L_0889BEA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8422)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(612), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(636), ctx.gpr[19]);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[3] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0889BF00;
      }
      goto L_0889BEB8;
    }
}
L_0889BEB8:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF00;
      }
      goto L_0889BEC0;
    }
L_0889BEC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 4u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889BF00;
      }
      goto L_0889BEE0;
    }
}
L_0889BEE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[18] = (0u | 1u);
    g4 = (g29 + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g4);
    g4 = (0u | 6u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(114), static_cast<std::uint16_t>(0u));
    hot_regs.g4 = g4;
    goto L_0889BF00;
}
L_0889BF00:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF38;
      }
      goto L_0889BF08;
    }
L_0889BF08:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8072)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0889BF38;
      }
      goto L_0889BF14;
    }
L_0889BF14:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0889BF38;
      }
      goto L_0889BF34;
    }
}
L_0889BF34:
    ctx.gpr[16] = (0u | 1u);
    goto L_0889BF38;
L_0889BF38:
    if (ctx.gpr[30] == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_0889BF74;
    }
    goto L_0889BF40;
L_0889BF40:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8423)));
    if (hot_regs.g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[18]));
        goto L_0889BF74;
    }
    goto L_0889BF4C;
L_0889BF4C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[18]));
    hot_regs.g4 = g4;
        goto L_0889BF74;
    }
    goto L_0889BF6C;
}
L_0889BF6C:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(624), static_cast<std::uint8_t>(ctx.gpr[18]));
    goto L_0889BF74;
L_0889BF74:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[16]));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 76u, 0x0889C5C0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0889BF84;
    }
L_0889BF84:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(600), ctx.gpr[3]);
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(432));
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(512));
    hot_regs.g5 = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(620), g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(352));
    g4 = (48985u << 16u);
    g4 = (g4 | 39322u);
    hot_regs.f20 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(616), hot_regs.g5);
    hot_regs.f22 = std::bit_cast<float>(0u);
    g4 = (16217u << 16u);
    g4 = (g4 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    hot_regs.g4 = g4;
    goto L_0889BFC0;
}
L_0889BFC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    ctx.gpr[17] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(596)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 75u, 0x0889C5B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0889BFD8;
    }
L_0889BFD8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8068)));
    { const bool branch_taken = ctx.gpr[18] == hot_regs.g4;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 75u, 0x0889C5B8u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0889BFE4;
    }
L_0889BFE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 512u);
    g4 = (0u < g4 ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(608)));
    g4 = (g4 & 255u);
    g4 = (g4 | ctx.gpr[17]);
    g4 = (g4 | ctx.gpr[16]);
    hot_regs.g4 = g4;
    ctx.pc = 0x0889C000u; return;}

}

void recomp_unit_0037(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0037_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_37(Runtime &runtime) {
    runtime.register_generated_unit(37u, 0x08898000u, 16384u, &recomp_unit_0037, &recomp_unit_0037_entry);
    runtime.register_function(0x08898000u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898024u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898030u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898068u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898074u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088980FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898154u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898164u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898170u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889817Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088981B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898208u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898218u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898220u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889822Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898268u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088982DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898334u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898340u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889834Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898358u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898394u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088983FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898408u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898444u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898494u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088984D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898508u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898554u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898564u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889856Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898578u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088985FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889860Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898664u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898670u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088986F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898730u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889873Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898794u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088987F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898848u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898858u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898860u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889886Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088988F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898908u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889891Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898974u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898980u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889898Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898998u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088989D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898A84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898AF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B04u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898B94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898BF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898C70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898CFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D04u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898D9Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DBCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DDCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898DF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898E9Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EBCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EC8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898ED0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EE8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898EF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F44u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898F90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08898FF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899008u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899010u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899018u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899030u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889903Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899044u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889905Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899064u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889906Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889907Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889908Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899094u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889909Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088990F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899104u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889910Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899114u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889912Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899138u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899140u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899148u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899150u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899158u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899170u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889917Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889919Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088991FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889920Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899214u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899224u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899230u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899250u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899288u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899294u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889929Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088992ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889930Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899314u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899324u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899344u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889935Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899364u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889936Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899384u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088993F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899400u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899408u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899420u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889944Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899454u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889945Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899468u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889948Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088994F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899500u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899510u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899514u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899520u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899530u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889953Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899550u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899568u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899570u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899578u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899580u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899590u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899598u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088995FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899604u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889960Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899618u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899620u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899628u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899630u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899638u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889964Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899658u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899660u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899668u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899670u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899678u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899680u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889968Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899694u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889969Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088996FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899710u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899718u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899720u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899734u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889973Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899758u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899824u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899830u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899844u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899868u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899874u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899888u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088998F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889990Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889991Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899924u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889992Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899934u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889994Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899968u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889997Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899990u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999E4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x088999F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A3Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899A84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899AF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899B10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899B1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899B48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899B5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899B80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899BB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899C8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899CE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D14u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D54u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D88u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899D90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899DECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E24u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E54u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899E9Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899ECCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899EFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F44u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899F98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x08899FD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A004u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A0E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A10Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A118u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A12Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A150u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A15Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A16Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A190u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A19Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A1ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A218u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A22Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A240u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A260u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A280u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A2ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A30Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A32Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A338u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A358u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A378u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A384u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A3F0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A410u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A420u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A444u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A478u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A52Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A538u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A54Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A570u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A57Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A590u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A5F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A600u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A624u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A62Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A634u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A63Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A650u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A668u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A67Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A690u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6C0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A6F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A714u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A720u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A73Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A758u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A764u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A780u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A79Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A7ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A808u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A824u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A834u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A858u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A888u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A944u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A950u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A964u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A984u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A990u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889A9E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA0Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA60u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AA90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AAF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB44u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AB90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABDCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ABFCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC1Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AC80u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ACA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ACD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AD98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889ADECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE48u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE70u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AE90u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEBCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AEC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AED8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF14u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF2Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF44u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF68u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AF98u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFC8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889AFF8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B004u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B00Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B014u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B01Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B024u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B030u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B054u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B060u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B084u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B090u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B098u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B0DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B100u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B10Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B114u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B11Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B128u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B14Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B158u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B17Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B188u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B190u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B198u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B1F8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B204u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B20Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B214u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B220u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B244u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B250u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B258u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B27Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B2D8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B338u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B34Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B354u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B40Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B418u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B43Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B444u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B450u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B458u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B474u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B48Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B494u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B4FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B504u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B514u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B578u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5E0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5ECu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B5FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B614u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B618u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B620u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B630u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B63Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B644u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B64Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B654u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B664u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B670u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B678u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B67Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B6ACu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B708u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B714u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B71Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B72Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B734u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B748u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B750u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B754u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B75Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B764u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B76Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B774u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B77Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7C4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7D4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7F4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B7FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B80Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B814u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B828u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B830u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B834u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B840u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B884u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B894u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8A0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8A8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8B0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8BCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8C8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8D0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8DCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B8FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B908u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B910u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B920u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B930u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B938u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B948u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B954u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B958u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B96Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B974u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B980u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B988u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9A4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9B4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9B8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9CCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9E8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889B9FCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA20u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BA6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BAD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB18u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB30u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB64u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB7Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BB94u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBB4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBC4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBD4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BBE4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC58u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BC84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCA8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCCCu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCF0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BCF4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD10u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD50u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD5Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD78u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BD8Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDA4u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDB0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDC8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDD0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BDE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BE28u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BEA0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BEB8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BEC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BEE0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF00u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF08u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF14u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF34u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF38u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF40u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF4Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF6Cu, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF74u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BF84u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFC0u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFD8u, &recomp_unit_0037, "recomp_unit_0037");
    runtime.register_function(0x0889BFE4u, &recomp_unit_0037, "recomp_unit_0037");
}
} // namespace psprecomp
