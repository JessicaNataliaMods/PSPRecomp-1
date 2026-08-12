#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0184[4091] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 16, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 25, 0, 26, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0,
    0, 0, 0, 0, 35, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 47, 0, 0, 0, 0, 0, 0, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0,
    55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 62, 63, 0,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 0, 76, 0, 77,
    0, 78, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 0, 96, 97, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 105, 0,
    106, 107, 0, 0, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 112, 113, 0, 0, 114,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    118, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0,
    0, 0, 128, 0, 0, 129, 0, 0, 0, 0, 0, 130, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0,
    0, 134, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0,
    0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154,
    0, 0, 155, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0,
    0, 170, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 175, 0, 0, 0, 176, 0, 177, 0, 178, 179, 0, 0, 0, 0, 0, 0, 0, 180, 181, 0, 0, 0, 182, 183, 0, 0, 0,
    0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0,
    192, 0, 193, 194, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 200, 0,
    0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 204, 0, 205, 206, 0, 0, 0,
    0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 212, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    218, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0,
    0, 0, 225, 0, 0, 226, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 231, 0, 0, 0,
    0, 0, 232, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0,
    0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 263, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 270,
    0, 0, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 276, 0, 0, 0, 0, 0,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 282, 0, 0, 0, 0,
    0, 0, 283, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 287, 288, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 300, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0,
    0, 0, 0, 306, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 312, 0, 0, 0,
    0, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 318, 0, 0, 0, 0, 0, 319,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    327, 0, 0, 328, 0, 0, 0, 0, 329, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334,
    0, 0, 0, 0, 0, 335, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 374, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 388,
    0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 402, 0, 0, 0, 0, 0,
    0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 407, 408, 0, 0, 0, 0, 0, 409, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413,
    0, 0, 414, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425,
    0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 432, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0,
    0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0,
    0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0,
    0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0,
    452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 457, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0,
    0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472,
    0, 0, 0, 473, 0, 474, 0, 475, 0, 476, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0,
    481, 0, 0, 0, 0, 0, 482, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487,
    0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0,
    498, 0, 499, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 508, 509, 0, 510, 0, 0, 0, 0,
    0, 511, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 0,
    0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 542, 0, 0, 543, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0,
    0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 0, 0, 553, 0, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0,
    0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 570, 0, 0, 571, 0, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 588, 0,
    0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0, 593, 594, 0, 0, 0, 0,
    0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0,
    0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 0,
    0, 0, 0, 605, 0, 606, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0,
    0, 0, 612, 613, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0,
    0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0,
    0, 624, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0,
    639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 645, 0, 0, 646, 0, 647, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 0, 657, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660,
    0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0,
    0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0,
    0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0,
    0, 680, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 0, 692, 0, 0,
    0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0,
    0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706,
    0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0,
    0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    714, 0, 0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0,
    0, 721, 0, 0, 0, 0, 722, 723, 0, 0, 724, 0, 725, 0, 0, 726, 727, 0, 0, 0, 0, 0, 0, 728, 729, 0, 0, 0, 0, 0, 0, 0,
    0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 734, 735, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 0,
    742, 743, 0, 0, 0, 744, 0, 745, 0, 746, 0, 0, 747, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 0, 752, 753, 0, 0, 754,
    0, 755, 756, 0, 0, 0, 757, 0, 758, 0, 759, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764,
};
void recomp_unit_0184_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE4000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0184[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE4000;
    case 2u: goto L_08AE4014;
    case 3u: goto L_08AE4020;
    case 4u: goto L_08AE402C;
    case 5u: goto L_08AE4048;
    case 6u: goto L_08AE4050;
    case 7u: goto L_08AE405C;
    case 8u: goto L_08AE4064;
    case 9u: goto L_08AE406C;
    case 10u: goto L_08AE4088;
    case 11u: goto L_08AE40A4;
    case 12u: goto L_08AE40E4;
    case 13u: goto L_08AE40F0;
    case 14u: goto L_08AE4114;
    case 15u: goto L_08AE412C;
    case 16u: goto L_08AE4138;
    case 17u: goto L_08AE413C;
    case 18u: goto L_08AE4148;
    case 19u: goto L_08AE4174;
    case 20u: goto L_08AE417C;
    case 21u: goto L_08AE41B8;
    case 22u: goto L_08AE41D4;
    case 23u: goto L_08AE41DC;
    case 24u: goto L_08AE41E8;
    case 25u: goto L_08AE41F0;
    case 26u: goto L_08AE41F8;
    case 27u: goto L_08AE422C;
    case 28u: goto L_08AE4248;
    case 29u: goto L_08AE426C;
    case 30u: goto L_08AE428C;
    case 31u: goto L_08AE4298;
    case 32u: goto L_08AE42A4;
    case 33u: goto L_08AE42C8;
    case 34u: goto L_08AE42F0;
    case 35u: goto L_08AE4310;
    case 36u: goto L_08AE431C;
    case 37u: goto L_08AE4338;
    case 38u: goto L_08AE4370;
    case 39u: goto L_08AE437C;
    case 40u: goto L_08AE43B0;
    case 41u: goto L_08AE43D0;
    case 42u: goto L_08AE4408;
    case 43u: goto L_08AE4414;
    case 44u: goto L_08AE4438;
    case 45u: goto L_08AE4450;
    case 46u: goto L_08AE445C;
    case 47u: goto L_08AE4460;
    case 48u: goto L_08AE447C;
    case 49u: goto L_08AE44A0;
    case 50u: goto L_08AE44C8;
    case 51u: goto L_08AE44D4;
    case 52u: goto L_08AE44E0;
    case 53u: goto L_08AE44E8;
    case 54u: goto L_08AE44F8;
    case 55u: goto L_08AE4500;
    case 56u: goto L_08AE4508;
    case 57u: goto L_08AE4518;
    case 58u: goto L_08AE4528;
    case 59u: goto L_08AE4530;
    case 60u: goto L_08AE4550;
    case 61u: goto L_08AE455C;
    case 62u: goto L_08AE4574;
    case 63u: goto L_08AE4578;
    case 64u: goto L_08AE4590;
    case 65u: goto L_08AE45B8;
    case 66u: goto L_08AE45C4;
    case 67u: goto L_08AE4610;
    case 68u: goto L_08AE463C;
    case 69u: goto L_08AE4664;
    case 70u: goto L_08AE4670;
    case 71u: goto L_08AE4698;
    case 72u: goto L_08AE46C0;
    case 73u: goto L_08AE46CC;
    case 74u: goto L_08AE46E0;
    case 75u: goto L_08AE46E8;
    case 76u: goto L_08AE46F4;
    case 77u: goto L_08AE46FC;
    case 78u: goto L_08AE4704;
    case 79u: goto L_08AE470C;
    case 80u: goto L_08AE4710;
    case 81u: goto L_08AE4718;
    case 82u: goto L_08AE4734;
    case 83u: goto L_08AE473C;
    case 84u: goto L_08AE4744;
    case 85u: goto L_08AE4768;
    case 86u: goto L_08AE4798;
    case 87u: goto L_08AE47A4;
    case 88u: goto L_08AE47BC;
    case 89u: goto L_08AE47C4;
    case 90u: goto L_08AE47CC;
    case 91u: goto L_08AE47D0;
    case 92u: goto L_08AE47EC;
    case 93u: goto L_08AE47F4;
    case 94u: goto L_08AE4814;
    case 95u: goto L_08AE4820;
    case 96u: goto L_08AE4838;
    case 97u: goto L_08AE483C;
    case 98u: goto L_08AE4848;
    case 99u: goto L_08AE486C;
    case 100u: goto L_08AE4878;
    case 101u: goto L_08AE4894;
    case 102u: goto L_08AE48C4;
    case 103u: goto L_08AE48D0;
    case 104u: goto L_08AE48F0;
    case 105u: goto L_08AE48F8;
    case 106u: goto L_08AE4900;
    case 107u: goto L_08AE4904;
    case 108u: goto L_08AE4920;
    case 109u: goto L_08AE4928;
    case 110u: goto L_08AE4948;
    case 111u: goto L_08AE4954;
    case 112u: goto L_08AE496C;
    case 113u: goto L_08AE4970;
    case 114u: goto L_08AE497C;
    case 115u: goto L_08AE49B0;
    case 116u: goto L_08AE49BC;
    case 117u: goto L_08AE49D8;
    case 118u: goto L_08AE4A00;
    case 119u: goto L_08AE4A0C;
    case 120u: goto L_08AE4A18;
    case 121u: goto L_08AE4A20;
    case 122u: goto L_08AE4A30;
    case 123u: goto L_08AE4A38;
    case 124u: goto L_08AE4A40;
    case 125u: goto L_08AE4A50;
    case 126u: goto L_08AE4A60;
    case 127u: goto L_08AE4A68;
    case 128u: goto L_08AE4A88;
    case 129u: goto L_08AE4A94;
    case 130u: goto L_08AE4AAC;
    case 131u: goto L_08AE4AB0;
    case 132u: goto L_08AE4AC8;
    case 133u: goto L_08AE4AF8;
    case 134u: goto L_08AE4B04;
    case 135u: goto L_08AE4B14;
    case 136u: goto L_08AE4B1C;
    case 137u: goto L_08AE4B20;
    case 138u: goto L_08AE4B3C;
    case 139u: goto L_08AE4B44;
    case 140u: goto L_08AE4B64;
    case 141u: goto L_08AE4B70;
    case 142u: goto L_08AE4B88;
    case 143u: goto L_08AE4B8C;
    case 144u: goto L_08AE4BA8;
    case 145u: goto L_08AE4BC8;
    case 146u: goto L_08AE4BD4;
    case 147u: goto L_08AE4BF0;
    case 148u: goto L_08AE4C18;
    case 149u: goto L_08AE4C24;
    case 150u: goto L_08AE4C2C;
    case 151u: goto L_08AE4C30;
    case 152u: goto L_08AE4C54;
    case 153u: goto L_08AE4C5C;
    case 154u: goto L_08AE4C7C;
    case 155u: goto L_08AE4C88;
    case 156u: goto L_08AE4CA0;
    case 157u: goto L_08AE4CA4;
    case 158u: goto L_08AE4CBC;
    case 159u: goto L_08AE4CF8;
    case 160u: goto L_08AE4D40;
    case 161u: goto L_08AE4D54;
    case 162u: goto L_08AE4D74;
    case 163u: goto L_08AE4D9C;
    case 164u: goto L_08AE4DCC;
    case 165u: goto L_08AE4DD4;
    case 166u: goto L_08AE4DDC;
    case 167u: goto L_08AE4DE8;
    case 168u: goto L_08AE4DF0;
    case 169u: goto L_08AE4DF8;
    case 170u: goto L_08AE4E04;
    case 171u: goto L_08AE4E08;
    case 172u: goto L_08AE4E20;
    case 173u: goto L_08AE4E5C;
    case 174u: goto L_08AE4E68;
    case 175u: goto L_08AE4E94;
    case 176u: goto L_08AE4EA4;
    case 177u: goto L_08AE4EAC;
    case 178u: goto L_08AE4EB4;
    case 179u: goto L_08AE4EB8;
    case 180u: goto L_08AE4ED8;
    case 181u: goto L_08AE4EDC;
    case 182u: goto L_08AE4EEC;
    case 183u: goto L_08AE4EF0;
    case 184u: goto L_08AE4F08;
    case 185u: goto L_08AE4F30;
    case 186u: goto L_08AE4F58;
    case 187u: goto L_08AE4F64;
    case 188u: goto L_08AE4F8C;
    case 189u: goto L_08AE4FA4;
    case 190u: goto L_08AE4FD4;
    case 191u: goto L_08AE4FE0;
    case 192u: goto L_08AE5000;
    case 193u: goto L_08AE5008;
    case 194u: goto L_08AE500C;
    case 195u: goto L_08AE5028;
    case 196u: goto L_08AE5030;
    case 197u: goto L_08AE5050;
    case 198u: goto L_08AE505C;
    case 199u: goto L_08AE5074;
    case 200u: goto L_08AE5078;
    case 201u: goto L_08AE5094;
    case 202u: goto L_08AE50C0;
    case 203u: goto L_08AE50CC;
    case 204u: goto L_08AE50E4;
    case 205u: goto L_08AE50EC;
    case 206u: goto L_08AE50F0;
    case 207u: goto L_08AE5114;
    case 208u: goto L_08AE511C;
    case 209u: goto L_08AE513C;
    case 210u: goto L_08AE5148;
    case 211u: goto L_08AE5160;
    case 212u: goto L_08AE5164;
    case 213u: goto L_08AE5180;
    case 214u: goto L_08AE51A8;
    case 215u: goto L_08AE51B4;
    case 216u: goto L_08AE51C8;
    case 217u: goto L_08AE51E0;
    case 218u: goto L_08AE5200;
    case 219u: goto L_08AE5210;
    case 220u: goto L_08AE5224;
    case 221u: goto L_08AE5234;
    case 222u: goto L_08AE5244;
    case 223u: goto L_08AE5268;
    case 224u: goto L_08AE5274;
    case 225u: goto L_08AE5288;
    case 226u: goto L_08AE5294;
    case 227u: goto L_08AE5298;
    case 228u: goto L_08AE52BC;
    case 229u: goto L_08AE52C4;
    case 230u: goto L_08AE52E4;
    case 231u: goto L_08AE52F0;
    case 232u: goto L_08AE5308;
    case 233u: goto L_08AE530C;
    case 234u: goto L_08AE5320;
    case 235u: goto L_08AE5348;
    case 236u: goto L_08AE5354;
    case 237u: goto L_08AE535C;
    case 238u: goto L_08AE5368;
    case 239u: goto L_08AE5384;
    case 240u: goto L_08AE539C;
    case 241u: goto L_08AE53C4;
    case 242u: goto L_08AE53D0;
    case 243u: goto L_08AE53EC;
    case 244u: goto L_08AE5404;
    case 245u: goto L_08AE5434;
    case 246u: goto L_08AE5440;
    case 247u: goto L_08AE5448;
    case 248u: goto L_08AE545C;
    case 249u: goto L_08AE5478;
    case 250u: goto L_08AE54A8;
    case 251u: goto L_08AE54B4;
    case 252u: goto L_08AE54CC;
    case 253u: goto L_08AE54E8;
    case 254u: goto L_08AE5508;
    case 255u: goto L_08AE5524;
    case 256u: goto L_08AE5554;
    case 257u: goto L_08AE5560;
    case 258u: goto L_08AE5574;
    case 259u: goto L_08AE55AC;
    case 260u: goto L_08AE55CC;
    case 261u: goto L_08AE55D8;
    case 262u: goto L_08AE55E0;
    case 263u: goto L_08AE55E4;
    case 264u: goto L_08AE5614;
    case 265u: goto L_08AE5630;
    case 266u: goto L_08AE5658;
    case 267u: goto L_08AE5664;
    case 268u: goto L_08AE5670;
    case 269u: goto L_08AE5678;
    case 270u: goto L_08AE567C;
    case 271u: goto L_08AE5698;
    case 272u: goto L_08AE56A0;
    case 273u: goto L_08AE56C0;
    case 274u: goto L_08AE56CC;
    case 275u: goto L_08AE56E4;
    case 276u: goto L_08AE56E8;
    case 277u: goto L_08AE5700;
    case 278u: goto L_08AE5728;
    case 279u: goto L_08AE5734;
    case 280u: goto L_08AE5760;
    case 281u: goto L_08AE5768;
    case 282u: goto L_08AE576C;
    case 283u: goto L_08AE5788;
    case 284u: goto L_08AE5790;
    case 285u: goto L_08AE57A8;
    case 286u: goto L_08AE57BC;
    case 287u: goto L_08AE57DC;
    case 288u: goto L_08AE57E0;
    case 289u: goto L_08AE57F8;
    case 290u: goto L_08AE5820;
    case 291u: goto L_08AE582C;
    case 292u: goto L_08AE584C;
    case 293u: goto L_08AE586C;
    case 294u: goto L_08AE5878;
    case 295u: goto L_08AE58A4;
    case 296u: goto L_08AE58B8;
    case 297u: goto L_08AE58E0;
    case 298u: goto L_08AE58EC;
    case 299u: goto L_08AE5910;
    case 300u: goto L_08AE5918;
    case 301u: goto L_08AE591C;
    case 302u: goto L_08AE5938;
    case 303u: goto L_08AE5940;
    case 304u: goto L_08AE5958;
    case 305u: goto L_08AE596C;
    case 306u: goto L_08AE598C;
    case 307u: goto L_08AE5990;
    case 308u: goto L_08AE59A8;
    case 309u: goto L_08AE59D0;
    case 310u: goto L_08AE59DC;
    case 311u: goto L_08AE59EC;
    case 312u: goto L_08AE59F0;
    case 313u: goto L_08AE5A14;
    case 314u: goto L_08AE5A1C;
    case 315u: goto L_08AE5A3C;
    case 316u: goto L_08AE5A48;
    case 317u: goto L_08AE5A60;
    case 318u: goto L_08AE5A64;
    case 319u: goto L_08AE5A7C;
    case 320u: goto L_08AE5AA4;
    case 321u: goto L_08AE5AB0;
    case 322u: goto L_08AE5AD8;
    case 323u: goto L_08AE5B08;
    case 324u: goto L_08AE5B14;
    case 325u: goto L_08AE5B34;
    case 326u: goto L_08AE5B50;
    case 327u: goto L_08AE5B80;
    case 328u: goto L_08AE5B8C;
    case 329u: goto L_08AE5BA0;
    case 330u: goto L_08AE5BA4;
    case 331u: goto L_08AE5BC8;
    case 332u: goto L_08AE5BD0;
    case 333u: goto L_08AE5BF0;
    case 334u: goto L_08AE5BFC;
    case 335u: goto L_08AE5C14;
    case 336u: goto L_08AE5C18;
    case 337u: goto L_08AE5C34;
    case 338u: goto L_08AE5C5C;
    case 339u: goto L_08AE5C68;
    case 340u: goto L_08AE5C78;
    case 341u: goto L_08AE5C88;
    case 342u: goto L_08AE5C9C;
    case 343u: goto L_08AE5CA8;
    case 344u: goto L_08AE5CB0;
    case 345u: goto L_08AE5CB8;
    case 346u: goto L_08AE5CE4;
    case 347u: goto L_08AE5D18;
    case 348u: goto L_08AE5D20;
    case 349u: goto L_08AE5D28;
    case 350u: goto L_08AE5D54;
    case 351u: goto L_08AE5D94;
    case 352u: goto L_08AE5DBC;
    case 353u: goto L_08AE5DC8;
    case 354u: goto L_08AE5DF0;
    case 355u: goto L_08AE5E0C;
    case 356u: goto L_08AE5E34;
    case 357u: goto L_08AE5E40;
    case 358u: goto L_08AE5E50;
    case 359u: goto L_08AE5E60;
    case 360u: goto L_08AE5E68;
    case 361u: goto L_08AE5E80;
    case 362u: goto L_08AE5EA8;
    case 363u: goto L_08AE5EB4;
    case 364u: goto L_08AE5EC0;
    case 365u: goto L_08AE5ECC;
    case 366u: goto L_08AE5ED0;
    case 367u: goto L_08AE5EF4;
    case 368u: goto L_08AE5EFC;
    case 369u: goto L_08AE5F1C;
    case 370u: goto L_08AE5F28;
    case 371u: goto L_08AE5F40;
    case 372u: goto L_08AE5F44;
    case 373u: goto L_08AE5F5C;
    case 374u: goto L_08AE5F84;
    case 375u: goto L_08AE5F90;
    case 376u: goto L_08AE5FA0;
    case 377u: goto L_08AE5FB0;
    case 378u: goto L_08AE5FC0;
    case 379u: goto L_08AE5FD8;
    case 380u: goto L_08AE6000;
    case 381u: goto L_08AE600C;
    case 382u: goto L_08AE601C;
    case 383u: goto L_08AE6030;
    case 384u: goto L_08AE6044;
    case 385u: goto L_08AE604C;
    case 386u: goto L_08AE6060;
    case 387u: goto L_08AE6074;
    case 388u: goto L_08AE607C;
    case 389u: goto L_08AE6090;
    case 390u: goto L_08AE60A4;
    case 391u: goto L_08AE60AC;
    case 392u: goto L_08AE60C0;
    case 393u: goto L_08AE60D4;
    case 394u: goto L_08AE60DC;
    case 395u: goto L_08AE60EC;
    case 396u: goto L_08AE60FC;
    case 397u: goto L_08AE6114;
    case 398u: goto L_08AE613C;
    case 399u: goto L_08AE6148;
    case 400u: goto L_08AE6154;
    case 401u: goto L_08AE6164;
    case 402u: goto L_08AE6168;
    case 403u: goto L_08AE618C;
    case 404u: goto L_08AE6194;
    case 405u: goto L_08AE61B4;
    case 406u: goto L_08AE61C0;
    case 407u: goto L_08AE61D8;
    case 408u: goto L_08AE61DC;
    case 409u: goto L_08AE61F4;
    case 410u: goto L_08AE6234;
    case 411u: goto L_08AE6240;
    case 412u: goto L_08AE6264;
    case 413u: goto L_08AE627C;
    case 414u: goto L_08AE6288;
    case 415u: goto L_08AE628C;
    case 416u: goto L_08AE6298;
    case 417u: goto L_08AE62C4;
    case 418u: goto L_08AE62CC;
    case 419u: goto L_08AE6308;
    case 420u: goto L_08AE6324;
    case 421u: goto L_08AE632C;
    case 422u: goto L_08AE6338;
    case 423u: goto L_08AE6340;
    case 424u: goto L_08AE6348;
    case 425u: goto L_08AE637C;
    case 426u: goto L_08AE6398;
    case 427u: goto L_08AE63BC;
    case 428u: goto L_08AE63E4;
    case 429u: goto L_08AE63F0;
    case 430u: goto L_08AE64A0;
    case 431u: goto L_08AE64A8;
    case 432u: goto L_08AE64B0;
    case 433u: goto L_08AE64B4;
    case 434u: goto L_08AE64D8;
    case 435u: goto L_08AE64E0;
    case 436u: goto L_08AE64F8;
    case 437u: goto L_08AE650C;
    case 438u: goto L_08AE652C;
    case 439u: goto L_08AE6530;
    case 440u: goto L_08AE6548;
    case 441u: goto L_08AE6578;
    case 442u: goto L_08AE6584;
    case 443u: goto L_08AE65AC;
    case 444u: goto L_08AE65C0;
    case 445u: goto L_08AE65D8;
    case 446u: goto L_08AE6624;
    case 447u: goto L_08AE6658;
    case 448u: goto L_08AE6678;
    case 449u: goto L_08AE6684;
    case 450u: goto L_08AE66CC;
    case 451u: goto L_08AE66F4;
    case 452u: goto L_08AE6700;
    case 453u: goto L_08AE6730;
    case 454u: goto L_08AE6760;
    case 455u: goto L_08AE676C;
    case 456u: goto L_08AE67BC;
    case 457u: goto L_08AE67C0;
    case 458u: goto L_08AE67D8;
    case 459u: goto L_08AE67F4;
    case 460u: goto L_08AE6824;
    case 461u: goto L_08AE6830;
    case 462u: goto L_08AE6868;
    case 463u: goto L_08AE6884;
    case 464u: goto L_08AE68B4;
    case 465u: goto L_08AE68C0;
    case 466u: goto L_08AE68F8;
    case 467u: goto L_08AE6914;
    case 468u: goto L_08AE6944;
    case 469u: goto L_08AE6950;
    case 470u: goto L_08AE6960;
    case 471u: goto L_08AE6970;
    case 472u: goto L_08AE697C;
    case 473u: goto L_08AE698C;
    case 474u: goto L_08AE6994;
    case 475u: goto L_08AE699C;
    case 476u: goto L_08AE69A4;
    case 477u: goto L_08AE69A8;
    case 478u: goto L_08AE69CC;
    case 479u: goto L_08AE69D4;
    case 480u: goto L_08AE69F4;
    case 481u: goto L_08AE6A00;
    case 482u: goto L_08AE6A18;
    case 483u: goto L_08AE6A1C;
    case 484u: goto L_08AE6A38;
    case 485u: goto L_08AE6A60;
    case 486u: goto L_08AE6A6C;
    case 487u: goto L_08AE6A7C;
    case 488u: goto L_08AE6A88;
    case 489u: goto L_08AE6A94;
    case 490u: goto L_08AE6AAC;
    case 491u: goto L_08AE6AF8;
    case 492u: goto L_08AE6B30;
    case 493u: goto L_08AE6B3C;
    case 494u: goto L_08AE6B48;
    case 495u: goto L_08AE6B50;
    case 496u: goto L_08AE6B64;
    case 497u: goto L_08AE6B6C;
    case 498u: goto L_08AE6B80;
    case 499u: goto L_08AE6B88;
    case 500u: goto L_08AE6B8C;
    case 501u: goto L_08AE6B94;
    case 502u: goto L_08AE6B9C;
    case 503u: goto L_08AE6BA4;
    case 504u: goto L_08AE6BAC;
    case 505u: goto L_08AE6BB8;
    case 506u: goto L_08AE6BC8;
    case 507u: goto L_08AE6BD8;
    case 508u: goto L_08AE6BE0;
    case 509u: goto L_08AE6BE4;
    case 510u: goto L_08AE6BEC;
    case 511u: goto L_08AE6C04;
    case 512u: goto L_08AE6C0C;
    case 513u: goto L_08AE6C18;
    case 514u: goto L_08AE6C48;
    case 515u: goto L_08AE6C5C;
    case 516u: goto L_08AE6C64;
    case 517u: goto L_08AE6C78;
    case 518u: goto L_08AE6CAC;
    case 519u: goto L_08AE6CD4;
    case 520u: goto L_08AE6CE0;
    case 521u: goto L_08AE6CF0;
    case 522u: goto L_08AE6CFC;
    case 523u: goto L_08AE6D14;
    case 524u: goto L_08AE6D3C;
    case 525u: goto L_08AE6D48;
    case 526u: goto L_08AE6D58;
    case 527u: goto L_08AE6D64;
    case 528u: goto L_08AE6D70;
    case 529u: goto L_08AE6D88;
    case 530u: goto L_08AE6DB0;
    case 531u: goto L_08AE6DBC;
    case 532u: goto L_08AE6DCC;
    case 533u: goto L_08AE6DDC;
    case 534u: goto L_08AE6DEC;
    case 535u: goto L_08AE6E04;
    case 536u: goto L_08AE6E24;
    case 537u: goto L_08AE6E30;
    case 538u: goto L_08AE6E38;
    case 539u: goto L_08AE6E40;
    case 540u: goto L_08AE6E48;
    case 541u: goto L_08AE6E5C;
    case 542u: goto L_08AE6E84;
    case 543u: goto L_08AE6E90;
    case 544u: goto L_08AE6EA0;
    case 545u: goto L_08AE6EAC;
    case 546u: goto L_08AE6EB8;
    case 547u: goto L_08AE6ED0;
    case 548u: goto L_08AE6EF8;
    case 549u: goto L_08AE6F04;
    case 550u: goto L_08AE6F14;
    case 551u: goto L_08AE6F20;
    case 552u: goto L_08AE6F2C;
    case 553u: goto L_08AE6F3C;
    case 554u: goto L_08AE6F48;
    case 555u: goto L_08AE6F54;
    case 556u: goto L_08AE6F60;
    case 557u: goto L_08AE6F6C;
    case 558u: goto L_08AE6F84;
    case 559u: goto L_08AE6FB0;
    case 560u: goto L_08AE6FBC;
    case 561u: goto L_08AE7014;
    case 562u: goto L_08AE7034;
    case 563u: goto L_08AE7054;
    case 564u: goto L_08AE7058;
    case 565u: goto L_08AE7060;
    case 566u: goto L_08AE707C;
    case 567u: goto L_08AE70A4;
    case 568u: goto L_08AE70B0;
    case 569u: goto L_08AE70E8;
    case 570u: goto L_08AE7110;
    case 571u: goto L_08AE711C;
    case 572u: goto L_08AE712C;
    case 573u: goto L_08AE7138;
    case 574u: goto L_08AE7144;
    case 575u: goto L_08AE715C;
    case 576u: goto L_08AE7184;
    case 577u: goto L_08AE71B8;
    case 578u: goto L_08AE71C0;
    case 579u: goto L_08AE71D0;
    case 580u: goto L_08AE71D8;
    case 581u: goto L_08AE71E8;
    case 582u: goto L_08AE71F4;
    case 583u: goto L_08AE7214;
    case 584u: goto L_08AE722C;
    case 585u: goto L_08AE7254;
    case 586u: goto L_08AE7260;
    case 587u: goto L_08AE7274;
    case 588u: goto L_08AE7278;
    case 589u: goto L_08AE729C;
    case 590u: goto L_08AE72A4;
    case 591u: goto L_08AE72C4;
    case 592u: goto L_08AE72D0;
    case 593u: goto L_08AE72E8;
    case 594u: goto L_08AE72EC;
    case 595u: goto L_08AE7304;
    case 596u: goto L_08AE7334;
    case 597u: goto L_08AE7340;
    case 598u: goto L_08AE735C;
    case 599u: goto L_08AE7378;
    case 600u: goto L_08AE7398;
    case 601u: goto L_08AE73A8;
    case 602u: goto L_08AE73BC;
    case 603u: goto L_08AE73E8;
    case 604u: goto L_08AE73F4;
    case 605u: goto L_08AE740C;
    case 606u: goto L_08AE7414;
    case 607u: goto L_08AE7418;
    case 608u: goto L_08AE743C;
    case 609u: goto L_08AE7444;
    case 610u: goto L_08AE7464;
    case 611u: goto L_08AE7470;
    case 612u: goto L_08AE7488;
    case 613u: goto L_08AE748C;
    case 614u: goto L_08AE74A8;
    case 615u: goto L_08AE74D0;
    case 616u: goto L_08AE74DC;
    case 617u: goto L_08AE74EC;
    case 618u: goto L_08AE74F8;
    case 619u: goto L_08AE7504;
    case 620u: goto L_08AE751C;
    case 621u: goto L_08AE754C;
    case 622u: goto L_08AE7558;
    case 623u: goto L_08AE7568;
    case 624u: goto L_08AE7584;
    case 625u: goto L_08AE75A4;
    case 626u: goto L_08AE75B0;
    case 627u: goto L_08AE75B8;
    case 628u: goto L_08AE75C0;
    case 629u: goto L_08AE75C8;
    case 630u: goto L_08AE75D0;
    case 631u: goto L_08AE75E0;
    case 632u: goto L_08AE75F4;
    case 633u: goto L_08AE7620;
    case 634u: goto L_08AE762C;
    case 635u: goto L_08AE763C;
    case 636u: goto L_08AE7650;
    case 637u: goto L_08AE7658;
    case 638u: goto L_08AE7664;
    case 639u: goto L_08AE7680;
    case 640u: goto L_08AE76B8;
    case 641u: goto L_08AE76C4;
    case 642u: goto L_08AE7714;
    case 643u: goto L_08AE773C;
    case 644u: goto L_08AE775C;
    case 645u: goto L_08AE7784;
    case 646u: goto L_08AE7790;
    case 647u: goto L_08AE7798;
    case 648u: goto L_08AE77A0;
    case 649u: goto L_08AE77A8;
    case 650u: goto L_08AE77BC;
    case 651u: goto L_08AE77D4;
    case 652u: goto L_08AE77FC;
    case 653u: goto L_08AE7808;
    case 654u: goto L_08AE781C;
    case 655u: goto L_08AE7824;
    case 656u: goto L_08AE7830;
    case 657u: goto L_08AE7838;
    case 658u: goto L_08AE783C;
    case 659u: goto L_08AE7854;
    case 660u: goto L_08AE787C;
    case 661u: goto L_08AE7888;
    case 662u: goto L_08AE78A0;
    case 663u: goto L_08AE78AC;
    case 664u: goto L_08AE78B0;
    case 665u: goto L_08AE78C8;
    case 666u: goto L_08AE78F8;
    case 667u: goto L_08AE7904;
    case 668u: goto L_08AE7920;
    case 669u: goto L_08AE792C;
    case 670u: goto L_08AE7934;
    case 671u: goto L_08AE7938;
    case 672u: goto L_08AE795C;
    case 673u: goto L_08AE7964;
    case 674u: goto L_08AE7984;
    case 675u: goto L_08AE7990;
    case 676u: goto L_08AE79A8;
    case 677u: goto L_08AE79AC;
    case 678u: goto L_08AE79C8;
    case 679u: goto L_08AE79F8;
    case 680u: goto L_08AE7A04;
    case 681u: goto L_08AE7A1C;
    case 682u: goto L_08AE7A38;
    case 683u: goto L_08AE7A58;
    case 684u: goto L_08AE7A64;
    case 685u: goto L_08AE7A6C;
    case 686u: goto L_08AE7A80;
    case 687u: goto L_08AE7AA8;
    case 688u: goto L_08AE7AB4;
    case 689u: goto L_08AE7ACC;
    case 690u: goto L_08AE7AD4;
    case 691u: goto L_08AE7ADC;
    case 692u: goto L_08AE7AF4;
    case 693u: goto L_08AE7B14;
    case 694u: goto L_08AE7B20;
    case 695u: goto L_08AE7B2C;
    case 696u: goto L_08AE7B34;
    case 697u: goto L_08AE7B48;
    case 698u: goto L_08AE7B78;
    case 699u: goto L_08AE7B84;
    case 700u: goto L_08AE7B90;
    case 701u: goto L_08AE7B98;
    case 702u: goto L_08AE7BA0;
    case 703u: goto L_08AE7BA8;
    case 704u: goto L_08AE7BB8;
    case 705u: goto L_08AE7BD4;
    case 706u: goto L_08AE7BFC;
    case 707u: goto L_08AE7C08;
    case 708u: goto L_08AE7C40;
    case 709u: goto L_08AE7C60;
    case 710u: goto L_08AE7C84;
    case 711u: goto L_08AE7CAC;
    case 712u: goto L_08AE7CB8;
    case 713u: goto L_08AE7CD8;
    case 714u: goto L_08AE7D00;
    case 715u: goto L_08AE7D0C;
    case 716u: goto L_08AE7D1C;
    case 717u: goto L_08AE7D28;
    case 718u: goto L_08AE7D34;
    case 719u: goto L_08AE7D4C;
    case 720u: goto L_08AE7D78;
    case 721u: goto L_08AE7D84;
    case 722u: goto L_08AE7D98;
    case 723u: goto L_08AE7D9C;
    case 724u: goto L_08AE7DA8;
    case 725u: goto L_08AE7DB0;
    case 726u: goto L_08AE7DBC;
    case 727u: goto L_08AE7DC0;
    case 728u: goto L_08AE7DDC;
    case 729u: goto L_08AE7DE0;
    case 730u: goto L_08AE7E04;
    case 731u: goto L_08AE7E0C;
    case 732u: goto L_08AE7E2C;
    case 733u: goto L_08AE7E38;
    case 734u: goto L_08AE7E50;
    case 735u: goto L_08AE7E54;
    case 736u: goto L_08AE7E70;
    case 737u: goto L_08AE7EAC;
    case 738u: goto L_08AE7EB8;
    case 739u: goto L_08AE7ED8;
    case 740u: goto L_08AE7EE0;
    case 741u: goto L_08AE7EF0;
    case 742u: goto L_08AE7F00;
    case 743u: goto L_08AE7F04;
    case 744u: goto L_08AE7F14;
    case 745u: goto L_08AE7F1C;
    case 746u: goto L_08AE7F24;
    case 747u: goto L_08AE7F30;
    case 748u: goto L_08AE7F3C;
    case 749u: goto L_08AE7F44;
    case 750u: goto L_08AE7F5C;
    case 751u: goto L_08AE7F64;
    case 752u: goto L_08AE7F6C;
    case 753u: goto L_08AE7F70;
    case 754u: goto L_08AE7F7C;
    case 755u: goto L_08AE7F84;
    case 756u: goto L_08AE7F88;
    case 757u: goto L_08AE7F98;
    case 758u: goto L_08AE7FA0;
    case 759u: goto L_08AE7FA8;
    case 760u: goto L_08AE7FB8;
    case 761u: goto L_08AE7FC0;
    case 762u: goto L_08AE7FC8;
    case 763u: goto L_08AE7FE0;
    case 764u: goto L_08AE7FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE4000:
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE4014u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4014u) goto L_08AE4014;
    return;
