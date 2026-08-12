#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0114[4093] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0,
    0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0,
    27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0,
    34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42,
    0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0,
    49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 56, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70,
    0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 78,
    0, 0, 79, 0, 0, 80, 0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 87, 88, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0,
    101, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 118, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132,
    0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 138,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 158, 0, 159, 0, 0, 0, 0,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 164, 0, 165, 166, 0, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0,
    0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0,
    0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 192, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0,
    0, 200, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0,
    214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0,
    0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0,
    229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 235, 0, 0, 0, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 252, 0, 0, 253,
    0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 258, 0, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0,
    261, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    269, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291,
    0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0,
    299, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 312, 0, 0,
    0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320,
    0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0,
    0, 0, 0, 328, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0, 334, 0, 0, 0,
    335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352,
    0, 0, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0,
    396, 397, 398, 0, 399, 400, 401, 0, 402, 403, 404, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0,
    0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417,
    418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0,
    424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 442, 0, 0, 443, 0, 0, 0, 0, 0, 0,
    444, 0, 0, 445, 0, 0, 446, 447, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0,
    458, 0, 0, 0, 459, 0, 0, 460, 0, 0, 0, 0, 461, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465,
    0, 0, 466, 0, 0, 467, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 480, 0, 0,
    0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0,
    0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0,
    0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 524, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 527, 0, 0, 0, 528, 529, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0,
    536, 0, 0, 0, 537, 0, 538, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0,
    544, 0, 0, 545, 0, 0, 0, 0, 546, 0, 547, 548, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0,
    0, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556,
    0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 0, 563, 0, 0, 564, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    568, 0, 0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 581,
    0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0,
    0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 595, 0, 596,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608,
    0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 615, 0, 616, 0, 617, 0, 0,
    0, 0, 0, 618, 619, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 0, 0,
    0, 626, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633,
    0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 643, 0, 644, 0, 645, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0,
    0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 656, 0, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 0, 663, 0, 0, 664,
    0, 0, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 670, 671, 0, 0, 0, 0, 672,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676,
    0, 0, 0, 677, 0, 678, 0, 679, 0, 0, 680, 681, 0, 0, 682, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 686, 687, 0, 688, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695,
    0, 0, 0, 696, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 706,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 708, 709, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0,
    0, 0, 714, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718,
};
void recomp_unit_0114_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089CC000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0114[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089CC000;
    case 2u: goto L_089CC020;
    case 3u: goto L_089CC02C;
    case 4u: goto L_089CC040;
    case 5u: goto L_089CC06C;
    case 6u: goto L_089CC078;
    case 7u: goto L_089CC08C;
    case 8u: goto L_089CC0B8;
    case 9u: goto L_089CC0C4;
    case 10u: goto L_089CC0D8;
    case 11u: goto L_089CC104;
    case 12u: goto L_089CC110;
    case 13u: goto L_089CC124;
    case 14u: goto L_089CC17C;
    case 15u: goto L_089CC194;
    case 16u: goto L_089CC1B4;
    case 17u: goto L_089CC1CC;
    case 18u: goto L_089CC1E0;
    case 19u: goto L_089CC1F4;
    case 20u: goto L_089CC20C;
    case 21u: goto L_089CC218;
    case 22u: goto L_089CC220;
    case 23u: goto L_089CC25C;
    case 24u: goto L_089CC264;
    case 25u: goto L_089CC26C;
    case 26u: goto L_089CC274;
    case 27u: goto L_089CC280;
    case 28u: goto L_089CC298;
    case 29u: goto L_089CC2A4;
    case 30u: goto L_089CC2AC;
    case 31u: goto L_089CC2E8;
    case 32u: goto L_089CC2F0;
    case 33u: goto L_089CC2F8;
    case 34u: goto L_089CC300;
    case 35u: goto L_089CC314;
    case 36u: goto L_089CC338;
    case 37u: goto L_089CC33C;
    case 38u: goto L_089CC370;
    case 39u: goto L_089CC3C8;
    case 40u: goto L_089CC46C;
    case 41u: goto L_089CC474;
    case 42u: goto L_089CC47C;
    case 43u: goto L_089CC484;
    case 44u: goto L_089CC48C;
    case 45u: goto L_089CC494;
    case 46u: goto L_089CC4C8;
    case 47u: goto L_089CC4E4;
    case 48u: goto L_089CC4EC;
    case 49u: goto L_089CC500;
    case 50u: goto L_089CC508;
    case 51u: goto L_089CC514;
    case 52u: goto L_089CC52C;
    case 53u: goto L_089CC534;
    case 54u: goto L_089CC53C;
    case 55u: goto L_089CC580;
    case 56u: goto L_089CC588;
    case 57u: goto L_089CC5A8;
    case 58u: goto L_089CC5B0;
    case 59u: goto L_089CC5D4;
    case 60u: goto L_089CC5DC;
    case 61u: goto L_089CC5F0;
    case 62u: goto L_089CC664;
    case 63u: goto L_089CC674;
    case 64u: goto L_089CC688;
    case 65u: goto L_089CC6AC;
    case 66u: goto L_089CC6B8;
    case 67u: goto L_089CC6C0;
    case 68u: goto L_089CC6D4;
    case 69u: goto L_089CC6E4;
    case 70u: goto L_089CC6FC;
    case 71u: goto L_089CC704;
    case 72u: goto L_089CC70C;
    case 73u: goto L_089CC714;
    case 74u: goto L_089CC728;
    case 75u: goto L_089CC750;
    case 76u: goto L_089CC75C;
    case 77u: goto L_089CC768;
    case 78u: goto L_089CC77C;
    case 79u: goto L_089CC788;
    case 80u: goto L_089CC794;
    case 81u: goto L_089CC7A4;
    case 82u: goto L_089CC7AC;
    case 83u: goto L_089CC7B8;
    case 84u: goto L_089CC7C8;
    case 85u: goto L_089CC7D0;
    case 86u: goto L_089CC7D8;
    case 87u: goto L_089CC804;
    case 88u: goto L_089CC808;
    case 89u: goto L_089CC810;
    case 90u: goto L_089CC818;
    case 91u: goto L_089CC83C;
    case 92u: goto L_089CC840;
    case 93u: goto L_089CC848;
    case 94u: goto L_089CC850;
    case 95u: goto L_089CC858;
    case 96u: goto L_089CC870;
    case 97u: goto L_089CC87C;
    case 98u: goto L_089CC8A4;
    case 99u: goto L_089CC8E4;
    case 100u: goto L_089CC8F8;
    case 101u: goto L_089CC900;
    case 102u: goto L_089CC90C;
    case 103u: goto L_089CC918;
    case 104u: goto L_089CC920;
    case 105u: goto L_089CC928;
    case 106u: goto L_089CC93C;
    case 107u: goto L_089CC948;
    case 108u: goto L_089CC958;
    case 109u: goto L_089CC960;
    case 110u: goto L_089CC970;
    case 111u: goto L_089CC978;
    case 112u: goto L_089CC998;
    case 113u: goto L_089CC9B0;
    case 114u: goto L_089CC9BC;
    case 115u: goto L_089CC9CC;
    case 116u: goto L_089CC9DC;
    case 117u: goto L_089CC9E4;
    case 118u: goto L_089CC9EC;
    case 119u: goto L_089CC9F8;
    case 120u: goto L_089CCA0C;
    case 121u: goto L_089CCA30;
    case 122u: goto L_089CCA34;
    case 123u: goto L_089CCA48;
    case 124u: goto L_089CCA50;
    case 125u: goto L_089CCA58;
    case 126u: goto L_089CCA60;
    case 127u: goto L_089CCAAC;
    case 128u: goto L_089CCAB8;
    case 129u: goto L_089CCAC4;
    case 130u: goto L_089CCACC;
    case 131u: goto L_089CCAF0;
    case 132u: goto L_089CCAFC;
    case 133u: goto L_089CCB0C;
    case 134u: goto L_089CCB54;
    case 135u: goto L_089CCBD8;
    case 136u: goto L_089CCBE0;
    case 137u: goto L_089CCBF4;
    case 138u: goto L_089CCBFC;
    case 139u: goto L_089CCC30;
    case 140u: goto L_089CCC4C;
    case 141u: goto L_089CCC54;
    case 142u: goto L_089CCC68;
    case 143u: goto L_089CCC70;
    case 144u: goto L_089CCC90;
    case 145u: goto L_089CCCA0;
    case 146u: goto L_089CCCB4;
    case 147u: goto L_089CCCBC;
    case 148u: goto L_089CCCC4;
    case 149u: goto L_089CCCCC;
    case 150u: goto L_089CCCD4;
    case 151u: goto L_089CCCDC;
    case 152u: goto L_089CCCF0;
    case 153u: goto L_089CCD00;
    case 154u: goto L_089CCD18;
    case 155u: goto L_089CCD20;
    case 156u: goto L_089CCD4C;
    case 157u: goto L_089CCD58;
    case 158u: goto L_089CCD64;
    case 159u: goto L_089CCD6C;
    case 160u: goto L_089CCD80;
    case 161u: goto L_089CCDA4;
    case 162u: goto L_089CCE04;
    case 163u: goto L_089CCE0C;
    case 164u: goto L_089CCE14;
    case 165u: goto L_089CCE1C;
    case 166u: goto L_089CCE20;
    case 167u: goto L_089CCE30;
    case 168u: goto L_089CCE38;
    case 169u: goto L_089CCE48;
    case 170u: goto L_089CCE60;
    case 171u: goto L_089CCE68;
    case 172u: goto L_089CCE74;
    case 173u: goto L_089CCE88;
    case 174u: goto L_089CCE98;
    case 175u: goto L_089CCEB0;
    case 176u: goto L_089CCEB8;
    case 177u: goto L_089CCEC0;
    case 178u: goto L_089CCEEC;
    case 179u: goto L_089CCEF8;
    case 180u: goto L_089CCF08;
    case 181u: goto L_089CCF14;
    case 182u: goto L_089CCF3C;
    case 183u: goto L_089CCF54;
    case 184u: goto L_089CCF6C;
    case 185u: goto L_089CCF84;
    case 186u: goto L_089CCF94;
    case 187u: goto L_089CCF9C;
    case 188u: goto L_089CCFA4;
    case 189u: goto L_089CCFC0;
    case 190u: goto L_089CCFC8;
    case 191u: goto L_089CCFD0;
    case 192u: goto L_089CD010;
    case 193u: goto L_089CD018;
    case 194u: goto L_089CD020;
    case 195u: goto L_089CD028;
    case 196u: goto L_089CD050;
    case 197u: goto L_089CD058;
    case 198u: goto L_089CD064;
    case 199u: goto L_089CD070;
    case 200u: goto L_089CD084;
    case 201u: goto L_089CD090;
    case 202u: goto L_089CD0A0;
    case 203u: goto L_089CD0A8;
    case 204u: goto L_089CD0B8;
    case 205u: goto L_089CD0C0;
    case 206u: goto L_089CD0D0;
    case 207u: goto L_089CD0DC;
    case 208u: goto L_089CD0EC;
    case 209u: goto L_089CD130;
    case 210u: goto L_089CD188;
    case 211u: goto L_089CD190;
    case 212u: goto L_089CD1A4;
    case 213u: goto L_089CD278;
    case 214u: goto L_089CD280;
    case 215u: goto L_089CD288;
    case 216u: goto L_089CD290;
    case 217u: goto L_089CD298;
    case 218u: goto L_089CD2A0;
    case 219u: goto L_089CD2D4;
    case 220u: goto L_089CD2F0;
    case 221u: goto L_089CD2F8;
    case 222u: goto L_089CD30C;
    case 223u: goto L_089CD314;
    case 224u: goto L_089CD32C;
    case 225u: goto L_089CD334;
    case 226u: goto L_089CD33C;
    case 227u: goto L_089CD35C;
    case 228u: goto L_089CD364;
    case 229u: goto L_089CD380;
    case 230u: goto L_089CD404;
    case 231u: goto L_089CD414;
    case 232u: goto L_089CD428;
    case 233u: goto L_089CD44C;
    case 234u: goto L_089CD458;
    case 235u: goto L_089CD460;
    case 236u: goto L_089CD474;
    case 237u: goto L_089CD484;
    case 238u: goto L_089CD498;
    case 239u: goto L_089CD4A8;
    case 240u: goto L_089CD4C0;
    case 241u: goto L_089CD4C8;
    case 242u: goto L_089CD4D0;
    case 243u: goto L_089CD4D8;
    case 244u: goto L_089CD4EC;
    case 245u: goto L_089CD514;
    case 246u: goto L_089CD520;
    case 247u: goto L_089CD52C;
    case 248u: goto L_089CD540;
    case 249u: goto L_089CD54C;
    case 250u: goto L_089CD558;
    case 251u: goto L_089CD568;
    case 252u: goto L_089CD570;
    case 253u: goto L_089CD57C;
    case 254u: goto L_089CD58C;
    case 255u: goto L_089CD594;
    case 256u: goto L_089CD59C;
    case 257u: goto L_089CD5C8;
    case 258u: goto L_089CD5CC;
    case 259u: goto L_089CD5D4;
    case 260u: goto L_089CD5DC;
    case 261u: goto L_089CD600;
    case 262u: goto L_089CD604;
    case 263u: goto L_089CD60C;
    case 264u: goto L_089CD614;
    case 265u: goto L_089CD61C;
    case 266u: goto L_089CD634;
    case 267u: goto L_089CD640;
    case 268u: goto L_089CD668;
    case 269u: goto L_089CD680;
    case 270u: goto L_089CD688;
    case 271u: goto L_089CD690;
    case 272u: goto L_089CD6A4;
    case 273u: goto L_089CD6B0;
    case 274u: goto L_089CD6C0;
    case 275u: goto L_089CD6C8;
    case 276u: goto L_089CD6D8;
    case 277u: goto L_089CD6E0;
    case 278u: goto L_089CD700;
    case 279u: goto L_089CD710;
    case 280u: goto L_089CD720;
    case 281u: goto L_089CD730;
    case 282u: goto L_089CD744;
    case 283u: goto L_089CD74C;
    case 284u: goto L_089CD754;
    case 285u: goto L_089CD75C;
    case 286u: goto L_089CD7A8;
    case 287u: goto L_089CD7B4;
    case 288u: goto L_089CD7C0;
    case 289u: goto L_089CD7CC;
    case 290u: goto L_089CD7F0;
    case 291u: goto L_089CD7FC;
    case 292u: goto L_089CD80C;
    case 293u: goto L_089CD854;
    case 294u: goto L_089CD898;
    case 295u: goto L_089CD8A4;
    case 296u: goto L_089CD8E8;
    case 297u: goto L_089CD8F0;
    case 298u: goto L_089CD8F8;
    case 299u: goto L_089CD900;
    case 300u: goto L_089CD908;
    case 301u: goto L_089CD910;
    case 302u: goto L_089CD944;
    case 303u: goto L_089CD960;
    case 304u: goto L_089CD968;
    case 305u: goto L_089CD990;
    case 306u: goto L_089CD998;
    case 307u: goto L_089CD9B8;
    case 308u: goto L_089CD9C8;
    case 309u: goto L_089CD9DC;
    case 310u: goto L_089CD9E4;
    case 311u: goto L_089CD9EC;
    case 312u: goto L_089CD9F4;
    case 313u: goto L_089CDA04;
    case 314u: goto L_089CDA10;
    case 315u: goto L_089CDA28;
    case 316u: goto L_089CDA30;
    case 317u: goto L_089CDA5C;
    case 318u: goto L_089CDA68;
    case 319u: goto L_089CDA74;
    case 320u: goto L_089CDA7C;
    case 321u: goto L_089CDA90;
    case 322u: goto L_089CDAB4;
    case 323u: goto L_089CDAD0;
    case 324u: goto L_089CDAE0;
    case 325u: goto L_089CDAE8;
    case 326u: goto L_089CDAF0;
    case 327u: goto L_089CDAF8;
    case 328u: goto L_089CDB0C;
    case 329u: goto L_089CDB20;
    case 330u: goto L_089CDB28;
    case 331u: goto L_089CDB54;
    case 332u: goto L_089CDB60;
    case 333u: goto L_089CDB68;
    case 334u: goto L_089CDB70;
    case 335u: goto L_089CDB80;
    case 336u: goto L_089CDB8C;
    case 337u: goto L_089CDB9C;
    case 338u: goto L_089CDBB4;
    case 339u: goto L_089CDBC4;
    case 340u: goto L_089CDBCC;
    case 341u: goto L_089CDBD4;
    case 342u: goto L_089CDBDC;
    case 343u: goto L_089CDBF0;
    case 344u: goto L_089CDC38;
    case 345u: goto L_089CDC40;
    case 346u: goto L_089CDC4C;
    case 347u: goto L_089CDC54;
    case 348u: goto L_089CDC5C;
    case 349u: goto L_089CDC64;
    case 350u: goto L_089CDC6C;
    case 351u: goto L_089CDC74;
    case 352u: goto L_089CDC7C;
    case 353u: goto L_089CDC8C;
    case 354u: goto L_089CDC98;
    case 355u: goto L_089CDCC4;
    case 356u: goto L_089CDCD8;
    case 357u: goto L_089CDD1C;
    case 358u: goto L_089CDE7C;
    case 359u: goto L_089CDE98;
    case 360u: goto L_089CDEA4;
    case 361u: goto L_089CDEC0;
    case 362u: goto L_089CDECC;
    case 363u: goto L_089CDEE8;
    case 364u: goto L_089CDEF4;
    case 365u: goto L_089CDF10;
    case 366u: goto L_089CDF1C;
    case 367u: goto L_089CDF38;
    case 368u: goto L_089CDF44;
    case 369u: goto L_089CDF60;
    case 370u: goto L_089CDF6C;
    case 371u: goto L_089CDFC4;
    case 372u: goto L_089CDFD0;
    case 373u: goto L_089CDFEC;
    case 374u: goto L_089CE0B4;
    case 375u: goto L_089CE0E4;
    case 376u: goto L_089CE0F8;
    case 377u: goto L_089CE118;
    case 378u: goto L_089CE144;
    case 379u: goto L_089CE174;
    case 380u: goto L_089CE1A0;
    case 381u: goto L_089CE1AC;
    case 382u: goto L_089CE1BC;
    case 383u: goto L_089CE1DC;
    case 384u: goto L_089CE1E8;
    case 385u: goto L_089CE1F8;
    case 386u: goto L_089CE204;
    case 387u: goto L_089CE22C;
    case 388u: goto L_089CE234;
    case 389u: goto L_089CE23C;
    case 390u: goto L_089CE244;
    case 391u: goto L_089CE24C;
    case 392u: goto L_089CE254;
    case 393u: goto L_089CE25C;
    case 394u: goto L_089CE264;
    case 395u: goto L_089CE26C;
    case 396u: goto L_089CE280;
    case 397u: goto L_089CE284;
    case 398u: goto L_089CE288;
    case 399u: goto L_089CE290;
    case 400u: goto L_089CE294;
    case 401u: goto L_089CE298;
    case 402u: goto L_089CE2A0;
    case 403u: goto L_089CE2A4;
    case 404u: goto L_089CE2A8;
    case 405u: goto L_089CE2B0;
    case 406u: goto L_089CE2B4;
    case 407u: goto L_089CE2D8;
    case 408u: goto L_089CE2F4;
    case 409u: goto L_089CE308;
    case 410u: goto L_089CE314;
    case 411u: goto L_089CE320;
    case 412u: goto L_089CE328;
    case 413u: goto L_089CE33C;
    case 414u: goto L_089CE344;
    case 415u: goto L_089CE368;
    case 416u: goto L_089CE374;
    case 417u: goto L_089CE37C;
    case 418u: goto L_089CE380;
    case 419u: goto L_089CE390;
    case 420u: goto L_089CE3A0;
    case 421u: goto L_089CE3BC;
    case 422u: goto L_089CE3C8;
    case 423u: goto L_089CE3F4;
    case 424u: goto L_089CE400;
    case 425u: goto L_089CE40C;
    case 426u: goto L_089CE43C;
    case 427u: goto L_089CE44C;
    case 428u: goto L_089CE460;
    case 429u: goto L_089CE474;
    case 430u: goto L_089CE480;
    case 431u: goto L_089CE49C;
    case 432u: goto L_089CE4B4;
    case 433u: goto L_089CE4C0;
    case 434u: goto L_089CE4C8;
    case 435u: goto L_089CE4CC;
    case 436u: goto L_089CE4EC;
    case 437u: goto L_089CE510;
    case 438u: goto L_089CE530;
    case 439u: goto L_089CE540;
    case 440u: goto L_089CE54C;
    case 441u: goto L_089CE554;
    case 442u: goto L_089CE558;
    case 443u: goto L_089CE564;
    case 444u: goto L_089CE580;
    case 445u: goto L_089CE58C;
    case 446u: goto L_089CE598;
    case 447u: goto L_089CE59C;
    case 448u: goto L_089CE5AC;
    case 449u: goto L_089CE5B4;
    case 450u: goto L_089CE5D4;
    case 451u: goto L_089CE5E4;
    case 452u: goto L_089CE5F0;
    case 453u: goto L_089CE604;
    case 454u: goto L_089CE610;
    case 455u: goto L_089CE658;
    case 456u: goto L_089CE664;
    case 457u: goto L_089CE674;
    case 458u: goto L_089CE680;
    case 459u: goto L_089CE690;
    case 460u: goto L_089CE69C;
    case 461u: goto L_089CE6B0;
    case 462u: goto L_089CE6B8;
    case 463u: goto L_089CE6C4;
    case 464u: goto L_089CE6E0;
    case 465u: goto L_089CE6FC;
    case 466u: goto L_089CE708;
    case 467u: goto L_089CE714;
    case 468u: goto L_089CE718;
    case 469u: goto L_089CE728;
    case 470u: goto L_089CE730;
    case 471u: goto L_089CE744;
    case 472u: goto L_089CE76C;
    case 473u: goto L_089CE790;
    case 474u: goto L_089CE798;
    case 475u: goto L_089CE7B4;
    case 476u: goto L_089CE7BC;
    case 477u: goto L_089CE7D8;
    case 478u: goto L_089CE7E4;
    case 479u: goto L_089CE7F0;
    case 480u: goto L_089CE7F4;
    case 481u: goto L_089CE804;
    case 482u: goto L_089CE81C;
    case 483u: goto L_089CE870;
    case 484u: goto L_089CE888;
    case 485u: goto L_089CE8A0;
    case 486u: goto L_089CE8B4;
    case 487u: goto L_089CE8BC;
    case 488u: goto L_089CE8D4;
    case 489u: goto L_089CE8EC;
    case 490u: goto L_089CE924;
    case 491u: goto L_089CE940;
    case 492u: goto L_089CE950;
    case 493u: goto L_089CE95C;
    case 494u: goto L_089CE99C;
    case 495u: goto L_089CE9B4;
    case 496u: goto L_089CE9C8;
    case 497u: goto L_089CE9EC;
    case 498u: goto L_089CEA04;
    case 499u: goto L_089CEA20;
    case 500u: goto L_089CEB08;
    case 501u: goto L_089CEB20;
    case 502u: goto L_089CEB2C;
    case 503u: goto L_089CEBAC;
    case 504u: goto L_089CEBBC;
    case 505u: goto L_089CEBC8;
    case 506u: goto L_089CEBE0;
    case 507u: goto L_089CEC08;
    case 508u: goto L_089CEC24;
    case 509u: goto L_089CEC3C;
    case 510u: goto L_089CEC48;
    case 511u: goto L_089CEC50;
    case 512u: goto L_089CEC64;
    case 513u: goto L_089CEC98;
    case 514u: goto L_089CECE8;
    case 515u: goto L_089CED08;
    case 516u: goto L_089CED18;
    case 517u: goto L_089CED3C;
    case 518u: goto L_089CED54;
    case 519u: goto L_089CED74;
    case 520u: goto L_089CED88;
    case 521u: goto L_089CED94;
    case 522u: goto L_089CEDAC;
    case 523u: goto L_089CEDBC;
    case 524u: goto L_089CEDC4;
    case 525u: goto L_089CEDC8;
    case 526u: goto L_089CEDE0;
    case 527u: goto L_089CEE0C;
    case 528u: goto L_089CEE1C;
    case 529u: goto L_089CEE20;
    case 530u: goto L_089CEE2C;
    case 531u: goto L_089CEE34;
    case 532u: goto L_089CEE40;
    case 533u: goto L_089CEE54;
    case 534u: goto L_089CEE5C;
    case 535u: goto L_089CEE68;
    case 536u: goto L_089CEE80;
    case 537u: goto L_089CEE90;
    case 538u: goto L_089CEE98;
    case 539u: goto L_089CEE9C;
    case 540u: goto L_089CEEB4;
    case 541u: goto L_089CEEE0;
    case 542u: goto L_089CEEF0;
    case 543u: goto L_089CEEF8;
    case 544u: goto L_089CEF00;
    case 545u: goto L_089CEF0C;
    case 546u: goto L_089CEF20;
    case 547u: goto L_089CEF28;
    case 548u: goto L_089CEF2C;
    case 549u: goto L_089CEF38;
    case 550u: goto L_089CEF44;
    case 551u: goto L_089CEF4C;
    case 552u: goto L_089CEF78;
    case 553u: goto L_089CEF88;
    case 554u: goto L_089CEF94;
    case 555u: goto L_089CF034;
    case 556u: goto L_089CF17C;
    case 557u: goto L_089CF184;
    case 558u: goto L_089CF18C;
    case 559u: goto L_089CF19C;
    case 560u: goto L_089CF1D0;
    case 561u: goto L_089CF1D8;
    case 562u: goto L_089CF1E8;
    case 563u: goto L_089CF20C;
    case 564u: goto L_089CF218;
    case 565u: goto L_089CF21C;
    case 566u: goto L_089CF238;
    case 567u: goto L_089CF240;
    case 568u: goto L_089CF280;
    case 569u: goto L_089CF28C;
    case 570u: goto L_089CF298;
    case 571u: goto L_089CF2A4;
    case 572u: goto L_089CF2B0;
    case 573u: goto L_089CF2BC;
    case 574u: goto L_089CF2C8;
    case 575u: goto L_089CF2D0;
    case 576u: goto L_089CF33C;
    case 577u: goto L_089CF344;
    case 578u: goto L_089CF350;
    case 579u: goto L_089CF358;
    case 580u: goto L_089CF368;
    case 581u: goto L_089CF37C;
    case 582u: goto L_089CF388;
    case 583u: goto L_089CF3B0;
    case 584u: goto L_089CF3D4;
    case 585u: goto L_089CF3DC;
    case 586u: goto L_089CF3E8;
    case 587u: goto L_089CF3F4;
    case 588u: goto L_089CF404;
    case 589u: goto L_089CF40C;
    case 590u: goto L_089CF42C;
    case 591u: goto L_089CF43C;
    case 592u: goto L_089CF44C;
    case 593u: goto L_089CF454;
    case 594u: goto L_089CF460;
    case 595u: goto L_089CF474;
    case 596u: goto L_089CF47C;
    case 597u: goto L_089CF4CC;
    case 598u: goto L_089CF524;
    case 599u: goto L_089CF534;
    case 600u: goto L_089CF558;
    case 601u: goto L_089CF564;
    case 602u: goto L_089CF58C;
    case 603u: goto L_089CF624;
    case 604u: goto L_089CF640;
    case 605u: goto L_089CF648;
    case 606u: goto L_089CF654;
    case 607u: goto L_089CF660;
    case 608u: goto L_089CF67C;
    case 609u: goto L_089CF684;
    case 610u: goto L_089CF6A0;
    case 611u: goto L_089CF6B8;
    case 612u: goto L_089CF6C0;
    case 613u: goto L_089CF6D0;
    case 614u: goto L_089CF6E0;
    case 615u: goto L_089CF6E4;
    case 616u: goto L_089CF6EC;
    case 617u: goto L_089CF6F4;
    case 618u: goto L_089CF70C;
    case 619u: goto L_089CF710;
    case 620u: goto L_089CF714;
    case 621u: goto L_089CF744;
    case 622u: goto L_089CF74C;
    case 623u: goto L_089CF754;
    case 624u: goto L_089CF75C;
    case 625u: goto L_089CF768;
    case 626u: goto L_089CF784;
    case 627u: goto L_089CF78C;
    case 628u: goto L_089CF798;
    case 629u: goto L_089CF7A4;
    case 630u: goto L_089CF7C0;
    case 631u: goto L_089CF7C8;
    case 632u: goto L_089CF7E4;
    case 633u: goto L_089CF7FC;
    case 634u: goto L_089CF804;
    case 635u: goto L_089CF814;
    case 636u: goto L_089CF824;
    case 637u: goto L_089CF828;
    case 638u: goto L_089CF830;
    case 639u: goto L_089CF838;
    case 640u: goto L_089CF850;
    case 641u: goto L_089CF854;
    case 642u: goto L_089CF858;
    case 643u: goto L_089CF888;
    case 644u: goto L_089CF890;
    case 645u: goto L_089CF898;
    case 646u: goto L_089CF8A0;
    case 647u: goto L_089CF8B0;
    case 648u: goto L_089CF8C4;
    case 649u: goto L_089CF934;
    case 650u: goto L_089CF950;
    case 651u: goto L_089CF95C;
    case 652u: goto L_089CF96C;
    case 653u: goto L_089CF984;
    case 654u: goto L_089CF99C;
    case 655u: goto L_089CF9A4;
    case 656u: goto L_089CF9AC;
    case 657u: goto L_089CF9BC;
    case 658u: goto L_089CF9C4;
    case 659u: goto L_089CF9CC;
    case 660u: goto L_089CF9D4;
    case 661u: goto L_089CF9DC;
    case 662u: goto L_089CF9E4;
    case 663u: goto L_089CF9F0;
    case 664u: goto L_089CF9FC;
    case 665u: goto L_089CFA14;
    case 666u: goto L_089CFA20;
    case 667u: goto L_089CFA38;
    case 668u: goto L_089CFA44;
    case 669u: goto L_089CFA60;
    case 670u: goto L_089CFA64;
    case 671u: goto L_089CFA68;
    case 672u: goto L_089CFA7C;
    case 673u: goto L_089CFAB0;
    case 674u: goto L_089CFABC;
    case 675u: goto L_089CFAE4;
    case 676u: goto L_089CFAFC;
    case 677u: goto L_089CFB0C;
    case 678u: goto L_089CFB14;
    case 679u: goto L_089CFB1C;
    case 680u: goto L_089CFB28;
    case 681u: goto L_089CFB2C;
    case 682u: goto L_089CFB38;
    case 683u: goto L_089CFB44;
    case 684u: goto L_089CFB54;
    case 685u: goto L_089CFB5C;
    case 686u: goto L_089CFB64;
    case 687u: goto L_089CFB68;
    case 688u: goto L_089CFB70;
    case 689u: goto L_089CFBC0;
    case 690u: goto L_089CFBCC;
    case 691u: goto L_089CFBD8;
    case 692u: goto L_089CFCA0;
    case 693u: goto L_089CFCA8;
    case 694u: goto L_089CFCBC;
    case 695u: goto L_089CFCFC;
    case 696u: goto L_089CFD0C;
    case 697u: goto L_089CFD10;
    case 698u: goto L_089CFD18;
    case 699u: goto L_089CFD60;
    case 700u: goto L_089CFD6C;
    case 701u: goto L_089CFD78;
    case 702u: goto L_089CFE40;
    case 703u: goto L_089CFE50;
    case 704u: goto L_089CFE60;
    case 705u: goto L_089CFE68;
    case 706u: goto L_089CFE7C;
    case 707u: goto L_089CFEB8;
    case 708u: goto L_089CFEC8;
    case 709u: goto L_089CFECC;
    case 710u: goto L_089CFED4;
    case 711u: goto L_089CFF0C;
    case 712u: goto L_089CFF1C;
    case 713u: goto L_089CFF74;
    case 714u: goto L_089CFF88;
    case 715u: goto L_089CFF90;
    case 716u: goto L_089CFF98;
    case 717u: goto L_089CFFB8;
    case 718u: goto L_089CFFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089CC000:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    g5 = (std::bit_cast<std::uint32_t>(f14));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    hot_regs.g7 = (16840u << 16u);
    f14 = std::bit_cast<float>(hot_regs.g7);
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (g6 != 0u) {
    g5 = (0u | 49u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
        goto L_089CC020;
    }
    goto L_089CC020;
}
}
L_089CC020:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089CC02C;
    }
    goto L_089CC02C;
