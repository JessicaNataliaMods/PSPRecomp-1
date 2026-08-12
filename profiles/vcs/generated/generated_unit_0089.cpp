#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0089[4090] = {
    1, 0, 2, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0,
    0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0,
    23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 41, 0, 42, 0, 43, 0, 0, 44, 0,
    45, 46, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52, 53, 0, 54, 0, 55, 56, 0, 57, 0, 58, 0, 0, 59, 0, 60, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 0, 73,
    0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 82, 0,
    83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 90, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 0, 0, 0,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0, 0, 103, 0, 0, 0,
    104, 105, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 114, 0, 0, 115, 0,
    0, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0,
    126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146,
    0, 0, 147, 0, 148, 0, 149, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0,
    163, 0, 164, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 170, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 175, 0, 176, 0,
    0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 180, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 190, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 0, 0,
    203, 0, 0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0,
    0, 0, 0, 232, 0, 233, 0, 234, 235, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240,
    0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0,
    0, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 257, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 285, 0,
    286, 0, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0,
    295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307,
    0, 0, 308, 309, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 312,
    0, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0,
    329, 330, 0, 0, 0, 331, 0, 0, 0, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0,
    0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 359, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375,
    0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 384, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0,
    0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 406,
    0, 0, 0, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 413, 0, 414, 0, 0, 0, 415, 0, 416, 0,
    417, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 437, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 441, 0, 442, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 448,
    449, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 458, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 0, 465, 0,
    0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 473, 0, 474,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0,
    0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 493, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511,
    0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 515, 0, 0, 516, 517, 0, 518, 0, 0, 519, 520, 0, 0, 0, 0, 521, 0, 522,
    523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0,
    529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 534, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0,
    0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0,
    0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 547, 0, 548, 549, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 553,
    0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 565, 566, 0, 567, 0, 0, 0,
    0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0,
    0, 0, 576, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0, 0, 0, 0,
    583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 588, 0, 0,
    0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0,
    596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0,
    0, 602, 0, 0, 603, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613,
    0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0,
    0, 0, 625, 0, 0, 0, 0, 626, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0,
    631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0,
    0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 641, 642, 0,
    0, 0, 643, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0,
    653, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0,
    0, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 667, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0,
    0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0,
    0, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 684, 0,
    0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690,
    0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0,
    696, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0,
    703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 710,
    0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0,
    0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 723, 0, 724, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    0, 728, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 733,
    734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0,
    739, 0, 0, 0, 740, 0, 741, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 750, 0,
    751, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 0, 757, 0, 758, 759, 0, 0, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 0, 761, 0, 0, 0, 0, 762, 0, 763, 0, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0,
    769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775,
    776, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 779, 0, 780, 0, 0, 781, 0, 0, 0, 782, 0, 783, 784, 0,
    0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0,
    0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 0, 792, 0, 793, 0, 0, 794,
    0, 0, 0, 795, 0, 796, 797, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 0, 800, 0, 801, 0, 0, 802,
};
void recomp_unit_0089_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08968000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0089[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08968000;
    case 2u: goto L_08968008;
    case 3u: goto L_08968018;
    case 4u: goto L_08968020;
    case 5u: goto L_0896802C;
    case 6u: goto L_0896803C;
    case 7u: goto L_08968048;
    case 8u: goto L_08968054;
    case 9u: goto L_08968060;
    case 10u: goto L_08968068;
    case 11u: goto L_08968070;
    case 12u: goto L_08968078;
    case 13u: goto L_08968088;
    case 14u: goto L_089680B0;
    case 15u: goto L_089680B8;
    case 16u: goto L_089680C0;
    case 17u: goto L_08968108;
    case 18u: goto L_0896811C;
    case 19u: goto L_08968148;
    case 20u: goto L_08968158;
    case 21u: goto L_0896816C;
    case 22u: goto L_08968174;
    case 23u: goto L_08968180;
    case 24u: goto L_08968188;
    case 25u: goto L_08968190;
    case 26u: goto L_08968198;
    case 27u: goto L_089681A0;
    case 28u: goto L_089681A8;
    case 29u: goto L_089681B4;
    case 30u: goto L_089681BC;
    case 31u: goto L_089681C4;
    case 32u: goto L_089681F4;
    case 33u: goto L_089681FC;
    case 34u: goto L_08968220;
    case 35u: goto L_08968228;
    case 36u: goto L_08968234;
    case 37u: goto L_0896823C;
    case 38u: goto L_08968244;
    case 39u: goto L_08968250;
    case 40u: goto L_08968258;
    case 41u: goto L_0896825C;
    case 42u: goto L_08968264;
    case 43u: goto L_0896826C;
    case 44u: goto L_08968278;
    case 45u: goto L_08968280;
    case 46u: goto L_08968284;
    case 47u: goto L_0896828C;
    case 48u: goto L_08968294;
    case 49u: goto L_0896829C;
    case 50u: goto L_089682A8;
    case 51u: goto L_089682B4;
    case 52u: goto L_089682BC;
    case 53u: goto L_089682C0;
    case 54u: goto L_089682C8;
    case 55u: goto L_089682D0;
    case 56u: goto L_089682D4;
    case 57u: goto L_089682DC;
    case 58u: goto L_089682E4;
    case 59u: goto L_089682F0;
    case 60u: goto L_089682F8;
    case 61u: goto L_08968320;
    case 62u: goto L_08968350;
    case 63u: goto L_08968358;
    case 64u: goto L_08968360;
    case 65u: goto L_0896839C;
    case 66u: goto L_089683AC;
    case 67u: goto L_089683B4;
    case 68u: goto L_089683B8;
    case 69u: goto L_089683C8;
    case 70u: goto L_089683D8;
    case 71u: goto L_089683E0;
    case 72u: goto L_089683EC;
    case 73u: goto L_089683FC;
    case 74u: goto L_0896840C;
    case 75u: goto L_0896841C;
    case 76u: goto L_08968428;
    case 77u: goto L_08968434;
    case 78u: goto L_08968440;
    case 79u: goto L_08968448;
    case 80u: goto L_08968450;
    case 81u: goto L_0896846C;
    case 82u: goto L_08968478;
    case 83u: goto L_08968480;
    case 84u: goto L_0896849C;
    case 85u: goto L_089684A4;
    case 86u: goto L_089684EC;
    case 87u: goto L_08968500;
    case 88u: goto L_0896852C;
    case 89u: goto L_08968534;
    case 90u: goto L_08968540;
    case 91u: goto L_08968548;
    case 92u: goto L_08968554;
    case 93u: goto L_0896855C;
    case 94u: goto L_08968564;
    case 95u: goto L_0896856C;
    case 96u: goto L_08968588;
    case 97u: goto L_089685A8;
    case 98u: goto L_089685C0;
    case 99u: goto L_089685C8;
    case 100u: goto L_089685D0;
    case 101u: goto L_089685D8;
    case 102u: goto L_089685E4;
    case 103u: goto L_089685F0;
    case 104u: goto L_08968600;
    case 105u: goto L_08968604;
    case 106u: goto L_0896860C;
    case 107u: goto L_08968650;
    case 108u: goto L_08968658;
    case 109u: goto L_089686B8;
    case 110u: goto L_089686C0;
    case 111u: goto L_089686C8;
    case 112u: goto L_089686E0;
    case 113u: goto L_089686E8;
    case 114u: goto L_089686EC;
    case 115u: goto L_089686F8;
    case 116u: goto L_08968710;
    case 117u: goto L_08968718;
    case 118u: goto L_08968728;
    case 119u: goto L_08968730;
    case 120u: goto L_08968738;
    case 121u: goto L_08968740;
    case 122u: goto L_08968750;
    case 123u: goto L_08968758;
    case 124u: goto L_08968768;
    case 125u: goto L_08968770;
    case 126u: goto L_08968780;
    case 127u: goto L_08968788;
    case 128u: goto L_089687A8;
    case 129u: goto L_089687B8;
    case 130u: goto L_089687C0;
    case 131u: goto L_089687D4;
    case 132u: goto L_089687DC;
    case 133u: goto L_089687EC;
    case 134u: goto L_089687FC;
    case 135u: goto L_0896880C;
    case 136u: goto L_0896881C;
    case 137u: goto L_0896882C;
    case 138u: goto L_08968834;
    case 139u: goto L_0896883C;
    case 140u: goto L_08968844;
    case 141u: goto L_08968850;
    case 142u: goto L_08968858;
    case 143u: goto L_08968860;
    case 144u: goto L_0896886C;
    case 145u: goto L_08968874;
    case 146u: goto L_0896887C;
    case 147u: goto L_08968888;
    case 148u: goto L_08968890;
    case 149u: goto L_08968898;
    case 150u: goto L_0896889C;
    case 151u: goto L_089688A8;
    case 152u: goto L_089688B0;
    case 153u: goto L_089688B8;
    case 154u: goto L_089688D4;
    case 155u: goto L_089688DC;
    case 156u: goto L_089688EC;
    case 157u: goto L_089688F4;
    case 158u: goto L_089688FC;
    case 159u: goto L_08968934;
    case 160u: goto L_08968948;
    case 161u: goto L_08968968;
    case 162u: goto L_08968974;
    case 163u: goto L_08968980;
    case 164u: goto L_08968988;
    case 165u: goto L_0896898C;
    case 166u: goto L_08968994;
    case 167u: goto L_0896899C;
    case 168u: goto L_089689AC;
    case 169u: goto L_089689B8;
    case 170u: goto L_089689C0;
    case 171u: goto L_089689C4;
    case 172u: goto L_089689D0;
    case 173u: goto L_089689E0;
    case 174u: goto L_089689E8;
    case 175u: goto L_089689F0;
    case 176u: goto L_089689F8;
    case 177u: goto L_08968A0C;
    case 178u: goto L_08968A14;
    case 179u: goto L_08968A20;
    case 180u: goto L_08968A28;
    case 181u: goto L_08968A30;
    case 182u: goto L_08968A40;
    case 183u: goto L_08968A68;
    case 184u: goto L_08968A90;
    case 185u: goto L_08968A98;
    case 186u: goto L_08968ACC;
    case 187u: goto L_08968AE0;
    case 188u: goto L_08968AEC;
    case 189u: goto L_08968AF4;
    case 190u: goto L_08968AF8;
    case 191u: goto L_08968B04;
    case 192u: goto L_08968B20;
    case 193u: goto L_08968B34;
    case 194u: goto L_08968B40;
    case 195u: goto L_08968B48;
    case 196u: goto L_08968B5C;
    case 197u: goto L_08968B94;
    case 198u: goto L_08968BB8;
    case 199u: goto L_08968BC8;
    case 200u: goto L_08968BD0;
    case 201u: goto L_08968BDC;
    case 202u: goto L_08968BE8;
    case 203u: goto L_08968C00;
    case 204u: goto L_08968C14;
    case 205u: goto L_08968C1C;
    case 206u: goto L_08968C28;
    case 207u: goto L_08968C30;
    case 208u: goto L_08968C38;
    case 209u: goto L_08968C44;
    case 210u: goto L_08968C4C;
    case 211u: goto L_08968C54;
    case 212u: goto L_08968C60;
    case 213u: goto L_08968C68;
    case 214u: goto L_08968C70;
    case 215u: goto L_08968C78;
    case 216u: goto L_08968CB0;
    case 217u: goto L_08968CDC;
    case 218u: goto L_08968CF0;
    case 219u: goto L_08968D20;
    case 220u: goto L_08968D2C;
    case 221u: goto L_08968DA8;
    case 222u: goto L_08968DCC;
    case 223u: goto L_08968DE0;
    case 224u: goto L_08968EB0;
    case 225u: goto L_08968F7C;
    case 226u: goto L_08968F88;
    case 227u: goto L_08968F90;
    case 228u: goto L_08968F9C;
    case 229u: goto L_08968FA4;
    case 230u: goto L_08968FE4;
    case 231u: goto L_08968FF8;
    case 232u: goto L_0896900C;
    case 233u: goto L_08969014;
    case 234u: goto L_0896901C;
    case 235u: goto L_08969020;
    case 236u: goto L_08969028;
    case 237u: goto L_08969038;
    case 238u: goto L_08969054;
    case 239u: goto L_0896906C;
    case 240u: goto L_0896907C;
    case 241u: goto L_08969084;
    case 242u: goto L_08969094;
    case 243u: goto L_089690CC;
    case 244u: goto L_089690F0;
    case 245u: goto L_08969124;
    case 246u: goto L_08969150;
    case 247u: goto L_08969168;
    case 248u: goto L_08969170;
    case 249u: goto L_08969178;
    case 250u: goto L_0896918C;
    case 251u: goto L_08969194;
    case 252u: goto L_089691B0;
    case 253u: goto L_089691BC;
    case 254u: goto L_089691C8;
    case 255u: goto L_089691D0;
    case 256u: goto L_089691E8;
    case 257u: goto L_089691EC;
    case 258u: goto L_089691F4;
    case 259u: goto L_08969230;
    case 260u: goto L_0896923C;
    case 261u: goto L_08969248;
    case 262u: goto L_08969250;
    case 263u: goto L_08969258;
    case 264u: goto L_08969284;
    case 265u: goto L_089692B4;
    case 266u: goto L_08969320;
    case 267u: goto L_08969328;
    case 268u: goto L_0896933C;
    case 269u: goto L_0896935C;
    case 270u: goto L_08969364;
    case 271u: goto L_08969370;
    case 272u: goto L_089693E0;
    case 273u: goto L_08969434;
    case 274u: goto L_08969444;
    case 275u: goto L_0896944C;
    case 276u: goto L_08969454;
    case 277u: goto L_0896945C;
    case 278u: goto L_08969464;
    case 279u: goto L_08969474;
    case 280u: goto L_08969480;
    case 281u: goto L_0896949C;
    case 282u: goto L_089694D0;
    case 283u: goto L_089694E0;
    case 284u: goto L_089694F0;
    case 285u: goto L_089694F8;
    case 286u: goto L_08969500;
    case 287u: goto L_0896950C;
    case 288u: goto L_08969514;
    case 289u: goto L_08969520;
    case 290u: goto L_08969544;
    case 291u: goto L_08969568;
    case 292u: goto L_089695E8;
    case 293u: goto L_089695F0;
    case 294u: goto L_089695F8;
    case 295u: goto L_08969600;
    case 296u: goto L_08969608;
    case 297u: goto L_08969610;
    case 298u: goto L_08969618;
    case 299u: goto L_08969620;
    case 300u: goto L_08969628;
    case 301u: goto L_08969630;
    case 302u: goto L_08969638;
    case 303u: goto L_08969640;
    case 304u: goto L_08969648;
    case 305u: goto L_08969670;
    case 306u: goto L_089696EC;
    case 307u: goto L_089696FC;
    case 308u: goto L_08969708;
    case 309u: goto L_0896970C;
    case 310u: goto L_08969714;
    case 311u: goto L_0896976C;
    case 312u: goto L_0896977C;
    case 313u: goto L_08969788;
    case 314u: goto L_0896978C;
    case 315u: goto L_08969794;
    case 316u: goto L_089697F0;
    case 317u: goto L_0896980C;
    case 318u: goto L_08969824;
    case 319u: goto L_08969830;
    case 320u: goto L_08969838;
    case 321u: goto L_0896984C;
    case 322u: goto L_08969860;
    case 323u: goto L_0896986C;
    case 324u: goto L_0896987C;
    case 325u: goto L_0896989C;
    case 326u: goto L_089698B8;
    case 327u: goto L_089698C8;
    case 328u: goto L_089698EC;
    case 329u: goto L_08969900;
    case 330u: goto L_08969904;
    case 331u: goto L_08969914;
    case 332u: goto L_08969928;
    case 333u: goto L_0896992C;
    case 334u: goto L_0896994C;
    case 335u: goto L_0896998C;
    case 336u: goto L_08969998;
    case 337u: goto L_089699F4;
    case 338u: goto L_08969A04;
    case 339u: goto L_08969A0C;
    case 340u: goto L_08969A14;
    case 341u: goto L_08969A28;
    case 342u: goto L_08969A38;
    case 343u: goto L_08969A40;
    case 344u: goto L_08969A48;
    case 345u: goto L_08969A78;
    case 346u: goto L_08969A8C;
    case 347u: goto L_08969A94;
    case 348u: goto L_08969AD4;
    case 349u: goto L_08969B50;
    case 350u: goto L_08969B5C;
    case 351u: goto L_08969B70;
    case 352u: goto L_08969B90;
    case 353u: goto L_08969BEC;
    case 354u: goto L_08969BFC;
    case 355u: goto L_08969C2C;
    case 356u: goto L_08969C44;
    case 357u: goto L_08969C64;
    case 358u: goto L_08969C6C;
    case 359u: goto L_08969C74;
    case 360u: goto L_08969C98;
    case 361u: goto L_08969CA0;
    case 362u: goto L_08969CC4;
    case 363u: goto L_08969CF4;
    case 364u: goto L_08969D0C;
    case 365u: goto L_08969D18;
    case 366u: goto L_08969D60;
    case 367u: goto L_08969DE4;
    case 368u: goto L_08969DEC;
    case 369u: goto L_08969E1C;
    case 370u: goto L_08969E28;
    case 371u: goto L_08969E68;
    case 372u: goto L_08969EDC;
    case 373u: goto L_08969EE4;
    case 374u: goto L_08969EF4;
    case 375u: goto L_08969EFC;
    case 376u: goto L_08969F08;
    case 377u: goto L_08969F1C;
    case 378u: goto L_08969F30;
    case 379u: goto L_08969F44;
    case 380u: goto L_08969F58;
    case 381u: goto L_08969F88;
    case 382u: goto L_08969F90;
    case 383u: goto L_08969FA8;
    case 384u: goto L_08969FAC;
    case 385u: goto L_08969FC0;
    case 386u: goto L_08969FC8;
    case 387u: goto L_08969FE0;
    case 388u: goto L_08969FE8;
    case 389u: goto L_0896A050;
    case 390u: goto L_0896A058;
    case 391u: goto L_0896A068;
    case 392u: goto L_0896A078;
    case 393u: goto L_0896A08C;
    case 394u: goto L_0896A094;
    case 395u: goto L_0896A0A8;
    case 396u: goto L_0896A0B0;
    case 397u: goto L_0896A0C4;
    case 398u: goto L_0896A0DC;
    case 399u: goto L_0896A0E4;
    case 400u: goto L_0896A110;
    case 401u: goto L_0896A124;
    case 402u: goto L_0896A130;
    case 403u: goto L_0896A140;
    case 404u: goto L_0896A160;
    case 405u: goto L_0896A174;
    case 406u: goto L_0896A17C;
    case 407u: goto L_0896A190;
    case 408u: goto L_0896A198;
    case 409u: goto L_0896A1A0;
    case 410u: goto L_0896A1B4;
    case 411u: goto L_0896A1CC;
    case 412u: goto L_0896A1D4;
    case 413u: goto L_0896A1D8;
    case 414u: goto L_0896A1E0;
    case 415u: goto L_0896A1F0;
    case 416u: goto L_0896A1F8;
    case 417u: goto L_0896A200;
    case 418u: goto L_0896A20C;
    case 419u: goto L_0896A240;
    case 420u: goto L_0896A268;
    case 421u: goto L_0896A28C;
    case 422u: goto L_0896A2A0;
    case 423u: goto L_0896A2A8;
    case 424u: goto L_0896A2DC;
    case 425u: goto L_0896A2E4;
    case 426u: goto L_0896A2EC;
    case 427u: goto L_0896A2F4;
    case 428u: goto L_0896A324;
    case 429u: goto L_0896A340;
    case 430u: goto L_0896A348;
    case 431u: goto L_0896A354;
    case 432u: goto L_0896A368;
    case 433u: goto L_0896A384;
    case 434u: goto L_0896A3A0;
    case 435u: goto L_0896A3B4;
    case 436u: goto L_0896A3C8;
    case 437u: goto L_0896A3CC;
    case 438u: goto L_0896A3D4;
    case 439u: goto L_0896A40C;
    case 440u: goto L_0896A41C;
    case 441u: goto L_0896A428;
    case 442u: goto L_0896A430;
    case 443u: goto L_0896A43C;
    case 444u: goto L_0896A450;
    case 445u: goto L_0896A45C;
    case 446u: goto L_0896A464;
    case 447u: goto L_0896A46C;
    case 448u: goto L_0896A47C;
    case 449u: goto L_0896A480;
    case 450u: goto L_0896A48C;
    case 451u: goto L_0896A498;
    case 452u: goto L_0896A4C0;
    case 453u: goto L_0896A4DC;
    case 454u: goto L_0896A4E4;
    case 455u: goto L_0896A514;
    case 456u: goto L_0896A52C;
    case 457u: goto L_0896A534;
    case 458u: goto L_0896A544;
    case 459u: goto L_0896A548;
    case 460u: goto L_0896A574;
    case 461u: goto L_0896A590;
    case 462u: goto L_0896A5CC;
    case 463u: goto L_0896A5DC;
    case 464u: goto L_0896A5EC;
    case 465u: goto L_0896A5F8;
    case 466u: goto L_0896A614;
    case 467u: goto L_0896A624;
    case 468u: goto L_0896A628;
    case 469u: goto L_0896A638;
    case 470u: goto L_0896A644;
    case 471u: goto L_0896A660;
    case 472u: goto L_0896A670;
    case 473u: goto L_0896A674;
    case 474u: goto L_0896A67C;
    case 475u: goto L_0896A698;
    case 476u: goto L_0896A6A8;
    case 477u: goto L_0896A6AC;
    case 478u: goto L_0896A6B4;
    case 479u: goto L_0896A6D0;
    case 480u: goto L_0896A6D8;
    case 481u: goto L_0896A6F4;
    case 482u: goto L_0896A710;
    case 483u: goto L_0896A72C;
    case 484u: goto L_0896A740;
    case 485u: goto L_0896A754;
    case 486u: goto L_0896A768;
    case 487u: goto L_0896A770;
    case 488u: goto L_0896A78C;
    case 489u: goto L_0896A7A8;
    case 490u: goto L_0896A7BC;
    case 491u: goto L_0896A818;
    case 492u: goto L_0896A820;
    case 493u: goto L_0896A834;
    case 494u: goto L_0896A838;
    case 495u: goto L_0896A88C;
    case 496u: goto L_0896A8C4;
    case 497u: goto L_0896A90C;
    case 498u: goto L_0896A914;
    case 499u: goto L_0896A91C;
    case 500u: goto L_0896A924;
    case 501u: goto L_0896A93C;
    case 502u: goto L_0896A948;
    case 503u: goto L_0896A950;
    case 504u: goto L_0896A964;
    case 505u: goto L_0896A96C;
    case 506u: goto L_0896A9A0;
    case 507u: goto L_0896A9A8;
    case 508u: goto L_0896A9B4;
    case 509u: goto L_0896A9DC;
    case 510u: goto L_0896A9EC;
    case 511u: goto L_0896A9FC;
    case 512u: goto L_0896AA0C;
    case 513u: goto L_0896AA1C;
    case 514u: goto L_0896AA2C;
    case 515u: goto L_0896AA38;
    case 516u: goto L_0896AA44;
    case 517u: goto L_0896AA48;
    case 518u: goto L_0896AA50;
    case 519u: goto L_0896AA5C;
    case 520u: goto L_0896AA60;
    case 521u: goto L_0896AA74;
    case 522u: goto L_0896AA7C;
    case 523u: goto L_0896AA80;
    case 524u: goto L_0896AA98;
    case 525u: goto L_0896AAAC;
    case 526u: goto L_0896AAC0;
    case 527u: goto L_0896AAC8;
    case 528u: goto L_0896AAF0;
    case 529u: goto L_0896AB00;
    case 530u: goto L_0896AB08;
    case 531u: goto L_0896AB24;
    case 532u: goto L_0896AB3C;
    case 533u: goto L_0896AB48;
    case 534u: goto L_0896AB50;
    case 535u: goto L_0896AB54;
    case 536u: goto L_0896AB6C;
    case 537u: goto L_0896AB74;
    case 538u: goto L_0896AB84;
    case 539u: goto L_0896AB98;
    case 540u: goto L_0896ABB0;
    case 541u: goto L_0896ABC8;
    case 542u: goto L_0896ABDC;
    case 543u: goto L_0896ABF0;
    case 544u: goto L_0896ABF8;
    case 545u: goto L_0896AC14;
    case 546u: goto L_0896AC28;
    case 547u: goto L_0896AC34;
    case 548u: goto L_0896AC3C;
    case 549u: goto L_0896AC40;
    case 550u: goto L_0896AC58;
    case 551u: goto L_0896AC60;
    case 552u: goto L_0896AC74;
    case 553u: goto L_0896AC7C;
    case 554u: goto L_0896AC98;
    case 555u: goto L_0896ACAC;
    case 556u: goto L_0896ACB8;
    case 557u: goto L_0896ACC0;
    case 558u: goto L_0896ACC4;
    case 559u: goto L_0896ACDC;
    case 560u: goto L_0896ACE8;
    case 561u: goto L_0896AD0C;
    case 562u: goto L_0896AD28;
    case 563u: goto L_0896AD3C;
    case 564u: goto L_0896AD50;
    case 565u: goto L_0896AD64;
    case 566u: goto L_0896AD68;
    case 567u: goto L_0896AD70;
    case 568u: goto L_0896AD8C;
    case 569u: goto L_0896AD94;
    case 570u: goto L_0896ADB0;
    case 571u: goto L_0896ADB8;
    case 572u: goto L_0896ADC0;
    case 573u: goto L_0896ADDC;
    case 574u: goto L_0896ADE4;
    case 575u: goto L_0896ADEC;
    case 576u: goto L_0896AE08;
    case 577u: goto L_0896AE0C;
    case 578u: goto L_0896AE1C;
    case 579u: goto L_0896AE3C;
    case 580u: goto L_0896AE48;
    case 581u: goto L_0896AE5C;
    case 582u: goto L_0896AE64;
    case 583u: goto L_0896AE80;
    case 584u: goto L_0896AE88;
    case 585u: goto L_0896AEC0;
    case 586u: goto L_0896AED8;
    case 587u: goto L_0896AEF0;
    case 588u: goto L_0896AEF4;
    case 589u: goto L_0896AF10;
    case 590u: goto L_0896AF18;
    case 591u: goto L_0896AF20;
    case 592u: goto L_0896AF38;
    case 593u: goto L_0896AF4C;
    case 594u: goto L_0896AF54;
    case 595u: goto L_0896AF6C;
    case 596u: goto L_0896AF80;
    case 597u: goto L_0896AF88;
    case 598u: goto L_0896AFA4;
    case 599u: goto L_0896AFAC;
    case 600u: goto L_0896AFCC;
    case 601u: goto L_0896AFEC;
    case 602u: goto L_0896B004;
    case 603u: goto L_0896B010;
    case 604u: goto L_0896B018;
    case 605u: goto L_0896B020;
    case 606u: goto L_0896B04C;
    case 607u: goto L_0896B054;
    case 608u: goto L_0896B05C;
    case 609u: goto L_0896B078;
    case 610u: goto L_0896B0A8;
    case 611u: goto L_0896B0B0;
    case 612u: goto L_0896B0CC;
    case 613u: goto L_0896B0FC;
    case 614u: goto L_0896B104;
    case 615u: goto L_0896B120;
    case 616u: goto L_0896B14C;
    case 617u: goto L_0896B184;
    case 618u: goto L_0896B18C;
    case 619u: goto L_0896B194;
    case 620u: goto L_0896B19C;
    case 621u: goto L_0896B1A4;
    case 622u: goto L_0896B1C8;
    case 623u: goto L_0896B1DC;
    case 624u: goto L_0896B1F4;
    case 625u: goto L_0896B208;
    case 626u: goto L_0896B21C;
    case 627u: goto L_0896B220;
    case 628u: goto L_0896B248;
    case 629u: goto L_0896B258;
    case 630u: goto L_0896B26C;
    case 631u: goto L_0896B280;
    case 632u: goto L_0896B294;
    case 633u: goto L_0896B2A8;
    case 634u: goto L_0896B2BC;
    case 635u: goto L_0896B2C0;
    case 636u: goto L_0896B2EC;
    case 637u: goto L_0896B2F8;
    case 638u: goto L_0896B308;
    case 639u: goto L_0896B340;
    case 640u: goto L_0896B368;
    case 641u: goto L_0896B374;
    case 642u: goto L_0896B378;
    case 643u: goto L_0896B388;
    case 644u: goto L_0896B394;
    case 645u: goto L_0896B39C;
    case 646u: goto L_0896B3A4;
    case 647u: goto L_0896B3AC;
    case 648u: goto L_0896B3B8;
    case 649u: goto L_0896B3C4;
    case 650u: goto L_0896B3D0;
    case 651u: goto L_0896B3E0;
    case 652u: goto L_0896B3F8;
    case 653u: goto L_0896B400;
    case 654u: goto L_0896B404;
    case 655u: goto L_0896B420;
    case 656u: goto L_0896B430;
    case 657u: goto L_0896B444;
    case 658u: goto L_0896B454;
    case 659u: goto L_0896B460;
    case 660u: goto L_0896B468;
    case 661u: goto L_0896B48C;
    case 662u: goto L_0896B494;
    case 663u: goto L_0896B49C;
    case 664u: goto L_0896B4A4;
    case 665u: goto L_0896B4AC;
    case 666u: goto L_0896B4D0;
    case 667u: goto L_0896B4D4;
    case 668u: goto L_0896B4E8;
    case 669u: goto L_0896B4F0;
    case 670u: goto L_0896B510;
    case 671u: goto L_0896B518;
    case 672u: goto L_0896B520;
    case 673u: goto L_0896B540;
    case 674u: goto L_0896B548;
    case 675u: goto L_0896B564;
    case 676u: goto L_0896B56C;
    case 677u: goto L_0896B588;
    case 678u: goto L_0896B5A4;
    case 679u: goto L_0896B5B8;
    case 680u: goto L_0896B5CC;
    case 681u: goto L_0896B5E0;
    case 682u: goto L_0896B5E8;
    case 683u: goto L_0896B5F0;
    case 684u: goto L_0896B5F8;
    case 685u: goto L_0896B618;
    case 686u: goto L_0896B634;
    case 687u: goto L_0896B678;
    case 688u: goto L_0896B6B4;
    case 689u: goto L_0896B6E8;
    case 690u: goto L_0896B6FC;
    case 691u: goto L_0896B708;
    case 692u: goto L_0896B71C;
    case 693u: goto L_0896B728;
    case 694u: goto L_0896B760;
    case 695u: goto L_0896B774;
    case 696u: goto L_0896B780;
    case 697u: goto L_0896B794;
    case 698u: goto L_0896B7A0;
    case 699u: goto L_0896B7B4;
    case 700u: goto L_0896B7C8;
    case 701u: goto L_0896B7D8;
    case 702u: goto L_0896B7EC;
    case 703u: goto L_0896B800;
    case 704u: goto L_0896B81C;
    case 705u: goto L_0896B824;
    case 706u: goto L_0896B83C;
    case 707u: goto L_0896B854;
    case 708u: goto L_0896B85C;
    case 709u: goto L_0896B874;
    case 710u: goto L_0896B87C;
    case 711u: goto L_0896B894;
    case 712u: goto L_0896B8AC;
    case 713u: goto L_0896B8B4;
    case 714u: goto L_0896B8CC;
    case 715u: goto L_0896B8DC;
    case 716u: goto L_0896B8E8;
    case 717u: goto L_0896B8F4;
    case 718u: goto L_0896B918;
    case 719u: goto L_0896B928;
    case 720u: goto L_0896B9B0;
    case 721u: goto L_0896B9C4;
    case 722u: goto L_0896B9C8;
    case 723u: goto L_0896BA0C;
    case 724u: goto L_0896BA14;
    case 725u: goto L_0896BA18;
    case 726u: goto L_0896BA48;
    case 727u: goto L_0896BA6C;
    case 728u: goto L_0896BA84;
    case 729u: goto L_0896BA98;
    case 730u: goto L_0896BAAC;
    case 731u: goto L_0896BAB0;
    case 732u: goto L_0896BAF4;
    case 733u: goto L_0896BAFC;
    case 734u: goto L_0896BB00;
    case 735u: goto L_0896BB2C;
    case 736u: goto L_0896BB4C;
    case 737u: goto L_0896BB64;
    case 738u: goto L_0896BB70;
    case 739u: goto L_0896BB80;
    case 740u: goto L_0896BB90;
    case 741u: goto L_0896BB98;
    case 742u: goto L_0896BB9C;
    case 743u: goto L_0896BBB4;
    case 744u: goto L_0896BBD8;
    case 745u: goto L_0896BBE0;
    case 746u: goto L_0896BC08;
    case 747u: goto L_0896BC1C;
    case 748u: goto L_0896BC64;
    case 749u: goto L_0896BC70;
    case 750u: goto L_0896BC78;
    case 751u: goto L_0896BC80;
    case 752u: goto L_0896BC8C;
    case 753u: goto L_0896BCA0;
    case 754u: goto L_0896BCA8;
    case 755u: goto L_0896BCB4;
    case 756u: goto L_0896BCC0;
    case 757u: goto L_0896BCD0;
    case 758u: goto L_0896BCD8;
    case 759u: goto L_0896BCDC;
    case 760u: goto L_0896BCF4;
    case 761u: goto L_0896BD10;
    case 762u: goto L_0896BD24;
    case 763u: goto L_0896BD2C;
    case 764u: goto L_0896BD38;
    case 765u: goto L_0896BD4C;
    case 766u: goto L_0896BD54;
    case 767u: goto L_0896BD68;
    case 768u: goto L_0896BD70;
    case 769u: goto L_0896BD80;
    case 770u: goto L_0896BD8C;
    case 771u: goto L_0896BD94;
    case 772u: goto L_0896BDA0;
    case 773u: goto L_0896BDE4;
    case 774u: goto L_0896BDF4;
    case 775u: goto L_0896BDFC;
    case 776u: goto L_0896BE00;
    case 777u: goto L_0896BE18;
    case 778u: goto L_0896BE34;
    case 779u: goto L_0896BE48;
    case 780u: goto L_0896BE50;
    case 781u: goto L_0896BE5C;
    case 782u: goto L_0896BE6C;
    case 783u: goto L_0896BE74;
    case 784u: goto L_0896BE78;
    case 785u: goto L_0896BE90;
    case 786u: goto L_0896BEA4;
    case 787u: goto L_0896BEF4;
    case 788u: goto L_0896BF04;
    case 789u: goto L_0896BF40;
    case 790u: goto L_0896BF48;
    case 791u: goto L_0896BF54;
    case 792u: goto L_0896BF68;
    case 793u: goto L_0896BF70;
    case 794u: goto L_0896BF7C;
    case 795u: goto L_0896BF8C;
    case 796u: goto L_0896BF94;
    case 797u: goto L_0896BF98;
    case 798u: goto L_0896BFB0;
    case 799u: goto L_0896BFC4;
    case 800u: goto L_0896BFD0;
    case 801u: goto L_0896BFD8;
    case 802u: goto L_0896BFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08968000:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08968018;
      }
      goto L_08968008;
    }