L_08AE4014:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4020u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4020u) goto L_08AE4020;
    return;
L_08AE4020:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
      if (branch_taken) {
          goto L_08AE4048;
      }
      goto L_08AE402C;
    }
L_08AE402C:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08AE4048u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4048u) goto L_08AE4048;
    return;
L_08AE4048:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4088;
      }
      goto L_08AE4050;
    }
L_08AE4050:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE405Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE405Cu) goto L_08AE405C;
    return;
L_08AE405C:
    hot_regs.g31 = (0x08AE4064u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 537u, 0x0889358Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4064u) goto L_08AE4064;
    return;
L_08AE4064:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4088;
      }
      goto L_08AE406C;
    }
L_08AE406C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08AE4088u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4088u) goto L_08AE4088;
    return;
L_08AE4088:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE40A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE40E4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE40E4u) goto L_08AE40E4;
    return;
L_08AE40E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE40F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE40F0u) goto L_08AE40F0;
    return;
L_08AE40F0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AE412C;
      }
      goto L_08AE4114;
    }
}
}
L_08AE4114:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE413C;
      }
      goto L_08AE412C;
    }
L_08AE412C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08AE4138u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4138u) goto L_08AE4138;
    return;
L_08AE4138:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE413C;
L_08AE413C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08AE4148u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4148u) goto L_08AE4148;
    return;