L_089CC02C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_089CC040;
    }
    goto L_089CC040;
}
L_089CC040:
{
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    f15 = f15 - ctx.fpr[16];
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
        goto L_089CC06C;
    }
    goto L_089CC06C;
}
}
L_089CC06C:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089CC078;
    }
    goto L_089CC078;
L_089CC078:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(hot_regs.g5) ? 1u : 0u);
    if (g6 != 0u) {
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
        goto L_089CC08C;
    }
    goto L_089CC08C;
}
L_089CC08C:
{
    float f13 = hot_regs.f13;
    float f15 = hot_regs.f15;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (0u | 49u);
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    f15 = f15 + ctx.fpr[16];
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
        goto L_089CC0B8;
    }
    goto L_089CC0B8;
}
}
L_089CC0B8:
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g5) < 0 ? 1u : 0u);
    if (hot_regs.g6 != 0u) {
    hot_regs.g5 = (0u | 0u);
        goto L_089CC0C4;
    }
    goto L_089CC0C4;
L_089CC0C4:
    hot_regs.g6 = (0u | 50u);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g6);
    if (hot_regs.g7 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g5);
        goto L_089CC0D8;
    }
    goto L_089CC0D8;
L_089CC0D8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u | 49u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    f13 = f13 + hot_regs.f15;
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
        goto L_089CC104;
    }
    goto L_089CC104;
}
}
L_089CC104:
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < 0 ? 1u : 0u);
    if (hot_regs.g5 != 0u) {
    hot_regs.g4 = (0u | 0u);
        goto L_089CC110;
    }
    goto L_089CC110;