L_08968008:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08968020;
      }
      goto L_08968018;
    }
L_08968018:
    hot_regs.g31 = (0x08968020u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968020u) goto L_08968020;
    return;
L_08968020:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896802Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896802Cu) goto L_0896802C;
    return;
L_0896802C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08968048;
      }
      goto L_0896803C;
    }
L_0896803C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968048u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968048u) goto L_08968048;
    return;
L_08968048:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968054u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968054u) goto L_08968054;
    return;
L_08968054:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968060u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968060u) goto L_08968060;
    return;
L_08968060:
    hot_regs.g31 = (0x08968068u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 894u, 0x08AB379Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968068u) goto L_08968068;
    return;
L_08968068:
    hot_regs.g31 = (0x08968070u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968070u) goto L_08968070;
    return;
L_08968070:
    hot_regs.g31 = (0x08968078u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968078u) goto L_08968078;
    return;
L_08968078:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x08968088u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968088u) goto L_08968088;
    return;
L_08968088:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(336)));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089680B0u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089680B0u) goto L_089680B0;
    return;
L_089680B0:
    hot_regs.g31 = (0x089680B8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 452u, 0x0894A1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089680B8u) goto L_089680B8;
    return;
L_089680B8:
    hot_regs.g31 = (0x089680C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 366u, 0x08B41628u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089680C0u) goto L_089680C0;
    return;