L_08AE4148:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (15395u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 55051u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE41B8;
      }
      goto L_08AE4174;
    }
}
L_08AE4174:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE41B8;
      }
      goto L_08AE417C;
    }
L_08AE417C:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE41E8;
      }
      goto L_08AE41B8;
    }
L_08AE41B8:
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08AE41D4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE41D4u) goto L_08AE41D4;
    return;
L_08AE41D4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE41F0;
      }
      goto L_08AE41DC;
    }
L_08AE41DC:
    hot_regs.g4 = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE41F8;
      }
      goto L_08AE41E8;
    }
L_08AE41E8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE4248;
      }
      goto L_08AE41F0;
    }
L_08AE41F0:
    hot_regs.g4 = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08AE41F8;
L_08AE41F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g4 = (g5 | 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (0u | 1u);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08AE422C;
    }
    goto L_08AE422C;
}
L_08AE422C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g2 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4248;
      }
      goto L_08AE4248;
    }
}
L_08AE4248:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE426C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE428Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE428Cu) goto L_08AE428C;
    return;
L_08AE428C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4298u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4298u) goto L_08AE4298;
    return;
L_08AE4298:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08AE42A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE42A4u) goto L_08AE42A4;
    return;
L_08AE42A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g6 = (g5 | 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g6));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08AE42C8;
    }
    goto L_08AE42C8;
}
L_08AE42C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(504), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
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
L_08AE42F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AE4310u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4310u) goto L_08AE4310;
    return;
L_08AE4310:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE431Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE431Cu) goto L_08AE431C;
    return;
L_08AE431C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
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
L_08AE4338:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AE4370u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4370u) goto L_08AE4370;
    return;
L_08AE4370:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE437Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE437Cu) goto L_08AE437C;
    return;
L_08AE437C:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE43B0u);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE43B0u) goto L_08AE43B0;
    return;
L_08AE43B0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE43D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 4u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08AE4408u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4408u) goto L_08AE4408;
    return;
L_08AE4408:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4414u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4414u) goto L_08AE4414;
    return;
L_08AE4414:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AE4450;
      }
      goto L_08AE4438;
    }
}
}
L_08AE4438:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4460;
      }
      goto L_08AE4450;
    }
L_08AE4450:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08AE445Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE445Cu) goto L_08AE445C;
    return;
L_08AE445C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE4460;
L_08AE4460:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08AE447Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 699u, 0x08AEBC84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE447Cu) goto L_08AE447C;
    return;
L_08AE447C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
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
L_08AE44A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE44C8u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE44C8u) goto L_08AE44C8;
    return;
L_08AE44C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE44D4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE44D4u) goto L_08AE44D4;
    return;
L_08AE44D4:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4508;
      }
      goto L_08AE44E0;
    }
L_08AE44E0:
    hot_regs.g31 = (0x08AE44E8u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1011u, 0x08AE3E80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE44E8u) goto L_08AE44E8;
    return;
L_08AE44E8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = hot_regs.g2 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4500;
      }
      goto L_08AE44F8;
    }
}
L_08AE44F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE4518;
      }
      goto L_08AE4500;
    }
L_08AE4500:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE4518;
      }
      goto L_08AE4508;
    }
L_08AE4508:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g6 = (0u | 0u);
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g5 = g5;
    goto L_08AE4518;
}
L_08AE4518:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 255u);
    g5 = (g6 ^ g5);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4530;
      }
      goto L_08AE4528;
    }
}
L_08AE4528:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08AE4578;
      }
      goto L_08AE4530;
    }
L_08AE4530:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE455C;
      }
      goto L_08AE4550;
    }
}
L_08AE4550:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4578;
      }
      goto L_08AE455C;
    }
}
L_08AE455C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4578;
      }
      goto L_08AE4574;
    }
}
L_08AE4574:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE4578;
L_08AE4578:
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
L_08AE4590:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08AE45B8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE45B8u) goto L_08AE45B8;
    return;