L_089CC110:
    hot_regs.g5 = (0u | 50u);
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g4) < 50 ? 1u : 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g5);
    if (hot_regs.g6 != 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), hot_regs.g4);
        goto L_089CC124;
    }
    goto L_089CC124;
L_089CC124:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (hot_regs.g4 << 2u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(20)));
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CC17Cu);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 739u, 0x089C71F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC17Cu) goto L_089CC17C;
    return;
L_089CC17C:
{
    std::uint32_t g4 = hot_regs.g4;
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
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(92)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CC338;
      }
      goto L_089CC194;
    }
}
L_089CC194:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    g18 = (2236u << 16u);
    g18 = (g18 + static_cast<std::uint32_t>(-18096));
    g4 = (ctx.gpr[16] << 4u);
    g5 = (ctx.gpr[16] + g4);
    g4 = (g4 + g5);
    g4 = (g4 + g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    goto L_089CC1B4;
}
L_089CC1B4:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    g5 = (static_cast<std::int32_t>(g5) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CC314;
      }
      goto L_089CC1CC;
    }
}
L_089CC1CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g23 = ctx.gpr[23];
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    g4 = (g4 + hot_regs.g5);
    g23 = (g4 << 6u);
    g4 = (g4 << 3u);
    g23 = (g23 - g4);
    hot_regs.g4 = g4;
    ctx.gpr[23] = g23;
    goto L_089CC1E0;
}
L_089CC1E0:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-25496)));
    g22 = (g22 + ctx.gpr[23]);
    ctx.gpr[17] = (aot_mem.aot_load32(g22 + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_089CC274;
      }
      goto L_089CC1F4;
    }
}
L_089CC1F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g16 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CC26C;
      }
      goto L_089CC20C;
    }
}
L_089CC20C:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089CC218u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 46u, 0x08AD044Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC218u) goto L_089CC218;
    return;
L_089CC218:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC26C;
      }
      goto L_089CC220;
    }
L_089CC220:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x089CC25Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC25Cu) goto L_089CC25C;
    return;
L_089CC25C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CC26C;
      }
      goto L_089CC264;
    }
L_089CC264:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089CC33C;
      }
      goto L_089CC26C;
    }
L_089CC26C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC1F4;
      }
      goto L_089CC274;
    }
L_089CC274:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC300;
      }
      goto L_089CC280;
    }
L_089CC280:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g16 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(84)));
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    { const bool branch_taken = g4 == hot_regs.g5;
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CC2F8;
      }
      goto L_089CC298;
    }
}
L_089CC298:
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x089CC2A4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 46u, 0x08AD044Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC2A4u) goto L_089CC2A4;
    return;
L_089CC2A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC2F8;
      }
      goto L_089CC2AC;
    }
L_089CC2AC:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[28] + static_cast<std::uint32_t>(-25492)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x089CC2E8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 66u, 0x088B4738u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC2E8u) goto L_089CC2E8;
    return;
L_089CC2E8:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CC2F8;
      }
      goto L_089CC2F0;
    }
L_089CC2F0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_089CC33C;
      }
      goto L_089CC2F8;
    }
L_089CC2F8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC280;
      }
      goto L_089CC300;
    }
L_089CC300:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g30 = ctx.gpr[30];
    g30 = (g30 + static_cast<std::uint32_t>(1));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    g4 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g30) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = g4;
    ctx.gpr[30] = g30;
      if (branch_taken) {
          goto L_089CC1E0;
      }
      goto L_089CC314;
    }
}
L_089CC314:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    g5 = (g5 + static_cast<std::uint32_t>(50));
    g6 = (static_cast<std::int32_t>(g6) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CC1B4;
      }
      goto L_089CC338;
    }
}
L_089CC338:
    hot_regs.g2 = (0u | 1u);
    goto L_089CC33C;
L_089CC33C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CC370:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), hot_regs.g31);
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g5) < 2 ? 1u : 0u);
    ctx.gpr[30] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), hot_regs.g5);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CC484;
      }
      goto L_089CC3C8;
    }
}
L_089CC3C8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (16585u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = ctx.fpr[30] - hot_regs.f13;
    ctx.fpr[28] = hot_regs.f14 / hot_regs.f12;
    ctx.fpr[28] = std::sqrt(ctx.fpr[28]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
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
          goto L_089CC474;
      }
      goto L_089CC46C;
    }
L_089CC46C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089CC474;
}
L_089CC474:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC48C;
      }
      goto L_089CC47C;
    }
L_089CC47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC4EC;
      }
      goto L_089CC484;
    }
L_089CC484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CC48C;
    }
L_089CC48C:
    hot_regs.g31 = (0x089CC494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC494u) goto L_089CC494;
    return;
L_089CC494:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089CC4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC4C8u) goto L_089CC4C8;
    return;
L_089CC4C8:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16928u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f20 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089CC4EC;
      }
      goto L_089CC4E4;
    }
}
L_089CC4E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CC4EC;
    }
L_089CC4EC:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089CC500u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC500u) goto L_089CC500;
    return;
L_089CC500:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC534;
      }
      goto L_089CC508;
    }
L_089CC508:
    ctx.gpr[16] = (0u | 0u);
    hot_regs.g31 = (0x089CC514u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 194u, 0x08910B2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC514u) goto L_089CC514;
    return;
L_089CC514:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[20] = (0u | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(136), static_cast<std::uint8_t>(hot_regs.g2));
    g4 = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48716u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CC53C;
      }
      goto L_089CC52C;
    }
}
L_089CC52C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC93C;
      }
      goto L_089CC534;
    }
L_089CC534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CC53C;
    }
L_089CC53C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    std::uint32_t g30 = ctx.gpr[30];
    g4 = (g4 | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(32));
    g4 = (g30 + static_cast<std::uint32_t>(-7));
    g5 = (g30 << 5u);
    g6 = (g30 << 2u);
    g5 = (g5 - g6);
    g6 = (2246u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g4);
    g4 = (g6 + static_cast<std::uint32_t>(30712));
    g4 = (g5 + g4);
    ctx.gpr[22] = (g29 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089CC580;
}
L_089CC580:
    hot_regs.g31 = (0x089CC588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC588u) goto L_089CC588;
    return;
L_089CC588:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
    f12 = ctx.fpr[24] - ctx.fpr[26];
    f22 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[26] + f12;
    { const float fs = f22; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_089CC5D4;
      }
      goto L_089CC5A8;
    }
}
L_089CC5A8:
    hot_regs.g31 = (0x089CC5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC5B0u) goto L_089CC5B0;
    return;
L_089CC5B0:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16076u << 16u);
    g4 = (g4 | 52429u);
    f12 = std::bit_cast<float>(g4);
    f12 = f12 - ctx.fpr[24];
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[24] + f12;
    { const float fs = ctx.fpr[28]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f20 = ctx.fpr[28] + f20;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_089CC5F0;
      }
      goto L_089CC5D4;
    }
}
}
L_089CC5D4:
    hot_regs.g31 = (0x089CC5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC5DCu) goto L_089CC5DC;
    return;
L_089CC5DC:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = ctx.fpr[26] + f12;
    { const float fs = ctx.fpr[28]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    f20 = ctx.fpr[28] + f20;
    hot_regs.f12 = f12;
    hot_regs.f20 = f20;
    goto L_089CC5F0;
}
L_089CC5F0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f13 = std::bit_cast<float>(ctx.gpr[20]);
    hot_regs.f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f13)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
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
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
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
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f20;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = hot_regs.f14 + ctx.fpr[30];
    hot_regs.g31 = (0x089CC664u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC664u) goto L_089CC664;
    return;
L_089CC664:
    hot_regs.f12 = ctx.fpr[0] + ctx.fpr[30];
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC674;
    }
L_089CC674:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_089CC688;
    }
    goto L_089CC688;
L_089CC688:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    f13 = f13 + hot_regs.f22;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f14 = f14 + hot_regs.f20;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (ctx.gpr[20] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_089CC6B8;
    }
    goto L_089CC6AC;
}
}
L_089CC6AC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    goto L_089CC6B8;
L_089CC6B8:
    hot_regs.g31 = (0x089CC6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 67u, 0x089C849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC6C0u) goto L_089CC6C0;
    return;
L_089CC6C0:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CC6E4;
      }
      goto L_089CC6D4;
    }
}
L_089CC6D4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CC6E4;
}
L_089CC6E4:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CC6FCu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC6FCu) goto L_089CC6FC;
    return;
L_089CC6FC:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC70C;
      }
      goto L_089CC704;
    }
L_089CC704:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC70C;
    }
L_089CC70C:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_089CC714;
L_089CC714:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(96), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CC714;
      }
      goto L_089CC728;
    }
}
L_089CC728:
    hot_regs.g4 = (ctx.gpr[17] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x089CC750u);
    hot_regs.g5 = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC750u) goto L_089CC750;
    return;
L_089CC750:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    goto L_089CC75C;
L_089CC75C:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7B8;
      }
      goto L_089CC768;
    }
L_089CC768:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (hot_regs.g29 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CC7A4;
      }
      goto L_089CC77C;
    }
}
L_089CC77C:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CC794;
      }
      goto L_089CC788;
    }
L_089CC788:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7A4;
      }
      goto L_089CC794;
    }
L_089CC794:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CC77C;
      }
      goto L_089CC7A4;
    }
}
L_089CC7A4:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7B8;
      }
      goto L_089CC7AC;
    }
L_089CC7AC:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7C8;
      }
      goto L_089CC7B8;
    }
L_089CC7B8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g6) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CC75C;
      }
      goto L_089CC7C8;
    }
}
L_089CC7C8:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC7D8;
      }
      goto L_089CC7D0;
    }
L_089CC7D0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089CC808;
      }
      goto L_089CC7D8;
    }
L_089CC7D8:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x089CC804u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC804u) goto L_089CC804;
    return;
L_089CC804:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_089CC808;
L_089CC808:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC818;
      }
      goto L_089CC810;
    }
L_089CC810:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_089CC840;
      }
      goto L_089CC818;
    }
L_089CC818:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (0u | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 < ctx.fpr[30]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g5 = (0u | 1u);
    hot_regs.f12 = f12;
        goto L_089CC83C;
    }
    goto L_089CC83C;
}
L_089CC83C:
    hot_regs.g5 = (hot_regs.g5 & 255u);
    goto L_089CC840;
L_089CC840:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC848;
    }
L_089CC848:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC850;
    }
L_089CC850:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC858;
    }
L_089CC858:
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CC870u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC870u) goto L_089CC870;
    return;
L_089CC870:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC920;
      }
      goto L_089CC87C;
    }
L_089CC87C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089CC8A4u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC8A4u) goto L_089CC8A4;
    return;
L_089CC8A4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(-183)));
    hot_regs.g5 = (16288u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g4 & 255u);
    f13 = std::bit_cast<float>(g4);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17096u << 16u);
    f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089CC8E4;
    }
    goto L_089CC8E4;
}
}
L_089CC8E4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x089CC8F8u);
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87764u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC8F8u) goto L_089CC8F8;
    return;
L_089CC8F8:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC90C;
      }
      goto L_089CC900;
    }
L_089CC900:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(468)));
    g4 = (g4 | 32768u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_089CC90C;
}
L_089CC90C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089CC918u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC918u) goto L_089CC918;
    return;
L_089CC918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC928;
      }
      goto L_089CC920;
    }
L_089CC920:
    hot_regs.g31 = (0x089CC928u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC928u) goto L_089CC928;
    return;
L_089CC928:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(148)));
    g20 = (g20 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g20) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_089CC580;
      }
      goto L_089CC93C;
    }
}
L_089CC93C:
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CC978;
      }
      goto L_089CC948;
    }
L_089CC948:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_089CC970;
      }
      goto L_089CC958;
    }
L_089CC958:
    hot_regs.g31 = (0x089CC960u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC960u) goto L_089CC960;
    return;
L_089CC960:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089CC958;
      }
      goto L_089CC970;
    }
}
L_089CC970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CC978;
    }
L_089CC978:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g21 = ctx.gpr[21];
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    g4 = (g4 >> 31u);
    g21 = (ctx.gpr[16] + g4);
    g21 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g21) >> 1u));
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g21) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (2u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089CCA48;
      }
      goto L_089CC998;
    }
}
L_089CC998:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11748)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11752)));
    ctx.gpr[17] = (hot_regs.g29 | 0u);
    g18 = (ctx.gpr[16] << 2u);
    g18 = (hot_regs.g29 + g18);
    ctx.gpr[18] = g18;
    goto L_089CC9B0;
}
L_089CC9B0:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CC9E4;
      }
      goto L_089CC9BC;
    }
L_089CC9BC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x089CC9CCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC9CCu) goto L_089CC9CC;
    return;
L_089CC9CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089CC9DCu);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC9DCu) goto L_089CC9DC;
    return;
L_089CC9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA34;
      }
      goto L_089CC9E4;
    }
L_089CC9E4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCA34;
      }
      goto L_089CC9EC;
    }
L_089CC9EC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    hot_regs.g31 = (0x089CC9F8u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CC9F8u) goto L_089CC9F8;
    return;
L_089CC9F8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x089CCA0Cu);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCA0Cu) goto L_089CCA0C;
    return;
L_089CCA0C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x089CCA30u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCA30u) goto L_089CCA30;
    return;
L_089CCA30:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    goto L_089CCA34;
L_089CCA34:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089CC9B0;
      }
      goto L_089CCA48;
    }
}
L_089CCA48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    hot_regs.g4 = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089CCA58;
      }
      goto L_089CCA50;
    }
L_089CCA50:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u - hot_regs.g4);
      if (branch_taken) {
          goto L_089CCA58;
      }
      goto L_089CCA58;
    }
L_089CCA58:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCAC4;
      }
      goto L_089CCA60;
    }
L_089CCA60:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 >> 31u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g29 + hot_regs.g4);
    ctx.gpr[17] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089CCAACu);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCAACu) goto L_089CCAAC;
    return;
L_089CCAAC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CCAB8u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCAB8u) goto L_089CCAB8;
    return;
L_089CCAB8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CCAC4u);
    hot_regs.g5 = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCAC4u) goto L_089CCAC4;
    return;
L_089CCAC4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CCACC;
    }
L_089CCACC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (2u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    ctx.gpr[17] = (0u | 1u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CCB0C;
      }
      goto L_089CCAF0;
    }
}
L_089CCAF0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089CCAFCu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCAFCu) goto L_089CCAFC;
    return;