L_089680C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08968108u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968108u) goto L_08968108;
    return;
L_08968108:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x0896811Cu);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896811Cu) goto L_0896811C;
    return;
L_0896811C:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x08968148u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968148u) goto L_08968148;
    return;
L_08968148:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968158u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968158u) goto L_08968158;
    return;
L_08968158:
    hot_regs.g4 = (17786u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0896816Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 595u, 0x0889B6ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896816Cu) goto L_0896816C;
    return;
L_0896816C:
    hot_regs.g31 = (0x08968174u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968174u) goto L_08968174;
    return;
L_08968174:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-1044), 0u);
    hot_regs.g31 = (0x08968180u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 593u, 0x08AD35C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968180u) goto L_08968180;
    return;
L_08968180:
    hot_regs.g31 = (0x08968188u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 141u, 0x08A1CE7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968188u) goto L_08968188;
    return;
L_08968188:
    hot_regs.g31 = (0x08968190u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 110u, 0x08A1CA0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968190u) goto L_08968190;
    return;
L_08968190:
    hot_regs.g31 = (0x08968198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 376u, 0x08A92D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968198u) goto L_08968198;
    return;
L_08968198:
    hot_regs.g31 = (0x089681A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 421u, 0x0896DA24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681A0u) goto L_089681A0;
    return;
L_089681A0:
    hot_regs.g31 = (0x089681A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 233u, 0x089910E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681A8u) goto L_089681A8;
    return;
L_089681A8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089681B4u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681B4u) goto L_089681B4;
    return;
L_089681B4:
    hot_regs.g31 = (0x089681BCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681BCu) goto L_089681BC;
    return;
L_089681BC:
    hot_regs.g31 = (0x089681C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 787u, 0x08A07508u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681C4u) goto L_089681C4;
    return;
L_089681C4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 << 8u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (2238u << 16u);
    ctx.gpr[18] = (hot_regs.g5 + static_cast<std::uint32_t>(-6992));
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x089681F4u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17536));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 671u, 0x0890EE04u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681F4u) goto L_089681F4;
    return;
L_089681F4:
    hot_regs.g31 = (0x089681FCu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089681FCu) goto L_089681FC;
    return;
L_089681FC:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g5 = (hot_regs.g4 << 8u);
    hot_regs.g6 = (hot_regs.g4 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g4 = (hot_regs.g4 << 5u);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[18]);
    hot_regs.g31 = (0x08968220u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 688u, 0x0890EF00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968220u) goto L_08968220;
    return;
L_08968220:
    hot_regs.g31 = (0x08968228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 128u, 0x08A11214u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968228u) goto L_08968228;
    return;
L_08968228:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0896823C;
      }
      goto L_08968234;
    }
L_08968234:
    hot_regs.g31 = (0x0896823Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896823Cu) goto L_0896823C;
    return;
L_0896823C:
    hot_regs.g31 = (0x08968244u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 616u, 0x089BAE90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968244u) goto L_08968244;
    return;
L_08968244:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g4 = g4;
        goto L_0896825C;
    }
    goto L_08968250;
}
L_08968250:
    hot_regs.g31 = (0x08968258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968258u) goto L_08968258;
    return;
L_08968258:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_0896825C;
L_0896825C:
    hot_regs.g31 = (0x08968264u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 688u, 0x089BB290u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968264u) goto L_08968264;
    return;
L_08968264:
    hot_regs.g31 = (0x0896826Cu);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8952));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 745u, 0x08953614u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896826Cu) goto L_0896826C;
    return;
L_0896826C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (hot_regs.g4 != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_08968284;
    }
    goto L_08968278;
L_08968278:
    hot_regs.g31 = (0x08968280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968280u) goto L_08968280;
    return;
L_08968280:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08968284;
L_08968284:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968294;
      }
      goto L_0896828C;
    }
L_0896828C:
    hot_regs.g31 = (0x08968294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968294u) goto L_08968294;
    return;
L_08968294:
    hot_regs.g31 = (0x0896829Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 581u, 0x089BABB4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896829Cu) goto L_0896829C;
    return;
L_0896829C:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x089682A8u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 687u, 0x089BB288u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682A8u) goto L_089682A8;
    return;
L_089682A8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (hot_regs.g4 != 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
        goto L_089682C0;
    }
    goto L_089682B4;
L_089682B4:
    hot_regs.g31 = (0x089682BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682BCu) goto L_089682BC;
    return;
L_089682BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_089682C0;
L_089682C0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    hot_regs.g4 = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089682D4;
      }
      goto L_089682C8;
    }
L_089682C8:
    hot_regs.g31 = (0x089682D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682D0u) goto L_089682D0;
    return;
L_089682D0:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    goto L_089682D4;
L_089682D4:
    hot_regs.g31 = (0x089682DCu);
    hot_regs.g5 = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 686u, 0x089BB280u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682DCu) goto L_089682DC;
    return;
L_089682DC:
    hot_regs.g31 = (0x089682E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 11u, 0x088603F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682E4u) goto L_089682E4;
    return;
L_089682E4:
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g31 = (0x089682F0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-1008));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 725u, 0x0888A9E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682F0u) goto L_089682F0;
    return;
L_089682F0:
    hot_regs.g31 = (0x089682F8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 602u, 0x08AD3650u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089682F8u) goto L_089682F8;
    return;
L_089682F8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08968320:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[17] = (g5 | 0u);
    g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1152)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f22 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08968358;
      }
      goto L_08968350;
    }
}
L_08968350:
    hot_regs.g31 = (0x08968358u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1152)));
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 437u, 0x08A93058u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968358u) goto L_08968358;
    return;
L_08968358:
    hot_regs.g31 = (0x08968360u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 437u, 0x08A93058u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968360u) goto L_08968360;
    return;
L_08968360:
    hot_regs.g4 = (17096u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (8u << 16u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(472)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g4 = (0u + static_cast<std::uint32_t>(-12289));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1768), 0u);
    hot_regs.g4 = (hot_regs.g5 & hot_regs.g4);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), hot_regs.g4);
    hot_regs.g31 = (0x0896839Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 676u, 0x08947574u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896839Cu) goto L_0896839C;
    return;
L_0896839C:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(3160)));
    hot_regs.g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1712)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(3264), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_089683B8;
      }
      goto L_089683AC;
    }
}
L_089683AC:
    hot_regs.g31 = (0x089683B4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1712)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 649u, 0x089CF934u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089683B4u) goto L_089683B4;
    return;
L_089683B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1712), 0u);
    goto L_089683B8;
L_089683B8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089683D8;
      }
      goto L_089683C8;
    }
L_089683C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089683E0;
      }
      goto L_089683D8;
    }
L_089683D8:
    hot_regs.g31 = (0x089683E0u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 441u, 0x089AA5B8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089683E0u) goto L_089683E0;
    return;
L_089683E0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x089683ECu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 209u, 0x08910BDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089683ECu) goto L_089683EC;
    return;
L_089683EC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 55u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896841C;
      }
      goto L_089683FC;
    }
L_089683FC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 57u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896841C;
      }
      goto L_0896840C;
    }
L_0896840C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2228)));
    hot_regs.g5 = (0u | 58u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08968428;
      }
      goto L_0896841C;
    }
L_0896841C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968428u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 240u, 0x08908D60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968428u) goto L_08968428;
    return;
L_08968428:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968434u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 171u, 0x08910A24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968434u) goto L_08968434;
    return;
L_08968434:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968440u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 781u, 0x0890F694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968440u) goto L_08968440;
    return;
L_08968440:
    hot_regs.g31 = (0x08968448u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(2288));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 894u, 0x08AB379Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968448u) goto L_08968448;
    return;
L_08968448:
    hot_regs.g31 = (0x08968450u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 976u, 0x0890BDFCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968450u) goto L_08968450;
    return;
L_08968450:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (65504u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), hot_regs.g4);
    hot_regs.g31 = (0x0896846Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 661u, 0x089474C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896846Cu) goto L_0896846C;
    return;
L_0896846C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08968478u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 8u, 0x08964108u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968478u) goto L_08968478;
    return;
L_08968478:
    hot_regs.g31 = (0x08968480u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 79u, 0x0890849Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968480u) goto L_08968480;
    return;
L_08968480:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896849Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 16u, 0x08948114u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896849Cu) goto L_0896849C;
    return;
L_0896849C:
    hot_regs.g31 = (0x089684A4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 452u, 0x0894A1F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089684A4u) goto L_089684A4;
    return;
L_089684A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x089684ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089684ECu) goto L_089684EC;
    return;
L_089684EC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g31 = (0x08968500u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 537u, 0x08A6669Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968500u) goto L_08968500;
    return;
L_08968500:
    hot_regs.g4 = (16457u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (17204u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2256), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0896852Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896852Cu) goto L_0896852C;
    return;
L_0896852C:
    hot_regs.g31 = (0x08968534u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 362u, 0x0890D7C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968534u) goto L_08968534;
    return;
L_08968534:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968540u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 247u, 0x08891B8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968540u) goto L_08968540;
    return;
L_08968540:
    hot_regs.g31 = (0x08968548u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968548u) goto L_08968548;
    return;
L_08968548:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0896855C;
      }
      goto L_08968554;
    }
L_08968554:
    hot_regs.g31 = (0x0896855Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896855Cu) goto L_0896855C;
    return;
L_0896855C:
    hot_regs.g31 = (0x08968564u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 616u, 0x089BAE90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968564u) goto L_08968564;
    return;
L_08968564:
    hot_regs.g31 = (0x0896856Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 231u, 0x08AB92E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896856Cu) goto L_0896856C;
    return;
L_0896856C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08968588:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(9093)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(7) ? 1u : 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), hot_regs.g31);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_089685A8;
    }
}
L_089685A8:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-8608)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089685C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_089685C8;
    }
L_089685C8:
    hot_regs.g31 = (0x089685D0u);
    hot_regs.g4 = (0u | 183u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 607u, 0x08AD3698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089685D0u) goto L_089685D0;
    return;
L_089685D0:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_08968718;
      }
      goto L_089685D8;
    }
L_089685D8:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x089685E4u);
    hot_regs.g4 = (0u | 1920u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 732u, 0x08AFF2C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089685E4u) goto L_089685E4;
    return;
L_089685E4:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g16 == 0u;
    hot_regs.g4 = (g16 | 0u);
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_08968604;
      }
      goto L_089685F0;
    }
}
L_089685F0:
    hot_regs.g5 = (0u | 183u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x08968600u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 92u, 0x08834A84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968600u) goto L_08968600;
    return;
L_08968600:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08968604;
L_08968604:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8968), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08968730;
      }
      goto L_0896860C;
    }
L_0896860C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9104)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9108)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9112)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g5 = (16457u << 16u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.g5 = (hot_regs.g5 | 4059u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9120)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (17204u << 16u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08968650u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968650u) goto L_08968650;
    return;
L_08968650:
    hot_regs.g31 = (0x08968658u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 155u, 0x08848E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968658u) goto L_08968658;
    return;
L_08968658:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (hot_regs.g6 & hot_regs.g5);
    hot_regs.g5 = (hot_regs.g5 | 48u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(72), hot_regs.g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 11u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 0u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5444)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5436)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5444), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(5436), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(9104));
    hot_regs.g31 = (0x089686B8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089686B8u) goto L_089686B8;
    return;
L_089686B8:
    hot_regs.g31 = (0x089686C0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 224u, 0x08891A2Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089686C0u) goto L_089686C0;
    return;
L_089686C0:
    hot_regs.g31 = (0x089686C8u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 106u, 0x08B00708u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089686C8u) goto L_089686C8;
    return;
L_089686C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8968)));
    ctx.gpr[16] = (0u | 2u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(ctx.gpr[16]));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-15972)));
    hot_regs.g4 = g4;
        goto L_089686EC;
    }
    goto L_089686E0;
}
L_089686E0:
    hot_regs.g31 = (0x089686E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089686E8u) goto L_089686E8;
    return;
L_089686E8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    goto L_089686EC;
L_089686EC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x089686F8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089686F8u) goto L_089686F8;
    return;
L_089686F8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    hot_regs.g7 = (0u | 2u);
    hot_regs.g31 = (0x08968710u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880DF30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968710u) goto L_08968710;
    return;
L_08968710:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08968730;
      }
      goto L_08968718;
    }
L_08968718:
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17520));
    hot_regs.g4 = (0u | 183u);
    hot_regs.g31 = (0x08968728u);
    hot_regs.g5 = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 546u, 0x08AD3258u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968728u) goto L_08968728;
    return;
L_08968728:
    hot_regs.g31 = (0x08968730u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 598u, 0x08AD3610u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968730u) goto L_08968730;
    return;
L_08968730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968738;
    }
L_08968738:
    hot_regs.g31 = (0x08968740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968740u) goto L_08968740;
    return;
L_08968740:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 18u);
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_08968768;
      }
      goto L_08968750;
    }
L_08968750:
    hot_regs.g31 = (0x08968758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968758u) goto L_08968758;
    return;
L_08968758:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(2196)));
    hot_regs.g5 = (0u | 17u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896882C;
      }
      goto L_08968768;
    }
L_08968768:
    hot_regs.g31 = (0x08968770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968770u) goto L_08968770;
    return;
L_08968770:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1156)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896882C;
      }
      goto L_08968780;
    }
L_08968780:
    hot_regs.g31 = (0x08968788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968788u) goto L_08968788;
    return;
L_08968788:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (65535u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g5 = (1u << 16u);
    hot_regs.g4 = (hot_regs.g4 | hot_regs.g5);
    hot_regs.g31 = (0x089687A8u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(468), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089687A8u) goto L_089687A8;
    return;
L_089687A8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089687B8u);
    hot_regs.g5 = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089687B8u) goto L_089687B8;
    return;
L_089687B8:
    hot_regs.g31 = (0x089687C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089687C0u) goto L_089687C0;
    return;
L_089687C0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2228));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u | 61u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896882C;
      }
      goto L_089687D4;
    }
}
L_089687D4:
    hot_regs.g31 = (0x089687DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089687DCu) goto L_089687DC;
    return;
L_089687DC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(1156)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_0896882C;
      }
      goto L_089687EC;
    }
L_089687EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896882C;
      }
      goto L_089687FC;
    }
}
L_089687FC:
    hot_regs.g4 = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g31 = (0x0896880Cu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896880Cu) goto L_0896880C;
    return;
L_0896880C:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g4 = (hot_regs.g4 | 256u);
    hot_regs.g31 = (0x0896881Cu);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896881Cu) goto L_0896881C;
    return;
L_0896881C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2318));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    g5 = (g5 | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_0896882C;
}
L_0896882C:
    hot_regs.g31 = (0x08968834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 494u, 0x0896705Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968834u) goto L_08968834;
    return;
L_08968834:
    hot_regs.g31 = (0x0896883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 514u, 0x089671A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896883Cu) goto L_0896883C;
    return;
L_0896883C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968844;
    }
L_08968844:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968850u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968850u) goto L_08968850;
    return;
L_08968850:
    hot_regs.g31 = (0x08968858u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968858u) goto L_08968858;
    return;
L_08968858:
    if (ctx.gpr[16] == hot_regs.g2) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
        goto L_0896889C;
    }
    goto L_08968860;
L_08968860:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x0896886Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896886Cu) goto L_0896886C;
    return;
L_0896886C:
    hot_regs.g31 = (0x08968874u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968874u) goto L_08968874;
    return;
L_08968874:
    if (ctx.gpr[16] == hot_regs.g2) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
        goto L_0896889C;
    }
    goto L_0896887C;
L_0896887C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968888u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968888u) goto L_08968888;
    return;
L_08968888:
    hot_regs.g31 = (0x08968890u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968890u) goto L_08968890;
    return;
L_08968890:
    { const bool branch_taken = ctx.gpr[16] != hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_089689E8;
      }
      goto L_08968898;
    }
L_08968898:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    goto L_0896889C;
L_0896889C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089689E8;
      }
      goto L_089688A8;
    }
}
L_089688A8:
    hot_regs.g31 = (0x089688B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089688B0u) goto L_089688B0;
    return;
L_089688B0:
    if (hot_regs.g2 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
        goto L_089688FC;
    }
    goto L_089688B8;
L_089688B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(636)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(632)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (!ctx.fpu_condition()) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = g4;
        goto L_089688FC;
    }
    goto L_089688D4;
}
L_089688D4:
    hot_regs.g31 = (0x089688DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089688DCu) goto L_089688DC;
    return;
L_089688DC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x089688ECu);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089688ECu) goto L_089688EC;
    return;
L_089688EC:
    hot_regs.g31 = (0x089688F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 494u, 0x0896705Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089688F4u) goto L_089688F4;
    return;
L_089688F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089689F0;
      }
      goto L_089688FC;
    }
L_089688FC:
    hot_regs.g5 = (0u | 8u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(150), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(2500));
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(512), hot_regs.g4);
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08968934u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968934u) goto L_08968934;
    return;
L_08968934:
    hot_regs.g6 = (16416u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08968948u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968948u) goto L_08968948;
    return;
L_08968948:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(7660)));
    hot_regs.g5 = (0u | 4u);
    g4 = (g4 + static_cast<std::uint32_t>(3000));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(9156), g4);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9752)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-9752)));
    hot_regs.g4 = g4;
        goto L_08968994;
    }
    goto L_08968968;
}
L_08968968:
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g31 = (0x08968974u);
    hot_regs.g4 = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 466u, 0x08ABE278u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968974u) goto L_08968974;
    return;