L_08AE45B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE45C4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE45C4u) goto L_08AE45C4;
    return;
L_08AE45C4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g6 = (17008u << 16u);
    f13 = std::bit_cast<float>(g6);
    g6 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g2 | 0u);
    g6 = (g6 << 24u);
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 24u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(535))))));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    f12 = std::bit_cast<float>(g6);
    { const float fs = hot_regs.f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 < f13));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_08AE4610;
    }
    goto L_08AE4610;
}
}
L_08AE4610:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f13));
    hot_regs.g2 = (0u | 0u);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 << 24u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 24u));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g5));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE463C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE4664u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4664u) goto L_08AE4664;
    return;
L_08AE4664:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4670u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4670u) goto L_08AE4670;
    return;
L_08AE4670:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(532), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE4698:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE46C0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE46C0u) goto L_08AE46C0;
    return;
L_08AE46C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE46CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE46CCu) goto L_08AE46CC;
    return;
L_08AE46CC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g4;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE46E8;
      }
      goto L_08AE46E0;
    }
L_08AE46E0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE4710;
      }
      goto L_08AE46E8;
    }
L_08AE46E8:
    hot_regs.g7 = (0u | 18u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    ctx.gpr[8] = (0u | 17u);
      if (branch_taken) {
          goto L_08AE46FC;
      }
      goto L_08AE46F4;
    }
L_08AE46F4:
    { const bool branch_taken = hot_regs.g6 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AE4710;
      }
      goto L_08AE46FC;
    }
L_08AE46FC:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g7;
    hot_regs.g6 = (0u | 17u);
      if (branch_taken) {
          goto L_08AE470C;
      }
      goto L_08AE4704;
    }
L_08AE4704:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE4710;
      }
      goto L_08AE470C;
    }
L_08AE470C:
    hot_regs.g5 = (0u | 1u);
    goto L_08AE4710;
L_08AE4710:
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4744;
      }
      goto L_08AE4718;
    }
L_08AE4718:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 10u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE473C;
      }
      goto L_08AE4734;
    }
}
L_08AE4734:
    hot_regs.g31 = (0x08AE473Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE473Cu) goto L_08AE473C;
    return;
L_08AE473C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), hot_regs.g4);
    goto L_08AE4744;
L_08AE4744:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    hot_regs.g2 = (0u | 0u);
    g4 = (g4 | 16u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
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
L_08AE4768:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE4798u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4798u) goto L_08AE4798;
    return;
L_08AE4798:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE47A4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE47A4u) goto L_08AE47A4;
    return;
L_08AE47A4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08AE47BCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE47BCu) goto L_08AE47BC;
    return;
L_08AE47BC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE47CC;
      }
      goto L_08AE47C4;
    }
L_08AE47C4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE47D0;
      }
      goto L_08AE47CC;
    }
L_08AE47CC:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE47D0;
L_08AE47D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE47F4;
      }
      goto L_08AE47EC;
    }
}
L_08AE47EC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE483C;
      }
      goto L_08AE47F4;
    }
L_08AE47F4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4820;
      }
      goto L_08AE4814;
    }
}
L_08AE4814:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE483C;
      }
      goto L_08AE4820;
    }
}
L_08AE4820:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE483C;
      }
      goto L_08AE4838;
    }
}
L_08AE4838:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE483C;
L_08AE483C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE486C;
      }
      goto L_08AE4848;
    }
L_08AE4848:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (49864u << 16u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    ctx.fpr[16] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x08AE486Cu);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE486Cu) goto L_08AE486C;
    return;
L_08AE486C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4878;
      }
      goto L_08AE4878;
    }
L_08AE4878:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE4894:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE48C4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE48C4u) goto L_08AE48C4;
    return;
L_08AE48C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE48D0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE48D0u) goto L_08AE48D0;
    return;
L_08AE48D0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x08AE48F0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 799u, 0x08AAF984u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE48F0u) goto L_08AE48F0;
    return;
L_08AE48F0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4900;
      }
      goto L_08AE48F8;
    }
L_08AE48F8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE4904;
      }
      goto L_08AE4900;
    }
L_08AE4900:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE4904;
L_08AE4904:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4928;
      }
      goto L_08AE4920;
    }
}
L_08AE4920:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE4970;
      }
      goto L_08AE4928;
    }
L_08AE4928:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4954;
      }
      goto L_08AE4948;
    }
}
L_08AE4948:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4970;
      }
      goto L_08AE4954;
    }
}
L_08AE4954:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4970;
      }
      goto L_08AE496C;
    }
}
L_08AE496C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE4970;
L_08AE4970:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE49B0;
      }
      goto L_08AE497C;
    }
L_08AE497C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (16128u << 16u);
    ctx.fpr[16] = hot_regs.f12 + hot_regs.f13;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g5);
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x08AE49B0u);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 662u, 0x088637CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE49B0u) goto L_08AE49B0;
    return;
L_08AE49B0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7728)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE49BC;
      }
      goto L_08AE49BC;
    }
L_08AE49BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE49D8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE4A00u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4A00u) goto L_08AE4A00;
    return;
L_08AE4A00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4A0Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4A0Cu) goto L_08AE4A0C;
    return;
L_08AE4A0C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4A40;
      }
      goto L_08AE4A18;
    }
L_08AE4A18:
    hot_regs.g31 = (0x08AE4A20u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0183_entry, 183u, 1011u, 0x08AE3E80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4A20u) goto L_08AE4A20;
    return;
L_08AE4A20:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4A38;
      }
      goto L_08AE4A30;
    }
}
L_08AE4A30:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE4A50;
      }
      goto L_08AE4A38;
    }
L_08AE4A38:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE4A50;
      }
      goto L_08AE4A40;
    }
L_08AE4A40:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    hot_regs.g6 = (0u | 1u);
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g5 = g5;
    goto L_08AE4A50;
}
L_08AE4A50:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 & 255u);
    g5 = (g6 ^ g5);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4A68;
      }
      goto L_08AE4A60;
    }
}
L_08AE4A60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08AE4AB0;
      }
      goto L_08AE4A68;
    }
L_08AE4A68:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4A94;
      }
      goto L_08AE4A88;
    }
}
L_08AE4A88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g5 & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4AB0;
      }
      goto L_08AE4A94;
    }
}
L_08AE4A94:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g5 | g4);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4AB0;
      }
      goto L_08AE4AAC;
    }
}
L_08AE4AAC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE4AB0;
L_08AE4AB0:
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
L_08AE4AC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE4AF8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4AF8u) goto L_08AE4AF8;
    return;
L_08AE4AF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4B04u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4B04u) goto L_08AE4B04;
    return;
L_08AE4B04:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE4B1C;
      }
      goto L_08AE4B14;
    }
L_08AE4B14:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE4B20;
      }
      goto L_08AE4B1C;
    }
L_08AE4B1C:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE4B20;
L_08AE4B20:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4B44;
      }
      goto L_08AE4B3C;
    }
}
L_08AE4B3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE4B8C;
      }
      goto L_08AE4B44;
    }
L_08AE4B44:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE4B70;
      }
      goto L_08AE4B64;
    }
}
L_08AE4B64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4B8C;
      }
      goto L_08AE4B70;
    }
}
L_08AE4B70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE4B8C;
      }
      goto L_08AE4B88;
    }
}
L_08AE4B88:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE4B8C;
L_08AE4B8C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE4BA8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AE4BC8u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4BC8u) goto L_08AE4BC8;
    return;
L_08AE4BC8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4BD4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4BD4u) goto L_08AE4BD4;
    return;
L_08AE4BD4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (0u | 65535u);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(558), static_cast<std::uint16_t>(hot_regs.g4));
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
L_08AE4BF0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE4C18u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4C18u) goto L_08AE4C18;
    return;
L_08AE4C18:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08AE4C24u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 378u, 0x0896D734u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4C24u) goto L_08AE4C24;
    return;
L_08AE4C24:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4C30;
      }
      goto L_08AE4C2C;
    }
L_08AE4C2C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE4C30;
L_08AE4C30:
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
          goto L_08AE4C5C;
      }
      goto L_08AE4C54;
    }
}
L_08AE4C54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE4CA4;
      }
      goto L_08AE4C5C;
    }
L_08AE4C5C:
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
          goto L_08AE4C88;
      }
      goto L_08AE4C7C;
    }
}
L_08AE4C7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE4CA4;
      }
      goto L_08AE4C88;
    }
}
L_08AE4C88:
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
          goto L_08AE4CA4;
      }
      goto L_08AE4CA0;
    }
}
L_08AE4CA0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE4CA4;
L_08AE4CA4:
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
L_08AE4CBC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g31 = (0x08AE4CF8u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4CF8u) goto L_08AE4CF8;
    return;
L_08AE4CF8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    hot_regs.g31 = (0x08AE4D40u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 320u, 0x08AED448u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4D40u) goto L_08AE4D40;
    return;
L_08AE4D40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE4D54u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4D54u) goto L_08AE4D54;
    return;
L_08AE4D54:
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
L_08AE4D74:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE4D9Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4D9Cu) goto L_08AE4D9C;
    return;
L_08AE4D9C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(29704)));
    g4 = (g4 & 65535u);
    g4 = (g4 & 65535u);
    g4 = (g4 << 4u);
    hot_regs.g5 = (g4 + g4);
    g16 = (g4 + hot_regs.g5);
    g4 = (2280u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(2592));
    g16 = (g16 + g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08AE4DDC;
      }
      goto L_08AE4DCC;
    }
}
L_08AE4DCC:
    hot_regs.g31 = (0x08AE4DD4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 301u, 0x08AED2F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4DD4u) goto L_08AE4DD4;
    return;
L_08AE4DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4E08;
      }
      goto L_08AE4DDC;
    }
L_08AE4DDC:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 101 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4DF8;
      }
      goto L_08AE4DE8;
    }
L_08AE4DE8:
    hot_regs.g31 = (0x08AE4DF0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 302u, 0x08AED308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4DF0u) goto L_08AE4DF0;
    return;
L_08AE4DF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4E08;
      }
      goto L_08AE4DF8;
    }
L_08AE4DF8:
    ctx.gpr[17] = (hot_regs.g4 & 65535u);
    hot_regs.g31 = (0x08AE4E04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 302u, 0x08AED308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4E04u) goto L_08AE4E04;
    return;
L_08AE4E04:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08AE4E08;
L_08AE4E08:
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
L_08AE4E20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x08AE4E5Cu);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4E5Cu) goto L_08AE4E5C;
    return;
L_08AE4E5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4E68u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4E68u) goto L_08AE4E68;
    return;
L_08AE4E68:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(16)));
    f20 = std::bit_cast<float>(0u);
    hot_regs.g4 = (17204u << 16u);
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    hot_regs.g5 = (17332u << 16u);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(20)));
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f20)) && f12 == f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_08AE4EAC;
      }
      goto L_08AE4E94;
    }
}
L_08AE4E94:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4EAC;
      }
      goto L_08AE4EA4;
    }
L_08AE4EA4:
{
    float f22 = hot_regs.f22;
    { const bool branch_taken = 0u == 0u;
    { const float fs = hot_regs.f20; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08AE4EB8;
      }
      goto L_08AE4EAC;
    }
}
L_08AE4EAC:
    hot_regs.g31 = (0x08AE4EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4EB4u) goto L_08AE4EB4;
    return;
L_08AE4EB4:
{
    float f22 = hot_regs.f22;
    { const float fs = ctx.fpr[0]; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.f22 = f22;
    goto L_08AE4EB8;
}
L_08AE4EB8:
{
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    f22 = f22 / hot_regs.f12;
    ctx.set_fpu_condition((f22 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_08AE4EDC;
      }
      goto L_08AE4ED8;
    }
}
}
L_08AE4ED8:
    hot_regs.f22 = hot_regs.f22 + ctx.fpr[24];
    goto L_08AE4EDC;
L_08AE4EDC:
    ctx.set_fpu_condition((hot_regs.f22 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4EF0;
      }
      goto L_08AE4EEC;
    }
L_08AE4EEC:
    hot_regs.f22 = hot_regs.f22 - ctx.fpr[24];
    goto L_08AE4EF0;
L_08AE4EF0:
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE4F08u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4F08u) goto L_08AE4F08;
    return;
L_08AE4F08:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE4F30:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE4F58u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4F58u) goto L_08AE4F58;
    return;
L_08AE4F58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4F64u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4F64u) goto L_08AE4F64;
    return;
L_08AE4F64:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (17204u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08AE4F8Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4F8Cu) goto L_08AE4F8C;
    return;
L_08AE4F8C:
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
L_08AE4FA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE4FD4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4FD4u) goto L_08AE4FD4;
    return;
L_08AE4FD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE4FE0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE4FE0u) goto L_08AE4FE0;
    return;
L_08AE4FE0:
{
    float f13 = hot_regs.f13;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(hot_regs.g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(636)));
    ctx.set_fpu_condition((hot_regs.f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AE5008;
      }
      goto L_08AE5000;
    }
}
L_08AE5000:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE500C;
      }
      goto L_08AE5008;
    }
L_08AE5008:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE500C;
L_08AE500C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5030;
      }
      goto L_08AE5028;
    }
}
L_08AE5028:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE5078;
      }
      goto L_08AE5030;
    }
L_08AE5030:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE505C;
      }
      goto L_08AE5050;
    }
}
L_08AE5050:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5078;
      }
      goto L_08AE505C;
    }
}
L_08AE505C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5078;
      }
      goto L_08AE5074;
    }
}
L_08AE5074:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5078;
L_08AE5078:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5094:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE50C0u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE50C0u) goto L_08AE50C0;
    return;
L_08AE50C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE50CCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE50CCu) goto L_08AE50CC;
    return;
L_08AE50CC:
    hot_regs.g4 = (2239u << 16u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE50E4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 321u, 0x08861FE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE50E4u) goto L_08AE50E4;
    return;
L_08AE50E4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE50F0;
      }
      goto L_08AE50EC;
    }