L_089CCAFC:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CCAF0;
      }
      goto L_089CCB0C;
    }
}
L_089CCB0C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CCB54:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(216), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(220), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(224), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(228), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(232), hot_regs.g31);
    hot_regs.g7 = (16448u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g7);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    hot_regs.g7 = (2246u << 16u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(1840));
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_vfpu_scalar_bits_ct<0u>(hot_regs.g7);
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
    hot_regs.g7 = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_089CCBE0;
      }
      goto L_089CCBD8;
    }
L_089CCBD8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (0u + static_cast<std::uint32_t>(1));
    g7 = (g7 & 255u);
    hot_regs.g7 = g7;
    goto L_089CCBE0;
}
L_089CCBE0:
    ctx.gpr[23] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[21] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCC54;
      }
      goto L_089CCBF4;
    }
L_089CCBF4:
    hot_regs.g31 = (0x089CCBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCBFCu) goto L_089CCBFC;
    return;
L_089CCBFC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089CCC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCC30u) goto L_089CCC30;
    return;
L_089CCC30:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16928u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f22 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089CCC54;
      }
      goto L_089CCC4C;
    }
}
L_089CCC4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CCC54;
    }
L_089CCC54:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089CCC68u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCC68u) goto L_089CCC68;
    return;
L_089CCC68:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCC4;
      }
      goto L_089CCC70;
    }
L_089CCC70:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f20;
    hot_regs.g31 = (0x089CCC90u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCC90u) goto L_089CCC90;
    return;
L_089CCC90:
    hot_regs.f22 = ctx.fpr[0] + hot_regs.f20;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCCBC;
      }
      goto L_089CCCA0;
    }
L_089CCCA0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g5 = (ctx.gpr[23] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_089CCCCC;
      }
      goto L_089CCCB4;
    }
L_089CCCB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g5);
      if (branch_taken) {
          goto L_089CCCD4;
      }
      goto L_089CCCBC;
    }
L_089CCCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CCCC4;
    }
L_089CCCC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CCCCC;
    }
L_089CCCCC:
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g5);
    goto L_089CCCD4;
L_089CCCD4:
    hot_regs.g31 = (0x089CCCDCu);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 67u, 0x089C849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCCDCu) goto L_089CCCDC;
    return;
L_089CCCDC:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CCD00;
      }
      goto L_089CCCF0;
    }
}
L_089CCCF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[22] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CCD00;
}
L_089CCD00:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CCD18u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCD18u) goto L_089CCD18;
    return;
L_089CCD18:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCE14;
      }
      goto L_089CCD20;
    }
L_089CCD20:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CCD4Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCD4Cu) goto L_089CCD4C;
    return;
L_089CCD4C:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CCE0C;
      }
      goto L_089CCD58;
    }
L_089CCD58:
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x089CCD64u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCD64u) goto L_089CCD64;
    return;
L_089CCD64:
    hot_regs.g31 = (0x089CCD6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCD6Cu) goto L_089CCD6C;
    return;
L_089CCD6C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11748)));
    hot_regs.g31 = (0x089CCD80u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11752)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCD80u) goto L_089CCD80;
    return;
L_089CCD80:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x089CCDA4u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCDA4u) goto L_089CCDA4;
    return;
L_089CCDA4:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(460)));
    g5 = (2u << 16u);
    g4 = (g4 | g5);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(460), g4);
    g4 = (ctx.gpr[23] << 5u);
    g5 = (ctx.gpr[23] << 2u);
    g4 = (g4 - g5);
    g5 = (2246u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(30712));
    g4 = (g4 + g5);
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(-183)));
    g5 = (g5 & 255u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), g4);
    g4 = (17096u << 16u);
    f24 = std::bit_cast<float>(g4);
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    g4 = (16288u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f24 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f24));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
        goto L_089CCE1C;
    }
    goto L_089CCE04;
}
}
L_089CCE04:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
      if (branch_taken) {
          goto L_089CCE20;
      }
      goto L_089CCE0C;
    }
L_089CCE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CCE14;
    }
L_089CCE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CCE1C;
    }
L_089CCE1C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    goto L_089CCE20;
L_089CCE20:
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x089CCE30u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87764u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCE30u) goto L_089CCE30;
    return;
L_089CCE30:
    if (hot_regs.g2 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
        goto L_089CCE48;
    }
    goto L_089CCE38;
L_089CCE38:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(468)));
    g4 = (g4 | 32768u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(468), g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    hot_regs.g4 = g4;
    goto L_089CCE48;
}
L_089CCE48:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089CD084;
      }
      goto L_089CCE60;
    }
L_089CCE60:
    ctx.gpr[30] = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    goto L_089CCE68;
L_089CCE68:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    hot_regs.g31 = (0x089CCE74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 67u, 0x089C849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCE74u) goto L_089CCE74;
    return;
L_089CCE74:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CCE98;
      }
      goto L_089CCE88;
    }
}
L_089CCE88:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CCE98;
}
L_089CCE98:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CCEB0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCEB0u) goto L_089CCEB0;
    return;
L_089CCEB0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCEC0;
      }
      goto L_089CCEB8;
    }
L_089CCEB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD070;
      }
      goto L_089CCEC0;
    }
L_089CCEC0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CCEECu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCEECu) goto L_089CCEEC;
    return;
L_089CCEEC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD070;
      }
      goto L_089CCEF8;
    }
L_089CCEF8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 15u);
    hot_regs.g31 = (0x089CCF08u);
    hot_regs.g6 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCF08u) goto L_089CCF08;
    return;
L_089CCF08:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CCF14u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 391u, 0x08AC5410u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCF14u) goto L_089CCF14;
    return;
L_089CCF14:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    g4 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(-183)));
    g4 = (g4 & 255u);
    f12 = std::bit_cast<float>(g4);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_089CCF3C;
    }
    goto L_089CCF3C;
}
}
L_089CCF3C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(hot_regs.f12));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1934), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g31 = (0x089CCF54u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 370u, 0x08AC5124u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCF54u) goto L_089CCF54;
    return;
L_089CCF54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f14 = hot_regs.f14 + hot_regs.f20;
    hot_regs.g31 = (0x089CCF6Cu);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCF6Cu) goto L_089CCF6C;
    return;
L_089CCF6C:
{
    float f12 = hot_regs.f12;
    f12 = ctx.fpr[0] + hot_regs.f20;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((hot_regs.f13 <= f12));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f12 = f12;
        goto L_089CCF84;
    }
    goto L_089CCF84;
}
L_089CCF84:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CCFA4;
      }
      goto L_089CCF94;
    }
L_089CCF94:
    hot_regs.g31 = (0x089CCF9Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCF9Cu) goto L_089CCF9C;
    return;
L_089CCF9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD070;
      }
      goto L_089CCFA4;
    }
L_089CCFA4:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089CCFD0;
      }
      goto L_089CCFC0;
    }
}
L_089CCFC0:
    hot_regs.g31 = (0x089CCFC8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CCFC8u) goto L_089CCFC8;
    return;
L_089CCFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD070;
      }
      goto L_089CCFD0;
    }
L_089CCFD0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x089CD010u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD010u) goto L_089CD010;
    return;
L_089CD010:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD028;
      }
      goto L_089CD018;
    }
L_089CD018:
    hot_regs.g31 = (0x089CD020u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD020u) goto L_089CD020;
    return;
L_089CD020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD070;
      }
      goto L_089CD028;
    }
L_089CD028:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x089CD050u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 536u, 0x08A87764u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD050u) goto L_089CD050;
    return;
L_089CD050:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD064;
      }
      goto L_089CD058;
    }
L_089CD058:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    g4 = (g4 | 32768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(468), g4);
    hot_regs.g4 = g4;
    goto L_089CD064;
}
L_089CD064:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089CD070u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD070u) goto L_089CD070;
    return;
L_089CD070:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(172)));
    g17 = (g17 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CCE68;
      }
      goto L_089CD084;
    }
}
L_089CD084:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0C0;
      }
      goto L_089CD090;
    }
L_089CD090:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CD0A0;
    }
L_089CD0A0:
    hot_regs.g31 = (0x089CD0A8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD0A8u) goto L_089CD0A8;
    return;
L_089CD0A8:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CD0A0;
      }
      goto L_089CD0B8;
    }
}
L_089CD0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CD0C0;
    }
L_089CD0C0:
    ctx.gpr[16] = (0u | 1u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089CD0EC;
      }
      goto L_089CD0D0;
    }
L_089CD0D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x089CD0DCu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD0DCu) goto L_089CD0DC;
    return;
L_089CD0DC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089CD0D0;
      }
      goto L_089CD0EC;
    }
}
L_089CD0EC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CD130:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), hot_regs.g31);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044)));
    hot_regs.g7 = (0u | 4u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), hot_regs.g5);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CD290;
      }
      goto L_089CD188;
    }
}
L_089CD188:
    hot_regs.g31 = (0x089CD190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD190u) goto L_089CD190;
    return;
L_089CD190:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11732)));
    hot_regs.g31 = (0x089CD1A4u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11736)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD1A4u) goto L_089CD1A4;
    return;
L_089CD1A4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11724)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11728)));
    ctx.gpr[8] = (hot_regs.g4 + hot_regs.g6);
    ctx.gpr[9] = (ctx.gpr[8] < hot_regs.g6 ? 1u : 0u);
    hot_regs.g4 = (ctx.gpr[9] + hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), hot_regs.g4);
    hot_regs.g4 = (16585u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f13 / hot_regs.f12;
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (16384u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f15 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f15 = fs * ft; }
    { const float fs = hot_regs.f15; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = ctx.fpr[26] - hot_regs.f13;
    ctx.fpr[30] = hot_regs.f14 / hot_regs.f12;
    ctx.fpr[30] = std::sqrt(ctx.fpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
          goto L_089CD280;
      }
      goto L_089CD278;
    }
L_089CD278:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089CD280;
}
L_089CD280:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD298;
      }
      goto L_089CD288;
    }
L_089CD288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD2F8;
      }
      goto L_089CD290;
    }
L_089CD290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD298;
    }
L_089CD298:
    hot_regs.g31 = (0x089CD2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD2A0u) goto L_089CD2A0;
    return;
L_089CD2A0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089CD2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD2D4u) goto L_089CD2D4;
    return;
L_089CD2D4:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16928u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f20 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089CD2F8;
      }
      goto L_089CD2F0;
    }
}
L_089CD2F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD2F8;
    }
L_089CD2F8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089CD30Cu);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD30Cu) goto L_089CD30C;
    return;
L_089CD30C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD334;
      }
      goto L_089CD314;
    }
L_089CD314:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[17] = (0u | 0u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (0u | 0u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    g4 = (48716u << 16u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CD33C;
      }
      goto L_089CD32C;
    }
}
L_089CD32C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6A4;
      }
      goto L_089CD334;
    }
L_089CD334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD33C;
    }
L_089CD33C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    g4 = (15948u << 16u);
    g4 = (g4 | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(g4);
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (g29 | 0u);
    hot_regs.g4 = g4;
    goto L_089CD35C;
}
L_089CD35C:
    hot_regs.g31 = (0x089CD364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD364u) goto L_089CD364;
    return;
L_089CD364:
    hot_regs.f12 = ctx.fpr[28] - ctx.fpr[24];
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(164)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = ctx.fpr[24] + hot_regs.f12;
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
    hot_regs.g31 = (0x089CD380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 113u, 0x08B20998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD380u) goto L_089CD380;
    return;
L_089CD380:
    hot_regs.f13 = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f13 = ctx.fpr[24] + hot_regs.f13;
    { const float fs = ctx.fpr[30]; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(ctx.gpr[19]);
    hot_regs.f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f14)));
    { const float fs = hot_regs.f20; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
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
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = ctx.fpr[30] + hot_regs.f13;
    { const float fs = hot_regs.f20; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f22 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f22 = fs * ft; }
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
    { const float fs = hot_regs.f20; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f20 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f20 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = hot_regs.f12 + hot_regs.f22;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f13 = hot_regs.f13 + hot_regs.f20;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.f14 = hot_regs.f14 + ctx.fpr[26];
    hot_regs.g31 = (0x089CD404u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD404u) goto L_089CD404;
    return;
L_089CD404:
    hot_regs.f12 = ctx.fpr[0] + ctx.fpr[26];
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD414;
    }
L_089CD414:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_089CD428;
    }
    goto L_089CD428;
L_089CD428:
{
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    f13 = f13 + hot_regs.f22;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    f14 = f14 + hot_regs.f20;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (ctx.gpr[19] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
        goto L_089CD458;
    }
    goto L_089CD44C;
}
}
L_089CD44C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(172)));
    goto L_089CD458;
L_089CD458:
    hot_regs.g31 = (0x089CD460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 31u, 0x089C81D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD460u) goto L_089CD460;
    return;
L_089CD460:
{
    std::uint32_t g4 = hot_regs.g4;
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[23] = (0u | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CD484;
      }
      goto L_089CD474;
    }
}
L_089CD474:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[23] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CD484;
}
L_089CD484:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CD4A8;
      }
      goto L_089CD498;
    }
}
L_089CD498:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (hot_regs.g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CD4A8;
}
L_089CD4A8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CD4C0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD4C0u) goto L_089CD4C0;
    return;
L_089CD4C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD4D0;
      }
      goto L_089CD4C8;
    }
L_089CD4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD4D0;
    }
L_089CD4D0:
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_089CD4D8;
L_089CD4D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(112), 0u);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CD4D8;
      }
      goto L_089CD4EC;
    }
}
L_089CD4EC:
    hot_regs.g4 = (ctx.gpr[16] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    hot_regs.g31 = (0x089CD514u);
    hot_regs.g5 = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD514u) goto L_089CD514;
    return;
L_089CD514:
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    goto L_089CD520;
L_089CD520:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD57C;
      }
      goto L_089CD52C;
    }
L_089CD52C:
{
    std::uint32_t g5 = hot_regs.g5;
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g4 = (0u | 0u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g5 = (hot_regs.g29 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CD568;
      }
      goto L_089CD540;
    }
}
L_089CD540:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CD558;
      }
      goto L_089CD54C;
    }
L_089CD54C:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD568;
      }
      goto L_089CD558;
    }
L_089CD558:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CD540;
      }
      goto L_089CD568;
    }
}
L_089CD568:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD57C;
      }
      goto L_089CD570;
    }
L_089CD570:
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD58C;
      }
      goto L_089CD57C;
    }
L_089CD57C:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g6) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CD520;
      }
      goto L_089CD58C;
    }
}
L_089CD58C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD59C;
      }
      goto L_089CD594;
    }
L_089CD594:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 1u);
      if (branch_taken) {
          goto L_089CD5CC;
      }
      goto L_089CD59C;
    }
L_089CD59C:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[30] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g7 = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g31 = (0x089CD5C8u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 527u, 0x088967ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD5C8u) goto L_089CD5C8;
    return;
L_089CD5C8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_089CD5CC;
L_089CD5CC:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD5DC;
      }
      goto L_089CD5D4;
    }
L_089CD5D4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 1u);
      if (branch_taken) {
          goto L_089CD604;
      }
      goto L_089CD5DC;
    }
L_089CD5DC:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (0u | 0u);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    f12 = f12 - hot_regs.f13;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g5 = (0u | 1u);
    hot_regs.f12 = f12;
        goto L_089CD600;
    }
    goto L_089CD600;
}
L_089CD600:
    hot_regs.g5 = (hot_regs.g5 & 255u);
    goto L_089CD604;
L_089CD604:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD60C;
    }
L_089CD60C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD614;
    }
L_089CD614:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD61C;
    }
L_089CD61C:
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CD634u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD634u) goto L_089CD634;
    return;
L_089CD634:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD688;
      }
      goto L_089CD640;
    }
L_089CD640:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089CD668u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD668u) goto L_089CD668;
    return;
L_089CD668:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(684), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089CD680u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD680u) goto L_089CD680;
    return;
L_089CD680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD690;
      }
      goto L_089CD688;
    }
L_089CD688:
    hot_regs.g31 = (0x089CD690u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD690u) goto L_089CD690;
    return;
L_089CD690:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(168)));
    g19 = (g19 + static_cast<std::uint32_t>(1));
    g4 = (static_cast<std::int32_t>(g19) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089CD35C;
      }
      goto L_089CD6A4;
    }
}
L_089CD6A4:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD6E0;
      }
      goto L_089CD6B0;
    }