L_08968974:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896898C;
      }
      goto L_08968980;
    }
L_08968980:
    hot_regs.g31 = (0x08968988u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 402u, 0x089F620Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968988u) goto L_08968988;
    return;
L_08968988:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_0896898C;
L_0896898C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752), ctx.gpr[17]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-9752)));
    goto L_08968994;
L_08968994:
    hot_regs.g31 = (0x0896899Cu);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-17448));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 420u, 0x089F6390u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896899Cu) goto L_0896899C;
    return;
L_0896899C:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g5 = (0u | 4500u);
    hot_regs.g31 = (0x089689ACu);
    hot_regs.g6 = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 246u, 0x08AB9448u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089689ACu) goto L_089689AC;
    return;
L_089689AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    hot_regs.g4 = g4;
        goto L_089689C4;
    }
    goto L_089689B8;
}
L_089689B8:
    hot_regs.g31 = (0x089689C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 358u, 0x08B65844u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089689C0u) goto L_089689C0;
    return;
L_089689C0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-15972)));
    goto L_089689C4;
L_089689C4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x089689D0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5852)));
    if (rt.invoke_chained_direct<&recomp_unit_0218_entry, 218u, 139u, 0x08B6CC28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089689D0u) goto L_089689D0;
    return;
L_089689D0:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g31 = (0x089689E0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 422u, 0x0880DD60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089689E0u) goto L_089689E0;
    return;
L_089689E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089689F0;
      }
      goto L_089689E8;
    }
L_089689E8:
    hot_regs.g31 = (0x089689F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 494u, 0x0896705Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089689F0u) goto L_089689F0;
    return;
L_089689F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_089689F8;
    }
L_089689F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9156)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08968B40;
      }
      goto L_08968A0C;
    }
}
L_08968A0C:
    hot_regs.g31 = (0x08968A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 163u, 0x08A114E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A14u) goto L_08968A14;
    return;
L_08968A14:
    ctx.gpr[16] = (ctx.gpr[28] + static_cast<std::uint32_t>(9136));
    hot_regs.g31 = (0x08968A20u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 308u, 0x0880988Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A20u) goto L_08968A20;
    return;
L_08968A20:
    hot_regs.g31 = (0x08968A28u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 587u, 0x08AD3578u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A28u) goto L_08968A28;
    return;
L_08968A28:
    hot_regs.g31 = (0x08968A30u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 585u, 0x08AD3558u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A30u) goto L_08968A30;
    return;
L_08968A30:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08968A40u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 424u, 0x0886A030u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A40u) goto L_08968A40;
    return;
L_08968A40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(112));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08968A68u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A68u) goto L_08968A68;
    return;
L_08968A68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9152)));
    hot_regs.g5 = (16457u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4059u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (17204u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f12 = hot_regs.f12 / hot_regs.f14;
    hot_regs.g31 = (0x08968A90u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 785u, 0x08AAF8ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A90u) goto L_08968A90;
    return;
L_08968A90:
    hot_regs.g31 = (0x08968A98u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 155u, 0x08848E78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968A98u) goto L_08968A98;
    return;
L_08968A98:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (16076u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(16));
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
    hot_regs.g31 = (0x08968ACCu);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968ACCu) goto L_08968ACC;
    return;
L_08968ACC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(500));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(9156), hot_regs.g4);
    hot_regs.g31 = (0x08968AE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 241u, 0x08AB93D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968AE0u) goto L_08968AE0;
    return;
L_08968AE0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    hot_regs.g4 = g4;
        goto L_08968AF8;
    }
    goto L_08968AEC;
}
L_08968AEC:
    hot_regs.g31 = (0x08968AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 351u, 0x08B657E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968AF4u) goto L_08968AF4;
    return;
L_08968AF4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5848)));
    goto L_08968AF8;
L_08968AF8:
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x08968B04u);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 468u, 0x089BA604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968B04u) goto L_08968B04;
    return;
L_08968B04:
    hot_regs.g4 = (2236u << 16u);
    ctx.gpr[16] = (hot_regs.g4 + static_cast<std::uint32_t>(32304));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x08968B20u);
    hot_regs.g7 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 156u, 0x08A1CF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968B20u) goto L_08968B20;
    return;
L_08968B20:
    hot_regs.g6 = (16320u << 16u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g31 = (0x08968B34u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 4u, 0x08A1C044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968B34u) goto L_08968B34;
    return;
L_08968B34:
    hot_regs.g4 = (0u | 5u);
    hot_regs.g31 = (0x08968B40u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 165u, 0x08A11504u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968B40u) goto L_08968B40;
    return;
L_08968B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968B48;
    }
L_08968B48:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(9156)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7660)));
    g4 = (g4 < hot_regs.g5 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08968C14;
      }
      goto L_08968B5C;
    }
}
L_08968B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    g5 = (g4 + g4);
    g6 = (g4 << 8u);
    g4 = (g4 + g5);
    g4 = (g4 << 5u);
    g5 = (2238u << 16u);
    g4 = (g6 + g4);
    g5 = (g5 + static_cast<std::uint32_t>(-6992));
    g4 = (g4 + g5);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(172)));
    g4 = (g4 + static_cast<std::uint32_t>(-9));
    g6 = (static_cast<std::int32_t>(g4) < 0 ? 1u : 0u);
    if (g6 != 0u) {
    g4 = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
        goto L_08968B94;
    }
    goto L_08968B94;
}
L_08968B94:
    hot_regs.g6 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(7800)));
    hot_regs.g7 = (hot_regs.g6 + hot_regs.g6);
    ctx.gpr[8] = (hot_regs.g6 << 8u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (hot_regs.g6 << 5u);
    hot_regs.g6 = (ctx.gpr[8] + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g6 + hot_regs.g5);
    hot_regs.g31 = (0x08968BB8u);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(172), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968BB8u) goto L_08968BB8;
    return;
L_08968BB8:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g4 = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x08968BC8u);
    hot_regs.g5 = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 482u, 0x08ACD698u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968BC8u) goto L_08968BC8;
    return;
L_08968BC8:
    hot_regs.g31 = (0x08968BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968BD0u) goto L_08968BD0;
    return;
L_08968BD0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968BDCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 188u, 0x08910AD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968BDCu) goto L_08968BDC;
    return;
L_08968BDC:
    hot_regs.g4 = (0u | 6u);
    hot_regs.g31 = (0x08968BE8u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(hot_regs.g4));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968BE8u) goto L_08968BE8;
    return;
L_08968BE8:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g2 + static_cast<std::uint32_t>(468)));
    hot_regs.g5 = (65535u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    hot_regs.g31 = (0x08968C00u);
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(468), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C00u) goto L_08968C00;
    return;
L_08968C00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g2 + static_cast<std::uint32_t>(2318));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g5));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08968C14;
}
L_08968C14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968C1C;
    }
L_08968C1C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968C28u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C28u) goto L_08968C28;
    return;
L_08968C28:
    hot_regs.g31 = (0x08968C30u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C30u) goto L_08968C30;
    return;
L_08968C30:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968C38;
    }
L_08968C38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968C44u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C44u) goto L_08968C44;
    return;
L_08968C44:
    hot_regs.g31 = (0x08968C4Cu);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C4Cu) goto L_08968C4C;
    return;
L_08968C4C:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968C54;
    }
L_08968C54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g31 = (0x08968C60u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C60u) goto L_08968C60;
    return;
L_08968C60:
    hot_regs.g31 = (0x08968C68u);
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C68u) goto L_08968C68;
    return;
L_08968C68:
    { const bool branch_taken = ctx.gpr[16] == hot_regs.g2;
    // nop
      if (branch_taken) {
          goto L_08968CDC;
      }
      goto L_08968C70;
    }
L_08968C70:
    hot_regs.g31 = (0x08968C78u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968C78u) goto L_08968C78;
    return;
L_08968C78:
    hot_regs.g4 = (aot_mem.aot_load16(hot_regs.g2 + static_cast<std::uint32_t>(154)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-257));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store16(hot_regs.g2 + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(149), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    hot_regs.g5 = (0u | 18u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(384));
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(151), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g31 = (0x08968CB0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8968)));
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 374u, 0x08B41694u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968CB0u) goto L_08968CB0;
    return;
L_08968CB0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8968)));
    g5 = (0u | 1u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(612), static_cast<std::uint8_t>(g5));
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5444)));
    g5 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(5436)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5444), g4);
    g4 = (g5 + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(5436), g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8968), 0u);
    aot_mem.aot_store8(g28 + static_cast<std::uint32_t>(9093), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_08968CDC;
}
L_08968CDC:
{
    std::uint32_t g29 = hot_regs.g29;
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
L_08968CF0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    hot_regs.g31 = (0x08968D20u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968D20u) goto L_08968D20;
    return;
L_08968D20:
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
L_08968D2C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    g7 = (15374u << 16u);
    g7 = (g7 | 64053u);
    f13 = std::bit_cast<float>(g7);
    { const float fs = f12; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    g7 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g7);
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
    g7 = (ctx.vfpu_scalar_bits_ct<1u>());
    f12 = std::bit_cast<float>(g7);
    g7 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g7);
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
    g7 = (ctx.vfpu_scalar_bits_ct<1u>());
    f14 = std::bit_cast<float>(g7);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    { const float fs = f13; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = hot_regs.g6 != 0u;
    // nop
    hot_regs.g7 = g7;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_08968DCC;
      }
      goto L_08968DA8;
    }
}
}
L_08968DA8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), hot_regs.g6);
      if (branch_taken) {
          goto L_08968F7C;
      }
      goto L_08968DCC;
    }
}
L_08968DCC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (0u | 1u);
    { const bool branch_taken = hot_regs.g6 != hot_regs.g5;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08968EB0;
      }
      goto L_08968DE0;
    }
}
L_08968DE0:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    float f7 = ctx.fpr[7];
    float f8 = ctx.fpr[8];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g7);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    g5 = (std::bit_cast<std::uint32_t>(f16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g5);
    { const float fs = f17; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    { const float fs = f18; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    { const float fs = f18; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    { const float fs = f17; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f7 = std::bit_cast<float>(0x7FC00000u); else f7 = fs * ft; }
    { const float fs = f1; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    f19 = f19 + f2;
    { const float fs = f1; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    { const float fs = f1; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    { const float fs = f0; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f19 = f19 + f5;
    f3 = f3 - f4;
    { const float fs = f18; const float ft = f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    { const float fs = f17; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f8 = std::bit_cast<float>(0x7FC00000u); else f8 = fs * ft; }
    f6 = f6 - f7;
    f16 = f16 - f19;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f3));
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f6));
    f2 = f8 - f2;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f16));
    { const float fs = f13; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    { const float fs = f18; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f15 = f3 + f15;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f2));
    f14 = f6 + f14;
    f13 = f2 + f13;
    { const float fs = f1; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    f15 = f15 + f16;
    f14 = f14 + f18;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    f12 = f13 + f12;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
    ctx.fpr[7] = f7;
    ctx.fpr[8] = f8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
      if (branch_taken) {
          goto L_08968F7C;
      }
      goto L_08968EB0;
    }
}
}
L_08968EB0:
{
    float f0 = ctx.fpr[0];
    float f1 = ctx.fpr[1];
    float f2 = ctx.fpr[2];
    float f3 = ctx.fpr[3];
    float f4 = ctx.fpr[4];
    float f5 = ctx.fpr[5];
    float f6 = ctx.fpr[6];
    float f7 = ctx.fpr[7];
    float f8 = ctx.fpr[8];
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
    float f19 = ctx.fpr[19];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g7);
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    g5 = (std::bit_cast<std::uint32_t>(f16));
    { const float fs = f15; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f19 = std::bit_cast<float>(0x7FC00000u); else f19 = fs * ft; }
    f0 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    { const float fs = f14; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    { const float fs = f13; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f5 = std::bit_cast<float>(0x7FC00000u); else f5 = fs * ft; }
    f1 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    { const float fs = f14; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f3 = std::bit_cast<float>(0x7FC00000u); else f3 = fs * ft; }
    { const float fs = f13; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f4 = std::bit_cast<float>(0x7FC00000u); else f4 = fs * ft; }
    f19 = f19 + f2;
    { const float fs = f13; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f6 = std::bit_cast<float>(0x7FC00000u); else f6 = fs * ft; }
    { const float fs = f15; const float ft = f0; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f7 = std::bit_cast<float>(0x7FC00000u); else f7 = fs * ft; }
    { const float fs = f15; const float ft = f18; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f8 = std::bit_cast<float>(0x7FC00000u); else f8 = fs * ft; }
    { const float fs = f14; const float ft = f17; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f2 = std::bit_cast<float>(0x7FC00000u); else f2 = fs * ft; }
    { const float fs = f12; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    f19 = f19 + f5;
    f3 = f3 - f4;
    f6 = f6 - f7;
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    { const float fs = f18; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f16 = f16 - f19;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f3));
    f2 = f8 - f2;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f6));
    { const float fs = f15; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    { const float fs = f0; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f16));
    f18 = f6 + f18;
    f16 = f3 + f17;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f2));
    { const float fs = f14; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f12 = f2 + f12;
    { const float fs = f13; const float ft = f1; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f16));
    f15 = f16 + f15;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f18));
    f14 = f18 + f14;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = f12 + f13;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = g5;
    ctx.fpr[0] = f0;
    ctx.fpr[1] = f1;
    ctx.fpr[2] = f2;
    ctx.fpr[3] = f3;
    ctx.fpr[4] = f4;
    ctx.fpr[5] = f5;
    ctx.fpr[6] = f6;
    ctx.fpr[7] = f7;
    ctx.fpr[8] = f8;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_08968F7C;
}
}
L_08968F7C:
    hot_regs.g2 = (hot_regs.g4 | 0u);
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F88:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F90:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(24), hot_regs.g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968F9C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968FA4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (ctx.gpr[16] << 5u);
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[20] = (hot_regs.g7 | 0u);
    ctx.gpr[18] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g31);
    hot_regs.g31 = (0x08968FE4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968FE4u) goto L_08968FE4;
    return;
L_08968FE4:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g31 = (0x08968FF8u);
    hot_regs.g6 = (0u | 56u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 28u, 0x08B5814Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08968FF8u) goto L_08968FF8;
    return;
L_08968FF8:
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    hot_regs.g4 = (ctx.gpr[20] & 2u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          goto L_0896901C;
      }
      goto L_0896900C;
    }
}
L_0896900C:
    hot_regs.g31 = (0x08969014u);
    hot_regs.g4 = (ctx.gpr[16] << 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969014u) goto L_08969014;
    return;
L_08969014:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), hot_regs.g2);
      if (branch_taken) {
          goto L_08969020;
      }
      goto L_0896901C;
    }
L_0896901C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), 0u);
    goto L_08969020;
L_08969020:
    hot_regs.g31 = (0x08969028u);
    hot_regs.g4 = (ctx.gpr[16] << 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969028u) goto L_08969028;
    return;
L_08969028:
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), hot_regs.g2);
      if (branch_taken) {
          goto L_089690CC;
      }
      goto L_08969038;
    }
L_08969038:
    hot_regs.g6 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.gpr[9] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g6);
    hot_regs.g5 = (0u | 0u);
    hot_regs.g7 = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    goto L_08969054;
L_08969054:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    g6 = (g6 + hot_regs.g5);
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(4), 0u);
    g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    g6 = (g6 + hot_regs.g5);
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0896907C;
      }
      goto L_0896906C;
    }
}
L_0896906C:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    g6 = (g6 + hot_regs.g5);
    hot_regs.g6 = g6;
    goto L_0896907C;
}
L_0896907C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_08969094;
      }
      goto L_08969084;
    }
L_08969084:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    g6 = (g6 + hot_regs.g5);
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[10]));
    hot_regs.g6 = g6;
    goto L_08969094;
}
L_08969094:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g9 = (g9 + static_cast<std::uint32_t>(36));
    hot_regs.g4 = g4;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_08969054;
      }
      goto L_089690CC;
    }
}
}
L_089690CC:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[19] | 0u);
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
L_089690F0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = (ctx.gpr[16] << 5u);
    hot_regs.g5 = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    ctx.gpr[17] = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x08969124u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(20));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 468u, 0x08ABE29Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969124u) goto L_08969124;
    return;
L_08969124:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    hot_regs.g4 = (g2 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(g2 + static_cast<std::uint32_t>(16), hot_regs.g4);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_08969150:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08969168u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969168u) goto L_08969168;
    return;
L_08969168:
    hot_regs.g31 = (0x08969170u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969170u) goto L_08969170;
    return;
L_08969170:
    hot_regs.g31 = (0x08969178u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969178u) goto L_08969178;
    return;
L_08969178:
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
L_0896918C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969194:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    g4 = (g7 << 3u);
    g4 = (g6 + g4);
    g7 = (g6 | 0u);
    { const bool branch_taken = g7 == g4;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089691E8;
      }
      goto L_089691B0;
    }
}
L_089691B0:
    ctx.gpr[8] = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_089691D0;
      }
      goto L_089691BC;
    }
L_089691BC:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (g7 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = g7 != hot_regs.g4;
    // nop
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_089691B0;
      }
      goto L_089691C8;
    }
}
L_089691C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089691E8;
      }
      goto L_089691D0;
    }
L_089691D0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (hot_regs.g7 - hot_regs.g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g4) >> 3u));
    g5 = (g5 >> 29u);
    g2 = (g4 + g5);
    { const bool branch_taken = 0u == 0u;
    g2 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g2) >> 3u));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_089691EC;
      }
      goto L_089691E8;
    }
}
L_089691E8:
    hot_regs.g2 = (0u | 0u);
    goto L_089691EC;