L_08AE50EC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE50F0;
L_08AE50F0:
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
          goto L_08AE511C;
      }
      goto L_08AE5114;
    }
}
L_08AE5114:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE5164;
      }
      goto L_08AE511C;
    }
L_08AE511C:
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
          goto L_08AE5148;
      }
      goto L_08AE513C;
    }
}
L_08AE513C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5164;
      }
      goto L_08AE5148;
    }
}
L_08AE5148:
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
          goto L_08AE5164;
      }
      goto L_08AE5160;
    }
}
L_08AE5160:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5164;
L_08AE5164:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5180:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE51A8u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE51A8u) goto L_08AE51A8;
    return;
L_08AE51A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE51B4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE51B4u) goto L_08AE51B4;
    return;
L_08AE51B4:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE51C8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 309u, 0x08861F44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE51C8u) goto L_08AE51C8;
    return;
L_08AE51C8:
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
L_08AE51E0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AE5200u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5200u) goto L_08AE5200;
    return;
L_08AE5200:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08AE5210u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22192));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 316u, 0x08861FA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5210u) goto L_08AE5210;
    return;
L_08AE5210:
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
L_08AE5224:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x08AE5234u);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 827u, 0x0886769Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5234u) goto L_08AE5234;
    return;
L_08AE5234:
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
L_08AE5244:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE5268u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5268u) goto L_08AE5268;
    return;
L_08AE5268:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5274u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5274u) goto L_08AE5274;
    return;
L_08AE5274:
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08AE5288u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 761u, 0x08863D9Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5288u) goto L_08AE5288;
    return;
L_08AE5288:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AE5298;
      }
      goto L_08AE5294;
    }
L_08AE5294:
    hot_regs.g5 = (0u | 1u);
    goto L_08AE5298;
L_08AE5298:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (0u < g5 ? 1u : 0u);
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(524)));
    g5 = (g5 & 255u);
    g5 = (g5 & 255u);
    g6 = (0u < g6 ? 1u : 0u);
    g5 = (g5 ^ g6);
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g6 != 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE52C4;
      }
      goto L_08AE52BC;
    }
}
L_08AE52BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08AE530C;
      }
      goto L_08AE52C4;
    }
L_08AE52C4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g6 = (hot_regs.g4 + static_cast<std::uint32_t>(518));
    g7 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g7 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(521)));
    g7 = (static_cast<std::int32_t>(g7) < 9 ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g6 = (0u < g6 ? 1u : 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AE52F0;
      }
      goto L_08AE52E4;
    }
}
L_08AE52E4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE530C;
      }
      goto L_08AE52F0;
    }
}
L_08AE52F0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g5 | g6);
    g6 = (aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::int32_t>(g6) < 21 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE530C;
      }
      goto L_08AE5308;
    }
}
L_08AE5308:
    aot_mem.aot_store16(hot_regs.g4 + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE530C;
L_08AE530C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5320:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5348u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5348u) goto L_08AE5348;
    return;
L_08AE5348:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5354u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5354u) goto L_08AE5354;
    return;
L_08AE5354:
    hot_regs.g31 = (0x08AE535Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 24u, 0x0886417Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE535Cu) goto L_08AE535C;
    return;
L_08AE535C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5384;
      }
      goto L_08AE5368;
    }
L_08AE5368:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08AE5384u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5384u) goto L_08AE5384;
    return;
L_08AE5384:
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
L_08AE539C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE53C4u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE53C4u) goto L_08AE53C4;
    return;
L_08AE53C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE53D0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE53D0u) goto L_08AE53D0;
    return;
L_08AE53D0:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    hot_regs.g31 = (0x08AE53ECu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(21784));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x0886565Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE53ECu) goto L_08AE53EC;
    return;
L_08AE53EC:
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
L_08AE5404:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE5434u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5434u) goto L_08AE5434;
    return;
L_08AE5434:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5440u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5440u) goto L_08AE5440;
    return;
L_08AE5440:
    hot_regs.g31 = (0x08AE5448u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 559u, 0x08B021B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5448u) goto L_08AE5448;
    return;
L_08AE5448:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g2);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE545Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE545Cu) goto L_08AE545C;
    return;
L_08AE545C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5478:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE54A8u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE54A8u) goto L_08AE54A8;
    return;
L_08AE54A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE54B4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE54B4u) goto L_08AE54B4;
    return;
L_08AE54B4:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(565)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE54CCu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE54CCu) goto L_08AE54CC;
    return;
L_08AE54CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE54E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AE5508u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5508u) goto L_08AE5508;
    return;
L_08AE5508:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5432), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
L_08AE5524:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (0u | 2u);
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE5554u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5554u) goto L_08AE5554;
    return;
L_08AE5554:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5560u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5560u) goto L_08AE5560;
    return;
L_08AE5560:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(352)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE55AC;
      }
      goto L_08AE5574;
    }
}
L_08AE5574:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (g5 | 1u);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(236), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(188)));
    g5 = (16448u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (16544u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AE55CC;
      }
      goto L_08AE55AC;
    }
}
}
L_08AE55AC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g7);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(236), g5);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(188)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_08AE55CC;
}
}
L_08AE55CC:
    hot_regs.g7 = (0u | 1u);
    if (hot_regs.g5 == hot_regs.g7) {
    hot_regs.g5 = (15363u << 16u);
        goto L_08AE55E4;
    }
    goto L_08AE55D8;
L_08AE55D8:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE5614;
      }
      goto L_08AE55E0;
    }
L_08AE55E0:
    hot_regs.g5 = (15363u << 16u);
    goto L_08AE55E4;
L_08AE55E4:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(208)));
    g5 = (g5 | 4719u);
    hot_regs.f13 = std::bit_cast<float>(g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(176)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g5 = (17096u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    f15 = std::bit_cast<float>(g4);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / f15;
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    goto L_08AE5614;
}
}
L_08AE5614:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5630:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5658u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5658u) goto L_08AE5658;
    return;
L_08AE5658:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5664u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5664u) goto L_08AE5664;
    return;
L_08AE5664:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(310)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5678;
      }
      goto L_08AE5670;
    }
L_08AE5670:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE567C;
      }
      goto L_08AE5678;
    }
L_08AE5678:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE567C;
L_08AE567C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE56A0;
      }
      goto L_08AE5698;
    }
}
L_08AE5698:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE56E8;
      }
      goto L_08AE56A0;
    }
L_08AE56A0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE56CC;
      }
      goto L_08AE56C0;
    }
}
L_08AE56C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE56E8;
      }
      goto L_08AE56CC;
    }
}
L_08AE56CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE56E8;
      }
      goto L_08AE56E4;
    }
}
L_08AE56E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE56E8;
L_08AE56E8:
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
L_08AE5700:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE5728u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5728u) goto L_08AE5728;
    return;
L_08AE5728:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5734u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5734u) goto L_08AE5734;
    return;
L_08AE5734:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(32));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (49016u << 16u);
    g4 = (g4 | 20972u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5768;
      }
      goto L_08AE5760;
    }
}
L_08AE5760:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE576C;
      }
      goto L_08AE5768;
    }
L_08AE5768:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE576C;
L_08AE576C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5790;
      }
      goto L_08AE5788;
    }
}
L_08AE5788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE57E0;
      }
      goto L_08AE5790;
    }
L_08AE5790:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE57BC;
      }
      goto L_08AE57A8;
    }
}
L_08AE57A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE57E0;
      }
      goto L_08AE57BC;
    }
}
L_08AE57BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(521)));
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(518)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE57E0;
      }
      goto L_08AE57DC;
    }
}
L_08AE57DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE57E0;
L_08AE57E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE57F8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5820u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5820u) goto L_08AE5820;
    return;
L_08AE5820:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE582Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE582Cu) goto L_08AE582C;
    return;
L_08AE582C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(680), hot_regs.g4);
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
L_08AE584C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08AE586Cu);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE586Cu) goto L_08AE586C;
    return;
L_08AE586C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5878u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5878u) goto L_08AE5878;
    return;
L_08AE5878:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(615))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(92)));
    hot_regs.g4 = (hot_regs.g4 | 64u);
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(328));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (hot_regs.g2 + hot_regs.g5);
    hot_regs.g5 = (0u | 0u);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x08AE58A4u);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE58A4u) goto L_08AE58A4;
    return;
L_08AE58A4:
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
L_08AE58B8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE58E0u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE58E0u) goto L_08AE58E0;
    return;
L_08AE58E0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE58ECu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE58ECu) goto L_08AE58EC;
    return;
L_08AE58EC:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(32));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5918;
      }
      goto L_08AE5910;
    }
L_08AE5910:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_08AE591C;
      }
      goto L_08AE5918;
    }
L_08AE5918:
    hot_regs.g4 = (0u | 0u);
    goto L_08AE591C;
L_08AE591C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5940;
      }
      goto L_08AE5938;
    }
}
L_08AE5938:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE5990;
      }
      goto L_08AE5940;
    }
L_08AE5940:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE596C;
      }
      goto L_08AE5958;
    }
}
L_08AE5958:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5990;
      }
      goto L_08AE596C;
    }
}
L_08AE596C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(521)));
    hot_regs.g6 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(518)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(hot_regs.g6) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5990;
      }
      goto L_08AE598C;
    }
}
L_08AE598C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5990;
L_08AE5990:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE59A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE59D0u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE59D0u) goto L_08AE59D0;
    return;
L_08AE59D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE59DCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE59DCu) goto L_08AE59DC;
    return;
L_08AE59DC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1653))))));
    g5 = (g5 & 7u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE59F0;
      }
      goto L_08AE59EC;
    }
}
L_08AE59EC:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE59F0;
L_08AE59F0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5A1C;
      }
      goto L_08AE5A14;
    }
}
L_08AE5A14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE5A64;
      }
      goto L_08AE5A1C;
    }
L_08AE5A1C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE5A48;
      }
      goto L_08AE5A3C;
    }
}
L_08AE5A3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5A64;
      }
      goto L_08AE5A48;
    }
}
L_08AE5A48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5A64;
      }
      goto L_08AE5A60;
    }
}
L_08AE5A60:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5A64;
L_08AE5A64:
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
L_08AE5A7C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5AA4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5AA4u) goto L_08AE5AA4;
    return;
L_08AE5AA4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5AB0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5AB0u) goto L_08AE5AB0;
    return;
L_08AE5AB0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AE5AD8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE5B08u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5B08u) goto L_08AE5B08;
    return;
L_08AE5B08:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5B14u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5B14u) goto L_08AE5B14;
    return;
L_08AE5B14:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(636)));
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08AE5B34u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g7);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5B34u) goto L_08AE5B34;
    return;
L_08AE5B34:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5B50:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08AE5B80u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5B80u) goto L_08AE5B80;
    return;
L_08AE5B80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5B8Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5B8Cu) goto L_08AE5B8C;
    return;
L_08AE5B8C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(1653))))));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g5 = (g5 & 7u);
    { const bool branch_taken = g5 != hot_regs.g6;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5BA4;
      }
      goto L_08AE5BA0;
    }
}
L_08AE5BA0:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE5BA4;
L_08AE5BA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5BD0;
      }
      goto L_08AE5BC8;
    }
}
L_08AE5BC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE5C18;
      }
      goto L_08AE5BD0;
    }
L_08AE5BD0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE5BFC;
      }
      goto L_08AE5BF0;
    }
}
L_08AE5BF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5C18;
      }
      goto L_08AE5BFC;
    }
}
L_08AE5BFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE5C18;
      }
      goto L_08AE5C14;
    }
}
L_08AE5C14:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5C18;
L_08AE5C18:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE5C34:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 3u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(284), hot_regs.g31);
    hot_regs.g31 = (0x08AE5C5Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5C5Cu) goto L_08AE5C5C;
    return;
L_08AE5C5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5C68u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5C68u) goto L_08AE5C68;
    return;
L_08AE5C68:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::int32_t>(g4) < 256 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5C88;
      }
      goto L_08AE5C78;
    }
}
L_08AE5C78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(g4) < 256 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5C9C;
      }
      goto L_08AE5C88;
    }
}
L_08AE5C88:
    hot_regs.g5 = (2232u << 16u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (0u | 256u);
    hot_regs.g31 = (0x08AE5C9Cu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16864));
    if (rt.invoke_chained_direct<&recomp_unit_0212_entry, 212u, 576u, 0x08B562D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5C9Cu) goto L_08AE5C9C;
    return;
L_08AE5C9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    if (hot_regs.g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_08AE5CB8;
    }
    goto L_08AE5CA8;
L_08AE5CA8:
    hot_regs.g31 = (0x08AE5CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5CB0u) goto L_08AE5CB0;
    return;
L_08AE5CB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AE5CB8;
L_08AE5CB8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(260));
    hot_regs.g31 = (0x08AE5CE4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5CE4u) goto L_08AE5CE4;
    return;
L_08AE5CE4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(549), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(550), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(551), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    if (g4 != 0u) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
        goto L_08AE5D28;
    }
    goto L_08AE5D18;
}
L_08AE5D18:
    hot_regs.g31 = (0x08AE5D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 333u, 0x08B656D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5D20u) goto L_08AE5D20;
    return;
L_08AE5D20:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5840)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AE5D28;
L_08AE5D28:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(1)));
    hot_regs.g7 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(268));
    hot_regs.g31 = (0x08AE5D54u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5D54u) goto L_08AE5D54;
    return;
L_08AE5D54:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1)));
    hot_regs.g2 = (0u | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(553), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(554), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(555), static_cast<std::uint8_t>(g4));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(280)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(284)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE5D94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5DBCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5DBCu) goto L_08AE5DBC;
    return;
L_08AE5DBC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5DC8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5DC8u) goto L_08AE5DC8;
    return;
L_08AE5DC8:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1653))))));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-8));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 & 7u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g31 = (0x08AE5DF0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5DF0u) goto L_08AE5DF0;
    return;
L_08AE5DF0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1656), hot_regs.g2);
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
L_08AE5E0C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5E34u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5E34u) goto L_08AE5E34;
    return;