L_089CD6B0:
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g29 | 0u);
      if (branch_taken) {
          goto L_089CD6D8;
      }
      goto L_089CD6C0;
    }
L_089CD6C0:
    hot_regs.g31 = (0x089CD6C8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD6C8u) goto L_089CD6C8;
    return;
L_089CD6C8:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089CD6C0;
      }
      goto L_089CD6D8;
    }
}
L_089CD6D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD6E0;
    }
L_089CD6E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[21] = (0u | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    g4 = (g4 >> 31u);
    g16 = (ctx.gpr[17] + g4);
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 1u));
    g4 = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(g16) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[19] = (2u << 16u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089CD744;
      }
      goto L_089CD700;
    }
}
L_089CD700:
{
    std::uint32_t g18 = ctx.gpr[18];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[20] = (hot_regs.g29 | 0u);
    g18 = (ctx.gpr[17] << 2u);
    g18 = (hot_regs.g29 + g18);
    ctx.gpr[18] = g18;
    goto L_089CD710;
}
L_089CD710:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g31 = (0x089CD720u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD720u) goto L_089CD720;
    return;
L_089CD720:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089CD730u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C42Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD730u) goto L_089CD730;
    return;
L_089CD730:
{
    std::uint32_t g21 = ctx.gpr[21];
    g21 = (g21 + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (static_cast<std::int32_t>(g21) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[21] = g21;
      if (branch_taken) {
          goto L_089CD710;
      }
      goto L_089CD744;
    }
}
L_089CD744:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_089CD754;
      }
      goto L_089CD74C;
    }
L_089CD74C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u - hot_regs.g4);
      if (branch_taken) {
          goto L_089CD754;
      }
      goto L_089CD754;
    }
L_089CD754:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD7C0;
      }
      goto L_089CD75C;
    }
L_089CD75C:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 >> 31u);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 1u));
    hot_regs.g4 = (hot_regs.g4 << 2u);
    hot_regs.g4 = (hot_regs.g29 + hot_regs.g4);
    ctx.gpr[16] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(48));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = hot_regs.f14 - hot_regs.f12;
    hot_regs.g31 = (0x089CD7A8u);
    hot_regs.f13 = hot_regs.f13 - hot_regs.f15;
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD7A8u) goto L_089CD7A8;
    return;
L_089CD7A8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CD7B4u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD7B4u) goto L_089CD7B4;
    return;
L_089CD7B4:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CD7C0u);
    hot_regs.g5 = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD7C0u) goto L_089CD7C0;
    return;
L_089CD7C0:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD7CC;
    }
L_089CD7CC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(460)));
    hot_regs.g6 = (2u << 16u);
    g5 = (g5 | hot_regs.g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(460), g5);
    ctx.gpr[16] = (0u | 1u);
    g4 = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CD80C;
      }
      goto L_089CD7F0;
    }
}
L_089CD7F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g31 = (0x089CD7FCu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 475u, 0x0890DF20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD7FCu) goto L_089CD7FC;
    return;
L_089CD7FC:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g16) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089CD7F0;
      }
      goto L_089CD80C;
    }
}
L_089CD80C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CD854:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), hot_regs.g31);
    ctx.gpr[20] = (g8 | 0u);
    g8 = (0u | 4u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g4 != g8;
    ctx.gpr[19] = (hot_regs.g7 | 0u);
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CD900;
      }
      goto L_089CD898;
    }
}
L_089CD898:
    hot_regs.g4 = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089CD900;
      }
      goto L_089CD8A4;
    }
L_089CD8A4:
    hot_regs.g4 = (16320u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
          goto L_089CD8F0;
      }
      goto L_089CD8E8;
    }
L_089CD8E8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (0u + static_cast<std::uint32_t>(1));
    g4 = (g4 & 255u);
    hot_regs.g4 = g4;
    goto L_089CD8F0;
}
L_089CD8F0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CD908;
      }
      goto L_089CD8F8;
    }
L_089CD8F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD968;
      }
      goto L_089CD900;
    }
L_089CD900:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CD908;
    }
L_089CD908:
    hot_regs.g31 = (0x089CD910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD910u) goto L_089CD910;
    return;
L_089CD910:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (hot_regs.g2 + static_cast<std::uint32_t>(48));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g31 = (0x089CD944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 281u, 0x089C9078u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD944u) goto L_089CD944;
    return;
L_089CD944:
{
    float f12 = hot_regs.f12;
    hot_regs.g4 = (16928u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((hot_regs.f20 < f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_089CD968;
      }
      goto L_089CD960;
    }
}
L_089CD960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CD968;
    }
L_089CD968:
    ctx.gpr[21] = (ctx.gpr[17] << 2u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[21]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089CD990u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD990u) goto L_089CD990;
    return;
L_089CD990:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9EC;
      }
      goto L_089CD998;
    }
L_089CD998:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = hot_regs.f14 + hot_regs.f20;
    hot_regs.g31 = (0x089CD9B8u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CD9B8u) goto L_089CD9B8;
    return;
L_089CD9B8:
    hot_regs.f22 = ctx.fpr[0] + hot_regs.f20;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9E4;
      }
      goto L_089CD9C8;
    }
L_089CD9C8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_089CD9F4;
    }
    goto L_089CD9DC;
L_089CD9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CD9F4;
      }
      goto L_089CD9E4;
    }
L_089CD9E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CD9EC;
    }
L_089CD9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CD9F4;
    }
L_089CD9F4:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CDA10;
      }
      goto L_089CDA04;
    }
}
L_089CDA04:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 + ctx.gpr[21]);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_089CDA10;
}
L_089CDA10:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CDA28u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDA28u) goto L_089CDA28;
    return;
L_089CDA28:
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g4 = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089CDAF0;
      }
      goto L_089CDA30;
    }
L_089CDA30:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CDA5Cu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDA5Cu) goto L_089CDA5C;
    return;
L_089CDA5C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDAE8;
      }
      goto L_089CDA68;
    }
L_089CDA68:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CDA74u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 442u, 0x08ACD4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDA74u) goto L_089CDA74;
    return;
L_089CDA74:
    hot_regs.g31 = (0x089CDA7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 110u, 0x08B20934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDA7Cu) goto L_089CDA7C;
    return;
L_089CDA7C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11748)));
    hot_regs.g31 = (0x089CDA90u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-11752)));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 177u, 0x08B60E5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDA90u) goto L_089CDA90;
    return;
L_089CDA90:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    hot_regs.g4 = (hot_regs.g2 >> 31u);
    hot_regs.g4 = (ctx.gpr[1] | hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (hot_regs.g4 << 24u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 24u));
    hot_regs.g31 = (0x089CDAB4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDAB4u) goto L_089CDAB4;
    return;
L_089CDAB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(460)));
    hot_regs.g5 = (2u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(460), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089CDAD0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDAD0u) goto L_089CDAD0;
    return;
L_089CDAD0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CDAF8;
      }
      goto L_089CDAE0;
    }
}
L_089CDAE0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089CDB0C;
      }
      goto L_089CDAE8;
    }
L_089CDAE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDAF0;
    }
L_089CDAF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDAF8;
    }
L_089CDAF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (ctx.gpr[19] << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089CDB0C;
}
L_089CDB0C:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CDB20u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDB20u) goto L_089CDB20;
    return;
L_089CDB20:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB68;
      }
      goto L_089CDB28;
    }
L_089CDB28:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CDB54u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 729u, 0x089CAC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDB54u) goto L_089CDB54;
    return;
L_089CDB54:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDB70;
      }
      goto L_089CDB60;
    }
L_089CDB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDB68;
    }
L_089CDB68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDB70;
    }
L_089CDB70:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u | 15u);
    hot_regs.g31 = (0x089CDB80u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDB80u) goto L_089CDB80;
    return;
L_089CDB80:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CDB8Cu);
    hot_regs.g5 = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 391u, 0x08AC5410u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDB8Cu) goto L_089CDB8C;
    return;
L_089CDB8C:
    ctx.gpr[16] = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CDB9Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 370u, 0x08AC5124u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDB9Cu) goto L_089CDB9C;
    return;
L_089CDB9C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f14 = hot_regs.f14 + hot_regs.f20;
    hot_regs.g31 = (0x089CDBB4u);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 519u, 0x08893460u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDBB4u) goto L_089CDBB4;
    return;
L_089CDBB4:
    hot_regs.f20 = ctx.fpr[0] + hot_regs.f20;
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CDBDC;
      }
      goto L_089CDBC4;
    }
L_089CDBC4:
    hot_regs.g31 = (0x089CDBCCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDBCCu) goto L_089CDBCC;
    return;
L_089CDBCC:
    hot_regs.g31 = (0x089CDBD4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDBD4u) goto L_089CDBD4;
    return;
L_089CDBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDBDC;
    }
L_089CDBDC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
        goto L_089CDBF0;
    }
    goto L_089CDBF0;
L_089CDBF0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), 0u);
    hot_regs.g4 = (ctx.gpr[19] << 2u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(88));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CDC38u);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 708u, 0x08B1FAACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDC38u) goto L_089CDC38;
    return;
L_089CDC38:
    ctx.gpr[19] = (0u | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    goto L_089CDC40;
L_089CDC40:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC4C;
    }
L_089CDC4C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC54;
    }
L_089CDC54:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC5C;
    }
L_089CDC5C:
    { const bool branch_taken = hot_regs.g5 == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089CDC7C;
      }
      goto L_089CDC64;
    }
L_089CDC64:
    hot_regs.g31 = (0x089CDC6Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDC6Cu) goto L_089CDC6C;
    return;
L_089CDC6C:
    hot_regs.g31 = (0x089CDC74u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 809u, 0x089C7804u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDC74u) goto L_089CDC74;
    return;
L_089CDC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CDC98;
      }
      goto L_089CDC7C;
    }
L_089CDC7C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g19) < 3 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089CDC40;
      }
      goto L_089CDC8C;
    }
}
L_089CDC8C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x089CDC98u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 190u, 0x08945304u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDC98u) goto L_089CDC98;
    return;
L_089CDC98:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CDCC4:
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
L_089CDCD8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28628));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28612));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089CDD1Cu);
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 912u, 0x0885F828u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CDD1Cu) goto L_089CDD1C;
    return;
L_089CDD1C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (g17 + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g17 + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(160)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(160), static_cast<std::uint8_t>(g4));
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-28596));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(176)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(192), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(193)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(193), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(194)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(194), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(195)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(195), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(g4));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(f12));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-3));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 2u);
    g5 = (g5 >> 1u);
    g5 = (g5 & 1u);
    g5 = (g5 << 1u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-5));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 4u);
    g5 = (g5 >> 2u);
    g5 = (g5 & 1u);
    g5 = (g5 << 2u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(204))))));
    g5 = (0u + static_cast<std::uint32_t>(-9));
    g4 = (g4 & g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(204))))));
    g5 = (g5 & 8u);
    g5 = (g5 >> 3u);
    g5 = (g5 & 1u);
    g5 = (g5 << 3u);
    g4 = (g4 | g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(205))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(206))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(206), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(207))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(207), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(208))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(g4));
    g4 = (0u | 0u);
    g5 = (g4 + g17);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    goto L_089CDE7C;
}
}
L_089CDE7C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(209)));
    hot_regs.g6 = (g4 + ctx.gpr[16]);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(209), static_cast<std::uint8_t>(g5));
    g5 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    g5 = (g4 + ctx.gpr[17]);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CDE7C;
      }
      goto L_089CDE98;
    }
}
L_089CDE98:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDEA4;
L_089CDEA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(216)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(216), g7);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089CDEA4;
      }
      goto L_089CDEC0;
    }
}
L_089CDEC0:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDECC;
L_089CDECC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(232)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CDECC;
      }
      goto L_089CDEE8;
    }
}
L_089CDEE8:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDEF4;
L_089CDEF4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(248)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CDEF4;
      }
      goto L_089CDF10;
    }
}
L_089CDF10:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDF1C;
L_089CDF1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(264)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CDF1C;
      }
      goto L_089CDF38;
    }
}
L_089CDF38:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDF44;
L_089CDF44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(280)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CDF44;
      }
      goto L_089CDF60;
    }
}
L_089CDF60:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(304));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    goto L_089CDF6C;
L_089CDF6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(4), g8);
    g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(8), g9);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(12), g7);
    g7 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(16), g8);
    g8 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(20), g9);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(24), g7);
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(28), g8);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(32));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089CDF6C;
      }
      goto L_089CDFC4;
    }
}
L_089CDFC4:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    goto L_089CDFD0;
L_089CDFD0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(432)));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(432), g7);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g7 = (static_cast<std::int32_t>(g4) < 4 ? 1u : 0u);
    { const bool branch_taken = g7 != 0u;
    g6 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089CDFD0;
      }
      goto L_089CDFEC;
    }
}
L_089CDFEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(448)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(452), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(456)));
    g4 = (g17 + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(460)));
    g6 = (g16 + static_cast<std::uint32_t>(468));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(f12));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(464))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(g5));
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(8), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(12), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(16), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(20), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(24), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(28), g7);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(32), g8);
    g8 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(36), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(40), g7);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(44), g8);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(48), g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), g4);
    g4 = (aot_mem.aot_load8(g17 + static_cast<std::uint32_t>(524)));
    hot_regs.g2 = (g16 | 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(g4));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(528)));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(528), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    g17 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089CE0B4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    g5 = (g5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089CE0E4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089CE0F8u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 74u, 0x08AAC48Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE0F8u) goto L_089CE0F8;
    return;
L_089CE0F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26788));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
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
L_089CE118:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE144u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 101u, 0x08AAC5E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE144u) goto L_089CE144;
    return;
L_089CE144:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26788));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(4))))));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(1392));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(128));
    hot_regs.g31 = (0x089CE174u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = g4;
    goto L_089CDCC4;
}
L_089CE174:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g2);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(8))))));
    g5 = (g16 - ctx.gpr[19]);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 5u));
    g4 = (g4 >> 27u);
    g16 = (g5 + g4);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(304));
    g16 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g16) >> 5u));
    { const bool branch_taken = static_cast<std::int32_t>(g16) <= 0;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089CE1BC;
      }
      goto L_089CE1A0;
    }
}
L_089CE1A0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CE1ACu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 157u, 0x08805288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE1ACu) goto L_089CE1AC;
    return;
L_089CE1AC:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    g16 = (g16 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(g16) > 0;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_089CE1A0;
      }
      goto L_089CE1BC;
    }
}
L_089CE1BC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE1DC:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2205u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-7716));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE1E8:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CE1F8u);
    // nop
    hot_regs.g29 = g29;
    goto L_089CE1DC;
}
L_089CE1F8:
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
L_089CE204:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x089CE22Cu);
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_089CE1DC;
}
L_089CE22C:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[20] = (0u | 1u);
        goto L_089CE2B4;
    }
    goto L_089CE234;
L_089CE234:
    hot_regs.g31 = (0x089CE23Cu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 139u, 0x08AACA60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE23Cu) goto L_089CE23C;
    return;
L_089CE23C:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_089CE2A4;
    }
    goto L_089CE244;
L_089CE244:
    hot_regs.g31 = (0x089CE24Cu);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 666u, 0x08A7FAA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE24Cu) goto L_089CE24C;
    return;
L_089CE24C:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_089CE294;
    }
    goto L_089CE254;
L_089CE254:
    hot_regs.g31 = (0x089CE25Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 400u, 0x0888E51Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE25Cu) goto L_089CE25C;
    return;
L_089CE25C:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089CE284;
    }
    goto L_089CE264;
L_089CE264:
    hot_regs.g31 = (0x089CE26Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 295u, 0x08A9A6CCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE26Cu) goto L_089CE26C;
    return;
L_089CE26C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CE288;
      }
      goto L_089CE280;
    }
}
L_089CE280:
    ctx.gpr[17] = (0u | 1u);
    goto L_089CE284;
L_089CE284:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_089CE288;
L_089CE288:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[18] & 255u);
      if (branch_taken) {
          goto L_089CE298;
      }
      goto L_089CE290;
    }
L_089CE290:
    ctx.gpr[18] = (0u | 1u);
    goto L_089CE294;
L_089CE294:
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    goto L_089CE298;
L_089CE298:
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g4 = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_089CE2A8;
      }
      goto L_089CE2A0;
    }