L_089691EC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089691F4:
{
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(328), g18);
    g18 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(324), ctx.gpr[17]);
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(320), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(332), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(336), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(340), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(344), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(348), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(352), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(356), hot_regs.g31);
    { const bool branch_taken = g18 == 0u;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08969328;
      }
      goto L_08969230;
    }
}
L_08969230:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08969328;
      }
      goto L_0896923C;
    }
L_0896923C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (0x08969248u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 724u, 0x089736F4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969248u) goto L_08969248;
    return;
L_08969248:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_08969284;
      }
      goto L_08969250;
    }
L_08969250:
    hot_regs.g31 = (0x08969258u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 725u, 0x08973704u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969258u) goto L_08969258;
    return;
L_08969258:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969320;
      }
      goto L_08969284;
    }
}
L_08969284:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (g18 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g18 == 0u;
    g4 = (hot_regs.g29 + static_cast<std::uint32_t>(192));
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08969320;
      }
      goto L_089692B4;
    }
}
L_089692B4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(48);
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
    g5 = (g18 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g18 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g18 != 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_089692B4;
      }
      goto L_08969320;
    }
}
L_08969320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896933C;
      }
      goto L_08969328;
    }
L_08969328:
    ctx.execute_vfpu_matrix_init(0u, 4u, 3u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0896933C;
L_0896933C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[19] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(40)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(4));
    g4 = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[21] = (g16 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896949C;
      }
      goto L_0896935C;
    }
}
L_0896935C:
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(256));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-3));
    goto L_08969364;
L_08969364:
    hot_regs.g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    hot_regs.g31 = (0x08969370u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    goto L_08968CF0;
L_08969370:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(304), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(308), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(312), g4);
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
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<39u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    { float vfpu_s[16]{}, vfpu_t[16]{}, vfpu_d[16]{};
      ctx.read_vfpu_matrix(vfpu_s, 4u, 4u);
      ctx.read_vfpu_matrix(vfpu_t, 40u, 4u);
      for (std::uint32_t a = 0; a < 4u; ++a) {
        for (std::uint32_t b = 0; b < 4u; ++b) {
          float sum = 0.0f;
          for (std::uint32_t c = 0; c < 4u; ++c) sum += vfpu_s[b * 4u + c] * vfpu_t[a * 4u + c];
          vfpu_d[a * 4u + b] = sum;
        }
      }
      ctx.write_vfpu_matrix(vfpu_d, 32u, 4u);
      ctx.eat_vfpu_prefixes(); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969434;
      }
      goto L_089693E0;
    }
}
L_089693E0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g20 = ctx.gpr[20];
    std::uint32_t g23 = ctx.gpr[23];
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g23 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g20 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    g5 = (g4 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g5 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(3)));
    g5 = (g5 & ctx.gpr[30]);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(g5));
    hot_regs.g5 = g5;
    goto L_08969434;
}
L_08969434:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    g4 = (g4 & 3u);
    { const bool branch_taken = static_cast<std::int32_t>(g4) > 0;
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969454;
      }
      goto L_08969444;
    }
}
L_08969444:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g4) < 0;
    // nop
      if (branch_taken) {
          goto L_08969480;
      }
      goto L_0896944C;
    }
L_0896944C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08969480;
      }
      goto L_08969454;
    }
L_08969454:
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (static_cast<std::int32_t>(hot_regs.g4) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08969474;
      }
      goto L_0896945C;
    }
L_0896945C:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08969480;
      }
      goto L_08969464;
    }
L_08969464:
{
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g18 = (g18 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08969480;
      }
      goto L_08969474;
    }
}
L_08969474:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_08969480;
      }
      goto L_08969480;
    }
}
L_08969480:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g22 = ctx.gpr[22];
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g22 = (g22 + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(64));
    g4 = (static_cast<std::int32_t>(g22) < static_cast<std::int32_t>(g4) ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    ctx.gpr[22] = g22;
      if (branch_taken) {
          goto L_08969364;
      }
      goto L_0896949C;
    }
}
L_0896949C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(320)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(324)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(328)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(332)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(336)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(340)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(344)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(348)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(352)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(356)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_089694D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x089694E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 472u, 0x08ABE2E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089694E0u) goto L_089694E0;
    return;
L_089694E0:
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
L_089694F0:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(12)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089694F8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(164)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969500:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896950C:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(44)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969514:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(44), hot_regs.g5);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969520:
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
L_08969544:
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
L_08969568:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-128));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(144));
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(hot_regs.f14));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(320));
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
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(128));
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
    jump_target = hot_regs.g31;
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089695E8:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089695F0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089695F8:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969600:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969608:
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1348)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969610:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969618:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969620:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969628:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969630:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1508)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969638:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1072)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969640:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 + static_cast<std::uint32_t>(1508));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969648:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g6 = (hot_regs.g6 & 255u);
    hot_regs.g31 = (0x08969670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 581u, 0x08A5A7FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969670u) goto L_08969670;
    return;
L_08969670:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(23816));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(92), g4);
    g17 = (hot_regs.g29 + static_cast<std::uint32_t>(48));
    g4 = (0u | 8u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(852), g4);
    g4 = (0u | 62u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1508), g4);
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(0u));
    g18 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1552)));
    g5 = (g18 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08969714;
      }
      goto L_089696EC;
    }
}
}
L_089696EC:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x089696FCu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 139u, 0x089D8B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x089696FCu) goto L_089696FC;
    return;
L_089696FC:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g19 != ctx.gpr[18];
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0896970C;
      }
      goto L_08969708;
    }
}
L_08969708:
    ctx.gpr[19] = (0u | 0u);
    goto L_0896970C;
L_0896970C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089696EC;
      }
      goto L_08969714;
    }
L_08969714:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g18 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1556)));
    g5 = (g18 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(16);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(32);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<3u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g17 + static_cast<std::uint32_t>(48);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
    hot_regs.g5 = g5;
    ctx.gpr[18] = g18;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08969794;
      }
      goto L_0896976C;
    }
}
}
L_0896976C:
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0896977Cu);
    hot_regs.g6 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 139u, 0x089D8B0Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896977Cu) goto L_0896977C;
    return;
L_0896977C:
{
    std::uint32_t g19 = ctx.gpr[19];
    g19 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = g19 != ctx.gpr[18];
    // nop
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_0896978C;
      }
      goto L_08969788;
    }
}
L_08969788:
    ctx.gpr[19] = (0u | 0u);
    goto L_0896978C;
L_0896978C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896976C;
      }
      goto L_08969794;
    }
L_08969794:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    f13 = f12 - f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(f13));
    f12 = f12 / f13;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1612), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_089697F0:
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
          goto L_08969838;
      }
      goto L_0896980C;
    }
}
L_0896980C:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(23816));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08969824u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 186u, 0x08A58BC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969824u) goto L_08969824;
    return;
L_08969824:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_08969838;
      }
      goto L_08969830;
    }
L_08969830:
    hot_regs.g31 = (0x08969838u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 734u, 0x08AFF2E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969838u) goto L_08969838;
    return;
L_08969838:
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
L_0896984C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x08969860u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 723u, 0x08A5B780u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969860u) goto L_08969860;
    return;
L_08969860:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896989C;
      }
      goto L_0896986C;
    }
L_0896986C:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(2196)));
    hot_regs.g6 = (0u | 16u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    // nop
      if (branch_taken) {
          goto L_0896989C;
      }
      goto L_0896987C;
    }
L_0896987C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(440));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g4 + static_cast<std::uint32_t>(0))))));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g6);
    jump_target = hot_regs.g7;
    hot_regs.g31 = (0x0896989Cu);
    hot_regs.g6 = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896989Cu) goto L_0896989C;
    return;
L_0896989C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (2u << 16u);
    g4 = (g4 & hot_regs.g5);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_089698B8;
      }
      goto L_089698B8;
    }
}
L_089698B8:
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
L_089698C8:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    g4 = (hot_regs.g5 | 0u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1248)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), hot_regs.g31);
    ctx.set_fpu_condition((f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1256)));
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
    hot_regs.f13 = f13;
        goto L_08969904;
    }
    goto L_089698EC;
}
}
L_089698EC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896998C;
      }
      goto L_08969900;
    }
L_08969900:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1256)));
    goto L_08969904;
L_08969904:
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1584)));
        goto L_0896992C;
    }
    goto L_08969914;
L_08969914:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896998C;
      }
      goto L_08969928;
    }
L_08969928:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(1584)));
    goto L_0896992C;
L_0896992C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17360)));
    f12 = f12 / f13;
    hot_regs.g5 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((f13 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_0896994C;
    }
    goto L_0896994C;
}
L_0896994C:
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17356)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(208)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g5);
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x0896998Cu);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896998Cu) goto L_0896998C;
    return;
L_0896998C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08969998:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1300)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1308)));
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1304)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1312)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1612)));
    hot_regs.g7 = (16256u << 16u);
    f12 = f12 - f13;
    f14 = f14 - hot_regs.f15;
    f17 = std::bit_cast<float>(hot_regs.g7);
    f17 = f17 - f16;
    { const float fs = f16; const float ft = f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f17; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f17 = std::bit_cast<float>(0x7FC00000u); else f17 = fs * ft; }
    f14 = f12 - f14;
    f13 = f13 + f17;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    f12 = std::bit_cast<float>(0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.set_fpu_condition((!(std::isnan(f14) || std::isnan(f12)) && f14 == f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f13));
    { const bool branch_taken = !ctx.fpu_condition();
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(1608)));
    hot_regs.g29 = g29;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
      if (branch_taken) {
          goto L_08969A04;
      }
      goto L_089699F4;
    }
}
}
L_089699F4:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f13) || std::isnan(hot_regs.f12)) && hot_regs.f13 == hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969A14;
      }
      goto L_08969A04;
    }
L_08969A04:
    hot_regs.g31 = (0x08969A0Cu);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 28u, 0x08964540u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969A0Cu) goto L_08969A0C;
    return;
L_08969A0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08969A14;
      }
      goto L_08969A14;
    }
L_08969A14:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
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
L_08969A28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (15759u << 16u);
    g4 = (g4 | 23593u);
    jump_target = hot_regs.g31;
    ctx.fpr[0] = std::bit_cast<float>(g4);
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08969A38:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969A40:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969A48:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-112));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(615))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    ctx.gpr[17] = (g4 | 0u);
    g4 = (hot_regs.g6 & 64u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08969A8C;
      }
      goto L_08969A78;
    }
}
L_08969A78:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969A94;
      }
      goto L_08969A8C;
    }
}
L_08969A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B70;
      }
      goto L_08969A94;
    }
L_08969A94:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g29 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08969AD4u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 538u, 0x08A666C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969AD4u) goto L_08969AD4;
    return;
L_08969AD4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1280))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-3));
    hot_regs.g4 = (hot_regs.g4 & hot_regs.g5);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g4);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x08969B50u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969B50u) goto L_08969B50;
    return;
L_08969B50:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x08969B5Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 877u, 0x08AFFAC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969B5Cu) goto L_08969B5C;
    return;
L_08969B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-497));
    g4 = (g4 & hot_regs.g5);
    g4 = (g4 | 80u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), g4);
    hot_regs.g4 = g4;
    goto L_08969B70;
}
L_08969B70:
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
L_08969B90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(236), g16);
    g16 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(244), ctx.gpr[18]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g16 + static_cast<std::uint32_t>(86))))));
    ctx.gpr[18] = (g6 & 255u);
    g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(248), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(252), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(256), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(260), ctx.gpr[22]);
    ctx.gpr[19] = (0u | 0u);
    g6 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g6) ? 1u : 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[22] = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(264), hot_regs.g31);
    { const bool branch_taken = g6 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_08969BFC;
      }
      goto L_08969BEC;
    }
}
L_08969BEC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[19] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_08969BFC;
}
L_08969BFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(538))))));
    g4 = (g4 & ctx.gpr[20]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(538))))));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(72)));
    g4 = (g4 & ctx.gpr[21]);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(538), static_cast<std::uint8_t>(g4));
    g4 = (g5 & 496u);
    g4 = (g4 >> 4u);
    g5 = (g4 < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_08969C2C;
    }
}
L_08969C2C:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-8576)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_08969C44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    g4 = (g4 & ctx.gpr[20]);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_08969C64;
    }
}
L_08969C64:
    hot_regs.g31 = (0x08969C6Cu);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969C6Cu) goto L_08969C6C;
    return;
L_08969C6C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_08969C74;
    }
L_08969C74:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(240));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(1360)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = (ctx.gpr[16] + hot_regs.g4);
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x08969C98u);
    hot_regs.g5 = (hot_regs.g5 & 255u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969C98u) goto L_08969C98;
    return;
L_08969C98:
    hot_regs.g31 = (0x08969CA0u);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969CA0u) goto L_08969CA0;
    return;
L_08969CA0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    hot_regs.g4 = (16256u << 16u);
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_08969DEC;
      }
      goto L_08969CC4;
    }
L_08969CC4:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1072)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1524)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((!(std::isnan(f15) || std::isnan(ctx.fpr[24])) && f15 == ctx.fpr[24]));
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_08969D0C;
      }
      goto L_08969CF4;
    }
}
}
L_08969CF4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 32u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969D18;
      }
      goto L_08969D0C;
    }
}
L_08969D0C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969D18;
    }
L_08969D18:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f14));
        goto L_08969D60;
    }
    goto L_08969D60;
L_08969D60:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.f13 = hot_regs.f14 + hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    { const float fs = hot_regs.f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(12)));
    { const float fs = hot_regs.f13; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    { const float fs = hot_regs.f13; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
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
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x08969DE4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969DE4u) goto L_08969DE4;
    return;
L_08969DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969DEC;
    }
L_08969DEC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1072)));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(352)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1524)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g4 = (hot_regs.g5 + static_cast<std::uint32_t>(160));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((hot_regs.f15 < ctx.fpr[24]));
    f12 = hot_regs.f14 + f12;
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08969E28;
      }
      goto L_08969E1C;
    }
}
}
L_08969E1C:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1493)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_08969EDC;
      }
      goto L_08969E28;
    }
L_08969E28:
    hot_regs.g4 = (15820u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
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
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
        goto L_08969E68;
    }
    goto L_08969E68;
L_08969E68:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(4)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = ctx.fpr[16]; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_vfpu_scalar_bits_ct<28u>(hot_regs.g7);
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
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g31 = (0x08969EDCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969EDCu) goto L_08969EDC;
    return;
L_08969EDC:
    hot_regs.g31 = (0x08969EE4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 450u, 0x08A930F8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969EE4u) goto L_08969EE4;
    return;
L_08969EE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_08969EFC;
      }
      goto L_08969EF4;
    }
}
L_08969EF4:
    hot_regs.g31 = (0x08969EFCu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 448u, 0x08A42760u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969EFCu) goto L_08969EFC;
    return;
L_08969EFC:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x08969F08u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 334u, 0x08A597ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969F08u) goto L_08969F08;
    return;
L_08969F08:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969F1C;
    }
}
L_08969F1C:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1220)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969F30;
    }
}
L_08969F30:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969F44;
    }
}
L_08969F44:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1228)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(hot_regs.f22)) && f12 == hot_regs.f22));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969F58;
    }
}
L_08969F58:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17428)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17428)));
        goto L_08969FAC;
    }
    goto L_08969F88;
L_08969F88:
    hot_regs.g31 = (0x08969F90u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969F90u) goto L_08969F90;
    return;
L_08969F90:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_08969FE0;
      }
      goto L_08969FA8;
    }
}
L_08969FA8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17428)));
    goto L_08969FAC;
L_08969FAC:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    ctx.set_fpu_condition((hot_regs.f20 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969FC0;
    }
}
L_08969FC0:
    hot_regs.g31 = (0x08969FC8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969FC8u) goto L_08969FC8;
    return;
L_08969FC8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    ctx.set_fpu_condition((f12 <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A050;
      }
      goto L_08969FE0;
    }
}
L_08969FE0:
    hot_regs.g31 = (0x08969FE8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 1086u, 0x0898F36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x08969FE8u) goto L_08969FE8;
    return;
L_08969FE8:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g4 = (15360u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17432)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.g31 = (0x0896A050u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 611u, 0x08A66E08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A050u) goto L_0896A050;
    return;
L_0896A050:
    hot_regs.g31 = (0x0896A058u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    goto L_0896B340;
L_0896A058:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 207u);
    hot_regs.g31 = (0x0896A068u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A068u) goto L_0896A068;
    return;
L_0896A068:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0896A078u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 42u, 0x089482C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A078u) goto L_0896A078;
    return;
L_0896A078:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17416)));
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0896A0C4;
      }
      goto L_0896A08C;
    }
L_0896A08C:
    hot_regs.g31 = (0x0896A094u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 74u, 0x089484D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A094u) goto L_0896A094;
    return;
L_0896A094:
    hot_regs.g4 = (16128u << 16u);
    ctx.set_fpu_condition((ctx.fpr[0] <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g4);
      if (branch_taken) {
          goto L_0896A0DC;
      }
      goto L_0896A0A8;
    }
L_0896A0A8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0DC;
      }
      goto L_0896A0B0;
    }
L_0896A0B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A0DC;
      }
      goto L_0896A0C4;
    }
L_0896A0C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 | 4u);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1272)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A0DC;
    }
}
L_0896A0DC:
    hot_regs.g31 = (0x0896A0E4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 430u, 0x0898D2D8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A0E4u) goto L_0896A0E4;
    return;
L_0896A0E4:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.g4 = (17279u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    f12 = f12 / hot_regs.f13;
    { const float fs = f12; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f22 - f12;
    ctx.set_fpu_condition((f12 < f20));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.f12 = f12;
        goto L_0896A110;
    }
    goto L_0896A110;
}
L_0896A110:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17436)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g31 = (0x0896A124u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 597u, 0x089470B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A124u) goto L_0896A124;
    return;
L_0896A124:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0896A130u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 74u, 0x089484D0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A130u) goto L_0896A130;
    return;
L_0896A130:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A17C;
      }
      goto L_0896A140;
    }