L_08AE5E34:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5E40u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5E40u) goto L_08AE5E40;
    return;
L_08AE5E40:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(616))))));
      if (branch_taken) {
          goto L_08AE5E60;
      }
      goto L_08AE5E50;
    }
L_08AE5E50:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5E68;
      }
      goto L_08AE5E60;
    }
}
L_08AE5E60:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE5E68;
}
L_08AE5E68:
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
L_08AE5E80:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5EA8u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5EA8u) goto L_08AE5EA8;
    return;
L_08AE5EA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5EB4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5EB4u) goto L_08AE5EB4;
    return;
L_08AE5EB4:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08AE5EC0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5EC0u) goto L_08AE5EC0;
    return;
L_08AE5EC0:
    hot_regs.g4 = (0u | 4u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AE5ED0;
      }
      goto L_08AE5ECC;
    }
L_08AE5ECC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE5ED0;
L_08AE5ED0:
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
          goto L_08AE5EFC;
      }
      goto L_08AE5EF4;
    }
}
L_08AE5EF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE5F44;
      }
      goto L_08AE5EFC;
    }
L_08AE5EFC:
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
          goto L_08AE5F28;
      }
      goto L_08AE5F1C;
    }
}
L_08AE5F1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5F44;
      }
      goto L_08AE5F28;
    }
}
L_08AE5F28:
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
          goto L_08AE5F44;
      }
      goto L_08AE5F40;
    }
}
L_08AE5F40:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE5F44;
L_08AE5F44:
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
L_08AE5F5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE5F84u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5F84u) goto L_08AE5F84;
    return;
L_08AE5F84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE5F90u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE5F90u) goto L_08AE5F90;
    return;
L_08AE5F90:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AE5FB0;
      }
      goto L_08AE5FA0;
    }
L_08AE5FA0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (16384u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE5FC0;
      }
      goto L_08AE5FB0;
    }
}
L_08AE5FB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (49152u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE5FC0;
}
L_08AE5FC0:
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
L_08AE5FD8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 6u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE6000u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6000u) goto L_08AE6000;
    return;
L_08AE6000:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE600Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE600Cu) goto L_08AE600C;
    return;
L_08AE600C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AE6030;
      }
      goto L_08AE601C;
    }
L_08AE601C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (1024u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE6044;
      }
      goto L_08AE6030;
    }
}
L_08AE6030:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (64512u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE6044;
}
L_08AE6044:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6060;
      }
      goto L_08AE604C;
    }
L_08AE604C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2048u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE6074;
      }
      goto L_08AE6060;
    }
}
L_08AE6060:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (63488u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE6074;
}
L_08AE6074:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6090;
      }
      goto L_08AE607C;
    }
L_08AE607C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (4u << 16u);
    g4 = (g4 | g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE60A4;
      }
      goto L_08AE6090;
    }
}
L_08AE6090:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (65532u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE60A4;
}
L_08AE60A4:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE60C0;
      }
      goto L_08AE60AC;
    }
L_08AE60AC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (4096u << 16u);
    g4 = (g4 | hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE60D4;
      }
      goto L_08AE60C0;
    }
}
L_08AE60C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (61440u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE60D4;
}
L_08AE60D4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE60EC;
      }
      goto L_08AE60DC;
    }
L_08AE60DC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (8192u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE60FC;
      }
      goto L_08AE60EC;
    }
}
L_08AE60EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (57344u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE60FC;
}
L_08AE60FC:
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
L_08AE6114:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g6 = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x08AE613Cu);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE613Cu) goto L_08AE613C;
    return;
L_08AE613C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6148u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6148u) goto L_08AE6148;
    return;
L_08AE6148:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE6168;
      }
      goto L_08AE6154;
    }
L_08AE6154:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(236)));
    g5 = (g5 & 256u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6168;
      }
      goto L_08AE6164;
    }
}
L_08AE6164:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE6168;
L_08AE6168:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6194;
      }
      goto L_08AE618C;
    }
}
L_08AE618C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE61DC;
      }
      goto L_08AE6194;
    }
L_08AE6194:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g7));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g6 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE61C0;
      }
      goto L_08AE61B4;
    }
}
L_08AE61B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE61DC;
      }
      goto L_08AE61C0;
    }
}
L_08AE61C0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 | g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::int32_t>(g5) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE61DC;
      }
      goto L_08AE61D8;
    }
}
L_08AE61D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE61DC;
L_08AE61DC:
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
L_08AE61F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g31);
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE6234u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6234u) goto L_08AE6234;
    return;
L_08AE6234:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6240u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6240u) goto L_08AE6240;
    return;
L_08AE6240:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AE627C;
      }
      goto L_08AE6264;
    }
}
}
L_08AE6264:
    hot_regs.g4 = (50042u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE628C;
      }
      goto L_08AE627C;
    }
L_08AE627C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08AE6288u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 514u, 0x088933E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6288u) goto L_08AE6288;
    return;
L_08AE6288:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE628C;
L_08AE628C:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08AE6298u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 160u, 0x08AD0AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6298u) goto L_08AE6298;
    return;
L_08AE6298:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f13 = ctx.fpr[24] + ctx.fpr[0];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    g4 = (15395u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 | 55051u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = std::bit_cast<float>(g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(533))))));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 12 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    g4 = (static_cast<std::int32_t>(g4) < 14 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6308;
      }
      goto L_08AE62C4;
    }
}
L_08AE62C4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6308;
      }
      goto L_08AE62CC;
    }
L_08AE62CC:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(448));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
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
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6338;
      }
      goto L_08AE6308;
    }
L_08AE6308:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x08AE6324u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 391u, 0x08B4196Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6324u) goto L_08AE6324;
    return;
L_08AE6324:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6340;
      }
      goto L_08AE632C;
    }
L_08AE632C:
    hot_regs.g4 = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE6348;
      }
      goto L_08AE6338;
    }
L_08AE6338:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE6398;
      }
      goto L_08AE6340;
    }
L_08AE6340:
    hot_regs.g4 = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08AE6348;
L_08AE6348:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g4 = (g5 | 16u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (0u | 1u);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08AE637C;
    }
    goto L_08AE637C;
}
L_08AE637C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g2 = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(504), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6398;
      }
      goto L_08AE6398;
    }
}
L_08AE6398:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE63BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE63E4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE63E4u) goto L_08AE63E4;
    return;
L_08AE63E4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE63F0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE63F0u) goto L_08AE63F0;
    return;
L_08AE63F0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(48);
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
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g5 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
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
          goto L_08AE64A8;
      }
      goto L_08AE64A0;
    }
L_08AE64A0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(1));
    g5 = (g5 & 255u);
    hot_regs.g5 = g5;
    goto L_08AE64A8;
}
L_08AE64A8:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE64B4;
      }
      goto L_08AE64B0;
    }
L_08AE64B0:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE64B4;
L_08AE64B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE64E0;
      }
      goto L_08AE64D8;
    }
}
L_08AE64D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE6530;
      }
      goto L_08AE64E0;
    }
L_08AE64E0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE650C;
      }
      goto L_08AE64F8;
    }
}
L_08AE64F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6530;
      }
      goto L_08AE650C;
    }
}
L_08AE650C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g5 = (aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(521)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6530;
      }
      goto L_08AE652C;
    }
}
L_08AE652C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE6530;
L_08AE6530:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE6548:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE6578u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6578u) goto L_08AE6578;
    return;
L_08AE6578:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6584u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6584u) goto L_08AE6584;
    return;
L_08AE6584:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    g4 = (49864u << 16u);
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    g4 = (50042u << 16u);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_08AE65C0;
      }
      goto L_08AE65AC;
    }
}
}
L_08AE65AC:
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE65D8;
      }
      goto L_08AE65C0;
    }
L_08AE65C0:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x08AE65D8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE65D8u) goto L_08AE65D8;
    return;
L_08AE65D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g4 = (0u | 14u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(72), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(613))))));
    g4 = (g4 | 16u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(535))))));
    g4 = (0u | 1u);
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    g4 = (g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_08AE6624;
    }
    goto L_08AE6624;
}
L_08AE6624:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(504), g4);
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE6658:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE6678u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6678u) goto L_08AE6678;
    return;
L_08AE6678:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6684u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6684u) goto L_08AE6684;
    return;
L_08AE6684:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 0u);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(533), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(72)));
    g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & g5);
    g4 = (g4 | 48u);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(72), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g2 + static_cast<std::uint32_t>(613))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & g5);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(613), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE66CC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE66F4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE66F4u) goto L_08AE66F4;
    return;
L_08AE66F4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6700u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6700u) goto L_08AE6700;
    return;
L_08AE6700:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(g4));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AE6730:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AE6760u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6760u) goto L_08AE6760;
    return;
L_08AE6760:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE676Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE676Cu) goto L_08AE676C;
    return;
L_08AE676C:
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (16968u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE67C0;
      }
      goto L_08AE67BC;
    }
L_08AE67BC:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    goto L_08AE67C0;
L_08AE67C0:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AE67D8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE67D8u) goto L_08AE67D8;
    return;
L_08AE67D8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE67F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE6824u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6824u) goto L_08AE6824;
    return;
L_08AE6824:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6830u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6830u) goto L_08AE6830;
    return;
L_08AE6830:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = hot_regs.f14 + hot_regs.f13;
    hot_regs.f13 = std::sqrt(hot_regs.f13);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE6868u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6868u) goto L_08AE6868;
    return;
L_08AE6868:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE6884:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE68B4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE68B4u) goto L_08AE68B4;
    return;
L_08AE68B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE68C0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE68C0u) goto L_08AE68C0;
    return;
L_08AE68C0:
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f14;
    hot_regs.f12 = std::sqrt(hot_regs.f12);
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE68F8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE68F8u) goto L_08AE68F8;
    return;
L_08AE68F8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE6914:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6944u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6944u) goto L_08AE6944;
    return;
L_08AE6944:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6950u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6950u) goto L_08AE6950;
    return;
L_08AE6950:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE69A8;
      }
      goto L_08AE6960;
    }
}
L_08AE6960:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 49u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g6;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(91))))));
      if (branch_taken) {
          goto L_08AE697C;
      }
      goto L_08AE6970;
    }
L_08AE6970:
    hot_regs.g5 = (0u | 50u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08AE699C;
      }
      goto L_08AE697C;
    }
L_08AE697C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE698Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 518u, 0x08862E80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE698Cu) goto L_08AE698C;
    return;
L_08AE698C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE69A8;
      }
      goto L_08AE6994;
    }
L_08AE6994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE69A8;
      }
      goto L_08AE699C;
    }
L_08AE699C:
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AE69A8;
      }
      goto L_08AE69A4;
    }
L_08AE69A4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE69A8;
L_08AE69A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE69D4;
      }
      goto L_08AE69CC;
    }
}
L_08AE69CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE6A1C;
      }
      goto L_08AE69D4;
    }
L_08AE69D4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6A00;
      }
      goto L_08AE69F4;
    }
}
L_08AE69F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6A1C;
      }
      goto L_08AE6A00;
    }
}
L_08AE6A00:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6A1C;
      }
      goto L_08AE6A18;
    }
}
L_08AE6A18:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE6A1C;
L_08AE6A1C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE6A38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6A60u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6A60u) goto L_08AE6A60;
    return;
L_08AE6A60:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6A6Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6A6Cu) goto L_08AE6A6C;
    return;
L_08AE6A6C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1060))))));
      if (branch_taken) {
          goto L_08AE6A88;
      }
      goto L_08AE6A7C;
    }
L_08AE6A7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6A94;
      }
      goto L_08AE6A88;
    }
}
L_08AE6A88:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1060), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE6A94;
}
L_08AE6A94:
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
L_08AE6AAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[22] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[30] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 5u);
    hot_regs.g31 = (0x08AE6AF8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6AF8u) goto L_08AE6AF8;
    return;
L_08AE6AF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g17 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (0u | 1u);
    g4 = (2239u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(21784));
    ctx.gpr[21] = (g17 + static_cast<std::uint32_t>(-1));
    g5 = (g17 << 5u);
    g19 = (0u + g5);
    g5 = (g5 << 6u);
    g19 = (g19 + g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_08AE6B30;
}
L_08AE6B30:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2080));
      if (branch_taken) {
          goto L_08AE6C64;
      }
      goto L_08AE6B3C;
    }
L_08AE6B3C:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AE6C64;
      }
      goto L_08AE6B48;
    }
L_08AE6B48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AE6B64;
      }
      goto L_08AE6B50;
    }
L_08AE6B50:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
        goto L_08AE6B6C;
    }
    goto L_08AE6B64;
}
L_08AE6B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE6B8C;
      }
      goto L_08AE6B6C;
    }
L_08AE6B6C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + ctx.gpr[17]);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    g4 = (g4 & 128u);
    if (g4 == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
        goto L_08AE6B88;
    }
    goto L_08AE6B80;
}
L_08AE6B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE6B8C;
      }
      goto L_08AE6B88;
    }
L_08AE6B88:
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_08AE6B8C;
L_08AE6B8C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6B94;
    }
L_08AE6B94:
    hot_regs.g31 = (0x08AE6B9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6B9Cu) goto L_08AE6B9C;
    return;
L_08AE6B9C:
    { const bool branch_taken = hot_regs.g2 == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AE6BB8;
      }
      goto L_08AE6BA4;
    }
L_08AE6BA4:
    hot_regs.g31 = (0x08AE6BACu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 504u, 0x08B01E00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6BACu) goto L_08AE6BAC;
    return;
L_08AE6BAC:
    hot_regs.g4 = (0u | 2u);
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6BB8;
    }
L_08AE6BB8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6BC8;
    }
}
L_08AE6BC8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    if (hot_regs.g5 == g4) {
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    hot_regs.g4 = g4;
        goto L_08AE6BE4;
    }
    goto L_08AE6BD8;
}
L_08AE6BD8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6BE0;
    }
L_08AE6BE0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(612)));
    goto L_08AE6BE4;
L_08AE6BE4:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6BEC;
    }