L_089CE2A0:
    ctx.gpr[19] = (0u | 1u);
    goto L_089CE2A4;
L_089CE2A4:
    hot_regs.g4 = (ctx.gpr[19] & 255u);
    goto L_089CE2A8;
L_089CE2A8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE2B4;
      }
      goto L_089CE2B0;
    }
L_089CE2B0:
    ctx.gpr[20] = (0u | 1u);
    goto L_089CE2B4;
L_089CE2B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[20] & 255u);
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
L_089CE2D8:
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
          goto L_089CE328;
      }
      goto L_089CE2F4;
    }
}
L_089CE2F4:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-26980));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g31 = (0x089CE308u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 425u, 0x08A9B6A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE308u) goto L_089CE308;
    return;
L_089CE308:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE314u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 161u, 0x08AACB80u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE314u) goto L_089CE314;
    return;
L_089CE314:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE328;
      }
      goto L_089CE320;
    }
L_089CE320:
    hot_regs.g31 = (0x089CE328u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE328u) goto L_089CE328;
    return;
L_089CE328:
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
L_089CE33C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 11u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CE344:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 752u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x089CE368u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE368u) goto L_089CE368;
    return;
L_089CE368:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE380;
      }
      goto L_089CE374;
    }
L_089CE374:
    hot_regs.g31 = (0x089CE37Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089CE0E4;
L_089CE37C:
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    goto L_089CE380;
L_089CE380:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE390:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CE3BC;
      }
      goto L_089CE3A0;
    }
}
L_089CE3A0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089CE3BCu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g7);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE3BCu) goto L_089CE3BC;
    return;
L_089CE3BC:
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
L_089CE3C8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 752u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089CE3F4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE3F4u) goto L_089CE3F4;
    return;
L_089CE3F4:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_089CE44C;
      }
      goto L_089CE400;
    }
L_089CE400:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE40Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089CDCD8;
L_089CE40C:
    hot_regs.g4 = (2235u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28580));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(544)));
    hot_regs.g7 = (2205u << 16u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(544), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(560));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(560));
    hot_regs.g5 = (0u | 6u);
    hot_regs.g6 = (0u | 32u);
    hot_regs.g31 = (0x089CE43Cu);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-8012));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 115u, 0x08B6095Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE43Cu) goto L_089CE43C;
    return;
L_089CE43C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2235u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-26788));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), g4);
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_089CE44C;
}
L_089CE44C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE460:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CE474u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 660u, 0x08A7FA3Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE474u) goto L_089CE474;
    return;
L_089CE474:
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
L_089CE480:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x089CE49Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE49Cu) goto L_089CE49C;
    return;
L_089CE49C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25400));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089CE4B4u);
    hot_regs.g4 = (0u | 384u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE4B4u) goto L_089CE4B4;
    return;
L_089CE4B4:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g17 == 0u;
    hot_regs.g4 = (g17 | 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_089CE4CC;
      }
      goto L_089CE4C0;
    }
}
L_089CE4C0:
    hot_regs.g31 = (0x089CE4C8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089CEBC8;
L_089CE4C8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_089CE4CC;
L_089CE4CC:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE4EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), hot_regs.g31);
    hot_regs.g31 = (0x089CE510u);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 158u, 0x08AACB34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE510u) goto L_089CE510;
    return;
L_089CE510:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25400));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CE530u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE530u) goto L_089CE530;
    return;
L_089CE530:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g31 = (0x089CE540u);
    hot_regs.g4 = (0u | 384u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE540u) goto L_089CE540;
    return;
L_089CE540:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g19 == 0u;
    hot_regs.g4 = (g19 | 0u);
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_089CE558;
      }
      goto L_089CE54C;
    }
}
L_089CE54C:
    hot_regs.g31 = (0x089CE554u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_089CEBC8;
L_089CE554:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089CE558;
L_089CE558:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    hot_regs.g31 = (0x089CE564u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089CE5D4;
L_089CE564:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 752u);
    hot_regs.g31 = (0x089CE580u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE580u) goto L_089CE580;
    return;
L_089CE580:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CE59C;
      }
      goto L_089CE58C;
    }
L_089CE58C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CE598u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    goto L_089CE118;
L_089CE598:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089CE59C;
L_089CE59C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE5ACu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE5ACu) goto L_089CE5AC;
    return;
L_089CE5AC:
    hot_regs.g31 = (0x089CE5B4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 562u, 0x0888F9A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE5B4u) goto L_089CE5B4;
    return;
L_089CE5B4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_089CE5D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CE5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 166u, 0x08AACBDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE5E4u) goto L_089CE5E4;
    return;
L_089CE5E4:
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
L_089CE5F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x089CE604u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 169u, 0x08AACC08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE604u) goto L_089CE604;
    return;
L_089CE604:
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
L_089CE610:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g19);
    g19 = (2237u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g7);
    g19 = (g19 + static_cast<std::uint32_t>(-28736));
    g7 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 != g4;
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    ctx.gpr[19] = g19;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CE730;
      }
      goto L_089CE658;
    }
}
L_089CE658:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CE680;
      }
      goto L_089CE664;
    }
L_089CE664:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x089CE674u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE674u) goto L_089CE674;
    return;
L_089CE674:
    hot_regs.g4 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), hot_regs.g2);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_089CE680;
L_089CE680:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (0u | 0u);
    hot_regs.g31 = (0x089CE690u);
    hot_regs.g4 = (0u | 1984u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE690u) goto L_089CE690;
    return;
L_089CE690:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    hot_regs.g4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089CE6B8;
      }
      goto L_089CE69C;
    }
L_089CE69C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(524)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(86))))));
    hot_regs.g31 = (0x089CE6B0u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0197_entry, 197u, 406u, 0x08B199C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE6B0u) goto L_089CE6B0;
    return;
L_089CE6B0:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    goto L_089CE6B8;
L_089CE6B8:
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CE6C4u);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 736u, 0x08ADEF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE6C4u) goto L_089CE6C4;
    return;
L_089CE6C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE6E0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE6E0u) goto L_089CE6E0;
    return;
L_089CE6E0:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 752u);
    hot_regs.g31 = (0x089CE6FCu);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE6FCu) goto L_089CE6FC;
    return;
L_089CE6FC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089CE718;
      }
      goto L_089CE708;
    }
L_089CE708:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CE714u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    goto L_089CE118;
L_089CE714:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089CE718;
L_089CE718:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CE728u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE728u) goto L_089CE728;
    return;
L_089CE728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE744;
      }
      goto L_089CE730;
    }
L_089CE730:
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(64))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE744u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 171u, 0x08AACC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE744u) goto L_089CE744;
    return;
L_089CE744:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE76C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), hot_regs.g31);
    { const bool branch_taken = g5 != 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CE7BC;
      }
      goto L_089CE790;
    }
}
L_089CE790:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE7B4;
      }
      goto L_089CE798;
    }
L_089CE798:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (0u | 3u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x089CE7B4u);
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE7B4u) goto L_089CE7B4;
    return;
L_089CE7B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CE804;
      }
      goto L_089CE7BC;
    }
L_089CE7BC:
    hot_regs.g4 = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g5 = (0u | 752u);
    hot_regs.g31 = (0x089CE7D8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-29120));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 501u, 0x08ABE57Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE7D8u) goto L_089CE7D8;
    return;
L_089CE7D8:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089CE7F4;
      }
      goto L_089CE7E4;
    }
L_089CE7E4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x089CE7F0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089CE118;
L_089CE7F0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_089CE7F4;
L_089CE7F4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CE804u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 456u, 0x08A9B9F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE804u) goto L_089CE804;
    return;
L_089CE804:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE81C:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), g7);
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(100))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(g6));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(54))))));
    g6 = (g7 - g6);
    g6 = (g6 << 16u);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 16u));
    g6 = (static_cast<std::int32_t>(g6) < 0 ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    g6 = (g6 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CE8BC;
      }
      goto L_089CE870;
    }
}
L_089CE870:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(56))))));
    hot_regs.g31 = (0x089CE888u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE888u) goto L_089CE888;
    return;
L_089CE888:
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x089CE8A0u);
    hot_regs.g6 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE8A0u) goto L_089CE8A0;
    return;
L_089CE8A0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089CE8B4u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    goto L_089CEA20;
L_089CE8B4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_089CE924;
      }
      goto L_089CE8BC;
    }
L_089CE8BC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(96))))));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(hot_regs.g5));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(58))))));
    hot_regs.g31 = (0x089CE8D4u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE8D4u) goto L_089CE8D4;
    return;
L_089CE8D4:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(100))))));
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(60))))));
    hot_regs.g31 = (0x089CE8ECu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 440u, 0x08A9B864u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE8ECu) goto L_089CE8EC;
    return;
L_089CE8EC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(96))))));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(100))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(g4));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(62))))));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(64))))));
    g4 = (ctx.gpr[17] | 0u);
    g5 = (g5 - g6);
    g8 = (g5 << 16u);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g8) >> 16u));
    g5 = (ctx.gpr[16] | 0u);
    g6 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089CE924u);
    hot_regs.g7 = (hot_regs.g2 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    goto L_089CE95C;
}
L_089CE924:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE940:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CE950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 178u, 0x08AACCCCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE950u) goto L_089CE950;
    return;
L_089CE950:
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
L_089CE95C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[19] = (hot_regs.g5 | 0u);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[18] = (hot_regs.g7 | 0u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g5 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    hot_regs.g31 = (0x089CE99Cu);
    hot_regs.g6 = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CE99Cu) goto L_089CE99C;
    return;
L_089CE99C:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.g7 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CE9B4u);
    ctx.gpr[8] = (hot_regs.g29 | 0u);
    goto L_089CE9EC;
L_089CE9B4:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CE9C8u);
    hot_regs.g7 = (hot_regs.g29 | 0u);
    goto L_089CEA20;
L_089CE9C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CE9EC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x089CEA04u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 182u, 0x08AACD10u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEA04u) goto L_089CEA04;
    return;
L_089CEA04:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g4);
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
L_089CEA20:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    ctx.gpr[8] = (hot_regs.g7 | 0u);
    ctx.gpr[9] = (hot_regs.g6 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g6 & 65535u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[10] = (hot_regs.g7 & 255u);
    ctx.gpr[11] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[11]));
    ctx.gpr[11] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[11]));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    hot_regs.g2 = (hot_regs.g5 + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    hot_regs.g7 = (hot_regs.g6 >> 16u);
    hot_regs.g7 = (hot_regs.g7 & 65535u);
    ctx.gpr[10] = (hot_regs.g7 & 255u);
    ctx.gpr[11] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[11]));
    ctx.gpr[11] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[11]));
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    hot_regs.g2 = (hot_regs.g5 + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(hot_regs.g2 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g7) >> 8u));
    hot_regs.g7 = (hot_regs.g7 & 255u);
    ctx.gpr[10] = (rt.memory().aot_load_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (hot_regs.g5 + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 8u));
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    ctx.gpr[10] = (hot_regs.g6 & 1u);
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[9] | 0u);
    hot_regs.g4 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[8] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_089CEB20;
      }
      goto L_089CEB08;
    }
L_089CEB08:
    ctx.gpr[9] = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = (hot_regs.g7 | 0u);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g6 = (ctx.gpr[8] | 0u);
    hot_regs.g31 = (0x089CEB20u);
    hot_regs.g7 = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 206u, 0x08AACEA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEB20u) goto L_089CEB20;
    return;
L_089CEB20:
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
L_089CEB2C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    g7 = (g5 | 0u);
    g5 = (g7 + static_cast<std::uint32_t>(4));
    g8 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g9 = (g8 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g9);
    g8 = (aot_mem.aot_load8(g8 + static_cast<std::uint32_t>(0)));
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g9 = (g9 << 8u);
    g8 = (g8 | g9);
    g8 = (g8 & 65535u);
    g9 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g10 = (g9 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), g10);
    g9 = (aot_mem.aot_load8(g9 + static_cast<std::uint32_t>(0)));
    g10 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (g10 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    g5 = (aot_mem.aot_load8(g10 + static_cast<std::uint32_t>(0)));
    g5 = (g5 << 8u);
    g5 = (g9 | g5);
    g5 = (g5 & 65535u);
    g5 = (g5 << 16u);
    g5 = (g8 | g5);
    g8 = (g5 & 1u);
    g5 = (hot_regs.g4 | 0u);
    { const bool branch_taken = g8 == 0u;
    hot_regs.g4 = (g7 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CEBBC;
      }
      goto L_089CEBAC;
    }
}
L_089CEBAC:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x089CEBBCu);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 217u, 0x08AAD1E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEBBCu) goto L_089CEBBC;
    return;
L_089CEBBC:
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
L_089CEBC8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089CEBE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 264u, 0x08AAD80Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEBE0u) goto L_089CEBE0;
    return;
L_089CEBE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(25184));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g4);
    g4 = (0u | 9u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(380), g4);
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
L_089CEC08:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CEC50;
      }
      goto L_089CEC24;
    }
}
L_089CEC24:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(25184));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CEC3Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 266u, 0x08AAD844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEC3Cu) goto L_089CEC3C;
    return;
L_089CEC3C:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEC50;
      }
      goto L_089CEC48;
    }
L_089CEC48:
    hot_regs.g31 = (0x089CEC50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEC50u) goto L_089CEC50;
    return;
L_089CEC50:
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
L_089CEC64:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(200), hot_regs.g31);
    ctx.gpr[20] = (hot_regs.g4 | 0u);
    hot_regs.g31 = (0x089CEC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 271u, 0x08AAD8A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEC98u) goto L_089CEC98;
    return;
L_089CEC98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(352)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(84)));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(16))))));
    hot_regs.g4 = (hot_regs.g5 - hot_regs.g4);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(162))))));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(166), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(166))))));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089CECE8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CECE8u) goto L_089CECE8;
    return;
L_089CECE8:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(86))))));
    hot_regs.g5 = (0u | 0u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g6 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CED18;
      }
      goto L_089CED08;
    }
}
L_089CED08:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 << 2u);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g5 + g4);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089CED18;
}
L_089CED18:
    ctx.gpr[21] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CED3Cu);
    hot_regs.g6 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 282u, 0x08AAD9B4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CED3Cu) goto L_089CED3C;
    return;
L_089CED3C:
    ctx.gpr[20] = (hot_regs.g29 + static_cast<std::uint32_t>(144));
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089CED54u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 384u, 0x08AA1844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CED54u) goto L_089CED54;
    return;
L_089CED54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(244)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089CED74u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 515u, 0x08B01EA8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CED74u) goto L_089CED74;
    return;
L_089CED74:
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x089CED88u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 384u, 0x08AA1844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CED88u) goto L_089CED88;
    return;
L_089CED88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEE5C;
      }
      goto L_089CED94;
    }
L_089CED94:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(240)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[22] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[21] = (g29 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089CEDC4;
      }
      goto L_089CEDAC;
    }
}
L_089CEDAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CEDC8;
      }
      goto L_089CEDBC;
    }
}
L_089CEDBC:
    hot_regs.g31 = (0x089CEDC4u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEDC4u) goto L_089CEDC4;
    return;
L_089CEDC4:
    hot_regs.g4 = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_089CEDC8;
L_089CEDC8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g4);
    hot_regs.g31 = (0x089CEDE0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEDE0u) goto L_089CEDE0;
    return;
L_089CEDE0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    f13 = f13 - f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(hot_regs.f20)) && f13 == hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_089CEE20;
    }
    goto L_089CEE0C;
}
L_089CEE0C:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f20)) && hot_regs.f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CEE34;
      }
      goto L_089CEE1C;
    }
L_089CEE1C:
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089CEE20;
L_089CEE20:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g31 = (0x089CEE2Cu);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEE2Cu) goto L_089CEE2C;
    return;
L_089CEE2C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089CEE34;
      }
      goto L_089CEE34;
    }
L_089CEE34:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x089CEE40u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEE40u) goto L_089CEE40;
    return;
L_089CEE40:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (0x089CEE54u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEE54u) goto L_089CEE54;
    return;
L_089CEE54:
    hot_regs.g31 = (0x089CEE5Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEE5Cu) goto L_089CEE5C;
    return;