L_0896A140:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16540u << 16u);
    g4 = (g4 | 52429u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    hot_regs.f12 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(ctx.fpr[24])) && f13 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A160;
    }
}
}
L_0896A160:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(608)));
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(ctx.fpr[24])) && f12 == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A174;
    }
}
L_0896A174:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f22));
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A17C;
    }
L_0896A17C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(3264)));
    ctx.set_fpu_condition((hot_regs.f12 < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A1D4;
      }
      goto L_0896A190;
    }
L_0896A190:
    hot_regs.g31 = (0x0896A198u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 434u, 0x0898D300u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A198u) goto L_0896A198;
    return;
L_0896A198:
    if (hot_regs.g2 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
        goto L_0896A1B4;
    }
    goto L_0896A1A0;
L_0896A1A0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (16540u << 16u);
    g4 = (g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A1B4;
    }
}
L_0896A1B4:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17420)));
    f12 = f12 - hot_regs.f13;
    ctx.set_fpu_condition((f12 < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    hot_regs.f12 = f12;
        goto L_0896A1CC;
    }
    goto L_0896A1CC;
}
L_0896A1CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_0896A1D8;
      }
      goto L_0896A1D4;
    }
L_0896A1D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_0896A1D8;
L_0896A1D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A1E0;
    }
L_0896A1E0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A1F0;
    }
}
L_0896A1F0:
    hot_regs.g31 = (0x0896A1F8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A1F8u) goto L_0896A1F8;
    return;
L_0896A1F8:
    hot_regs.g31 = (0x0896A200u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 540u, 0x08A666DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A200u) goto L_0896A200;
    return;
L_0896A200:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A20Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 466u, 0x08B41F6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A20Cu) goto L_0896A20C;
    return;
L_0896A20C:
    hot_regs.g4 = (0u | 2u);
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1494)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1493), static_cast<std::uint8_t>(hot_regs.g4));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1495), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1494), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (16968u << 16u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(520)));
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[16] + static_cast<std::uint32_t>(644));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g31 = (0x0896A240u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 658u, 0x088DBBACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A240u) goto L_0896A240;
    return;
L_0896A240:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    hot_regs.g7 = (16128u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g7);
    hot_regs.g31 = (0x0896A268u);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A268u) goto L_0896A268;
    return;
L_0896A268:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1284)));
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[0];
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g6 = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    hot_regs.g31 = (0x0896A28Cu);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A28Cu) goto L_0896A28C;
    return;
L_0896A28C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1288)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = hot_regs.f12 + ctx.fpr[0];
    hot_regs.g31 = (0x0896A2A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 163u, 0x08A58A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A2A0u) goto L_0896A2A0;
    return;
L_0896A2A0:
    hot_regs.g31 = (0x0896A2A8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 160u, 0x08A58A70u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A2A8u) goto L_0896A2A8;
    return;
L_0896A2A8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(616))))));
    g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.f12 = std::bit_cast<float>(0u);
    g4 = (g4 & g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(617))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(616), static_cast<std::uint8_t>(g4));
    g4 = (g6 & ctx.gpr[21]);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(617), static_cast<std::uint8_t>(g4));
    g4 = (g6 & g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A2DC;
    }
}
L_0896A2DC:
    hot_regs.g31 = (0x0896A2E4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0194_entry, 194u, 658u, 0x08B0EBDCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A2E4u) goto L_0896A2E4;
    return;
L_0896A2E4:
    hot_regs.g31 = (0x0896A2ECu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 442u, 0x08B461ACu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A2ECu) goto L_0896A2EC;
    return;
L_0896A2EC:
    hot_regs.g31 = (0x0896A2F4u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 163u, 0x08A58A8Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A2F4u) goto L_0896A2F4;
    return;
L_0896A2F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    g4 = (hot_regs.g6 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A348;
      }
      goto L_0896A324;
    }
}
L_0896A324:
    hot_regs.g4 = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0896A340u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A340u) goto L_0896A340;
    return;
L_0896A340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A354;
      }
      goto L_0896A348;
    }
L_0896A348:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0896A354;
}
L_0896A354:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A3CC;
      }
      goto L_0896A368;
    }
L_0896A368:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((f12 <= hot_regs.f13));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17408)));
    hot_regs.f12 = f12;
        goto L_0896A3A0;
    }
    goto L_0896A384;
}
L_0896A384:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17412)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A3B4;
      }
      goto L_0896A3A0;
    }
}
L_0896A3A0:
{
    float f12 = hot_regs.f12;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f14 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896A3B4;
}
L_0896A3B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A3CC;
      }
      goto L_0896A3C8;
    }
L_0896A3C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0896A3CC;
L_0896A3CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A3D4;
    }
L_0896A3D4:
    hot_regs.f20 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A41C;
      }
      goto L_0896A40C;
    }
L_0896A40C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A430;
      }
      goto L_0896A41C;
    }
}
L_0896A41C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A428u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A428u) goto L_0896A428;
    return;
L_0896A428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A43C;
      }
      goto L_0896A430;
    }
L_0896A430:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A43Cu);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A43Cu) goto L_0896A43C;
    return;
L_0896A43C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(700), 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    if (g4 != 0u) {
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    hot_regs.g4 = g4;
        goto L_0896A480;
    }
    goto L_0896A450;
}
L_0896A450:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(565)));
    { const bool branch_taken = static_cast<std::int32_t>(g4) <= 0;
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A46C;
      }
      goto L_0896A45C;
    }
}
L_0896A45C:
    hot_regs.g31 = (0x0896A464u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 663u, 0x08AFEF7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A464u) goto L_0896A464;
    return;
L_0896A464:
    if (hot_regs.g2 != 0u) {
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
        goto L_0896A480;
    }
    goto L_0896A46C;
L_0896A46C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A498;
      }
      goto L_0896A47C;
    }
}
L_0896A47C:
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    goto L_0896A480;
L_0896A480:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 & 2u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A498;
      }
      goto L_0896A48C;
    }
}
L_0896A48C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    hot_regs.g4 = g4;
    goto L_0896A498;
}
L_0896A498:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(f20));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(615))))));
    g4 = (g4 & 16u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A4DC;
      }
      goto L_0896A4C0;
    }
}
}
L_0896A4C0:
    hot_regs.g4 = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x0896A4DCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A4DCu) goto L_0896A4DC;
    return;
L_0896A4DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A4E4;
    }
L_0896A4E4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    hot_regs.g4 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (15395u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.f20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896A534;
      }
      goto L_0896A514;
    }
L_0896A514:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A52Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A52Cu) goto L_0896A52C;
    return;
L_0896A52C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0896A548;
      }
      goto L_0896A534;
    }
L_0896A534:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A544u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A544u) goto L_0896A544;
    return;
L_0896A544:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0896A548;
L_0896A548:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(700), 0u);
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (g4 & hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A574;
    }
}
L_0896A574:
    hot_regs.g4 = (15692u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 52429u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896A590u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(608), std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 5u, 0x08B00044u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A590u) goto L_0896A590;
    return;
L_0896A590:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & ctx.gpr[21]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(700), 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896A5CC;
      }
      goto L_0896A5CC;
    }
}
}
L_0896A5CC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_0896A6AC;
      }
      goto L_0896A5DC;
    }
L_0896A5DC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 192u);
    hot_regs.g31 = (0x0896A5ECu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A5ECu) goto L_0896A5EC;
    return;
L_0896A5EC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A614;
      }
      goto L_0896A5F8;
    }
L_0896A5F8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A628;
      }
      goto L_0896A614;
    }
L_0896A614:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 191u);
    hot_regs.g31 = (0x0896A624u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A624u) goto L_0896A624;
    return;
L_0896A624:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    goto L_0896A628;
L_0896A628:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 201u);
    hot_regs.g31 = (0x0896A638u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A638u) goto L_0896A638;
    return;
L_0896A638:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A660;
      }
      goto L_0896A644;
    }
L_0896A644:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A674;
      }
      goto L_0896A660;
    }
L_0896A660:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 202u);
    hot_regs.g31 = (0x0896A670u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A670u) goto L_0896A670;
    return;
L_0896A670:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0896A674;
L_0896A674:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A698;
      }
      goto L_0896A67C;
    }
L_0896A67C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A6AC;
      }
      goto L_0896A698;
    }
L_0896A698:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g5 = (0u | 203u);
    hot_regs.g31 = (0x0896A6A8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A6A8u) goto L_0896A6A8;
    return;
L_0896A6A8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_0896A6AC;
L_0896A6AC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A6D0;
      }
      goto L_0896A6B4;
    }
L_0896A6B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A6F4;
      }
      goto L_0896A6D0;
    }
L_0896A6D0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A770;
      }
      goto L_0896A6D8;
    }
L_0896A6D8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A770;
      }
      goto L_0896A6F4;
    }
}
L_0896A6F4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    hot_regs.f12 = std::bit_cast<float>(0u);
    g4 = (g4 & 32u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896A88C;
      }
      goto L_0896A710;
    }
}
L_0896A710:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A768;
      }
      goto L_0896A72C;
    }
L_0896A72C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1220)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A768;
      }
      goto L_0896A740;
    }
L_0896A740:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A768;
      }
      goto L_0896A754;
    }
L_0896A754:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1228)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A88C;
      }
      goto L_0896A768;
    }
L_0896A768:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_0896A88C;
      }
      goto L_0896A770;
    }
L_0896A770:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    hot_regs.g4 = (16544u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A88C;
      }
      goto L_0896A78C;
    }
L_0896A78C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A7BC;
      }
      goto L_0896A7A8;
    }
L_0896A7A8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1228)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A88C;
      }
      goto L_0896A7BC;
    }
L_0896A7BC:
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
    hot_regs.g5 = (ctx.vfpu_scalar_bits_ct<28u>());
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(352)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(84)));
    hot_regs.f12 = hot_regs.f12 / hot_regs.f13;
    hot_regs.g5 = (16320u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    hot_regs.g5 = (16409u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 39322u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.f13 = hot_regs.f15 - hot_regs.f13;
    hot_regs.g5 = (16384u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A820;
      }
      goto L_0896A818;
    }
L_0896A818:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
      if (branch_taken) {
          goto L_0896A838;
      }
      goto L_0896A820;
    }
L_0896A820:
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A838;
      }
      goto L_0896A834;
    }
L_0896A834:
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0896A838;
L_0896A838:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17424)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (15363u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 4719u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g5);
    { const float fs = hot_regs.f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
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
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(112)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(116)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(120)));
    hot_regs.g31 = (0x0896A88Cu);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A88Cu) goto L_0896A88C;
    return;
L_0896A88C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[22] | 0u);
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(224)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(232)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(236)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(240)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(244)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(248)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(252)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(256)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(260)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(264)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896A8C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(76)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.gpr[16] = (g4 | 0u);
    g4 = (hot_regs.g6 & 1024u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[30]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0896A924;
      }
      goto L_0896A90C;
    }
}
L_0896A90C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A0;
      }
      goto L_0896A914;
    }
L_0896A914:
    hot_regs.g31 = (0x0896A91Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A91Cu) goto L_0896A91C;
    return;
L_0896A91C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A0;
      }
      goto L_0896A924;
    }
L_0896A924:
    ctx.gpr[21] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[21]));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896A93Cu);
    hot_regs.g5 = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A93Cu) goto L_0896A93C;
    return;
L_0896A93C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    if (g4 != 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = g4;
        goto L_0896A96C;
    }
    goto L_0896A948;
}
L_0896A948:
    hot_regs.g31 = (0x0896A950u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A950u) goto L_0896A950;
    return;
L_0896A950:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (16544u << 16u);
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = hot_regs.g2 != 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g4);
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_0896A964;
    }
L_0896A964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9B4;
      }
      goto L_0896A96C;
    }
L_0896A96C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1596)));
    f13 = f13 - f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17368)));
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f13 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(f12));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B308;
      }
      goto L_0896A9A0;
    }
}
}
L_0896A9A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B308;
      }
      goto L_0896A9A8;
    }
L_0896A9A8:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x0896A9B4u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 982u, 0x0890BE50u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A9B4u) goto L_0896A9B4;
    return;
L_0896A9B4:
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(320));
    { const std::uint32_t vfpu_address = hot_regs.g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896A9DCu);
    hot_regs.g5 = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A9DCu) goto L_0896A9DC;
    return;
L_0896A9DC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896A9ECu);
    hot_regs.g5 = (0u | 207u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A9ECu) goto L_0896A9EC;
    return;
L_0896A9EC:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896A9FCu);
    hot_regs.g5 = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896A9FCu) goto L_0896A9FC;
    return;
L_0896A9FC:
    ctx.gpr[22] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896AA0Cu);
    hot_regs.g5 = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AA0Cu) goto L_0896AA0C;
    return;
L_0896AA0C:
    ctx.gpr[23] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896AA1Cu);
    hot_regs.g5 = (0u | 192u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AA1Cu) goto L_0896AA1C;
    return;
L_0896AA1C:
    ctx.gpr[30] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896AA2Cu);
    hot_regs.g5 = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AA2Cu) goto L_0896AA2C;
    return;
L_0896AA2C:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA48;
      }
      goto L_0896AA38;
    }
L_0896AA38:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896AA44u);
    hot_regs.g5 = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AA44u) goto L_0896AA44;
    return;
L_0896AA44:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_0896AA48;
L_0896AA48:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA60;
      }
      goto L_0896AA50;
    }
L_0896AA50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896AA5Cu);
    hot_regs.g5 = (0u | 203u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AA5Cu) goto L_0896AA5C;
    return;
L_0896AA5C:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    goto L_0896AA60;
L_0896AA60:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AA7C;
      }
      goto L_0896AA74;
    }
L_0896AA74:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17400)));
      if (branch_taken) {
          goto L_0896AA80;
      }
      goto L_0896AA7C;
    }
L_0896AA7C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17404)));
    goto L_0896AA80;
L_0896AA80:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1516)));
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896AF18;
      }
      goto L_0896AA98;
    }
}
L_0896AA98:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1524)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AF18;
      }
      goto L_0896AAAC;
    }
L_0896AAAC:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17392)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AF18;
      }
      goto L_0896AAC0;
    }
L_0896AAC0:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF18;
      }
      goto L_0896AAC8;
    }
L_0896AAC8:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17388)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17384)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    { const float fs = hot_regs.f13; const float ft = f20; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f20 = std::bit_cast<float>(0x7FC00000u); else f20 = fs * ft; }
    g5 = (15692u << 16u);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f22));
    g5 = (g5 | 52429u);
    hot_regs.g4 = (0u | 0u);
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0896ABB0;
      }
      goto L_0896AAF0;
    }
}
}
L_0896AAF0:
    ctx.set_fpu_condition((hot_regs.f20 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896ABB0;
      }
      goto L_0896AB00;
    }
L_0896AB00:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB3C;
      }
      goto L_0896AB08;
    }
L_0896AB08:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AB74;
      }
      goto L_0896AB24;
    }
L_0896AB24:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AB74;
      }
      goto L_0896AB3C;
    }
L_0896AB3C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_0896AB54;
    }
    goto L_0896AB48;
}
L_0896AB48:
    hot_regs.g31 = (0x0896AB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AB50u) goto L_0896AB50;
    return;
L_0896AB50:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896AB54;
L_0896AB54:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16512u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1508)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g31 = (0x0896AB6Cu);
    hot_regs.g7 = (0u | 207u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AB6Cu) goto L_0896AB6C;
    return;
L_0896AB6C:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 1u);
    goto L_0896AB74;
L_0896AB74:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g5 = (g5 | 1u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AB98;
      }
      goto L_0896AB84;
    }
}
L_0896AB84:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (g5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AD68;
      }
      goto L_0896AB98;
    }
}
L_0896AB98:
{
    float f12 = hot_regs.f12;
    hot_regs.g5 = (16128u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const float fs = hot_regs.f20; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896AD68;
      }
      goto L_0896ABB0;
    }
}
L_0896ABB0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(604)));
    f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(f13) || std::isnan(f12)) && f13 == f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896ABF0;
      }
      goto L_0896ABC8;
    }
}
L_0896ABC8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1588)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896ABF0;
      }
      goto L_0896ABDC;
    }
L_0896ABDC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g6 = (0u | 32u);
    g5 = (g5 & 496u);
    { const bool branch_taken = g5 != hot_regs.g6;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AC74;
      }
      goto L_0896ABF0;
    }
}
L_0896ABF0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC28;
      }
      goto L_0896ABF8;
    }
L_0896ABF8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AC60;
      }
      goto L_0896AC14;
    }
L_0896AC14:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AC60;
      }
      goto L_0896AC28;
    }
L_0896AC28:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_0896AC40;
    }
    goto L_0896AC34;
}
L_0896AC34:
    hot_regs.g31 = (0x0896AC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AC3Cu) goto L_0896AC3C;
    return;
L_0896AC3C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896AC40;
L_0896AC40:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16512u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1508)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g31 = (0x0896AC58u);
    hot_regs.g7 = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AC58u) goto L_0896AC58;
    return;
L_0896AC58:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 1u);
    goto L_0896AC60;
L_0896AC60:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g18 = ctx.gpr[18];
    g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g5 = (g5 | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AD68;
      }
      goto L_0896AC74;
    }
}
L_0896AC74:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ACAC;
      }
      goto L_0896AC7C;
    }
L_0896AC7C:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    g5 = (16256u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f14));
    // nop
    if (!ctx.fpu_condition()) {
    g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = g5;
        goto L_0896ACE8;
    }
    goto L_0896AC98;
}
L_0896AC98:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_0896ACE8;
    }
    goto L_0896ACAC;
L_0896ACAC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g4 = g4;
        goto L_0896ACC4;
    }
    goto L_0896ACB8;
}
L_0896ACB8:
    hot_regs.g31 = (0x0896ACC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896ACC0u) goto L_0896ACC0;
    return;
L_0896ACC0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    goto L_0896ACC4;
L_0896ACC4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    ctx.gpr[8] = (16512u << 16u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1508)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g31 = (0x0896ACDCu);
    hot_regs.g7 = (0u | 206u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896ACDCu) goto L_0896ACDC;
    return;