L_08AE6BEC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(29704)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x08AE6C04u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 788u, 0x08AAF8F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6C04u) goto L_08AE6C04;
    return;
L_08AE6C04:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6C0C;
    }
L_08AE6C0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6C18u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6C18u) goto L_08AE6C18;
    return;
L_08AE6C18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (0u | 2u);
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5444)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5444), g4);
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5436)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5436), g4);
    g4 = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(522)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6C5C;
      }
      goto L_08AE6C48;
    }
}
L_08AE6C48:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08AE6C5Cu);
    hot_regs.g7 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 275u, 0x08861C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6C5Cu) goto L_08AE6C5C;
    return;
L_08AE6C5C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AE6B30;
      }
      goto L_08AE6C64;
    }
L_08AE6C64:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(29704), ctx.gpr[20]);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x08AE6C78u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6C78u) goto L_08AE6C78;
    return;
L_08AE6C78:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE6CAC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6CD4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6CD4u) goto L_08AE6CD4;
    return;
L_08AE6CD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6CE0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6CE0u) goto L_08AE6CE0;
    return;
L_08AE6CE0:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6CF0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6CF0u) goto L_08AE6CF0;
    return;
L_08AE6CF0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08AE6CFCu);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 552u, 0x08B0E3F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6CFCu) goto L_08AE6CFC;
    return;
L_08AE6CFC:
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
L_08AE6D14:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6D3Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6D3Cu) goto L_08AE6D3C;
    return;
L_08AE6D3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6D48u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6D48u) goto L_08AE6D48;
    return;
L_08AE6D48:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1653))))));
      if (branch_taken) {
          goto L_08AE6D64;
      }
      goto L_08AE6D58;
    }
L_08AE6D58:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6D70;
      }
      goto L_08AE6D64;
    }
}
L_08AE6D64:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE6D70;
}
L_08AE6D70:
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
L_08AE6D88:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6DB0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6DB0u) goto L_08AE6DB0;
    return;
L_08AE6DB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6DBCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6DBCu) goto L_08AE6DBC;
    return;
L_08AE6DBC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08AE6DDC;
      }
      goto L_08AE6DCC;
    }
L_08AE6DCC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (8u << 16u);
    g4 = (g4 | hot_regs.g6);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6DEC;
      }
      goto L_08AE6DDC;
    }
}
L_08AE6DDC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (65528u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g6);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_08AE6DEC;
}
L_08AE6DEC:
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
L_08AE6E04:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE6E24u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6E24u) goto L_08AE6E24;
    return;
L_08AE6E24:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
      if (branch_taken) {
          goto L_08AE6E40;
      }
      goto L_08AE6E30;
    }
L_08AE6E30:
    hot_regs.g31 = (0x08AE6E38u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6E38u) goto L_08AE6E38;
    return;
L_08AE6E38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E48;
      }
      goto L_08AE6E40;
    }
L_08AE6E40:
    hot_regs.g31 = (0x08AE6E48u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 565u, 0x08A063CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6E48u) goto L_08AE6E48;
    return;
L_08AE6E48:
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
L_08AE6E5C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6E84u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6E84u) goto L_08AE6E84;
    return;
L_08AE6E84:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6E90u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6E90u) goto L_08AE6E90;
    return;
L_08AE6E90:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(618))))));
      if (branch_taken) {
          goto L_08AE6EAC;
      }
      goto L_08AE6EA0;
    }
L_08AE6EA0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE6EB8;
      }
      goto L_08AE6EAC;
    }
}
L_08AE6EAC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-33));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE6EB8;
}
L_08AE6EB8:
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
L_08AE6ED0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE6EF8u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6EF8u) goto L_08AE6EF8;
    return;
L_08AE6EF8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6F04u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6F04u) goto L_08AE6F04;
    return;
L_08AE6F04:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6F3C;
      }
      goto L_08AE6F14;
    }
L_08AE6F14:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(618))))));
      if (branch_taken) {
          goto L_08AE6F2C;
      }
      goto L_08AE6F20;
    }
L_08AE6F20:
    hot_regs.g5 = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08AE6F6C;
      }
      goto L_08AE6F2C;
    }
L_08AE6F2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (ctx.gpr[16] & g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE6F6C;
      }
      goto L_08AE6F3C;
    }
}
L_08AE6F3C:
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE6F6C;
      }
      goto L_08AE6F48;
    }
L_08AE6F48:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(618))))));
      if (branch_taken) {
          goto L_08AE6F60;
      }
      goto L_08AE6F54;
    }
L_08AE6F54:
    hot_regs.g5 = (ctx.gpr[16] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(hot_regs.g5));
      if (branch_taken) {
          goto L_08AE6F6C;
      }
      goto L_08AE6F60;
    }
L_08AE6F60:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g5 = (ctx.gpr[16] & g5);
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(618), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08AE6F6C;
}
L_08AE6F6C:
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
L_08AE6F84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AE6FB0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6FB0u) goto L_08AE6FB0;
    return;
L_08AE6FB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE6FBCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE6FBCu) goto L_08AE6FBC;
    return;
L_08AE6FBC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f20));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (0x08AE7014u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7014u) goto L_08AE7014;
    return;
L_08AE7014:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    f12 = f12 + hot_regs.f13;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_08AE7034;
    }
    goto L_08AE7034;
}
}
L_08AE7034:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16329u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    f12 = f12 + hot_regs.f14;
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08AE7058;
      }
      goto L_08AE7054;
    }
}
}
L_08AE7054:
    hot_regs.f12 = hot_regs.f12 - hot_regs.f13;
    goto L_08AE7058;
L_08AE7058:
    hot_regs.g31 = (0x08AE7060u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7060u) goto L_08AE7060;
    return;
L_08AE7060:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE707C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE70A4u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE70A4u) goto L_08AE70A4;
    return;
L_08AE70A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE70B0u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE70B0u) goto L_08AE70B0;
    return;
L_08AE70B0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-497));
    g5 = (g5 & hot_regs.g6);
    g4 = (g4 & 31u);
    g4 = (g4 << 4u);
    g4 = (g5 | g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(72), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE70E8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7110u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7110u) goto L_08AE7110;
    return;
L_08AE7110:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE711Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE711Cu) goto L_08AE711C;
    return;
L_08AE711C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(615))))));
      if (branch_taken) {
          goto L_08AE7138;
      }
      goto L_08AE712C;
    }
L_08AE712C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7144;
      }
      goto L_08AE7138;
    }
}
L_08AE7138:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE7144;
}
L_08AE7144:
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
L_08AE715C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 6u);
    hot_regs.g31 = (0x08AE7184u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7184u) goto L_08AE7184;
    return;
L_08AE7184:
{
    std::uint32_t g17 = ctx.gpr[17];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(16)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((hot_regs.f14 < ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE71C0;
      }
      goto L_08AE71B8;
    }
}
L_08AE71B8:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08AE71C0;
L_08AE71C0:
    ctx.set_fpu_condition((hot_regs.f13 < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE71D8;
      }
      goto L_08AE71D0;
    }
L_08AE71D0:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08AE71D8;
L_08AE71D8:
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[16]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_08AE71F4;
    }
    goto L_08AE71E8;
L_08AE71E8:
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_08AE71F4;
L_08AE71F4:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.f15 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    hot_regs.g31 = (0x08AE7214u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 108u, 0x08894898u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7214u) goto L_08AE7214;
    return;
L_08AE7214:
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
L_08AE722C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7254u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7254u) goto L_08AE7254;
    return;
L_08AE7254:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7260u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7260u) goto L_08AE7260;
    return;
L_08AE7260:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g2 + static_cast<std::uint32_t>(615))))));
    g5 = (g5 & 2u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7278;
      }
      goto L_08AE7274;
    }
}
L_08AE7274:
    hot_regs.g4 = (0u | 1u);
    goto L_08AE7278;
L_08AE7278:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g4 = (g4 ^ g5);
    g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g5 != 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE72A4;
      }
      goto L_08AE729C;
    }
}
L_08AE729C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE72EC;
      }
      goto L_08AE72A4;
    }
L_08AE72A4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g6 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (static_cast<std::int32_t>(g6) < 9 ? 1u : 0u);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g7 == 0u;
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE72D0;
      }
      goto L_08AE72C4;
    }
}
L_08AE72C4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE72EC;
      }
      goto L_08AE72D0;
    }
}
L_08AE72D0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE72EC;
      }
      goto L_08AE72E8;
    }
}
L_08AE72E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE72EC;
L_08AE72EC:
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
L_08AE7304:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AE7334u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7334u) goto L_08AE7334;
    return;
L_08AE7334:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7340u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7340u) goto L_08AE7340;
    return;
L_08AE7340:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22240));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08AE735Cu);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 344u, 0x0886221Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE735Cu) goto L_08AE735C;
    return;
L_08AE735C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7378:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7398u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7398u) goto L_08AE7398;
    return;
L_08AE7398:
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22240));
    hot_regs.g31 = (0x08AE73A8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 354u, 0x088622F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE73A8u) goto L_08AE73A8;
    return;
L_08AE73A8:
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
L_08AE73BC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE73E8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE73E8u) goto L_08AE73E8;
    return;
L_08AE73E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE73F4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE73F4u) goto L_08AE73F4;
    return;
L_08AE73F4:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (2239u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22240));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    hot_regs.g31 = (0x08AE740Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 359u, 0x08862374u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE740Cu) goto L_08AE740C;
    return;
L_08AE740C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7418;
      }
      goto L_08AE7414;
    }
L_08AE7414:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE7418;
L_08AE7418:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE7444;
      }
      goto L_08AE743C;
    }
}
L_08AE743C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE748C;
      }
      goto L_08AE7444;
    }
L_08AE7444:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7470;
      }
      goto L_08AE7464;
    }
}
L_08AE7464:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE748C;
      }
      goto L_08AE7470;
    }
}
L_08AE7470:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE748C;
      }
      goto L_08AE7488;
    }
}
L_08AE7488:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE748C;
L_08AE748C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE74A8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE74D0u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE74D0u) goto L_08AE74D0;
    return;
L_08AE74D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE74DCu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE74DCu) goto L_08AE74DC;
    return;
L_08AE74DC:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1653))))));
      if (branch_taken) {
          goto L_08AE74F8;
      }
      goto L_08AE74EC;
    }
L_08AE74EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7504;
      }
      goto L_08AE74F8;
    }
}
L_08AE74F8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-65));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE7504;
}
L_08AE7504:
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
L_08AE751C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE754Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE754Cu) goto L_08AE754C;
    return;
L_08AE754C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7558u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7558u) goto L_08AE7558;
    return;
L_08AE7558:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE7568u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7568u) goto L_08AE7568;
    return;
L_08AE7568:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7584:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE75A4u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE75A4u) goto L_08AE75A4;
    return;
L_08AE75A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE75C0;
      }
      goto L_08AE75B0;
    }
L_08AE75B0:
    hot_regs.g31 = (0x08AE75B8u);
    hot_regs.g4 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 165u, 0x08894CA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE75B8u) goto L_08AE75B8;
    return;
L_08AE75B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE75E0;
      }
      goto L_08AE75C0;
    }
L_08AE75C0:
    hot_regs.g31 = (0x08AE75C8u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 165u, 0x08894CA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE75C8u) goto L_08AE75C8;
    return;
L_08AE75C8:
    hot_regs.g31 = (0x08AE75D0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 16u, 0x08960154u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE75D0u) goto L_08AE75D0;
    return;
L_08AE75D0:
    hot_regs.g4 = (17786u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x08AE75E0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 177u, 0x08894D40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE75E0u) goto L_08AE75E0;
    return;
L_08AE75E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE75F4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7620u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7620u) goto L_08AE7620;
    return;
L_08AE7620:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE762Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE762Cu) goto L_08AE762C;
    return;
L_08AE762C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_08AE7650;
      }
      goto L_08AE763C;
    }
L_08AE763C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & ctx.gpr[16]);
    g4 = (g4 | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7664;
      }
      goto L_08AE7650;
    }
}
L_08AE7650:
    hot_regs.g31 = (0x08AE7658u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 479u, 0x08B01C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7658u) goto L_08AE7658;
    return;
L_08AE7658:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(615), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE7664;
}
L_08AE7664:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7680:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (0u | 4u);
    hot_regs.g31 = (0x08AE76B8u);
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE76B8u) goto L_08AE76B8;
    return;
L_08AE76B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE76C4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE76C4u) goto L_08AE76C4;
    return;
L_08AE76C4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x08AE7714u);
    hot_regs.g5 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 463u, 0x08A931B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7714u) goto L_08AE7714;
    return;
L_08AE7714:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE773Cu);
    hot_regs.g6 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE773Cu) goto L_08AE773C;
    return;
L_08AE773C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE775C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7784u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7784u) goto L_08AE7784;
    return;
L_08AE7784:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7798;
      }
      goto L_08AE7790;
    }
L_08AE7790:
    hot_regs.g31 = (0x08AE7798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 34u, 0x08B68290u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7798u) goto L_08AE7798;
    return;
L_08AE7798:
    hot_regs.g31 = (0x08AE77A0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5896)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 278u, 0x088B5BECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE77A0u) goto L_08AE77A0;
    return;
L_08AE77A0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE77BC;
      }
      goto L_08AE77A8;
    }
L_08AE77A8:
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(7768));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    hot_regs.g5 = (hot_regs.g5 & 255u);
    hot_regs.g31 = (0x08AE77BCu);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 629u, 0x08A067B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE77BCu) goto L_08AE77BC;
    return;
L_08AE77BC:
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
L_08AE77D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE77FCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE77FCu) goto L_08AE77FC;
    return;
L_08AE77FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7808u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7808u) goto L_08AE7808;
    return;
L_08AE7808:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7824;
      }
      goto L_08AE781C;
    }
L_08AE781C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08AE783C;
      }
      goto L_08AE7824;
    }
L_08AE7824:
    hot_regs.g6 = (0u | 6u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE7838;
      }
      goto L_08AE7830;
    }