L_089CEE5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = g4;
        goto L_089CEF2C;
    }
    goto L_089CEE68;
}
L_089CEE68:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (g29 + static_cast<std::uint32_t>(96));
    ctx.gpr[20] = (g29 + static_cast<std::uint32_t>(128));
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089CEE98;
      }
      goto L_089CEE80;
    }
}
L_089CEE80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CEE9C;
      }
      goto L_089CEE90;
    }
}
L_089CEE90:
    hot_regs.g31 = (0x089CEE98u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEE98u) goto L_089CEE98;
    return;
L_089CEE98:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    goto L_089CEE9C;
L_089CEE9C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), hot_regs.g4);
    hot_regs.g31 = (0x089CEEB4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEEB4u) goto L_089CEEB4;
    return;
L_089CEEB4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(152)));
    f12 = f12 - f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(144)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f20)) && f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_089CEEF0;
      }
      goto L_089CEEE0;
    }
}
L_089CEEE0:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f20)) && hot_regs.f13 == hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CEF00;
      }
      goto L_089CEEF0;
    }
L_089CEEF0:
    hot_regs.g31 = (0x089CEEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEEF8u) goto L_089CEEF8;
    return;
L_089CEEF8:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089CEF00;
      }
      goto L_089CEF00;
    }
L_089CEF00:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20) ^ 0x80000000u);
    hot_regs.g31 = (0x089CEF0Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 919u, 0x0885F9D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEF0Cu) goto L_089CEF0C;
    return;
L_089CEF0C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(128)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(132)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(136)));
    hot_regs.g31 = (0x089CEF20u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEF20u) goto L_089CEF20;
    return;
L_089CEF20:
    hot_regs.g31 = (0x089CEF28u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEF28u) goto L_089CEF28;
    return;
L_089CEF28:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    goto L_089CEF2C;
L_089CEF2C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CEF4C;
      }
      goto L_089CEF38;
    }
}
L_089CEF38:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CEF4C;
      }
      goto L_089CEF44;
    }
L_089CEF44:
    hot_regs.g31 = (0x089CEF4Cu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEF4Cu) goto L_089CEF4C;
    return;
L_089CEF4C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(200)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CEF78:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CEF88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 280u, 0x08AAD998u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CEF88u) goto L_089CEF88;
    return;
L_089CEF88:
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
L_089CEF94:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-416));
    ctx.gpr[13] = (hot_regs.g5 | 0u);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    { const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (0u | 2u);
    ctx.gpr[11] = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    hot_regs.g5 = (15820u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[10] = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    ctx.gpr[9] = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    ctx.gpr[8] = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g6 = (16230u << 16u);
    hot_regs.g6 = (hot_regs.g6 | 26214u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g7 = (0u | 32u);
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    ctx.gpr[3] = (hot_regs.g6 + static_cast<std::uint32_t>(16));
    hot_regs.g2 = (hot_regs.g6 + static_cast<std::uint32_t>(112));
    hot_regs.g7 = (hot_regs.g4 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-16));
    goto L_089CF034;
L_089CF034:
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[14]);
    { const std::uint32_t vfpu_address = ctx.gpr[13] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f15 = std::bit_cast<float>(ctx.gpr[14]);
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
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = ctx.fpr[16] / hot_regs.f15;
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[14]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[14]);
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[14] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[14]);
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g2 + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[3] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(16));
    hot_regs.g2 = (hot_regs.g2 + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(16));
    ctx.gpr[14] = (static_cast<std::int32_t>(ctx.gpr[12]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089CF034;
      }
      goto L_089CF17C;
    }
L_089CF17C:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(416));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF184:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF18C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2279u << 16u);
    g5 = (0u | 0u);
    g4 = (g4 + static_cast<std::uint32_t>(18112));
    hot_regs.g6 = (g5 + g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089CF19C;
}
L_089CF19C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g5 + g6);
    hot_regs.g7 = (g5 << 8u);
    g6 = (g6 << 4u);
    g6 = (hot_regs.g7 - g6);
    g6 = (g6 + hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g5 = (g5 << 16u);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 16u));
    g6 = (static_cast<std::int32_t>(g5) < 8 ? 1u : 0u);
    { const bool branch_taken = g6 != 0u;
    g6 = (g5 + g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CF19C;
      }
      goto L_089CF1D0;
    }
}
L_089CF1D0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF1D8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2279u << 16u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g4 = (0u | 1u);
    g6 = (g6 + static_cast<std::uint32_t>(18112));
    hot_regs.g6 = g6;
    goto L_089CF1E8;
}
L_089CF1E8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g5 = (g7 + g7);
    g5 = (g7 + g5);
    g8 = (g7 << 8u);
    g5 = (g5 << 4u);
    g5 = (g8 - g5);
    g5 = (g5 + hot_regs.g6);
    g8 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g8 != hot_regs.g4;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089CF21C;
      }
      goto L_089CF20C;
    }
}
L_089CF20C:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF21C;
      }
      goto L_089CF218;
    }
L_089CF218:
    aot_mem.aot_store8(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089CF21C;
L_089CF21C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(1));
    g7 = (g7 << 16u);
    aot_mem.aot_store8(g5 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 16u));
    g5 = (static_cast<std::int32_t>(g7) < 8 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089CF1E8;
      }
      goto L_089CF238;
    }
}
L_089CF238:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CF240:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g20);
    g20 = (2279u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g20 = (g20 + static_cast<std::uint32_t>(18112));
    g17 = (2279u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (g20 | 0u);
    g17 = (g17 + static_cast<std::uint32_t>(18064));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    ctx.gpr[17] = g17;
    ctx.gpr[20] = g20;
    hot_regs.g29 = g29;
    goto L_089CF280;
}
L_089CF280:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF368;
      }
      goto L_089CF28C;
    }
L_089CF28C:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x089CF298u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF298u) goto L_089CF298;
    return;
L_089CF298:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x089CF2A4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF2A4u) goto L_089CF2A4;
    return;
L_089CF2A4:
    hot_regs.g4 = (0u | 8u);
    hot_regs.g31 = (0x089CF2B0u);
    hot_regs.g5 = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF2B0u) goto L_089CF2B0;
    return;
L_089CF2B0:
    hot_regs.g4 = (0u | 9u);
    hot_regs.g31 = (0x089CF2BCu);
    hot_regs.g5 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF2BCu) goto L_089CF2BC;
    return;
L_089CF2BC:
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x089CF2C8u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF2C8u) goto L_089CF2C8;
    return;
L_089CF2C8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[21] + ctx.gpr[20]);
    goto L_089CF2D0;
L_089CF2D0:
    hot_regs.g4 = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g5 = (0u | 100u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x089CF33Cu);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 515u, 0x08AEE610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF33Cu) goto L_089CF33C;
    return;
L_089CF33C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF358;
      }
      goto L_089CF344;
    }
L_089CF344:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g31 = (0x089CF350u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 527u, 0x08AEE7B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF350u) goto L_089CF350;
    return;
L_089CF350:
    hot_regs.g31 = (0x089CF358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 535u, 0x08AEE8D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF358u) goto L_089CF358;
    return;
L_089CF358:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 5 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089CF2D0;
      }
      goto L_089CF368;
    }
}
L_089CF368:
{
    std::uint32_t g22 = ctx.gpr[22];
    g22 = (g22 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(208));
    hot_regs.g4 = (static_cast<std::int32_t>(g22) < 8 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(208));
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_089CF280;
      }
      goto L_089CF37C;
    }
}
L_089CF37C:
    hot_regs.g4 = (0u | 10u);
    hot_regs.g31 = (0x089CF388u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF388u) goto L_089CF388;
    return;
L_089CF388:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CF3B0:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-128));
    g7 = (2279u << 16u);
    ctx.gpr[10] = (0u | 1u);
    g7 = (g7 + static_cast<std::uint32_t>(18112));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
    ctx.gpr[16] = (g7 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), hot_regs.g31);
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    goto L_089CF3D4;
}
L_089CF3D4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF404;
      }
      goto L_089CF3DC;
    }
L_089CF3DC:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CF3F4;
      }
      goto L_089CF3E8;
    }
L_089CF3E8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[11] == hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089CF404;
      }
      goto L_089CF3F4;
    }
L_089CF3F4:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(208));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(g9) < 8 ? 1u : 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089CF3D4;
      }
      goto L_089CF404;
    }
}
L_089CF404:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF43C;
      }
      goto L_089CF40C;
    }
L_089CF40C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g31 = (0x089CF42Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    goto L_089CEF94;
}
L_089CF42C:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(hot_regs.g4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF524;
      }
      goto L_089CF43C;
    }
L_089CF43C:
    ctx.gpr[11] = (0u | 0u);
    hot_regs.g2 = (ctx.gpr[10] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (hot_regs.g7 | 0u);
    goto L_089CF44C;
L_089CF44C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF474;
      }
      goto L_089CF454;
    }
L_089CF454:
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089CF474;
      }
      goto L_089CF460;
    }
L_089CF460:
{
    std::uint32_t g11 = ctx.gpr[11];
    g11 = (g11 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(208));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(208));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (static_cast<std::int32_t>(g11) < 8 ? 1u : 0u);
    ctx.gpr[11] = g11;
      if (branch_taken) {
          goto L_089CF44C;
      }
      goto L_089CF474;
    }
}
L_089CF474:
    { const bool branch_taken = hot_regs.g2 == 0u;
    ctx.gpr[10] = (16576u << 16u);
      if (branch_taken) {
          goto L_089CF524;
      }
      goto L_089CF47C;
    }
L_089CF47C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    f13 = std::bit_cast<float>(g10);
    f12 = f12 / f13;
    g10 = (g7 | 0u);
    g7 = (0u | 1u);
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store8(g9 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g7));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(4), hot_regs.g4);
    g11 = (g10 + static_cast<std::uint32_t>(16));
    g3 = (ctx.gpr[8] | 0u);
    hot_regs.g2 = (g10 + static_cast<std::uint32_t>(112));
    ctx.gpr[8] = (g3 + g11);
    hot_regs.g4 = (0u | 0u);
    g7 = (g29 + static_cast<std::uint32_t>(64));
    g10 = (g29 + static_cast<std::uint32_t>(48));
    g11 = (g3 + hot_regs.g2);
    f13 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[3] = g3;
    hot_regs.g7 = g7;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_089CF4CC;
}
}
L_089CF4CC:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g2 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g2);
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16));
    hot_regs.g2 = (static_cast<std::int32_t>(hot_regs.g4) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g2 != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089CF4CC;
      }
      goto L_089CF524;
    }
L_089CF524:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CF534:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (2279u << 16u);
    hot_regs.g7 = (2205u << 16u);
    hot_regs.g5 = (0u | 8u);
    hot_regs.g6 = (0u | 208u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(18112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089CF558u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-3708));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF558u) goto L_089CF558;
    return;
L_089CF558:
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
L_089CF564:
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
L_089CF58C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 24u);
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9636)));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(3));
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    rt.memory().aot_store_word_left(hot_regs.g4 + static_cast<std::uint32_t>(3), hot_regs.g7);
    rt.memory().aot_store_word_right(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g7);
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    rt.memory().aot_store_word_left(hot_regs.g5 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g5 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    rt.memory().aot_store_word_left(hot_regs.g6 + static_cast<std::uint32_t>(3), hot_regs.g4);
    rt.memory().aot_store_word_right(hot_regs.g6 + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    rt.memory().aot_store_word_right(hot_regs.g29 + static_cast<std::uint32_t>(15), ctx.gpr[1]);
    rt.memory().aot_store_word_left(hot_regs.g29 + static_cast<std::uint32_t>(18), ctx.gpr[1]);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    hot_regs.g4 = (0u < hot_regs.g4 ? 1u : 0u);
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g4));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (2237u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
      if (branch_taken) {
          goto L_089CF75C;
      }
      goto L_089CF624;
    }
L_089CF624:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 14u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CF6A0;
      }
      goto L_089CF640;
    }
}
L_089CF640:
    hot_regs.g31 = (0x089CF648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF648u) goto L_089CF648;
    return;
L_089CF648:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089CF660;
      }
      goto L_089CF654;
    }
L_089CF654:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089CF75C;
      }
      goto L_089CF660;
    }
L_089CF660:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CF67Cu);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF67Cu) goto L_089CF67C;
    return;
L_089CF67C:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF75C;
      }
      goto L_089CF684;
    }
L_089CF684:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3))))));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CF75C;
      }
      goto L_089CF6A0;
    }
}
L_089CF6A0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (hot_regs.g7 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g6 == 0u;
    // nop
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CF6EC;
      }
      goto L_089CF6B8;
    }
}
L_089CF6B8:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    goto L_089CF6C0;
L_089CF6C0:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 < hot_regs.g4 ? 1u : 0u);
    g8 = (g8 & 255u);
    if (g8 != 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = g8;
        goto L_089CF6E0;
    }
    goto L_089CF6D0;
}
L_089CF6D0:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g5 = (g6 | 0u);
    g6 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_089CF6E4;
      }
      goto L_089CF6E0;
    }
}
L_089CF6E0:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    goto L_089CF6E4;
L_089CF6E4:
    if (hot_regs.g6 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
        goto L_089CF6C0;
    }
    goto L_089CF6EC;
L_089CF6EC:
    if (hot_regs.g5 == hot_regs.g7) {
    hot_regs.g5 = (hot_regs.g7 | 0u);
        goto L_089CF710;
    }
    goto L_089CF6F4;
L_089CF6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g6 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_089CF714;
    }
    goto L_089CF70C;
}
L_089CF70C:
    hot_regs.g5 = (hot_regs.g7 | 0u);
    goto L_089CF710;
L_089CF710:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    goto L_089CF714;
L_089CF714:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g7);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g4);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089CF74C;
    }
    goto L_089CF744;
}
L_089CF744:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089CF74C;
      }
      goto L_089CF74C;
    }
L_089CF74C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF75C;
      }
      goto L_089CF754;
    }
L_089CF754:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(22), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_089CF75C;
L_089CF75C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8A0;
      }
      goto L_089CF768;
    }
L_089CF768:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    g5 = (g5 & 14u);
    g5 = (g5 ^ 14u);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CF7E4;
      }
      goto L_089CF784;
    }
}
L_089CF784:
    hot_regs.g31 = (0x089CF78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF78Cu) goto L_089CF78C;
    return;
L_089CF78C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = hot_regs.g2 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_089CF7A4;
      }
      goto L_089CF798;
    }
L_089CF798:
    hot_regs.g4 = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_089CF8A0;
      }
      goto L_089CF7A4;
    }
L_089CF7A4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(352)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(108)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(64));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g5;
    hot_regs.g31 = (0x089CF7C0u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF7C0u) goto L_089CF7C0;
    return;
L_089CF7C0:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8A0;
      }
      goto L_089CF7C8;
    }
L_089CF7C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(352)));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3))))));
    g4 = (g4 << 24u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 24u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CF8A0;
      }
      goto L_089CF7E4;
    }
}
L_089CF7E4:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    hot_regs.g6 = (hot_regs.g5 | 0u);
    g7 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = g7 == 0u;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089CF830;
      }
      goto L_089CF7FC;
    }
}
L_089CF7FC:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(16)));
    goto L_089CF804;
L_089CF804:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 < hot_regs.g4 ? 1u : 0u);
    g8 = (g8 & 255u);
    if (g8 != 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = g8;
        goto L_089CF824;
    }
    goto L_089CF814;
}
L_089CF814:
{
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g6 = (g7 | 0u);
    g7 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089CF828;
      }
      goto L_089CF824;
    }
}
L_089CF824:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    goto L_089CF828;
L_089CF828:
    if (hot_regs.g7 != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(16)));
        goto L_089CF804;
    }
    goto L_089CF830;
L_089CF830:
    if (hot_regs.g6 == hot_regs.g5) {
    hot_regs.g6 = (hot_regs.g5 | 0u);
        goto L_089CF854;
    }
    goto L_089CF838;
L_089CF838:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(16)));
    g4 = (g4 < hot_regs.g7 ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g6);
    hot_regs.g4 = g4;
        goto L_089CF858;
    }
    goto L_089CF850;
}
L_089CF850:
    hot_regs.g6 = (hot_regs.g5 | 0u);
    goto L_089CF854;
L_089CF854:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), hot_regs.g6);
    goto L_089CF858;
L_089CF858:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g5);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g4);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    g4 = (g5 ^ g4);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    if (g4 == 0u) {
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
        goto L_089CF890;
    }
    goto L_089CF888;
}
L_089CF888:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_089CF890;
      }
      goto L_089CF890;
    }