L_0896ACDC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (0u | 1u);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_0896ACE8;
L_0896ACE8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (0u + static_cast<std::uint32_t>(-2));
    g5 = (g5 & hot_regs.g6);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), g5);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g5 = (g5 & 32u);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AD68;
      }
      goto L_0896AD0C;
    }
}
L_0896AD0C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1232)));
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AD64;
      }
      goto L_0896AD28;
    }
L_0896AD28:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AD64;
      }
      goto L_0896AD3C;
    }
L_0896AD3C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AD64;
      }
      goto L_0896AD50;
    }
L_0896AD50:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AD68;
      }
      goto L_0896AD64;
    }
L_0896AD64:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_0896AD68;
L_0896AD68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE88;
      }
      goto L_0896AD70;
    }
L_0896AD70:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (50298u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g5);
    g5 = (16585u << 16u);
    hot_regs.f20 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    g5 = (g5 | 4059u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f13 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896AD8C;
    }
}
L_0896AD8C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ADB8;
      }
      goto L_0896AD94;
    }
L_0896AD94:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896ADB8;
      }
      goto L_0896ADB0;
    }
L_0896ADB0:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17376)));
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896ADB8;
    }
L_0896ADB8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ADE4;
      }
      goto L_0896ADC0;
    }
L_0896ADC0:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896ADE4;
      }
      goto L_0896ADDC;
    }
L_0896ADDC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17372)));
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896ADE4;
    }
L_0896ADE4:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896ADEC;
    }
L_0896ADEC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f15 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f14 <= hot_regs.f15));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896AE08;
    }
L_0896AE08:
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17368)));
    goto L_0896AE0C;
L_0896AE0C:
    ctx.set_fpu_condition((hot_regs.f20 <= hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_0896AE64;
    }
    goto L_0896AE1C;
L_0896AE1C:
{
    float f20 = hot_regs.f20;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17380)));
    f20 = hot_regs.f12 - f20;
    f20 = f20 / hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f20 < hot_regs.f14));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_0896AE48;
      }
      goto L_0896AE3C;
    }
}
L_0896AE3C:
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f20 = hot_regs.f20 + hot_regs.f12;
    goto L_0896AE48;
L_0896AE48:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x0896AE5Cu);
    { const float fs = hot_regs.f20; const float ft = hot_regs.f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896AE5Cu) goto L_0896AE5C;
    return;
L_0896AE5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0896AE80;
      }
      goto L_0896AE64;
    }
L_0896AE64:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17380)));
    f12 = hot_regs.f15 - f12;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896AE80;
}
L_0896AE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEC0;
      }
      goto L_0896AE88;
    }
L_0896AE88:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17364)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    ctx.set_vfpu_scalar_bits_ct<32u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0896AEC0;
}
}
L_0896AEC0:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    hot_regs.f12 = f12;
        goto L_0896AEF4;
    }
    goto L_0896AED8;
}
L_0896AED8:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1532)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((f12 <= hot_regs.f22));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896AF10;
      }
      goto L_0896AEF0;
    }
}
L_0896AEF0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    goto L_0896AEF4;
L_0896AEF4:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17396)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1532)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17396)));
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896AF10;
}
}
L_0896AF10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B194;
      }
      goto L_0896AF18;
    }
L_0896AF18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF4C;
      }
      goto L_0896AF20;
    }
L_0896AF20:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AF4C;
      }
      goto L_0896AF38;
    }
L_0896AF38:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AF80;
      }
      goto L_0896AF4C;
    }
L_0896AF4C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AFEC;
      }
      goto L_0896AF54;
    }
L_0896AF54:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    hot_regs.f12 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AFEC;
      }
      goto L_0896AF6C;
    }
L_0896AF6C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896AFEC;
      }
      goto L_0896AF80;
    }
L_0896AF80:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AFA4;
      }
      goto L_0896AF88;
    }
L_0896AF88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    g4 = (49408u << 16u);
    hot_regs.f12 = std::bit_cast<float>(g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g18 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_0896AFA4;
}
L_0896AFA4:
    if (ctx.gpr[17] == 0u) {
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
        goto L_0896AFCC;
    }
    goto L_0896AFAC;
L_0896AFAC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (49408u << 16u);
    f12 = std::bit_cast<float>(g4);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1528)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_0896AFCC;
}
}
L_0896AFCC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17396)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1532)));
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1528), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17396)));
    { const float fs = hot_regs.f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1532), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896B004;
      }
      goto L_0896AFEC;
    }
}
}
L_0896AFEC:
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    hot_regs.g6 = (ctx.gpr[16] + static_cast<std::uint32_t>(1508));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896B004u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 671u, 0x08A63FD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B004u) goto L_0896B004;
    return;
L_0896B004:
    hot_regs.g4 = (ctx.gpr[18] | ctx.gpr[17]);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B04C;
      }
      goto L_0896B010;
    }
L_0896B010:
    if (ctx.gpr[18] != 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
        goto L_0896B020;
    }
    goto L_0896B018;
L_0896B018:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    goto L_0896B020;
L_0896B020:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(32)));
    g4 = (16585u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / hot_regs.f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17380)));
    f12 = hot_regs.f15 - f12;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_0896B054;
      }
      goto L_0896B04C;
    }
}
}
L_0896B04C:
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0896B054;
L_0896B054:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    hot_regs.g4 = (15820u << 16u);
      if (branch_taken) {
          goto L_0896B0A8;
      }
      goto L_0896B05C;
    }
L_0896B05C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B0A8;
      }
      goto L_0896B078;
    }
}
L_0896B078:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17376)));
    f13 = f13 - f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1596)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B184;
      }
      goto L_0896B0A8;
    }
}
}
L_0896B0A8:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    hot_regs.g4 = (15820u << 16u);
      if (branch_taken) {
          goto L_0896B0FC;
      }
      goto L_0896B0B0;
    }
L_0896B0B0:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B0FC;
      }
      goto L_0896B0CC;
    }
}
L_0896B0CC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17372)));
    f13 = f13 - f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1596)));
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B184;
      }
      goto L_0896B0FC;
    }
}
}
L_0896B0FC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    hot_regs.g4 = (15820u << 16u);
      if (branch_taken) {
          goto L_0896B14C;
      }
      goto L_0896B104;
    }
L_0896B104:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    g4 = (g4 | 52429u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B14C;
      }
      goto L_0896B120;
    }
}
L_0896B120:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16256u << 16u);
    f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17368)));
    f13 = f13 - f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B184;
      }
      goto L_0896B14C;
    }
}
L_0896B14C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17364)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    ctx.set_vfpu_scalar_bits_ct<0u>(g4);
    ctx.set_vfpu_scalar_bits_ct<32u>(hot_regs.g5);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    g4 = (ctx.vfpu_scalar_bits_ct<32u>());
    f12 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1596)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1596), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0896B184;
}
}
L_0896B184:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B194;
      }
      goto L_0896B18C;
    }
L_0896B18C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_0896B194;
L_0896B194:
    hot_regs.g31 = (0x0896B19Cu);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B19Cu) goto L_0896B19C;
    return;
L_0896B19C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B1A4;
    }
L_0896B1A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g16 + static_cast<std::uint32_t>(1280))))));
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-17));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1248)));
    g4 = (g4 & hot_regs.g5);
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(g16 + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B258;
      }
      goto L_0896B1C8;
    }
}
L_0896B1C8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B258;
      }
      goto L_0896B1DC;
    }
L_0896B1DC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B258;
      }
      goto L_0896B1F4;
    }
L_0896B1F4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
        goto L_0896B220;
    }
    goto L_0896B208;
L_0896B208:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B258;
      }
      goto L_0896B21C;
    }
L_0896B21C:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    goto L_0896B220;
L_0896B220:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(40)));
    g4 = (16128u << 16u);
    f12 = f13 - f12;
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 < f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B248;
    }
}
}
L_0896B248:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B258;
    }
}
L_0896B258:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B26C;
    }
L_0896B26C:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B280;
    }
L_0896B280:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B294;
    }
L_0896B294:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    if (!ctx.fpu_condition()) {
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
        goto L_0896B2C0;
    }
    goto L_0896B2A8;
L_0896B2A8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f13 <= hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B2BC;
    }
L_0896B2BC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1072)));
    goto L_0896B2C0;
L_0896B2C0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(44)));
    g4 = (16153u << 16u);
    f12 = f13 - f12;
    g4 = (g4 | 39322u);
    hot_regs.f14 = std::bit_cast<float>(g4);
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B2F8;
      }
      goto L_0896B2EC;
    }
}
}
L_0896B2EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1280))))));
    g4 = (g4 | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1280), static_cast<std::uint8_t>(g4));
    hot_regs.g4 = g4;
    goto L_0896B2F8;
}
L_0896B2F8:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1596)));
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12) ^ 0x80000000u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896B308;
}
}
L_0896B308:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[30] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_0896B340:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(900)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (0u | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_0896B378;
      }
      goto L_0896B368;
    }
}
L_0896B368:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (0x0896B374u);
    hot_regs.g5 = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0026_entry, 26u, 206u, 0x0886D4BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B374u) goto L_0896B374;
    return;
L_0896B374:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    goto L_0896B378;
L_0896B378:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B5F0;
      }
      goto L_0896B388;
    }
}
L_0896B388:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5F0;
      }
      goto L_0896B394;
    }
L_0896B394:
    hot_regs.g31 = (0x0896B39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 315u, 0x0890D44Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B39Cu) goto L_0896B39C;
    return;
L_0896B39C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5F0;
      }
      goto L_0896B3A4;
    }
L_0896B3A4:
    hot_regs.g31 = (0x0896B3ACu);
    hot_regs.g4 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 828u, 0x0898B428u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B3ACu) goto L_0896B3AC;
    return;
L_0896B3AC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    hot_regs.g31 = (0x0896B3B8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 998u, 0x0898BD24u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B3B8u) goto L_0896B3B8;
    return;
L_0896B3B8:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.f20 = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0896B444;
      }
      goto L_0896B3C4;
    }
L_0896B3C4:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B444;
      }
      goto L_0896B3D0;
    }
L_0896B3D0:
    ctx.set_fpu_condition((!(std::isnan(hot_regs.f12) || std::isnan(hot_regs.f20)) && hot_regs.f12 == hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B444;
      }
      goto L_0896B3E0;
    }
L_0896B3E0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f12 = f12 + hot_regs.f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_0896B404;
    }
    goto L_0896B3F8;
}
}
L_0896B3F8:
    hot_regs.g31 = (0x0896B400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 313u, 0x08B65564u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B400u) goto L_0896B400;
    return;
L_0896B400:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    goto L_0896B404;
L_0896B404:
    ctx.gpr[8] = (16640u << 16u);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(80)));
    hot_regs.f12 = std::bit_cast<float>(ctx.gpr[8]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5836)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1508)));
    hot_regs.g31 = (0x0896B420u);
    hot_regs.g7 = (0u | 205u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 650u, 0x0893EA14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B420u) goto L_0896B420;
    return;
L_0896B420:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0896B430u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B430u) goto L_0896B430;
    return;
L_0896B430:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (0u + static_cast<std::uint32_t>(-2));
    g4 = (g4 & hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    hot_regs.g4 = g4;
    goto L_0896B444;
}
L_0896B444:
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B518;
      }
      goto L_0896B454;
    }
L_0896B454:
    hot_regs.g4 = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(154)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B48C;
      }
      goto L_0896B460;
    }
L_0896B460:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B468;
    }
L_0896B468:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (49408u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    g4 = (g4 | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B48C;
    }
}
L_0896B48C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B49C;
      }
      goto L_0896B494;
    }
L_0896B494:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(hot_regs.f20));
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B49C;
    }
L_0896B49C:
    hot_regs.g31 = (0x0896B4A4u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 976u, 0x0898BC6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B4A4u) goto L_0896B4A4;
    return;
L_0896B4A4:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B4F0;
      }
      goto L_0896B4AC;
    }
L_0896B4AC:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1584)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    f13 = f12 + f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17360)));
    ctx.set_fpu_condition((f13 <= f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_0896B4D4;
      }
      goto L_0896B4D0;
    }
}
L_0896B4D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0896B4D4;
L_0896B4D4:
    hot_regs.g5 = (15733u << 16u);
    hot_regs.g5 = (hot_regs.g5 | 49807u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0896B4E8u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 73u, 0x08890474u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B4E8u) goto L_0896B4E8;
    return;
L_0896B4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B4F0;
    }
L_0896B4F0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (2199u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 1u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g4);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-26424));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x0896B510u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 95u, 0x088905F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B510u) goto L_0896B510;
    return;
L_0896B510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B518;
    }
L_0896B518:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B540;
      }
      goto L_0896B520;
    }
L_0896B520:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (49408u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    g4 = (g4 | 4u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_0896B540;
}
L_0896B540:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5E8;
      }
      goto L_0896B548;
    }
L_0896B548:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (16128u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B5E8;
      }
      goto L_0896B564;
    }
L_0896B564:
    hot_regs.g31 = (0x0896B56Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 47u, 0x08960424u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B56Cu) goto L_0896B56C;
    return;
L_0896B56C:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g2 + static_cast<std::uint32_t>(1272), std::bit_cast<std::uint32_t>(hot_regs.f20));
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(613))))));
    g4 = (g4 & 32u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B5E8;
      }
      goto L_0896B588;
    }
}
L_0896B588:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B5E0;
      }
      goto L_0896B5A4;
    }
L_0896B5A4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1220)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B5E0;
      }
      goto L_0896B5B8;
    }
L_0896B5B8:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B5E0;
      }
      goto L_0896B5CC;
    }
L_0896B5CC:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1228)));
    ctx.set_fpu_condition((hot_regs.f13 < hot_regs.f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B5E8;
      }
      goto L_0896B5E0;
    }
L_0896B5E0:
    hot_regs.g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1616), static_cast<std::uint8_t>(hot_regs.g4));
    goto L_0896B5E8;
L_0896B5E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B618;
      }
      goto L_0896B5F0;
    }
L_0896B5F0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B618;
      }
      goto L_0896B5F8;
    }
L_0896B5F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (49408u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    g4 = (g4 | 1u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    g4 = (g4 | 4u);
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
    goto L_0896B618;
}
L_0896B618:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
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
L_0896B634:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-496));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(452), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(456), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(460), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(464), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(468), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(472), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(476), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(480), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(484), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(488), hot_regs.g31);
    hot_regs.g31 = (0x0896B678u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 662u, 0x08AFEF74u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B678u) goto L_0896B678;
    return;
L_0896B678:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(616))))));
    ctx.gpr[22] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(20)));
    hot_regs.f20 = std::bit_cast<float>(0u);
    g4 = (g5 & 16u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[19] = (g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (g29 + static_cast<std::uint32_t>(144));
    ctx.gpr[30] = (g29 + static_cast<std::uint32_t>(64));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[23] = (g29 + static_cast<std::uint32_t>(96));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896B7B4;
      }
      goto L_0896B6B4;
    }
}
L_0896B6B4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1316)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1332)));
    f15 = f12 / f13;
    hot_regs.g4 = (16256u << 16u);
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1220)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1216)));
    hot_regs.g5 = (16192u << 16u);
    ctx.set_fpu_condition((f14 < ctx.fpr[16]));
    f12 = std::bit_cast<float>(hot_regs.g4);
    f15 = f12 - f15;
    f13 = std::bit_cast<float>(hot_regs.g5);
    { const bool branch_taken = !ctx.fpu_condition();
    f14 = f12 - f15;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0896B6FC;
      }
      goto L_0896B6E8;
    }
}
}
L_0896B6E8:
{
    float f15 = hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1220)));
    f15 = ctx.fpr[16] - f15;
    f15 = f15 / hot_regs.f14;
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_0896B708;
      }
      goto L_0896B6FC;
    }
}
L_0896B6FC:
{
    float f15 = hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1216)));
    f15 = ctx.fpr[16] - f15;
    f15 = f15 / hot_regs.f14;
    hot_regs.f15 = f15;
    goto L_0896B708;
}
L_0896B708:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((hot_regs.f15 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0896B728;
      }
      goto L_0896B71C;
    }
L_0896B71C:
{
    float f15 = hot_regs.f15;
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    { const float fs = f15; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 - f15;
    hot_regs.f15 = f15;
    goto L_0896B728;
}
L_0896B728:
{
    float f12 = hot_regs.f12;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f17 = ctx.fpr[17];
    float f18 = ctx.fpr[18];
{
    std::uint32_t g16 = ctx.gpr[16];
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1324)));
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1340)));
    f15 = f15 / f16;
    f17 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1300)));
    f18 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1228)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1224)));
    f14 = f14 - f17;
    ctx.set_fpu_condition((f18 < ctx.fpr[19]));
    { const float fs = f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f18 = std::bit_cast<float>(0x7FC00000u); else f18 = fs * ft; }
    f14 = f12 - f15;
    f16 = f17 + f18;
    f12 = f12 - f14;
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1300), std::bit_cast<std::uint32_t>(f16));
    hot_regs.f12 = f12;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
      if (branch_taken) {
          goto L_0896B774;
      }
      goto L_0896B760;
    }
}
}
L_0896B760:
{
    float f14 = hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1228)));
    f14 = hot_regs.f15 - f14;
    hot_regs.f12 = f14 / hot_regs.f12;
    { const bool branch_taken = 0u == 0u;
    // nop
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_0896B780;
      }
      goto L_0896B774;
    }
}
L_0896B774:
{
    float f14 = hot_regs.f14;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1224)));
    f14 = hot_regs.f15 - f14;
    hot_regs.f12 = f14 / hot_regs.f12;
    hot_regs.f14 = f14;
    goto L_0896B780;
}
L_0896B780:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_0896B7A0;
      }
      goto L_0896B794;
    }