L_08AE7830:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(1352), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_08AE783C;
      }
      goto L_08AE7838;
    }
L_08AE7838:
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(1708), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_08AE783C;
L_08AE783C:
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
L_08AE7854:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE787Cu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE787Cu) goto L_08AE787C;
    return;
L_08AE787C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7888u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7888u) goto L_08AE7888;
    return;
L_08AE7888:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(538))))));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (g4 & hot_regs.g7);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE78AC;
      }
      goto L_08AE78A0;
    }
}
L_08AE78A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE78B0;
      }
      goto L_08AE78AC;
    }
}
L_08AE78AC:
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_08AE78B0;
L_08AE78B0:
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
L_08AE78C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE78F8u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE78F8u) goto L_08AE78F8;
    return;
L_08AE78F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7904u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7904u) goto L_08AE7904;
    return;
L_08AE7904:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(565)));
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    g6 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_08AE7938;
      }
      goto L_08AE7920;
    }
}
L_08AE7920:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x08AE792Cu);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE792Cu) goto L_08AE792C;
    return;
L_08AE792C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7938;
      }
      goto L_08AE7934;
    }
L_08AE7934:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE7938;
L_08AE7938:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE7964;
      }
      goto L_08AE795C;
    }
}
L_08AE795C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE79AC;
      }
      goto L_08AE7964;
    }
L_08AE7964:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7990;
      }
      goto L_08AE7984;
    }
}
L_08AE7984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE79AC;
      }
      goto L_08AE7990;
    }
}
L_08AE7990:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE79AC;
      }
      goto L_08AE79A8;
    }
}
L_08AE79A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE79AC;
L_08AE79AC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE79C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[18] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE79F8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE79F8u) goto L_08AE79F8;
    return;
L_08AE79F8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7A04u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7A04u) goto L_08AE7A04;
    return;
L_08AE7A04:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08AE7A1Cu);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7A1Cu) goto L_08AE7A1C;
    return;
L_08AE7A1C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7A38:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7A58u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7A58u) goto L_08AE7A58;
    return;
L_08AE7A58:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7A64u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7A64u) goto L_08AE7A64;
    return;
L_08AE7A64:
    hot_regs.g31 = (0x08AE7A6Cu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 502u, 0x08B0E0ECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7A6Cu) goto L_08AE7A6C;
    return;
L_08AE7A6C:
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
L_08AE7A80:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7AA8u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7AA8u) goto L_08AE7AA8;
    return;
L_08AE7AA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7AB4u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7AB4u) goto L_08AE7AB4;
    return;
L_08AE7AB4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(538))))));
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(-9));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (g4 & hot_regs.g7);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7AD4;
      }
      goto L_08AE7ACC;
    }
}
L_08AE7ACC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08AE7ADC;
      }
      goto L_08AE7AD4;
    }
L_08AE7AD4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 8u);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE7ADC;
}
L_08AE7ADC:
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
L_08AE7AF4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7B14u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7B14u) goto L_08AE7B14;
    return;
L_08AE7B14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7B20u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7B20u) goto L_08AE7B20;
    return;
L_08AE7B20:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B34;
      }
      goto L_08AE7B2C;
    }
L_08AE7B2C:
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_08AE7B34;
L_08AE7B34:
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
L_08AE7B48:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AE7B78u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7B78u) goto L_08AE7B78;
    return;
L_08AE7B78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7B84u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7B84u) goto L_08AE7B84;
    return;
L_08AE7B84:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7BA0;
      }
      goto L_08AE7B90;
    }
}
L_08AE7B90:
    hot_regs.g31 = (0x08AE7B98u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15976)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 775u, 0x08B67368u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7B98u) goto L_08AE7B98;
    return;
L_08AE7B98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g2);
      if (branch_taken) {
          goto L_08AE7BA8;
      }
      goto L_08AE7BA0;
    }
L_08AE7BA0:
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(29704), hot_regs.g4);
    goto L_08AE7BA8;
L_08AE7BA8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AE7BB8u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 431u, 0x08862890u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7BB8u) goto L_08AE7BB8;
    return;
L_08AE7BB8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7BD4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 3u);
    hot_regs.g31 = (0x08AE7BFCu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7BFCu) goto L_08AE7BFC;
    return;
L_08AE7BFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7C08u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7C08u) goto L_08AE7C08;
    return;
L_08AE7C08:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(4)));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    aot_mem.aot_store8(g2 + static_cast<std::uint32_t>(534), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (hot_regs.g5 + g4);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(512), g4);
    g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08AE7C40:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7C60u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7C60u) goto L_08AE7C60;
    return;
L_08AE7C60:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store16(ctx.gpr[28] + static_cast<std::uint32_t>(-13364), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_08AE7C84:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7CACu);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7CACu) goto L_08AE7CAC;
    return;
L_08AE7CAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7CB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7CB8u) goto L_08AE7CB8;
    return;
L_08AE7CB8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(560), static_cast<std::uint16_t>(hot_regs.g4));
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
L_08AE7CD8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (2236u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7D00u);
    hot_regs.g7 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7D00u) goto L_08AE7D00;
    return;
L_08AE7D00:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7D0Cu);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7D0Cu) goto L_08AE7D0C;
    return;
L_08AE7D0C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1653))))));
      if (branch_taken) {
          goto L_08AE7D28;
      }
      goto L_08AE7D1C;
    }
L_08AE7D1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7D34;
      }
      goto L_08AE7D28;
    }
}
L_08AE7D28:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-129));
    g4 = (g4 & hot_regs.g6);
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1653), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_08AE7D34;
}
L_08AE7D34:
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
L_08AE7D4C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (2236u << 16u);
    hot_regs.g7 = (ctx.gpr[17] + static_cast<std::uint32_t>(29704));
    hot_regs.g31 = (0x08AE7D78u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7D78u) goto L_08AE7D78;
    return;
L_08AE7D78:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7D84u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7D84u) goto L_08AE7D84;
    return;
L_08AE7D84:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7D9C;
      }
      goto L_08AE7D98;
    }
L_08AE7D98:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE7D9C;
L_08AE7D9C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7DC0;
      }
      goto L_08AE7DA8;
    }
L_08AE7DA8:
    hot_regs.g31 = (0x08AE7DB0u);
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(944));
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 387u, 0x08B0D970u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7DB0u) goto L_08AE7DB0;
    return;
L_08AE7DB0:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(225) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7DC0;
      }
      goto L_08AE7DBC;
    }
L_08AE7DBC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE7DC0;
L_08AE7DC0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(636)));
    hot_regs.g4 = (17274u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE7DE0;
      }
      goto L_08AE7DDC;
    }
L_08AE7DDC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08AE7DE0;
L_08AE7DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (0u < g17 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    g17 = (g4 ^ g5);
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    { const bool branch_taken = g4 != 0u;
    g17 = (0u < g17 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE7E0C;
      }
      goto L_08AE7E04;
    }
}
L_08AE7E04:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AE7E54;
      }
      goto L_08AE7E0C;
    }
L_08AE7E0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    g4 = (0u < g4 ? 1u : 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7E38;
      }
      goto L_08AE7E2C;
    }
}
L_08AE7E2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] & g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7E54;
      }
      goto L_08AE7E38;
    }
}
L_08AE7E38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] | g4);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    g4 = (static_cast<std::int32_t>(g4) < 21 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08AE7E54;
      }
      goto L_08AE7E50;
    }
}
L_08AE7E50:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(518), static_cast<std::uint16_t>(0u));
    goto L_08AE7E54;
L_08AE7E54:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
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
L_08AE7E70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[19] = (2236u << 16u);
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(29704));
    hot_regs.g6 = (0u | 2u);
    hot_regs.g31 = (0x08AE7EACu);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 371u, 0x0886589Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7EACu) goto L_08AE7EAC;
    return;
L_08AE7EAC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g31 = (0x08AE7EB8u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(29704)));
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 438u, 0x08B65CC4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7EB8u) goto L_08AE7EB8;
    return;
L_08AE7EB8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(852)));
    ctx.gpr[8] = (0u | 6u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (0u | 4u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7F64;
      }
      goto L_08AE7ED8;
    }
L_08AE7ED8:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE7F1C;
      }
      goto L_08AE7EE0;
    }
L_08AE7EE0:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g7 = (0u | 0u);
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g5 = g5;
    goto L_08AE7EF0;
}
L_08AE7EF0:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (hot_regs.g4 + hot_regs.g7);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(1076)));
    { const bool branch_taken = g8 != ctx.gpr[20];
    // nop
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_08AE7F04;
      }
      goto L_08AE7F00;
    }
}
L_08AE7F00:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AE7F04;
L_08AE7F04:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (g7 < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_08AE7EF0;
      }
      goto L_08AE7F14;
    }
}
L_08AE7F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7FC8;
      }
      goto L_08AE7F1C;
    }
L_08AE7F1C:
    { const bool branch_taken = hot_regs.g5 != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AE7F30;
      }
      goto L_08AE7F24;
    }
L_08AE7F24:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7F44;
      }
      goto L_08AE7F30;
    }
L_08AE7F30:
    hot_regs.g6 = (0u | 3u);
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_08AE7F44;
      }
      goto L_08AE7F3C;
    }
L_08AE7F3C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_08AE7F44;
L_08AE7F44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(1076)));
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    { const bool branch_taken = g4 != ctx.gpr[20];
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7FC8;
      }
      goto L_08AE7F5C;
    }
}
L_08AE7F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7FC8;
      }
      goto L_08AE7F64;
    }
L_08AE7F64:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g6;
    ctx.gpr[18] = (hot_regs.g4 + static_cast<std::uint32_t>(944));
      if (branch_taken) {
          goto L_08AE7FA0;
      }
      goto L_08AE7F6C;
    }
L_08AE7F6C:
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE7F70;
L_08AE7F70:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x08AE7F7Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7F7Cu) goto L_08AE7F7C;
    return;
L_08AE7F7C:
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AE7F88;
      }
      goto L_08AE7F84;
    }
L_08AE7F84:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08AE7F88;
L_08AE7F88:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (g17 < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_08AE7F70;
      }
      goto L_08AE7F98;
    }
}
L_08AE7F98:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
      if (branch_taken) {
          goto L_08AE7FC0;
      }
      goto L_08AE7FA0;
    }
L_08AE7FA0:
    hot_regs.g31 = (0x08AE7FA8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 376u, 0x08B0D8F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08AE7FA8u) goto L_08AE7FA8;
    return;
L_08AE7FA8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(524)));
    g5 = (0u < g5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != ctx.gpr[20];
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_08AE7FC8;
      }
      goto L_08AE7FB8;
    }
}
L_08AE7FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7FC8;
      }
      goto L_08AE7FC0;
    }
L_08AE7FC0:
    hot_regs.g5 = (0u < hot_regs.g5 ? 1u : 0u);
    hot_regs.g6 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(518)));
    goto L_08AE7FC8;
L_08AE7FC8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (0u < g19 ? 1u : 0u);
    g4 = (g4 & 255u);
    g4 = (g4 & 255u);
    g19 = (g4 ^ hot_regs.g5);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g19 = (0u < g19 ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_08AE7FE8;
      }
      goto L_08AE7FE0;
    }
}
L_08AE7FE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(521), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 5u, 0x08AE8030u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_08AE7FE8;
    }
L_08AE7FE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(518));
    g5 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(521)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.pc = 0x08AE8000u; return;}

}

void recomp_unit_0184(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0184_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_184(Runtime &runtime) {
    runtime.register_generated_unit(184u, 0x08AE4000u, 16384u, &recomp_unit_0184, &recomp_unit_0184_entry);
    runtime.register_function(0x08AE4000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4020u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE402Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4048u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4050u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE405Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4064u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE406Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4088u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4114u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE412Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4138u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE413Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4174u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE417Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE422Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4248u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE426Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE428Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4310u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE431Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4338u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4370u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE437Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4408u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4414u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4438u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4450u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE445Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4460u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE447Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4500u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4528u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4530u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4550u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE455Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4574u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4590u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4610u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE463Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4664u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4698u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4704u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE470Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4710u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4718u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4734u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE473Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4744u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4768u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4798u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4814u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4820u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE483Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE486Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4878u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4894u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4900u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4904u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4920u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4928u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4948u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4954u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE496Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4970u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE497Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5008u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE500Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5028u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5050u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE505Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5074u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5078u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5094u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5114u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE511Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE513Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5160u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5180u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5200u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5224u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5234u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5244u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5274u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5288u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5294u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE52F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5308u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE530Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5320u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5348u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5354u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE535Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5368u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5384u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE539Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5404u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE545Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5524u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5554u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5560u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5574u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5614u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5630u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5664u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5670u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE567Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5698u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5700u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5728u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5734u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5760u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5768u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE576Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5788u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5790u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5820u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE582Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE584Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE586Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5878u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE58ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5910u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5918u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE591Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5940u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5958u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE596Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE598Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5990u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5D94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ECCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE600Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE601Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE604Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6060u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6074u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE607Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6114u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE613Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6154u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6168u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE618Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6194u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6234u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6240u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6264u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE627Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6288u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE628Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6298u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6308u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6324u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE632Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6338u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6340u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6348u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE637Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6398u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE650Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE652Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6530u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6584u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6684u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6700u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6730u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6760u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE676Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6830u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6868u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6884u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6914u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6944u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6950u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6960u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6970u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE697Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE698Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6994u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE699Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6D88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6EF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7034u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7054u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7058u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7060u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE707Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE711Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE712Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7138u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7144u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE715Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7184u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7214u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE722Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7254u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7260u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7274u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7278u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE729Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7304u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7334u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7340u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE735Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7378u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7398u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE740Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7414u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7418u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE743Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7444u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7464u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7470u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7488u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE748Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7504u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE751Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE754Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7558u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7568u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7584u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7620u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE762Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE763Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7650u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7658u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7664u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7680u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7714u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE773Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE775Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7784u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7790u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7798u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7808u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE781Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7830u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7838u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE783Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7854u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE787Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7888u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7904u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7920u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE792Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7934u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE795Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7964u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7984u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7990u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ADCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FE8u, &recomp_unit_0184, "recomp_unit_0184");
}
} // namespace psprecomp