L_089CF890:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF8A0;
      }
      goto L_089CF898;
    }
L_089CF898:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store16(hot_regs.g29 + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(hot_regs.g4));
    goto L_089CF8A0;
L_089CF8A0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089CF8B0u);
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 189u, 0x08ADCA34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF8B0u) goto L_089CF8B0;
    return;
L_089CF8B0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CF8C4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    g5 = (g4 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    g6 = (0u | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g6));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g6));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), 0u);
    g5 = (16204u << 16u);
    g5 = (g5 | 52429u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    g5 = (16256u << 16u);
    f12 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (g4 | 0u);
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089CF934:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CFA68;
      }
      goto L_089CF950;
    }
}
L_089CF950:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CF96C;
      }
      goto L_089CF95C;
    }
L_089CF95C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (2238u << 16u);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(14864)));
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(14864), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_089CF96C;
}
L_089CF96C:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA68;
      }
      goto L_089CF984;
    }
}
L_089CF984:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (0u | 3u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CFA20;
      }
      goto L_089CF99C;
    }
}
L_089CF99C:
    hot_regs.g31 = (0x089CF9A4u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 655u, 0x08906F34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF9A4u) goto L_089CF9A4;
    return;
L_089CF9A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA14;
      }
      goto L_089CF9AC;
    }
L_089CF9AC:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2228)));
    g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == g5;
    g5 = (0u | 45u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089CFA14;
      }
      goto L_089CF9BC;
    }
}
L_089CF9BC:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089CFA14;
      }
      goto L_089CF9C4;
    }
L_089CF9C4:
    hot_regs.g31 = (0x089CF9CCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF9CCu) goto L_089CF9CC;
    return;
L_089CF9CC:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CF9E4;
      }
      goto L_089CF9D4;
    }
L_089CF9D4:
    hot_regs.g31 = (0x089CF9DCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 282u, 0x0890905Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF9DCu) goto L_089CF9DC;
    return;
L_089CF9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA14;
      }
      goto L_089CF9E4;
    }
L_089CF9E4:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CF9F0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 261u, 0x08908E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF9F0u) goto L_089CF9F0;
    return;
L_089CF9F0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089CF9FCu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 631u, 0x0890A728u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CF9FCu) goto L_089CF9FC;
    return;
L_089CF9FC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 20u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g7 = (0u | 0u);
    hot_regs.g31 = (0x089CFA14u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 613u, 0x0892F140u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CFA14u) goto L_089CFA14;
    return;
L_089CFA14:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1712), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA64;
      }
      goto L_089CFA20;
    }
L_089CFA20:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 >> 1u);
    hot_regs.g5 = (0u | 2u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089CFA44;
      }
      goto L_089CFA38;
    }
}
L_089CFA38:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(596), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFA64;
      }
      goto L_089CFA44;
    }
L_089CFA44:
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
          goto L_089CFA64;
      }
      goto L_089CFA60;
    }
}
L_089CFA60:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(452), 0u);
    goto L_089CFA64;
L_089CFA64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    goto L_089CFA68;
L_089CFA68:
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
L_089CFA7C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g5 = (2238u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(14864)));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(14864), hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (0u | 7u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x089CFAB0u);
    hot_regs.g6 = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 981u, 0x0897FF40u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CFAB0u) goto L_089CFAB0;
    return;
L_089CFAB0:
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
L_089CFABC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g7 = (2205u << 16u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1852));
    hot_regs.g5 = (0u | 40u);
    hot_regs.g31 = (0x089CFAE4u);
    hot_regs.g6 = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CFAE4u) goto L_089CFAE4;
    return;
L_089CFAE4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), 0u);
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CFAFC:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g5 = (hot_regs.g5 & 1u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_089CFB1C;
      }
      goto L_089CFB0C;
    }
}
L_089CFB0C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB1C;
      }
      goto L_089CFB14;
    }
L_089CFB14:
    hot_regs.g31 = (0x089CFB1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089CFB1Cu) goto L_089CFB1C;
    return;
L_089CFB1C:
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
L_089CFB28:
    hot_regs.g2 = (0u | 0u);
    goto L_089CFB2C;
L_089CFB2C:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB44;
      }
      goto L_089CFB38;
    }
L_089CFB38:
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB5C;
      }
      goto L_089CFB44;
    }
L_089CFB44:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (g2 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g2) < 40 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(64));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089CFB2C;
      }
      goto L_089CFB54;
    }
}
L_089CFB54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB64;
      }
      goto L_089CFB5C;
    }
L_089CFB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFB68;
      }
      goto L_089CFB64;
    }
L_089CFB64:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_089CFB68;
L_089CFB68:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFB70:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    g7 = (18804u << 16u);
    g7 = (g7 | 9200u);
    ctx.fpr[5] = std::bit_cast<float>(g7);
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (hot_regs.g4 | 0u);
    g7 = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    goto L_089CFBC0;
}
L_089CFBC0:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFCA8;
      }
      goto L_089CFBCC;
    }
L_089CFBCC:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFCA8;
      }
      goto L_089CFBD8;
    }
L_089CFBD8:
{
    float f6 = ctx.fpr[6];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f13));
    g11 = (std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[4] = std::bit_cast<float>(g11);
    g11 = (std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[3] = std::bit_cast<float>(g11);
    g11 = (std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[1] = std::bit_cast<float>(g11);
    g2 = (std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[2] = std::bit_cast<float>(g2);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f13));
    g3 = (std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[0] = std::bit_cast<float>(g3);
    g3 = (std::bit_cast<std::uint32_t>(f13));
    ctx.fpr[19] = std::bit_cast<float>(g3);
    g3 = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[18] = std::bit_cast<float>(g3);
    g12 = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[17] = std::bit_cast<float>(g12);
    f12 = std::bit_cast<float>(g11);
    f13 = std::bit_cast<float>(g3);
    f12 = f12 - f13;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(f12));
    f14 = std::bit_cast<float>(g2);
    f15 = std::bit_cast<float>(g12);
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f14));
    g11 = (std::bit_cast<std::uint32_t>(f12));
    ctx.fpr[16] = std::bit_cast<float>(g11);
    g11 = (std::bit_cast<std::uint32_t>(f14));
    f15 = std::bit_cast<float>(g11);
    g11 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    f14 = std::bit_cast<float>(g11);
    g11 = (std::bit_cast<std::uint32_t>(f15));
    f13 = std::bit_cast<float>(g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    { const float fs = f14; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    f12 = f12 + f6;
    f12 = std::sqrt(f12);
    ctx.set_fpu_condition((f12 < ctx.fpr[5]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[11] = g11;
    ctx.gpr[12] = g12;
    ctx.fpr[6] = f6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_089CFCA8;
      }
      goto L_089CFCA0;
    }
}
}
L_089CFCA0:
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
    ctx.fpr[5] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_089CFCA8;
L_089CFCA8:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (g9 + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.gpr[11] = (static_cast<std::int32_t>(g9) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(64));
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_089CFBC0;
      }
      goto L_089CFCBC;
    }
}
L_089CFCBC:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089CFD0C;
      }
      goto L_089CFCFC;
    }
}
L_089CFCFC:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g5 = (ctx.gpr[10] << 6u);
    g2 = (hot_regs.g4 + hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(16));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089CFD10;
      }
      goto L_089CFD0C;
    }
}
L_089CFD0C:
    hot_regs.g2 = (0u | 0u);
    goto L_089CFD10;
L_089CFD10:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFD18:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    ctx.fpr[7] = std::bit_cast<float>(0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g7 + static_cast<std::uint32_t>(32));
    hot_regs.g29 = g29;
    goto L_089CFD60;
}
L_089CFD60:
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFD6C;
    }
L_089CFD6C:
    ctx.gpr[10] = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(17)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFD78;
    }
L_089CFD78:
{
    float f8 = ctx.fpr[8];
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(f15));
    g10 = (std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[6] = std::bit_cast<float>(g10);
    g10 = (std::bit_cast<std::uint32_t>(f15));
    ctx.fpr[5] = std::bit_cast<float>(g10);
    g10 = (std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[4] = std::bit_cast<float>(g10);
    g11 = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[3] = std::bit_cast<float>(g11);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(f15));
    g2 = (std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[1] = std::bit_cast<float>(g2);
    g2 = (std::bit_cast<std::uint32_t>(f15));
    ctx.fpr[2] = std::bit_cast<float>(g2);
    g2 = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(g2);
    g3 = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[19] = std::bit_cast<float>(g3);
    f14 = std::bit_cast<float>(g10);
    f15 = std::bit_cast<float>(g2);
    f14 = f14 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(f14));
    f16 = std::bit_cast<float>(g11);
    f17 = std::bit_cast<float>(g3);
    f16 = f16 - f17;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(f16));
    g10 = (std::bit_cast<std::uint32_t>(f14));
    ctx.fpr[18] = std::bit_cast<float>(g10);
    g10 = (std::bit_cast<std::uint32_t>(f16));
    f17 = std::bit_cast<float>(g10);
    g10 = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    f16 = std::bit_cast<float>(g10);
    g10 = (std::bit_cast<std::uint32_t>(f17));
    f15 = std::bit_cast<float>(g10);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f15));
    { const float fs = f16; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    { const float fs = f15; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f8 = std::bit_cast<float>(0x7FC00000u); else f8 = fs * ft; }
    f14 = f14 + f8;
    f14 = std::sqrt(f14);
    ctx.set_fpu_condition((hot_regs.f12 < f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g2 = g2;
    ctx.gpr[3] = g3;
    ctx.gpr[10] = g10;
    ctx.gpr[11] = g11;
    ctx.fpr[8] = f8;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE40;
    }
}
}
L_089CFE40:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f14));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE50;
    }
L_089CFE50:
    ctx.set_fpu_condition((ctx.fpr[7] < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CFE68;
      }
      goto L_089CFE60;
    }
L_089CFE60:
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.fpr[7] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    goto L_089CFE68;
L_089CFE68:
{
    std::uint32_t g8 = ctx.gpr[8];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(64));
    ctx.gpr[10] = (static_cast<std::int32_t>(g8) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_089CFD60;
      }
      goto L_089CFE7C;
    }
}
L_089CFE7C:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089CFEC8;
      }
      goto L_089CFEB8;
    }
}
L_089CFEB8:
{
    std::uint32_t g2 = hot_regs.g2;
    hot_regs.g5 = (ctx.gpr[9] << 6u);
    g2 = (hot_regs.g4 + hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(16));
    hot_regs.g2 = g2;
      if (branch_taken) {
          goto L_089CFECC;
      }
      goto L_089CFEC8;
    }
}
L_089CFEC8:
    hot_regs.g2 = (0u | 0u);
    goto L_089CFECC;
L_089CFECC:
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CFED4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g31);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (hot_regs.g6 & 255u);
    ctx.gpr[18] = (hot_regs.g7 & 255u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x089CFF0Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_089CFB28;
}
L_089CFF0C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089CFF98;
      }
      goto L_089CFF1C;
    }
L_089CFF1C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (g4 << 6u);
    g16 = (g16 + g4);
    g16 = (g16 + static_cast<std::uint32_t>(16));
    g4 = (0u | 1u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g4));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g16 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(40), g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 + static_cast<std::uint32_t>(400));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(44), g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(48), 0u);
    hot_regs.g31 = (0x089CFF74u);
    g4 = (g16 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_089CFA7C;
}
L_089CFF74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-7080)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFF98;
      }
      goto L_089CFF88;
    }
L_089CFF88:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CFF98;
      }
      goto L_089CFF90;
    }
L_089CFF90:
    hot_regs.g31 = (0x089CFF98u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_089CF58C;
L_089CFF98:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089CFFB8:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    ctx.gpr[19] = (hot_regs.g7 & 255u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 12u, 0x089D0090u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_089CFFF0;
    }
L_089CFFF0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 14u);
    g4 = (g4 ^ 6u);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g4 = g4;
    ctx.pc = 0x089D0000u; return;}

}

void recomp_unit_0114(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0114_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_114(Runtime &runtime) {
    runtime.register_generated_unit(114u, 0x089CC000u, 16384u, &recomp_unit_0114, &recomp_unit_0114_entry);
    runtime.register_function(0x089CC000u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC020u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC02Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC040u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC06Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC078u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC08Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC0D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC104u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC110u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC124u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC17Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC194u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC1F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC20Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC218u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC220u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC25Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC26Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC274u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC2F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC300u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC338u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC370u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC46Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC47Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC484u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC48Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC494u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC4ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC500u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC508u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC514u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC534u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC53Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC588u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC5F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC688u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC6FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC704u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC70Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC728u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC750u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC75Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC77Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC788u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC794u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC804u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC808u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC810u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC818u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC83Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC840u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC848u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC858u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC870u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC87Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC8F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC900u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC90Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC918u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC920u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC928u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC93Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC948u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC958u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC960u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC970u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC978u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC998u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CC9F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCACCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCAFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCBFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCC90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCCF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD58u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCD80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCDA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCEF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF84u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCF9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CCFD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD010u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD018u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD020u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD028u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD050u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD058u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD064u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD070u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD084u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD090u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD0ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD130u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD188u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD190u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD1A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD278u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD290u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD2F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD30Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD32Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD334u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD35Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD364u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD380u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD404u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD414u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD428u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD458u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD460u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD484u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD498u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD4ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD514u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD520u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD52Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD540u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD568u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD570u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD57Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD594u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD5DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD600u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD604u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD60Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD614u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD61Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD634u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD668u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD680u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD688u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD690u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD700u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD710u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD720u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD730u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD744u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD74Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD754u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD75Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD7FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD80Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD898u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD8F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD900u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD908u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD910u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD944u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD960u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD968u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD990u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD998u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CD9F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA30u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDA90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDAF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDB9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBD4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBDCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDBF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC8Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDC98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDCD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDD1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEA4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDECCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDEF4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDF6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFD0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CDFECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE0F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE118u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE144u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE174u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE1F8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE204u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE22Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE234u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE23Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE244u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE24Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE254u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE25Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE264u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE26Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE284u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE288u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE290u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE294u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2A8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE2F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE308u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE314u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE320u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE328u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE368u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE374u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE37Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE380u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE390u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE3F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE400u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE40Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE43Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE460u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE480u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE49Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE4ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE510u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE530u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE540u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE54Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE554u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE564u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE580u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE598u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE59Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE5F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE604u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE610u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE658u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE664u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE674u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE680u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE690u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE69Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE6FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE708u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE718u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE728u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE730u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE744u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE76Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE790u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE7F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE804u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE81Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE870u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE888u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE8ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE924u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE940u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE95Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE99Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9B4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CE9ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA04u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEA20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEBE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC24u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC48u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEC98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CECE8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED08u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED3Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CED94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDC4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEDE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE34u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE80u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEE9Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEB4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEE0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEF0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEEF8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF00u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF4Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CEF94u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF034u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF17Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF184u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF18Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF19Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1D8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF1E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF20Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF218u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF21Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF238u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF240u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF280u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF28Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF298u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF2D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF33Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF344u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF350u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF358u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF368u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF37Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF388u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3E8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF3F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF404u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF40Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF42Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF43Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF44Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF454u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF460u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF474u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF47Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF4CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF524u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF534u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF558u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF564u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF58Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF624u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF640u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF648u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF654u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF660u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF67Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF684u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6B8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6D0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6E0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6ECu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF6F4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF70Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF710u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF714u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF744u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF74Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF754u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF75Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF768u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF784u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF78Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF798u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7C0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7C8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF7FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF804u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF814u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF824u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF828u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF830u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF838u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF850u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF854u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF858u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF888u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF890u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF898u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8A0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8B0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF8C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF934u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF950u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF95Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF96Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF984u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF99Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9A4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9ACu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9BCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9C4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9CCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9D4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9DCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9E4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9F0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CF9FCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA20u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFA7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAB0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFABCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAE4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFAFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB14u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB28u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB2Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB38u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB44u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB54u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB5Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB64u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFB70u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBC0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBCCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFBD8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCA0u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCA8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCBCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFCFCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD10u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD18u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD6Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFD78u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE40u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE50u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE60u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE68u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFE7Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFEC8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFECCu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFED4u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF0Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF1Cu, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF74u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF88u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF90u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFF98u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFB8u, &recomp_unit_0114, "recomp_unit_0114");
    runtime.register_function(0x089CFFF0u, &recomp_unit_0114, "recomp_unit_0114");
}
} // namespace psprecomp