L_0896B794:
{
    float f12 = hot_regs.f12;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    { const float fs = f12; const float ft = hot_regs.f15; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f14 = hot_regs.f14 - f12;
    hot_regs.f12 = f12;
    goto L_0896B7A0;
}
L_0896B7A0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1304)));
    f14 = f14 - f12;
    { const float fs = f14; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f12 = f12 + f13;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1304), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    goto L_0896B7B4;
}
L_0896B7B4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 48u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B800;
      }
      goto L_0896B7C8;
    }
}
L_0896B7C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B800;
      }
      goto L_0896B7D8;
    }
}
L_0896B7D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 16u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B800;
      }
      goto L_0896B7EC;
    }
}
L_0896B7EC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 32u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B8DC;
      }
      goto L_0896B800;
    }
}
L_0896B800:
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
    hot_regs.g4 = (0u | 0u);
    goto L_0896B81C;
L_0896B81C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B87C;
      }
      goto L_0896B824;
    }
L_0896B824:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1232)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B85C;
      }
      goto L_0896B83C;
    }
L_0896B83C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B85C;
      }
      goto L_0896B854;
    }
L_0896B854:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8CC;
      }
      goto L_0896B85C;
    }
L_0896B85C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B8CC;
      }
      goto L_0896B874;
    }
L_0896B874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8CC;
      }
      goto L_0896B87C;
    }
L_0896B87C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B8B4;
      }
      goto L_0896B894;
    }
L_0896B894:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B8B4;
      }
      goto L_0896B8AC;
    }
L_0896B8AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8CC;
      }
      goto L_0896B8B4;
    }
L_0896B8B4:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-17440)));
    ctx.set_fpu_condition((hot_regs.f12 < hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896B8CC;
      }
      goto L_0896B8CC;
    }
L_0896B8CC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = (static_cast<std::int32_t>(g4) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896B81C;
      }
      goto L_0896B8DC;
    }
}
L_0896B8DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(944), static_cast<std::uint8_t>(0u));
    hot_regs.g31 = (0x0896B8E8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 312u, 0x08A595C8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B8E8u) goto L_0896B8E8;
    return;
L_0896B8E8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896B8F4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 527u, 0x08A979D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896B8F4u) goto L_0896B8F4;
    return;
L_0896B8F4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), 0u);
    g5 = (g4 & ctx.gpr[21]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7656)));
    g5 = (static_cast<std::int32_t>(g4) < static_cast<std::int32_t>(g5) ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    ctx.gpr[20] = (0u | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_0896B928;
      }
      goto L_0896B918;
    }
}
L_0896B918:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(24)));
    g4 = (g4 << 2u);
    g4 = (hot_regs.g5 + g4);
    ctx.gpr[20] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    goto L_0896B928;
}
L_0896B928:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(600)));
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
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f20));
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g16 + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = g29 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g4 = (g16 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g29 + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1248)));
    ctx.set_fpu_condition((f12 <= f20));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(f20));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
        goto L_0896B9C8;
    }
    goto L_0896B9B0;
}
}
L_0896B9B0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896BA84;
      }
      goto L_0896B9C4;
    }
L_0896B9C4:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0896B9C8;
L_0896B9C8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    g4 = (16128u << 16u);
    f12 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1232)));
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1236)));
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(112));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1316)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = !ctx.fpu_condition();
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0896BA14;
      }
      goto L_0896BA0C;
    }
}
}
L_0896BA0C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1232)));
      if (branch_taken) {
          goto L_0896BA18;
      }
      goto L_0896BA14;
    }
L_0896BA14:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1236)));
    goto L_0896BA18;
L_0896BA18:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
{
    std::uint32_t g23 = ctx.gpr[23];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(432), g23);
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    { const float fs = f15; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = f12 - f15;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    g23 = (g29 + static_cast<std::uint32_t>(192));
    hot_regs.g31 = (0x0896BA48u);
    hot_regs.g5 = (g23 | 0u);
    ctx.gpr[23] = g23;
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    goto L_08969568;
}
}
L_0896BA48:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(432)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x0896BA6Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BA6Cu) goto L_0896BA6C;
    return;
L_0896BA6C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1284)));
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896BA84;
}
}
L_0896BA84:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
        goto L_0896BAB0;
    }
    goto L_0896BA98;
L_0896BA98:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1260)));
    ctx.set_fpu_condition((hot_regs.f12 <= hot_regs.f20));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896BB64;
      }
      goto L_0896BAAC;
    }
L_0896BAAC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(hot_regs.f20));
    goto L_0896BAB0;
L_0896BAB0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f16 = ctx.fpr[16];
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(68)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(100)));
    g4 = (16128u << 16u);
    f12 = f12 + f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1240)));
    hot_regs.f22 = std::bit_cast<float>(g4);
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1244)));
    g4 = (g29 + static_cast<std::uint32_t>(128));
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f16 = std::bit_cast<float>(0x7FC00000u); else f16 = fs * ft; }
    ctx.gpr[17] = (g29 + static_cast<std::uint32_t>(112));
    ctx.set_fpu_condition((hot_regs.f14 < hot_regs.f15));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1324)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(f16));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = !ctx.fpu_condition();
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(72)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    ctx.fpr[16] = f16;
      if (branch_taken) {
          goto L_0896BAFC;
      }
      goto L_0896BAF4;
    }
}
}
L_0896BAF4:
    { const bool branch_taken = 0u == 0u;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1240)));
      if (branch_taken) {
          goto L_0896BB00;
      }
      goto L_0896BAFC;
    }
L_0896BAFC:
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1244)));
    goto L_0896BB00;
L_0896BB00:
{
    float f12 = hot_regs.f12;
    float f15 = hot_regs.f15;
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const float fs = f12; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 - f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    { const float fs = f15; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f12 = f12 - f15;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(208));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x0896BB2Cu);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.f12 = f12;
    hot_regs.f15 = f15;
    goto L_08969568;
}
L_0896BB2C:
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
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1504)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(160));
    hot_regs.g31 = (0x0896BB4Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 209u, 0x08B00C34u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BB4Cu) goto L_0896BB4C;
    return;
L_0896BB4C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(7676)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1288)));
    { const float fs = ctx.fpr[0]; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = hot_regs.f13 + f12;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(1288), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_0896BB64;
}
}
L_0896BB64:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD94;
      }
      goto L_0896BB70;
    }
L_0896BB70:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1544)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0896BB98;
      }
      goto L_0896BB80;
    }
L_0896BB80:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BB9C;
      }
      goto L_0896BB90;
    }
}
L_0896BB90:
    hot_regs.g31 = (0x0896BB98u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BB98u) goto L_0896BB98;
    return;
L_0896BB98:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896BB9C;
L_0896BB9C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x0896BBB4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BBB4u) goto L_0896BBB4;
    return;
L_0896BBB4:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(296), hot_regs.g4);
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(288), hot_regs.g4);
    hot_regs.g31 = (0x0896BBD8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BBD8u) goto L_0896BBD8;
    return;
L_0896BBD8:
    hot_regs.g31 = (0x0896BBE0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BBE0u) goto L_0896BBE0;
    return;
L_0896BBE0:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(340)));
    g4 = (16457u << 16u);
    g4 = (g4 | 4059u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (17204u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(g4);
    f12 = f12 / ctx.fpr[24];
    hot_regs.g31 = (0x0896BC08u);
    // nop
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_08969520;
}
}
L_0896BC08:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(340)));
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f12 / ctx.fpr[24];
    hot_regs.g31 = (0x0896BC1Cu);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    hot_regs.f12 = f12;
    goto L_08969544;
}
L_0896BC1C:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (hot_regs.g29 + static_cast<std::uint32_t>(384));
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
    ctx.gpr[18] = (hot_regs.g29 + static_cast<std::uint32_t>(368));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1512)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    hot_regs.g31 = (0x0896BC64u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 180u, 0x08B1D050u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BC64u) goto L_0896BC64;
    return;
L_0896BC64:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    hot_regs.g31 = (0x0896BC70u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0198_entry, 198u, 181u, 0x08B1D07Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BC70u) goto L_0896BC70;
    return;
L_0896BC70:
    hot_regs.g31 = (0x0896BC78u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BC78u) goto L_0896BC78;
    return;
L_0896BC78:
    hot_regs.g31 = (0x0896BC80u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BC80u) goto L_0896BC80;
    return;
L_0896BC80:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0896BC8Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BC8Cu) goto L_0896BC8C;
    return;
L_0896BC8C:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0896BCA0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BCA0u) goto L_0896BCA0;
    return;
L_0896BCA0:
    hot_regs.g31 = (0x0896BCA8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BCA8u) goto L_0896BCA8;
    return;
L_0896BCA8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1560)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD70;
      }
      goto L_0896BCB4;
    }
L_0896BCB4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1560)));
      if (branch_taken) {
          goto L_0896BCD8;
      }
      goto L_0896BCC0;
    }
L_0896BCC0:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BCDC;
      }
      goto L_0896BCD0;
    }
}
L_0896BCD0:
    hot_regs.g31 = (0x0896BCD8u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BCD8u) goto L_0896BCD8;
    return;
L_0896BCD8:
    hot_regs.g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_0896BCDC;
L_0896BCDC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x0896BCF4u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BCF4u) goto L_0896BCF4;
    return;
L_0896BCF4:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    g4 = (g4 & 496u);
    hot_regs.g5 = (0u | 64u);
    { const bool branch_taken = g4 == hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BD24;
      }
      goto L_0896BD10;
    }
}
L_0896BD10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    hot_regs.g5 = (0u | 80u);
    g4 = (g4 & 496u);
    { const bool branch_taken = g4 != hot_regs.g5;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BD54;
      }
      goto L_0896BD24;
    }
}
L_0896BD24:
    hot_regs.g31 = (0x0896BD2Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 940u, 0x0885FF78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD2Cu) goto L_0896BD2C;
    return;
L_0896BD2C:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0896BD38u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 10u, 0x088603A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD38u) goto L_0896BD38;
    return;
L_0896BD38:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0896BD4Cu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD4Cu) goto L_0896BD4C;
    return;
L_0896BD4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD68;
      }
      goto L_0896BD54;
    }
L_0896BD54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0896BD68u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 943u, 0x0885FFE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD68u) goto L_0896BD68;
    return;
L_0896BD68:
    hot_regs.g31 = (0x0896BD70u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD70u) goto L_0896BD70;
    return;
L_0896BD70:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(296)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BD94;
      }
      goto L_0896BD80;
    }
}
L_0896BD80:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD94;
      }
      goto L_0896BD8C;
    }
L_0896BD8C:
    hot_regs.g31 = (0x0896BD94u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BD94u) goto L_0896BD94;
    return;
L_0896BD94:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1548)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE50;
      }
      goto L_0896BDA0;
    }
L_0896BDA0:
{
    float f12 = hot_regs.f12;
    float f22 = hot_regs.f22;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1304)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1312)));
    f12 = f12 - hot_regs.f13;
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1356)));
    f12 = f12 / hot_regs.f14;
    g4 = (std::bit_cast<std::uint32_t>(f12));
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
    g4 = (ctx.vfpu_scalar_bits_ct<0u>());
    f22 = std::bit_cast<float>(g4);
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f22) ^ 0x80000000u);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1548)));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
      if (branch_taken) {
          goto L_0896BDFC;
      }
      goto L_0896BDE4;
    }
}
}
L_0896BDE4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BE00;
      }
      goto L_0896BDF4;
    }
}
L_0896BDF4:
    hot_regs.g31 = (0x0896BDFCu);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BDFCu) goto L_0896BDFC;
    return;
L_0896BDFC:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896BE00;
L_0896BE00:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x0896BE18u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE18u) goto L_0896BE18;
    return;
L_0896BE18:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.g31 = (0x0896BE34u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE34u) goto L_0896BE34;
    return;
L_0896BE34:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0896BE48u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE48u) goto L_0896BE48;
    return;
L_0896BE48:
    hot_regs.g31 = (0x0896BE50u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE50u) goto L_0896BE50;
    return;
L_0896BE50:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1552)));
      if (branch_taken) {
          goto L_0896BE74;
      }
      goto L_0896BE5C;
    }
L_0896BE5C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BE78;
      }
      goto L_0896BE6C;
    }
}
L_0896BE6C:
    hot_regs.g31 = (0x0896BE74u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE74u) goto L_0896BE74;
    return;
L_0896BE74:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896BE78;
L_0896BE78:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x0896BE90u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BE90u) goto L_0896BE90;
    return;
L_0896BE90:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17345)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BEF4;
      }
      goto L_0896BEA4;
    }
L_0896BEA4:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1300)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1364)));
    g4 = (16128u << 16u);
    f13 = f12 - f13;
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1308)));
    hot_regs.f14 = std::bit_cast<float>(g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(f13));
    g4 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(60)));
    f12 = f12 - hot_regs.f15;
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(36)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1360)));
    f13 = f13 + ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(1368)));
    { const float fs = f12; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f13; const float ft = hot_regs.f14; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    f13 = f13 - ctx.fpr[17];
    f12 = f13 - f12;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_0896BEF4;
}
}
L_0896BEF4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0896BF48;
      }
      goto L_0896BF04;
    }
L_0896BF04:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1284)));
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
    hot_regs.g4 = (15523u << 16u);
    hot_regs.g4 = (hot_regs.g4 | 55050u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x0896BF40u);
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 923u, 0x0885FA28u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BF40u) goto L_0896BF40;
    return;
L_0896BF40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF54;
      }
      goto L_0896BF48;
    }
L_0896BF48:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1284)));
    hot_regs.g31 = (0x0896BF54u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 917u, 0x0885F9B0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BF54u) goto L_0896BF54;
    return;
L_0896BF54:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(96)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(100)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g31 = (0x0896BF68u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 4u, 0x08860094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BF68u) goto L_0896BF68;
    return;
L_0896BF68:
    hot_regs.g31 = (0x0896BF70u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 936u, 0x0885FF14u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BF70u) goto L_0896BF70;
    return;
L_0896BF70:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1556)));
      if (branch_taken) {
          goto L_0896BF94;
      }
      goto L_0896BF7C;
    }
L_0896BF7C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    g4 = (g4 & 1u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_0896BF98;
      }
      goto L_0896BF8C;
    }
}
L_0896BF8C:
    hot_regs.g31 = (0x0896BF94u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 129u, 0x089D89E0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BF94u) goto L_0896BF94;
    return;
L_0896BF94:
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_0896BF98;
L_0896BF98:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    hot_regs.g4 = (hot_regs.g4 & ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), hot_regs.g4);
    hot_regs.g31 = (0x0896BFB0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 939u, 0x0885FF48u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x0896BFB0u) goto L_0896BFB0;
    return;
L_0896BFB0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-17345)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFD8;
      }
      goto L_0896BFC4;
    }
L_0896BFC4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1548)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFD8;
      }
      goto L_0896BFD0;
    }
L_0896BFD0:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1304)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_0896BFD8;
L_0896BFD8:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1077)));
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[18];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 3u, 0x0896C028u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_0896BFE4;
    }
L_0896BFE4:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1288)));
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
    hot_regs.g4 = g4;
    ctx.pc = 0x0896C000u; return;}

}

void recomp_unit_0089(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0089_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_89(Runtime &runtime) {
    runtime.register_generated_unit(89u, 0x08968000u, 16384u, &recomp_unit_0089, &recomp_unit_0089_entry);
    runtime.register_function(0x08968000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968008u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968018u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968020u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896802Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896803Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968048u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968060u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968068u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968070u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968078u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968088u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968108u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896811Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968148u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968158u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896816Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968174u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968180u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968188u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968190u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968198u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968220u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968228u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968234u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896823Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968244u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968250u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968258u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896825Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968264u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896826Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968278u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968280u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968284u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896828Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968294u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896829Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968320u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968350u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968358u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968360u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896839Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896840Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896841Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968428u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968434u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968440u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968448u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896846Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968480u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896849Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896852Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968540u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968548u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896855Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896856Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968600u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896860Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968650u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968658u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968710u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968718u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968728u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968730u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968738u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968740u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968750u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968758u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968768u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968770u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968780u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968788u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896880Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896881Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896882Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968834u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896883Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968844u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968858u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968860u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896886Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968874u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896887Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968888u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968890u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968898u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896889Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968934u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968948u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968968u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968974u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968980u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968988u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896898Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968994u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896899Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968ACCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896900Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969014u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896901Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969020u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969028u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969038u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896906Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896907Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969084u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969094u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969124u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969150u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969168u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969170u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969178u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896918Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969230u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896923Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969250u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969258u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969284u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969320u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969328u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896933Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896935Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969364u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969370u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969434u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896944Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969454u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896945Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969474u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969480u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896949Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896950Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969514u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969520u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969568u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969600u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969608u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969610u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969618u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969620u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969630u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969638u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969640u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969648u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969670u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969708u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896970Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969714u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896976Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896977Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969788u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896978Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969794u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896980Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969824u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969830u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896984Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969860u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896986Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896987Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896989Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969900u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969904u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969914u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969928u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896992Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896994Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896998Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969998u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A050u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A058u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A068u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A078u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A08Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A094u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A110u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A124u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A130u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A140u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A160u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A174u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A17Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A190u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A198u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A200u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A20Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A240u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A268u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A28Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A324u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A340u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A348u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A354u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A368u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A384u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A40Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A41Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A428u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A43Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A45Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A46Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A47Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A480u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A48Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A498u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A514u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A548u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A590u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A614u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A638u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A644u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A660u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A670u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A674u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A67Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A698u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A710u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A72Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A740u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A754u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A768u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A770u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A78Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A818u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A820u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A834u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A88Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A90Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A914u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A91Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A924u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A93Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A948u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A950u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A964u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A96Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AED8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B004u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B010u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B018u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B020u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B04Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B05Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B078u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B104u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B120u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B14Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B184u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B18Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B19Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B208u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B21Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B220u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B258u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B26Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B280u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B294u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B340u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B368u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B374u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B378u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B388u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B394u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B39Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B400u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B404u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B420u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B454u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B460u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B48Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B494u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B49Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B510u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B518u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B520u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B540u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B548u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B56Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B618u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B634u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B678u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B708u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B71Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B728u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B760u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B774u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B780u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B794u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B800u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B81Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B824u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B83Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B854u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B85Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B874u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B87Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B894u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B918u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B928u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFE4u, &recomp_unit_0089, "recomp_unit_0089");
}
} // namespace psprecomp
