#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0045[4055] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0,
    0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0,
    0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0,
    29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0,
    0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 45,
    0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 63,
    0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 68, 0,
    0, 0, 0, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77,
    0, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0,
    86, 0, 0, 0, 0, 0, 87, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 0, 94, 0,
    95, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0,
    0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 0, 0, 106, 107, 108, 0, 109, 110, 0, 0, 0, 0, 0, 0, 111,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116,
    0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 122, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0,
    0, 0, 134, 0, 0, 135, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 150, 0, 0, 0, 151, 0,
    152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0,
    159, 0, 0, 160, 0, 0, 161, 0, 0, 0, 162, 0, 0, 163, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0,
    0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176,
    0, 0, 177, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 0, 191, 192, 0, 0, 0, 193, 0, 194, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 201,
    0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 0, 205, 206, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0,
    0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0,
    0, 219, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0,
    0, 0, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 233, 234, 0, 0, 0, 235, 0, 236, 0, 0,
    0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0,
    0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 256, 0,
    257, 0, 258, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 282, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0,
    292, 0, 0, 293, 0, 0, 0, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0,
    0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 304, 0, 305, 0, 0, 0, 306, 0,
    0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0,
    0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342,
    0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0,
    351, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0,
    371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 385, 0, 0,
    386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0,
    0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 0,
    0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    412, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418,
    0, 0, 0, 0, 419, 0, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424,
    0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 428, 0, 0, 0, 429, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0,
    433, 0, 0, 434, 0, 435, 0, 0, 436, 437, 0, 438, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 444, 445,
    0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451,
    0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 0,
    0, 0, 457, 0, 458, 0, 459, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 466, 0, 467,
    0, 0, 468, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0,
    0, 473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    487, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 495, 0, 496, 0, 0, 497, 0, 0, 498, 0,
    0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 0, 0, 0, 505, 0,
    0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 513, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 522, 0, 523, 0, 0, 0, 524, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 0,
    0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535,
    0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0,
    0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549,
    0, 550, 0, 0, 551, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 568,
    0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0,
    0, 579, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0,
    0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 596, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 601, 0, 0, 0, 602, 0, 0,
    0, 0, 0, 0, 0, 603, 604, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 609, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 0, 0, 613, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 618, 619, 0, 620, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0,
    0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0,
    0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0,
    0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0,
    661, 0, 0, 662, 0, 663, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 667, 0, 668, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 671, 0,
    672, 673, 0, 0, 0, 674, 675, 0, 676, 0, 677, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0,
    0, 0, 684, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0, 0, 689, 690, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0,
    694, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0,
    0, 0, 0, 0, 700, 701, 0, 0, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 707, 0, 0, 708,
    0, 0, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 712, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 717, 0, 0, 0, 0,
    0, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 725, 726, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0,
    0, 729, 730, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    734, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0,
    0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 742, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 753, 0, 754, 0, 0, 0, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0,
    0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 0, 769, 0, 0, 770, 0, 0, 771,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773,
    0, 774, 775, 0, 776, 0, 0, 0, 777, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 780, 0, 781, 782, 783, 0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 786, 0, 787,
};
void recomp_unit_0045_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem, AotHotRegisterCache & PSPRECOMP_RESTRICT hot_regs) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088B8000u;
        entry_id = (entry_delta < 16220u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0045[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088B8000;
    case 2u: goto L_088B8008;
    case 3u: goto L_088B8050;
    case 4u: goto L_088B8060;
    case 5u: goto L_088B80C0;
    case 6u: goto L_088B80EC;
    case 7u: goto L_088B80F8;
    case 8u: goto L_088B810C;
    case 9u: goto L_088B811C;
    case 10u: goto L_088B8128;
    case 11u: goto L_088B8138;
    case 12u: goto L_088B8148;
    case 13u: goto L_088B8154;
    case 14u: goto L_088B8164;
    case 15u: goto L_088B81B0;
    case 16u: goto L_088B81B8;
    case 17u: goto L_088B81D4;
    case 18u: goto L_088B81F8;
    case 19u: goto L_088B8204;
    case 20u: goto L_088B8234;
    case 21u: goto L_088B825C;
    case 22u: goto L_088B8268;
    case 23u: goto L_088B8298;
    case 24u: goto L_088B82C0;
    case 25u: goto L_088B82CC;
    case 26u: goto L_088B82D4;
    case 27u: goto L_088B82DC;
    case 28u: goto L_088B82F8;
    case 29u: goto L_088B8300;
    case 30u: goto L_088B8338;
    case 31u: goto L_088B8344;
    case 32u: goto L_088B84C8;
    case 33u: goto L_088B84D4;
    case 34u: goto L_088B84DC;
    case 35u: goto L_088B84E4;
    case 36u: goto L_088B84F0;
    case 37u: goto L_088B8514;
    case 38u: goto L_088B851C;
    case 39u: goto L_088B8524;
    case 40u: goto L_088B8530;
    case 41u: goto L_088B853C;
    case 42u: goto L_088B8560;
    case 43u: goto L_088B8568;
    case 44u: goto L_088B8570;
    case 45u: goto L_088B857C;
    case 46u: goto L_088B8588;
    case 47u: goto L_088B85BC;
    case 48u: goto L_088B85D8;
    case 49u: goto L_088B85F4;
    case 50u: goto L_088B8610;
    case 51u: goto L_088B862C;
    case 52u: goto L_088B8648;
    case 53u: goto L_088B8664;
    case 54u: goto L_088B8680;
    case 55u: goto L_088B869C;
    case 56u: goto L_088B86A0;
    case 57u: goto L_088B86BC;
    case 58u: goto L_088B86C4;
    case 59u: goto L_088B86E0;
    case 60u: goto L_088B86E8;
    case 61u: goto L_088B86F0;
    case 62u: goto L_088B86F8;
    case 63u: goto L_088B86FC;
    case 64u: goto L_088B8704;
    case 65u: goto L_088B870C;
    case 66u: goto L_088B8720;
    case 67u: goto L_088B8758;
    case 68u: goto L_088B8778;
    case 69u: goto L_088B8790;
    case 70u: goto L_088B8798;
    case 71u: goto L_088B879C;
    case 72u: goto L_088B87BC;
    case 73u: goto L_088B87C8;
    case 74u: goto L_088B87DC;
    case 75u: goto L_088B87EC;
    case 76u: goto L_088B87F4;
    case 77u: goto L_088B87FC;
    case 78u: goto L_088B8808;
    case 79u: goto L_088B8810;
    case 80u: goto L_088B8814;
    case 81u: goto L_088B8840;
    case 82u: goto L_088B8850;
    case 83u: goto L_088B8864;
    case 84u: goto L_088B886C;
    case 85u: goto L_088B8878;
    case 86u: goto L_088B8880;
    case 87u: goto L_088B8898;
    case 88u: goto L_088B889C;
    case 89u: goto L_088B88B0;
    case 90u: goto L_088B88B8;
    case 91u: goto L_088B88CC;
    case 92u: goto L_088B88DC;
    case 93u: goto L_088B88E4;
    case 94u: goto L_088B88F8;
    case 95u: goto L_088B8900;
    case 96u: goto L_088B8920;
    case 97u: goto L_088B8950;
    case 98u: goto L_088B895C;
    case 99u: goto L_088B896C;
    case 100u: goto L_088B8978;
    case 101u: goto L_088B8998;
    case 102u: goto L_088B89A0;
    case 103u: goto L_088B89A8;
    case 104u: goto L_088B89B0;
    case 105u: goto L_088B89B8;
    case 106u: goto L_088B89CC;
    case 107u: goto L_088B89D0;
    case 108u: goto L_088B89D4;
    case 109u: goto L_088B89DC;
    case 110u: goto L_088B89E0;
    case 111u: goto L_088B89FC;
    case 112u: goto L_088B8A30;
    case 113u: goto L_088B8A58;
    case 114u: goto L_088B8A64;
    case 115u: goto L_088B8AF4;
    case 116u: goto L_088B8AFC;
    case 117u: goto L_088B8B0C;
    case 118u: goto L_088B8B18;
    case 119u: goto L_088B8B24;
    case 120u: goto L_088B8B34;
    case 121u: goto L_088B8B40;
    case 122u: goto L_088B8B44;
    case 123u: goto L_088B8B54;
    case 124u: goto L_088B8B60;
    case 125u: goto L_088B8B70;
    case 126u: goto L_088B8B80;
    case 127u: goto L_088B8B9C;
    case 128u: goto L_088B8BA4;
    case 129u: goto L_088B8BC8;
    case 130u: goto L_088B8BD0;
    case 131u: goto L_088B8BE0;
    case 132u: goto L_088B8BEC;
    case 133u: goto L_088B8BF8;
    case 134u: goto L_088B8C08;
    case 135u: goto L_088B8C14;
    case 136u: goto L_088B8C18;
    case 137u: goto L_088B8C28;
    case 138u: goto L_088B8C30;
    case 139u: goto L_088B8C40;
    case 140u: goto L_088B8C50;
    case 141u: goto L_088B8C6C;
    case 142u: goto L_088B8C74;
    case 143u: goto L_088B8C98;
    case 144u: goto L_088B8CA0;
    case 145u: goto L_088B8CB0;
    case 146u: goto L_088B8CBC;
    case 147u: goto L_088B8CC8;
    case 148u: goto L_088B8CD8;
    case 149u: goto L_088B8CE4;
    case 150u: goto L_088B8CE8;
    case 151u: goto L_088B8CF8;
    case 152u: goto L_088B8D00;
    case 153u: goto L_088B8D10;
    case 154u: goto L_088B8D20;
    case 155u: goto L_088B8D3C;
    case 156u: goto L_088B8D44;
    case 157u: goto L_088B8D68;
    case 158u: goto L_088B8D70;
    case 159u: goto L_088B8D80;
    case 160u: goto L_088B8D8C;
    case 161u: goto L_088B8D98;
    case 162u: goto L_088B8DA8;
    case 163u: goto L_088B8DB4;
    case 164u: goto L_088B8DB8;
    case 165u: goto L_088B8DC8;
    case 166u: goto L_088B8DD0;
    case 167u: goto L_088B8DE0;
    case 168u: goto L_088B8DF0;
    case 169u: goto L_088B8E0C;
    case 170u: goto L_088B8E18;
    case 171u: goto L_088B8E3C;
    case 172u: goto L_088B8E44;
    case 173u: goto L_088B8E54;
    case 174u: goto L_088B8E60;
    case 175u: goto L_088B8E6C;
    case 176u: goto L_088B8E7C;
    case 177u: goto L_088B8E88;
    case 178u: goto L_088B8E8C;
    case 179u: goto L_088B8E9C;
    case 180u: goto L_088B8EA4;
    case 181u: goto L_088B8EB4;
    case 182u: goto L_088B8EC4;
    case 183u: goto L_088B8EE0;
    case 184u: goto L_088B8EEC;
    case 185u: goto L_088B8F10;
    case 186u: goto L_088B8F18;
    case 187u: goto L_088B8F28;
    case 188u: goto L_088B8F34;
    case 189u: goto L_088B8F40;
    case 190u: goto L_088B8F50;
    case 191u: goto L_088B8F5C;
    case 192u: goto L_088B8F60;
    case 193u: goto L_088B8F70;
    case 194u: goto L_088B8F78;
    case 195u: goto L_088B8F88;
    case 196u: goto L_088B8F98;
    case 197u: goto L_088B8FB4;
    case 198u: goto L_088B8FC0;
    case 199u: goto L_088B8FE4;
    case 200u: goto L_088B8FEC;
    case 201u: goto L_088B8FFC;
    case 202u: goto L_088B9008;
    case 203u: goto L_088B9014;
    case 204u: goto L_088B9024;
    case 205u: goto L_088B9030;
    case 206u: goto L_088B9034;
    case 207u: goto L_088B9044;
    case 208u: goto L_088B904C;
    case 209u: goto L_088B905C;
    case 210u: goto L_088B906C;
    case 211u: goto L_088B9088;
    case 212u: goto L_088B9094;
    case 213u: goto L_088B90B8;
    case 214u: goto L_088B90C0;
    case 215u: goto L_088B90D0;
    case 216u: goto L_088B90DC;
    case 217u: goto L_088B90E8;
    case 218u: goto L_088B90F8;
    case 219u: goto L_088B9104;
    case 220u: goto L_088B9108;
    case 221u: goto L_088B9118;
    case 222u: goto L_088B9120;
    case 223u: goto L_088B9130;
    case 224u: goto L_088B9140;
    case 225u: goto L_088B915C;
    case 226u: goto L_088B9168;
    case 227u: goto L_088B918C;
    case 228u: goto L_088B9194;
    case 229u: goto L_088B91A4;
    case 230u: goto L_088B91B0;
    case 231u: goto L_088B91BC;
    case 232u: goto L_088B91CC;
    case 233u: goto L_088B91D8;
    case 234u: goto L_088B91DC;
    case 235u: goto L_088B91EC;
    case 236u: goto L_088B91F4;
    case 237u: goto L_088B9204;
    case 238u: goto L_088B9214;
    case 239u: goto L_088B9230;
    case 240u: goto L_088B9240;
    case 241u: goto L_088B9254;
    case 242u: goto L_088B9288;
    case 243u: goto L_088B92A4;
    case 244u: goto L_088B92B8;
    case 245u: goto L_088B92C4;
    case 246u: goto L_088B92C8;
    case 247u: goto L_088B92D8;
    case 248u: goto L_088B92F8;
    case 249u: goto L_088B9304;
    case 250u: goto L_088B9310;
    case 251u: goto L_088B9318;
    case 252u: goto L_088B932C;
    case 253u: goto L_088B9334;
    case 254u: goto L_088B933C;
    case 255u: goto L_088B936C;
    case 256u: goto L_088B9378;
    case 257u: goto L_088B9380;
    case 258u: goto L_088B9388;
    case 259u: goto L_088B9394;
    case 260u: goto L_088B939C;
    case 261u: goto L_088B93A4;
    case 262u: goto L_088B93BC;
    case 263u: goto L_088B93CC;
    case 264u: goto L_088B93E8;
    case 265u: goto L_088B9434;
    case 266u: goto L_088B9490;
    case 267u: goto L_088B9498;
    case 268u: goto L_088B94A0;
    case 269u: goto L_088B94B4;
    case 270u: goto L_088B94BC;
    case 271u: goto L_088B94D0;
    case 272u: goto L_088B94E0;
    case 273u: goto L_088B950C;
    case 274u: goto L_088B951C;
    case 275u: goto L_088B9528;
    case 276u: goto L_088B9530;
    case 277u: goto L_088B9538;
    case 278u: goto L_088B9540;
    case 279u: goto L_088B9550;
    case 280u: goto L_088B9558;
    case 281u: goto L_088B9560;
    case 282u: goto L_088B9564;
    case 283u: goto L_088B9570;
    case 284u: goto L_088B9590;
    case 285u: goto L_088B9598;
    case 286u: goto L_088B95A0;
    case 287u: goto L_088B95A8;
    case 288u: goto L_088B95B4;
    case 289u: goto L_088B95CC;
    case 290u: goto L_088B95D4;
    case 291u: goto L_088B95EC;
    case 292u: goto L_088B9600;
    case 293u: goto L_088B960C;
    case 294u: goto L_088B9620;
    case 295u: goto L_088B962C;
    case 296u: goto L_088B963C;
    case 297u: goto L_088B9650;
    case 298u: goto L_088B966C;
    case 299u: goto L_088B9688;
    case 300u: goto L_088B9694;
    case 301u: goto L_088B969C;
    case 302u: goto L_088B96B8;
    case 303u: goto L_088B96DC;
    case 304u: goto L_088B96E0;
    case 305u: goto L_088B96E8;
    case 306u: goto L_088B96F8;
    case 307u: goto L_088B9704;
    case 308u: goto L_088B970C;
    case 309u: goto L_088B9714;
    case 310u: goto L_088B971C;
    case 311u: goto L_088B9724;
    case 312u: goto L_088B972C;
    case 313u: goto L_088B9734;
    case 314u: goto L_088B973C;
    case 315u: goto L_088B9758;
    case 316u: goto L_088B9760;
    case 317u: goto L_088B9774;
    case 318u: goto L_088B9788;
    case 319u: goto L_088B9798;
    case 320u: goto L_088B97A0;
    case 321u: goto L_088B97C0;
    case 322u: goto L_088B97CC;
    case 323u: goto L_088B97D8;
    case 324u: goto L_088B9800;
    case 325u: goto L_088B9808;
    case 326u: goto L_088B9810;
    case 327u: goto L_088B9830;
    case 328u: goto L_088B9838;
    case 329u: goto L_088B9840;
    case 330u: goto L_088B9848;
    case 331u: goto L_088B985C;
    case 332u: goto L_088B9890;
    case 333u: goto L_088B98A0;
    case 334u: goto L_088B98BC;
    case 335u: goto L_088B98C8;
    case 336u: goto L_088B98D0;
    case 337u: goto L_088B98EC;
    case 338u: goto L_088B9924;
    case 339u: goto L_088B9930;
    case 340u: goto L_088B9960;
    case 341u: goto L_088B9970;
    case 342u: goto L_088B997C;
    case 343u: goto L_088B9988;
    case 344u: goto L_088B9998;
    case 345u: goto L_088B99A8;
    case 346u: goto L_088B99B4;
    case 347u: goto L_088B99C8;
    case 348u: goto L_088B99D4;
    case 349u: goto L_088B99DC;
    case 350u: goto L_088B99EC;
    case 351u: goto L_088B9A00;
    case 352u: goto L_088B9A04;
    case 353u: goto L_088B9A10;
    case 354u: goto L_088B9A20;
    case 355u: goto L_088B9A30;
    case 356u: goto L_088B9A3C;
    case 357u: goto L_088B9A44;
    case 358u: goto L_088B9A50;
    case 359u: goto L_088B9A5C;
    case 360u: goto L_088B9A78;
    case 361u: goto L_088B9AB0;
    case 362u: goto L_088B9ABC;
    case 363u: goto L_088B9AC8;
    case 364u: goto L_088B9AD4;
    case 365u: goto L_088B9B00;
    case 366u: goto L_088B9B1C;
    case 367u: goto L_088B9B38;
    case 368u: goto L_088B9B54;
    case 369u: goto L_088B9B5C;
    case 370u: goto L_088B9B78;
    case 371u: goto L_088B9B80;
    case 372u: goto L_088B9B88;
    case 373u: goto L_088B9B90;
    case 374u: goto L_088B9B98;
    case 375u: goto L_088B9BA0;
    case 376u: goto L_088B9BB0;
    case 377u: goto L_088B9BB8;
    case 378u: goto L_088B9BD4;
    case 379u: goto L_088B9BDC;
    case 380u: goto L_088B9C14;
    case 381u: goto L_088B9C1C;
    case 382u: goto L_088B9C2C;
    case 383u: goto L_088B9C5C;
    case 384u: goto L_088B9C64;
    case 385u: goto L_088B9C74;
    case 386u: goto L_088B9C80;
    case 387u: goto L_088B9C8C;
    case 388u: goto L_088B9CB0;
    case 389u: goto L_088B9CCC;
    case 390u: goto L_088B9CEC;
    case 391u: goto L_088B9D24;
    case 392u: goto L_088B9D2C;
    case 393u: goto L_088B9D34;
    case 394u: goto L_088B9D3C;
    case 395u: goto L_088B9DE0;
    case 396u: goto L_088B9E24;
    case 397u: goto L_088B9E3C;
    case 398u: goto L_088B9E70;
    case 399u: goto L_088B9EA4;
    case 400u: goto L_088B9EB8;
    case 401u: goto L_088B9EF4;
    case 402u: goto L_088B9F14;
    case 403u: goto L_088B9F28;
    case 404u: goto L_088B9F40;
    case 405u: goto L_088B9F48;
    case 406u: goto L_088B9F5C;
    case 407u: goto L_088B9F78;
    case 408u: goto L_088B9F90;
    case 409u: goto L_088B9F98;
    case 410u: goto L_088B9FA0;
    case 411u: goto L_088B9FCC;
    case 412u: goto L_088BA000;
    case 413u: goto L_088BA00C;
    case 414u: goto L_088BA020;
    case 415u: goto L_088BA030;
    case 416u: goto L_088BA04C;
    case 417u: goto L_088BA068;
    case 418u: goto L_088BA07C;
    case 419u: goto L_088BA090;
    case 420u: goto L_088BA09C;
    case 421u: goto L_088BA0A4;
    case 422u: goto L_088BA0B8;
    case 423u: goto L_088BA0D0;
    case 424u: goto L_088BA0FC;
    case 425u: goto L_088BA120;
    case 426u: goto L_088BA128;
    case 427u: goto L_088BA134;
    case 428u: goto L_088BA138;
    case 429u: goto L_088BA148;
    case 430u: goto L_088BA154;
    case 431u: goto L_088BA160;
    case 432u: goto L_088BA170;
    case 433u: goto L_088BA180;
    case 434u: goto L_088BA18C;
    case 435u: goto L_088BA194;
    case 436u: goto L_088BA1A0;
    case 437u: goto L_088BA1A4;
    case 438u: goto L_088BA1AC;
    case 439u: goto L_088BA1B8;
    case 440u: goto L_088BA1C8;
    case 441u: goto L_088BA1DC;
    case 442u: goto L_088BA1E4;
    case 443u: goto L_088BA1EC;
    case 444u: goto L_088BA1F8;
    case 445u: goto L_088BA1FC;
    case 446u: goto L_088BA204;
    case 447u: goto L_088BA20C;
    case 448u: goto L_088BA220;
    case 449u: goto L_088BA248;
    case 450u: goto L_088BA268;
    case 451u: goto L_088BA27C;
    case 452u: goto L_088BA288;
    case 453u: goto L_088BA2A0;
    case 454u: goto L_088BA2C4;
    case 455u: goto L_088BA2D8;
    case 456u: goto L_088BA2E4;
    case 457u: goto L_088BA308;
    case 458u: goto L_088BA310;
    case 459u: goto L_088BA318;
    case 460u: goto L_088BA31C;
    case 461u: goto L_088BA324;
    case 462u: goto L_088BA330;
    case 463u: goto L_088BA338;
    case 464u: goto L_088BA360;
    case 465u: goto L_088BA368;
    case 466u: goto L_088BA374;
    case 467u: goto L_088BA37C;
    case 468u: goto L_088BA388;
    case 469u: goto L_088BA38C;
    case 470u: goto L_088BA3A4;
    case 471u: goto L_088BA3C4;
    case 472u: goto L_088BA3F8;
    case 473u: goto L_088BA404;
    case 474u: goto L_088BA40C;
    case 475u: goto L_088BA418;
    case 476u: goto L_088BA430;
    case 477u: goto L_088BA450;
    case 478u: goto L_088BA48C;
    case 479u: goto L_088BA4A4;
    case 480u: goto L_088BA4BC;
    case 481u: goto L_088BA4D0;
    case 482u: goto L_088BA510;
    case 483u: goto L_088BA530;
    case 484u: goto L_088BA538;
    case 485u: goto L_088BA540;
    case 486u: goto L_088BA54C;
    case 487u: goto L_088BA580;
    case 488u: goto L_088BA584;
    case 489u: goto L_088BA598;
    case 490u: goto L_088BA5AC;
    case 491u: goto L_088BA5B4;
    case 492u: goto L_088BA5BC;
    case 493u: goto L_088BA5C4;
    case 494u: goto L_088BA5D0;
    case 495u: goto L_088BA5D8;
    case 496u: goto L_088BA5E0;
    case 497u: goto L_088BA5EC;
    case 498u: goto L_088BA5F8;
    case 499u: goto L_088BA618;
    case 500u: goto L_088BA62C;
    case 501u: goto L_088BA648;
    case 502u: goto L_088BA650;
    case 503u: goto L_088BA65C;
    case 504u: goto L_088BA664;
    case 505u: goto L_088BA678;
    case 506u: goto L_088BA688;
    case 507u: goto L_088BA698;
    case 508u: goto L_088BA6A4;
    case 509u: goto L_088BA6AC;
    case 510u: goto L_088BA6C8;
    case 511u: goto L_088BA6D0;
    case 512u: goto L_088BA6DC;
    case 513u: goto L_088BA6E0;
    case 514u: goto L_088BA6F0;
    case 515u: goto L_088BA70C;
    case 516u: goto L_088BA720;
    case 517u: goto L_088BA728;
    case 518u: goto L_088BA740;
    case 519u: goto L_088BA768;
    case 520u: goto L_088BA794;
    case 521u: goto L_088BA7A4;
    case 522u: goto L_088BA7A8;
    case 523u: goto L_088BA7B0;
    case 524u: goto L_088BA7C0;
    case 525u: goto L_088BA7C4;
    case 526u: goto L_088BA7CC;
    case 527u: goto L_088BA7D8;
    case 528u: goto L_088BA7EC;
    case 529u: goto L_088BA804;
    case 530u: goto L_088BA818;
    case 531u: goto L_088BA82C;
    case 532u: goto L_088BA840;
    case 533u: goto L_088BA854;
    case 534u: goto L_088BA868;
    case 535u: goto L_088BA87C;
    case 536u: goto L_088BA890;
    case 537u: goto L_088BA898;
    case 538u: goto L_088BA8A8;
    case 539u: goto L_088BA8B8;
    case 540u: goto L_088BA8C8;
    case 541u: goto L_088BA8CC;
    case 542u: goto L_088BA978;
    case 543u: goto L_088BA994;
    case 544u: goto L_088BA99C;
    case 545u: goto L_088BA9A4;
    case 546u: goto L_088BA9C0;
    case 547u: goto L_088BA9C8;
    case 548u: goto L_088BA9D4;
    case 549u: goto L_088BA9FC;
    case 550u: goto L_088BAA04;
    case 551u: goto L_088BAA10;
    case 552u: goto L_088BAA18;
    case 553u: goto L_088BAA2C;
    case 554u: goto L_088BAA4C;
    case 555u: goto L_088BAA84;
    case 556u: goto L_088BAA8C;
    case 557u: goto L_088BAAB8;
    case 558u: goto L_088BAAC0;
    case 559u: goto L_088BAAD0;
    case 560u: goto L_088BAAD8;
    case 561u: goto L_088BAAEC;
    case 562u: goto L_088BAB0C;
    case 563u: goto L_088BAB44;
    case 564u: goto L_088BAB4C;
    case 565u: goto L_088BAB60;
    case 566u: goto L_088BABB4;
    case 567u: goto L_088BABDC;
    case 568u: goto L_088BABFC;
    case 569u: goto L_088BAC14;
    case 570u: goto L_088BAC28;
    case 571u: goto L_088BAC3C;
    case 572u: goto L_088BAC40;
    case 573u: goto L_088BAC48;
    case 574u: goto L_088BAC50;
    case 575u: goto L_088BAC58;
    case 576u: goto L_088BAC60;
    case 577u: goto L_088BAC68;
    case 578u: goto L_088BAC70;
    case 579u: goto L_088BAC84;
    case 580u: goto L_088BAC88;
    case 581u: goto L_088BAC90;
    case 582u: goto L_088BAC98;
    case 583u: goto L_088BACA0;
    case 584u: goto L_088BACA8;
    case 585u: goto L_088BACB0;
    case 586u: goto L_088BACB8;
    case 587u: goto L_088BACC4;
    case 588u: goto L_088BACCC;
    case 589u: goto L_088BACD4;
    case 590u: goto L_088BACDC;
    case 591u: goto L_088BACE4;
    case 592u: goto L_088BACF4;
    case 593u: goto L_088BAD0C;
    case 594u: goto L_088BAD14;
    case 595u: goto L_088BAD1C;
    case 596u: goto L_088BAE04;
    case 597u: goto L_088BAE08;
    case 598u: goto L_088BAE20;
    case 599u: goto L_088BAE48;
    case 600u: goto L_088BAE60;
    case 601u: goto L_088BAE64;
    case 602u: goto L_088BAE74;
    case 603u: goto L_088BAE94;
    case 604u: goto L_088BAE98;
    case 605u: goto L_088BAEA0;
    case 606u: goto L_088BAEA8;
    case 607u: goto L_088BAEB4;
    case 608u: goto L_088BAEBC;
    case 609u: goto L_088BAEC4;
    case 610u: goto L_088BAEC8;
    case 611u: goto L_088BAED0;
    case 612u: goto L_088BAED8;
    case 613u: goto L_088BAEF8;
    case 614u: goto L_088BAF20;
    case 615u: goto L_088BAF2C;
    case 616u: goto L_088BAF44;
    case 617u: goto L_088BAF4C;
    case 618u: goto L_088BAF64;
    case 619u: goto L_088BAF68;
    case 620u: goto L_088BAF70;
    case 621u: goto L_088BAFB0;
    case 622u: goto L_088BAFC0;
    case 623u: goto L_088BAFE8;
    case 624u: goto L_088BB01C;
    case 625u: goto L_088BB024;
    case 626u: goto L_088BB030;
    case 627u: goto L_088BB038;
    case 628u: goto L_088BB068;
    case 629u: goto L_088BB078;
    case 630u: goto L_088BB084;
    case 631u: goto L_088BB08C;
    case 632u: goto L_088BB09C;
    case 633u: goto L_088BB0AC;
    case 634u: goto L_088BB0B8;
    case 635u: goto L_088BB0C0;
    case 636u: goto L_088BB0CC;
    case 637u: goto L_088BB0D4;
    case 638u: goto L_088BB0E8;
    case 639u: goto L_088BB0F0;
    case 640u: goto L_088BB0F8;
    case 641u: goto L_088BB108;
    case 642u: goto L_088BB114;
    case 643u: goto L_088BB11C;
    case 644u: goto L_088BB130;
    case 645u: goto L_088BB13C;
    case 646u: goto L_088BB15C;
    case 647u: goto L_088BB1AC;
    case 648u: goto L_088BB1B8;
    case 649u: goto L_088BB1C0;
    case 650u: goto L_088BB1C8;
    case 651u: goto L_088BB1E0;
    case 652u: goto L_088BB1F8;
    case 653u: goto L_088BB20C;
    case 654u: goto L_088BB21C;
    case 655u: goto L_088BB22C;
    case 656u: goto L_088BB238;
    case 657u: goto L_088BB24C;
    case 658u: goto L_088BB254;
    case 659u: goto L_088BB264;
    case 660u: goto L_088BB270;
    case 661u: goto L_088BB280;
    case 662u: goto L_088BB28C;
    case 663u: goto L_088BB294;
    case 664u: goto L_088BB2A0;
    case 665u: goto L_088BB2B4;
    case 666u: goto L_088BB2BC;
    case 667u: goto L_088BB2C0;
    case 668u: goto L_088BB2C8;
    case 669u: goto L_088BB2D8;
    case 670u: goto L_088BB2E4;
    case 671u: goto L_088BB2F8;
    case 672u: goto L_088BB300;
    case 673u: goto L_088BB304;
    case 674u: goto L_088BB314;
    case 675u: goto L_088BB318;
    case 676u: goto L_088BB320;
    case 677u: goto L_088BB328;
    case 678u: goto L_088BB330;
    case 679u: goto L_088BB360;
    case 680u: goto L_088BB3BC;
    case 681u: goto L_088BB3C8;
    case 682u: goto L_088BB3DC;
    case 683u: goto L_088BB3E8;
    case 684u: goto L_088BB408;
    case 685u: goto L_088BB414;
    case 686u: goto L_088BB428;
    case 687u: goto L_088BB434;
    case 688u: goto L_088BB43C;
    case 689u: goto L_088BB448;
    case 690u: goto L_088BB44C;
    case 691u: goto L_088BB458;
    case 692u: goto L_088BB468;
    case 693u: goto L_088BB470;
    case 694u: goto L_088BB480;
    case 695u: goto L_088BB498;
    case 696u: goto L_088BB4A0;
    case 697u: goto L_088BB4BC;
    case 698u: goto L_088BB4E8;
    case 699u: goto L_088BB4F4;
    case 700u: goto L_088BB510;
    case 701u: goto L_088BB514;
    case 702u: goto L_088BB52C;
    case 703u: goto L_088BB53C;
    case 704u: goto L_088BB570;
    case 705u: goto L_088BB598;
    case 706u: goto L_088BB5EC;
    case 707u: goto L_088BB5F0;
    case 708u: goto L_088BB5FC;
    case 709u: goto L_088BB614;
    case 710u: goto L_088BB61C;
    case 711u: goto L_088BB624;
    case 712u: goto L_088BB70C;
    case 713u: goto L_088BB710;
    case 714u: goto L_088BB728;
    case 715u: goto L_088BB750;
    case 716u: goto L_088BB768;
    case 717u: goto L_088BB76C;
    case 718u: goto L_088BB788;
    case 719u: goto L_088BB7B4;
    case 720u: goto L_088BB7B8;
    case 721u: goto L_088BB7C0;
    case 722u: goto L_088BB7D4;
    case 723u: goto L_088BB818;
    case 724u: goto L_088BB840;
    case 725u: goto L_088BB84C;
    case 726u: goto L_088BB850;
    case 727u: goto L_088BB85C;
    case 728u: goto L_088BB864;
    case 729u: goto L_088BB884;
    case 730u: goto L_088BB888;
    case 731u: goto L_088BB8AC;
    case 732u: goto L_088BB8B4;
    case 733u: goto L_088BB8C8;
    case 734u: goto L_088BB900;
    case 735u: goto L_088BB908;
    case 736u: goto L_088BB910;
    case 737u: goto L_088BB930;
    case 738u: goto L_088BB974;
    case 739u: goto L_088BB990;
    case 740u: goto L_088BBA34;
    case 741u: goto L_088BBB44;
    case 742u: goto L_088BBB48;
    case 743u: goto L_088BBB50;
    case 744u: goto L_088BBB5C;
    case 745u: goto L_088BBB70;
    case 746u: goto L_088BBB98;
    case 747u: goto L_088BBBAC;
    case 748u: goto L_088BBBD0;
    case 749u: goto L_088BBBE8;
    case 750u: goto L_088BBBF8;
    case 751u: goto L_088BBC44;
    case 752u: goto L_088BBC50;
    case 753u: goto L_088BBC58;
    case 754u: goto L_088BBC60;
    case 755u: goto L_088BBC80;
    case 756u: goto L_088BBC98;
    case 757u: goto L_088BBCAC;
    case 758u: goto L_088BBCBC;
    case 759u: goto L_088BBCCC;
    case 760u: goto L_088BBCD8;
    case 761u: goto L_088BBD00;
    case 762u: goto L_088BBD48;
    case 763u: goto L_088BBD50;
    case 764u: goto L_088BBD60;
    case 765u: goto L_088BBD6C;
    case 766u: goto L_088BBD90;
    case 767u: goto L_088BBDD0;
    case 768u: goto L_088BBDDC;
    case 769u: goto L_088BBDE4;
    case 770u: goto L_088BBDF0;
    case 771u: goto L_088BBDFC;
    case 772u: goto L_088BBE30;
    case 773u: goto L_088BBE7C;
    case 774u: goto L_088BBE84;
    case 775u: goto L_088BBE88;
    case 776u: goto L_088BBE90;
    case 777u: goto L_088BBEA0;
    case 778u: goto L_088BBEAC;
    case 779u: goto L_088BBED0;
    case 780u: goto L_088BBF10;
    case 781u: goto L_088BBF18;
    case 782u: goto L_088BBF1C;
    case 783u: goto L_088BBF20;
    case 784u: goto L_088BBF30;
    case 785u: goto L_088BBF48;
    case 786u: goto L_088BBF50;
    case 787u: goto L_088BBF58;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088B8000:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    hot_regs.g4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088B81B0;
      }
      goto L_088B8008;
    }
L_088B8008:
    hot_regs.f22 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(hot_regs.f22));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088B8050u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 672u, 0x088B7C30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8050u) goto L_088B8050;
    return;
L_088B8050:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24631)));
    hot_regs.g5 = (20224u << 16u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g5);
      if (branch_taken) {
          goto L_088B80C0;
      }
      goto L_088B8060;
    }
L_088B8060:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11016)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11012)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11008)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088B80C0u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 672u, 0x088B7C30u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B80C0u) goto L_088B80C0;
    return;
L_088B80C0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
{
    std::uint32_t g28 = ctx.gpr[28];
    f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    hot_regs.g4 = (17279u << 16u);
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    f12 = std::bit_cast<float>(hot_regs.g4);
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    ctx.set_fpu_condition((f14 < hot_regs.f20));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    { const float fs = hot_regs.f15; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088B80F8;
      }
      goto L_088B80EC;
    }
}
}
L_088B80EC:
{
    float f14 = hot_regs.f14;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f14));
    hot_regs.f14 = f14;
      if (branch_taken) {
          goto L_088B810C;
      }
      goto L_088B80F8;
    }
}
L_088B80F8:
{
    float f14 = hot_regs.f14;
{
    std::uint32_t g6 = hot_regs.g6;
    f14 = f14 - hot_regs.f20;
    g6 = (32768u << 16u);
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f14));
    g6 = (hot_regs.g4 + g6);
    hot_regs.g6 = g6;
    hot_regs.f14 = f14;
    goto L_088B810C;
}
}
L_088B810C:
{
    float f13 = hot_regs.f13;
    ctx.set_fpu_condition((f13 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f13 = f13 - hot_regs.f20;
    hot_regs.f13 = f13;
        goto L_088B8128;
    }
    goto L_088B811C;
}
L_088B811C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(f13));
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B8138;
      }
      goto L_088B8128;
    }
}
L_088B8128:
{
    float f13 = hot_regs.f13;
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (32768u << 16u);
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f13));
    g5 = (hot_regs.g4 + g5);
    hot_regs.g5 = g5;
    hot_regs.f13 = f13;
    goto L_088B8138;
}
}
L_088B8138:
{
    float f12 = hot_regs.f12;
    ctx.set_fpu_condition((f12 < hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = f12 - hot_regs.f20;
    hot_regs.f12 = f12;
        goto L_088B8154;
    }
    goto L_088B8148;
}
L_088B8148:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B8164;
      }
      goto L_088B8154;
    }
}
L_088B8154:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (32768u << 16u);
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(f12));
    g4 = (hot_regs.g7 + g4);
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    goto L_088B8164;
}
}
L_088B8164:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (g4 & 255u);
    g5 = (g5 & 255u);
    g4 = (g4 << 16u);
    g5 = (g5 << 8u);
    g4 = (g4 + g5);
    g5 = (g6 & 255u);
    g4 = (g4 + g5);
    g5 = (256u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g4 = (g4 & g5);
    g5 = (21504u << 16u);
    g4 = (g4 | g5);
    g5 = (2236u << 16u);
    g6 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(0), g4);
    g4 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(29552)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(29552), g4);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088B81B8;
      }
      goto L_088B81B0;
    }
}
L_088B81B0:
    hot_regs.g31 = (0x088B81B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 671u, 0x088B7BC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B81B8u) goto L_088B81B8;
    return;
L_088B81B8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B81D4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-192));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24628)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(hot_regs.f22));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B8338;
      }
      goto L_088B81F8;
    }
}
L_088B81F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g4 = g4;
        goto L_088B8234;
    }
    goto L_088B8204;
}
L_088B8204:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16600)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11032)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11036)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11040)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B825C;
      }
      goto L_088B8234;
    }
}
}
L_088B8234:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16600)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11008)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11012)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11016)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088B825C;
}
}
L_088B825C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24162)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g4 = g4;
        goto L_088B8298;
    }
    goto L_088B8268;
}
L_088B8268:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-23440)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16600)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11044)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11048)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11052)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
      if (branch_taken) {
          goto L_088B82C0;
      }
      goto L_088B8298;
    }
}
}
L_088B8298:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-16600)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11020)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11024)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(f13));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(11028)));
    { const float fs = f13; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    goto L_088B82C0;
}
}
L_088B82C0:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8592)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B82F8;
      }
      goto L_088B82CC;
    }
L_088B82CC:
    hot_regs.g31 = (0x088B82D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 538u, 0x08AAE9C4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B82D4u) goto L_088B82D4;
    return;
L_088B82D4:
    { const bool branch_taken = hot_regs.g2 != 0u;
    hot_regs.g4 = (16256u << 16u);
      if (branch_taken) {
          goto L_088B82F8;
      }
      goto L_088B82DC;
    }
L_088B82DC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f12 = f12;
    goto L_088B82F8;
}
}
L_088B82F8:
    hot_regs.g31 = (0x088B8300u);
    hot_regs.g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(8464));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 608u, 0x088B731Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8300u) goto L_088B8300;
    return;
L_088B8300:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g28 = ctx.gpr[28];
    g4 = (aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24628)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8464)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8468)));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8472)));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (g4 + static_cast<std::uint32_t>(24));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(8476)));
    hot_regs.g7 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), hot_regs.g6);
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), hot_regs.g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088B8338;
}
L_088B8338:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B84C8;
      }
      goto L_088B8344;
    }
L_088B8344:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11056)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-16600)));
    { const float fs = hot_regs.f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11060)));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f14 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f14 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(hot_regs.f14));
    hot_regs.f15 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11064)));
    { const float fs = hot_regs.f15; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f13 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f13 = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), hot_regs.g5);
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), hot_regs.g5);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8508)));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.f15 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(hot_regs.f15));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(hot_regs.f15));
    hot_regs.g4 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(96));
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
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(11224)));
    hot_regs.g7 = (hot_regs.g7 << 4u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
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
      const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g7 + static_cast<std::uint32_t>(11224)));
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    hot_regs.g7 = (hot_regs.g7 + ctx.gpr[8]);
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = hot_regs.g7 + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-23440)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g5 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(11224)));
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g5);
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12) ^ 0x80000000u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24624)));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088B84C8u);
    hot_regs.g6 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 642u, 0x08972FA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B84C8u) goto L_088B84C8;
    return;
L_088B84C8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B84DC;
      }
      goto L_088B84D4;
    }
L_088B84D4:
    hot_regs.g31 = (0x088B84DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B84DCu) goto L_088B84DC;
    return;
L_088B84DC:
    hot_regs.g31 = (0x088B84E4u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B84E4u) goto L_088B84E4;
    return;
L_088B84E4:
    hot_regs.g4 = (hot_regs.g2 < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B86A0;
      }
      goto L_088B84F0;
    }
L_088B84F0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (16153u << 16u);
    g5 = (g5 | 39322u);
    ctx.fpr[24] = std::bit_cast<float>(g5);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    hot_regs.g6 = (16256u << 16u);
    g5 = (15232u << 16u);
    hot_regs.f20 = std::bit_cast<float>(hot_regs.g6);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.f22 = std::bit_cast<float>(g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B851C;
      }
      goto L_088B8514;
    }
}
L_088B8514:
    hot_regs.g31 = (0x088B851Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B851Cu) goto L_088B851C;
    return;
L_088B851C:
    hot_regs.g31 = (0x088B8524u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8524u) goto L_088B8524;
    return;
L_088B8524:
{
    float f26 = ctx.fpr[26];
    f26 = std::bit_cast<float>(hot_regs.g2);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    f26 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f26)));
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_088B853C;
      }
      goto L_088B8530;
    }
}
L_088B8530:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g4);
    ctx.fpr[26] = ctx.fpr[26] + hot_regs.f12;
    goto L_088B853C;
L_088B853C:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g4 = hot_regs.g4;
    { const float fs = f26; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    g4 = (16384u << 16u);
    hot_regs.f13 = std::bit_cast<float>(g4);
    g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    f12 = f12 - hot_regs.f20;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    { const bool branch_taken = g4 != 0u;
    f26 = f26 + hot_regs.f20;
    hot_regs.g4 = g4;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_088B8568;
      }
      goto L_088B8560;
    }
}
}
L_088B8560:
    hot_regs.g31 = (0x088B8568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8568u) goto L_088B8568;
    return;
L_088B8568:
    hot_regs.g31 = (0x088B8570u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6D78u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8570u) goto L_088B8570;
    return;
L_088B8570:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(hot_regs.g2);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g2) >= 0;
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B8588;
      }
      goto L_088B857C;
    }
}
L_088B857C:
    hot_regs.g4 = (20352u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f12 = hot_regs.f12 + hot_regs.f13;
    goto L_088B8588;
L_088B8588:
{
    float f12 = hot_regs.f12;
    float f20 = hot_regs.f20;
    float f22 = hot_regs.f22;
    { const float fs = f12; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g4 = (16448u << 16u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g4);
    hot_regs.f14 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    f12 = f12 - f20;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const float fs = f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    f22 = f22 + f20;
    { const float fs = hot_regs.f14; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f20 < f12));
    // nop
    if (ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f20));
    hot_regs.f12 = f12;
    hot_regs.f22 = f22;
        goto L_088B85BC;
    }
    goto L_088B85BC;
}
L_088B85BC:
{
    float f12 = hot_regs.f12;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8464), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    { const float fs = f12; const float ft = hot_regs.f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = f12;
        goto L_088B85D8;
    }
    goto L_088B85D8;
}
L_088B85D8:
{
    float f22 = hot_regs.f22;
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8468), std::bit_cast<std::uint32_t>(hot_regs.f12));
    { const float fs = hot_regs.f13; const float ft = f22; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B85F4;
    }
    goto L_088B85F4;
}
L_088B85F4:
{
    float f22 = hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8472), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8480)));
    { const float fs = f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B8610;
    }
    goto L_088B8610;
}
L_088B8610:
{
    float f22 = hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8480), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8484)));
    { const float fs = f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B862C;
    }
    goto L_088B862C;
}
L_088B862C:
{
    float f22 = hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8484), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8488)));
    { const float fs = f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B8648;
    }
    goto L_088B8648;
}
L_088B8648:
{
    float f22 = hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8488), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8464)));
    { const float fs = f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B8664;
    }
    goto L_088B8664;
}
L_088B8664:
{
    float f22 = hot_regs.f22;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8496), std::bit_cast<std::uint32_t>(f22));
    f22 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8468)));
    { const float fs = f22; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f22 = std::bit_cast<float>(0x7FC00000u); else f22 = fs * ft; }
    ctx.set_fpu_condition((f22 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f22 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f22 = f22;
        goto L_088B8680;
    }
    goto L_088B8680;
}
L_088B8680:
{
    float f12 = hot_regs.f12;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(8472)));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8500), std::bit_cast<std::uint32_t>(hot_regs.f22));
    { const float fs = f12; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    ctx.set_fpu_condition((f12 <= hot_regs.f20));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    hot_regs.f12 = f12;
        goto L_088B869C;
    }
    goto L_088B869C;
}
L_088B869C:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(8504), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088B86A0;
L_088B86A0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(180)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(184)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B86BC:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B86C4:
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
          goto L_088B870C;
      }
      goto L_088B86E0;
    }
}
L_088B86E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088B86F8;
      }
      goto L_088B86E8;
    }
L_088B86E8:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[16] & 1u);
        goto L_088B86FC;
    }
    goto L_088B86F0;
L_088B86F0:
    hot_regs.g31 = (0x088B86F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B86F8u) goto L_088B86F8;
    return;
L_088B86F8:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    goto L_088B86FC;
L_088B86FC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B870C;
      }
      goto L_088B8704;
    }
L_088B8704:
    hot_regs.g31 = (0x088B870Cu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B870Cu) goto L_088B870C;
    return;
L_088B870C:
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
L_088B8720:
{
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g18);
    g17 = (hot_regs.g5 | 0u);
    g18 = (hot_regs.g6 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    { const bool branch_taken = g17 == g18;
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = g17;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B8920;
      }
      goto L_088B8758;
    }
}
L_088B8758:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[18] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (ctx.gpr[19] < static_cast<std::uint32_t>(-1) ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8790;
      }
      goto L_088B8778;
    }
}
L_088B8778:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (0u + static_cast<std::uint32_t>(-2));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    g5 = (g5 - ctx.gpr[19]);
    g5 = (g5 < hot_regs.g4 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B879C;
      }
      goto L_088B8790;
    }
}
L_088B8790:
    hot_regs.g31 = (0x088B8798u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 365u, 0x08B658A0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8798u) goto L_088B8798;
    return;
L_088B8798:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_088B879C;
L_088B879C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (hot_regs.g4 + ctx.gpr[19]);
    g5 = (g5 - hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (g5 < hot_regs.g7 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B88CC;
      }
      goto L_088B87BC;
    }
}
L_088B87BC:
    hot_regs.g5 = (hot_regs.g4 < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088B87DC;
      }
      goto L_088B87C8;
    }
L_088B87C8:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g19 = (hot_regs.g4 + g5);
    { const bool branch_taken = 0u == 0u;
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B87EC;
      }
      goto L_088B87DC;
    }
}
L_088B87DC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g19 = ctx.gpr[19];
    g5 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    g19 = (hot_regs.g4 + g5);
    g19 = (g19 + static_cast<std::uint32_t>(1));
    hot_regs.g5 = g5;
    ctx.gpr[19] = g19;
    goto L_088B87EC;
}
L_088B87EC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088B8814;
      }
      goto L_088B87F4;
    }
L_088B87F4:
    hot_regs.g31 = (0x088B87FCu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B87FCu) goto L_088B87FC;
    return;
L_088B87FC:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B8814;
      }
      goto L_088B8808;
    }
L_088B8808:
    hot_regs.g31 = (0x088B8810u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8810u) goto L_088B8810;
    return;
L_088B8810:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_088B8814;
L_088B8814:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(19))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(22))))));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(hot_regs.g4));
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B8840u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_088B95EC;
}
L_088B8840:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g2);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g29 + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[22];
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(hot_regs.g4));
      if (branch_taken) {
          goto L_088B886C;
      }
      goto L_088B8850;
    }
}
L_088B8850:
    ctx.gpr[20] = (ctx.gpr[23] - ctx.gpr[22]);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088B8864u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8864u) goto L_088B8864;
    return;
L_088B8864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (hot_regs.g2 + ctx.gpr[20]);
      if (branch_taken) {
          goto L_088B886C;
      }
      goto L_088B886C;
    }
L_088B886C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088B8880;
      }
      goto L_088B8878;
    }
L_088B8878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088B889C;
      }
      goto L_088B8880;
    }
L_088B8880:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x088B8898u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8898u) goto L_088B8898;
    return;
L_088B8898:
    ctx.gpr[17] = (hot_regs.g2 + ctx.gpr[17]);
    goto L_088B889C;
L_088B889C:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B88B8;
      }
      goto L_088B88B0;
    }
L_088B88B0:
    hot_regs.g31 = (0x088B88B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B88B8u) goto L_088B88B8;
    return;
L_088B88B8:
{
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[21] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), hot_regs.g4);
      if (branch_taken) {
          goto L_088B8920;
      }
      goto L_088B88CC;
    }
}
L_088B88CC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    hot_regs.g6 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] != hot_regs.g6;
    hot_regs.g5 = (hot_regs.g4 + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088B88E4;
      }
      goto L_088B88DC;
    }
L_088B88DC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (hot_regs.g4 + ctx.gpr[19]);
      if (branch_taken) {
          goto L_088B8900;
      }
      goto L_088B88E4;
    }
L_088B88E4:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g7 = (ctx.gpr[18] - hot_regs.g6);
    hot_regs.g5 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x088B88F8u);
    hot_regs.g6 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B88F8u) goto L_088B88F8;
    return;
L_088B88F8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[19]);
    hot_regs.g4 = g4;
    goto L_088B8900;
}
L_088B8900:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g4 = (g4 + ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), g4);
    hot_regs.g4 = g4;
    goto L_088B8920;
}
L_088B8920:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B8950:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (2188u << 16u);
    jump_target = hot_regs.g31;
    g2 = (g2 + static_cast<std::uint32_t>(-30384));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B895C:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B896Cu);
    // nop
    hot_regs.g29 = g29;
    goto L_088B8950;
}
L_088B896C:
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
L_088B8978:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x088B8998u);
    ctx.gpr[18] = (0u | 0u);
    hot_regs.g29 = g29;
    goto L_088B8950;
}
L_088B8998:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[18] = (0u | 1u);
        goto L_088B89E0;
    }
    goto L_088B89A0;
L_088B89A0:
    hot_regs.g31 = (0x088B89A8u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 463u, 0x08AC5950u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B89A8u) goto L_088B89A8;
    return;
L_088B89A8:
    if (hot_regs.g2 == ctx.gpr[16]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088B89D0;
    }
    goto L_088B89B0;
L_088B89B0:
    hot_regs.g31 = (0x088B89B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 115u, 0x08980688u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B89B8u) goto L_088B89B8;
    return;
L_088B89B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 ^ ctx.gpr[16]);
    g4 = (g4 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[17] & 255u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B89D4;
      }
      goto L_088B89CC;
    }
}
L_088B89CC:
    ctx.gpr[17] = (0u | 1u);
    goto L_088B89D0;
L_088B89D0:
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    goto L_088B89D4;
L_088B89D4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B89E0;
      }
      goto L_088B89DC;
    }
L_088B89DC:
    ctx.gpr[18] = (0u | 1u);
    goto L_088B89E0;
L_088B89E0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] & 255u);
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
L_088B89FC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g31);
    hot_regs.g31 = (0x088B8A30u);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 472u, 0x08AC59D4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8A30u) goto L_088B8A30;
    return;
L_088B8A30:
    hot_regs.g4 = (2234u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(22360));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(220));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), hot_regs.g4);
    hot_regs.g7 = (2231u << 16u);
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 12u);
    hot_regs.g31 = (0x088B8A58u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-30968));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 158u, 0x08B60C7Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8A58u) goto L_088B8A58;
    return;
L_088B8A58:
    ctx.gpr[17] = (ctx.gpr[28] + static_cast<std::uint32_t>(-24560));
    hot_regs.g31 = (0x088B8A64u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8A64u) goto L_088B8A64;
    return;
L_088B8A64:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    std::uint32_t g28 = ctx.gpr[28];
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(224)));
    hot_regs.g5 = (aot_mem.aot_load32(g18 + static_cast<std::uint32_t>(220)));
    g8 = (g18 + static_cast<std::uint32_t>(244));
    g9 = (g18 + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g8);
    g10 = (g28 + static_cast<std::uint32_t>(-24528));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g9);
    g8 = (g18 + static_cast<std::uint32_t>(268));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g10);
    g9 = (g28 + static_cast<std::uint32_t>(-24520));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g8);
    g10 = (g18 + static_cast<std::uint32_t>(280));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g9);
    g8 = (g28 + static_cast<std::uint32_t>(-24512));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g10);
    g9 = (g18 + static_cast<std::uint32_t>(292));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g8);
    g10 = (g28 + static_cast<std::uint32_t>(-24504));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g9);
    g19 = (g28 + hot_regs.g2);
    g8 = (g18 + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g10);
    g19 = (g19 + static_cast<std::uint32_t>(-24560));
    g9 = (g28 + static_cast<std::uint32_t>(-24496));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g8);
    ctx.gpr[16] = (g19 - ctx.gpr[17]);
    hot_regs.g6 = (hot_regs.g4 - hot_regs.g5);
    g10 = (g18 + static_cast<std::uint32_t>(316));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g9);
    hot_regs.g7 = (hot_regs.g6 < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[21] = (g28 + static_cast<std::uint32_t>(-24552));
    ctx.gpr[30] = (g18 + static_cast<std::uint32_t>(232));
    ctx.gpr[22] = (g28 + static_cast<std::uint32_t>(-24544));
    ctx.gpr[23] = (g28 + static_cast<std::uint32_t>(-24536));
    { const bool branch_taken = hot_regs.g7 != 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g10);
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
    ctx.gpr[19] = g19;
      if (branch_taken) {
          goto L_088B8B54;
      }
      goto L_088B8AF4;
    }
}
L_088B8AF4:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
        goto L_088B8B18;
    }
    goto L_088B8AFC;
L_088B8AFC:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8B0Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8B0Cu) goto L_088B8B0C;
    return;
L_088B8B0C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8B18;
L_088B8B18:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8B9C;
      }
      goto L_088B8B24;
    }
L_088B8B24:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8B44;
      }
      goto L_088B8B34;
    }
}
L_088B8B34:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8B40u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8B40u) goto L_088B8B40;
    return;
L_088B8B40:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    goto L_088B8B44;
L_088B8B44:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(224), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8B9C;
      }
      goto L_088B8B54;
    }
}
L_088B8B54:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[28] + hot_regs.g6);
        goto L_088B8B80;
    }
    goto L_088B8B60;
L_088B8B60:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8B70u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8B70u) goto L_088B8B70;
    return;
L_088B8B70:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(224)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(220)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + g6);
    hot_regs.g6 = g6;
    goto L_088B8B80;
}
L_088B8B80:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-24560));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B8B9Cu);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    goto L_088B8720;
}
L_088B8B9C:
    hot_regs.g31 = (0x088B8BA4u);
    hot_regs.g4 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8BA4u) goto L_088B8BA4;
    return;
L_088B8BA4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    g17 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    g17 = (g17 + static_cast<std::uint32_t>(-24552));
    ctx.gpr[16] = (g17 - ctx.gpr[21]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_088B8C28;
    }
    goto L_088B8BC8;
}
L_088B8BC8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8BEC;
      }
      goto L_088B8BD0;
    }
L_088B8BD0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    hot_regs.g31 = (0x088B8BE0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8BE0u) goto L_088B8BE0;
    return;
L_088B8BE0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8BEC;
L_088B8BEC:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8C6C;
      }
      goto L_088B8BF8;
    }
L_088B8BF8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8C18;
      }
      goto L_088B8C08;
    }
}
L_088B8C08:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8C14u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8C14u) goto L_088B8C14;
    return;
L_088B8C14:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    goto L_088B8C18;
L_088B8C18:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(236), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8C6C;
      }
      goto L_088B8C28;
    }
}
L_088B8C28:
    if (hot_regs.g4 == 0u) {
    hot_regs.g5 = (ctx.gpr[28] + hot_regs.g6);
        goto L_088B8C50;
    }
    goto L_088B8C30;
L_088B8C30:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8C40u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8C40u) goto L_088B8C40;
    return;
L_088B8C40:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(236)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(232)));
    g6 = (g6 - hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + g6);
    hot_regs.g6 = g6;
    goto L_088B8C50;
}
L_088B8C50:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-24552));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(3));
    hot_regs.g4 = (ctx.gpr[30] | 0u);
    hot_regs.g31 = (0x088B8C6Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    goto L_088B8720;
}
L_088B8C6C:
    hot_regs.g31 = (0x088B8C74u);
    hot_regs.g4 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8C74u) goto L_088B8C74;
    return;
L_088B8C74:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    g17 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    g17 = (g17 + static_cast<std::uint32_t>(-24544));
    ctx.gpr[16] = (g17 - ctx.gpr[22]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_088B8CF8;
    }
    goto L_088B8C98;
}
L_088B8C98:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8CBC;
      }
      goto L_088B8CA0;
    }
L_088B8CA0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    hot_regs.g31 = (0x088B8CB0u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8CB0u) goto L_088B8CB0;
    return;
L_088B8CB0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8CBC;
L_088B8CBC:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8D3C;
      }
      goto L_088B8CC8;
    }
L_088B8CC8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8CE8;
      }
      goto L_088B8CD8;
    }
}
L_088B8CD8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8CE4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8CE4u) goto L_088B8CE4;
    return;
L_088B8CE4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    goto L_088B8CE8;
L_088B8CE8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(248), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8D3C;
      }
      goto L_088B8CF8;
    }
}
L_088B8CF8:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
        goto L_088B8D20;
    }
    goto L_088B8D00;
L_088B8D00:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8D10u);
    hot_regs.g5 = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8D10u) goto L_088B8D10;
    return;
L_088B8D10:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(248)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(244)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B8D20;
}
L_088B8D20:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24544));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(5));
    hot_regs.g31 = (0x088B8D3Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B8D3C:
    hot_regs.g31 = (0x088B8D44u);
    hot_regs.g4 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8D44u) goto L_088B8D44;
    return;
L_088B8D44:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    g17 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    g17 = (g17 + static_cast<std::uint32_t>(-24536));
    ctx.gpr[16] = (g17 - ctx.gpr[23]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_088B8DC8;
    }
    goto L_088B8D68;
}
L_088B8D68:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8D8C;
      }
      goto L_088B8D70;
    }
L_088B8D70:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    hot_regs.g31 = (0x088B8D80u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8D80u) goto L_088B8D80;
    return;
L_088B8D80:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8D8C;
L_088B8D8C:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8E0C;
      }
      goto L_088B8D98;
    }
L_088B8D98:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8DB8;
      }
      goto L_088B8DA8;
    }
}
L_088B8DA8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8DB4u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8DB4u) goto L_088B8DB4;
    return;
L_088B8DB4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    goto L_088B8DB8;
L_088B8DB8:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(260), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8E0C;
      }
      goto L_088B8DC8;
    }
}
L_088B8DC8:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
        goto L_088B8DF0;
    }
    goto L_088B8DD0;
L_088B8DD0:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8DE0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8DE0u) goto L_088B8DE0;
    return;
L_088B8DE0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(260)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(256)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B8DF0;
}
L_088B8DF0:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24536));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(7));
    hot_regs.g31 = (0x088B8E0Cu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B8E0C:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g31 = (0x088B8E18u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8E18u) goto L_088B8E18;
    return;
L_088B8E18:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    g17 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    g17 = (g17 + static_cast<std::uint32_t>(-24528));
    ctx.gpr[16] = (g17 - ctx.gpr[19]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_088B8E9C;
    }
    goto L_088B8E3C;
}
L_088B8E3C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8E60;
      }
      goto L_088B8E44;
    }
L_088B8E44:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B8E54u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8E54u) goto L_088B8E54;
    return;
L_088B8E54:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8E60;
L_088B8E60:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8EE0;
      }
      goto L_088B8E6C;
    }
L_088B8E6C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8E8C;
      }
      goto L_088B8E7C;
    }
}
L_088B8E7C:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8E88u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8E88u) goto L_088B8E88;
    return;
L_088B8E88:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    goto L_088B8E8C;
L_088B8E8C:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(272), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8EE0;
      }
      goto L_088B8E9C;
    }
}
L_088B8E9C:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
        goto L_088B8EC4;
    }
    goto L_088B8EA4;
L_088B8EA4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8EB4u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8EB4u) goto L_088B8EB4;
    return;
L_088B8EB4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(272)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(268)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(48)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B8EC4;
}
L_088B8EC4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24528));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(9));
    hot_regs.g31 = (0x088B8EE0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B8EE0:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (0x088B8EECu);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8EECu) goto L_088B8EEC;
    return;
L_088B8EEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    g17 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    g17 = (g17 + static_cast<std::uint32_t>(-24520));
    ctx.gpr[16] = (g17 - ctx.gpr[19]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[16] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[17] = g17;
        goto L_088B8F70;
    }
    goto L_088B8F10;
}
L_088B8F10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088B8F34;
      }
      goto L_088B8F18;
    }
L_088B8F18:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B8F28u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8F28u) goto L_088B8F28;
    return;
L_088B8F28:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[16]);
    goto L_088B8F34;
L_088B8F34:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B8FB4;
      }
      goto L_088B8F40;
    }
L_088B8F40:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B8F60;
      }
      goto L_088B8F50;
    }
}
L_088B8F50:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B8F5Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8F5Cu) goto L_088B8F5C;
    return;
L_088B8F5C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    goto L_088B8F60;
L_088B8F60:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(284), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B8FB4;
      }
      goto L_088B8F70;
    }
}
L_088B8F70:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
        goto L_088B8F98;
    }
    goto L_088B8F78;
L_088B8F78:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B8F88u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8F88u) goto L_088B8F88;
    return;
L_088B8F88:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(284)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(280)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(52)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B8F98;
}
L_088B8F98:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24520));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(11));
    hot_regs.g31 = (0x088B8FB4u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B8FB4:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (0x088B8FC0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8FC0u) goto L_088B8FC0;
    return;
L_088B8FC0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    g16 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    g16 = (g16 + static_cast<std::uint32_t>(-24512));
    ctx.gpr[17] = (g16 - ctx.gpr[19]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[17] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
        goto L_088B9044;
    }
    goto L_088B8FE4;
}
L_088B8FE4:
{
    std::uint32_t g17 = ctx.gpr[17];
    if (g17 == 0u) {
    g17 = (hot_regs.g5 + g17);
    ctx.gpr[17] = g17;
        goto L_088B9008;
    }
    goto L_088B8FEC;
}
L_088B8FEC:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B8FFCu);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B8FFCu) goto L_088B8FFC;
    return;
L_088B8FFC:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[17]);
    goto L_088B9008;
L_088B9008:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B9088;
      }
      goto L_088B9014;
    }
L_088B9014:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9034;
      }
      goto L_088B9024;
    }
}
L_088B9024:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9030u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9030u) goto L_088B9030;
    return;
L_088B9030:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    goto L_088B9034;
L_088B9034:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(296), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9088;
      }
      goto L_088B9044;
    }
}
L_088B9044:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
        goto L_088B906C;
    }
    goto L_088B904C;
L_088B904C:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B905Cu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B905Cu) goto L_088B905C;
    return;
L_088B905C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(296)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(292)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(56)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B906C;
}
L_088B906C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24512));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(13));
    hot_regs.g31 = (0x088B9088u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B9088:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(36)));
    hot_regs.g31 = (0x088B9094u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9094u) goto L_088B9094;
    return;
L_088B9094:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    g16 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    g16 = (g16 + static_cast<std::uint32_t>(-24504));
    ctx.gpr[17] = (g16 - ctx.gpr[19]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[17] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
        goto L_088B9118;
    }
    goto L_088B90B8;
}
L_088B90B8:
{
    std::uint32_t g17 = ctx.gpr[17];
    if (g17 == 0u) {
    g17 = (hot_regs.g5 + g17);
    ctx.gpr[17] = g17;
        goto L_088B90DC;
    }
    goto L_088B90C0;
}
L_088B90C0:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B90D0u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B90D0u) goto L_088B90D0;
    return;
L_088B90D0:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[17]);
    goto L_088B90DC;
L_088B90DC:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B915C;
      }
      goto L_088B90E8;
    }
L_088B90E8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9108;
      }
      goto L_088B90F8;
    }
}
L_088B90F8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9104u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9104u) goto L_088B9104;
    return;
L_088B9104:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    goto L_088B9108;
L_088B9108:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(308), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B915C;
      }
      goto L_088B9118;
    }
}
L_088B9118:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
        goto L_088B9140;
    }
    goto L_088B9120;
L_088B9120:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B9130u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9130u) goto L_088B9130;
    return;
L_088B9130:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(308)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B9140;
}
L_088B9140:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24504));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(15));
    hot_regs.g31 = (0x088B915Cu);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B915C:
    ctx.gpr[19] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (0x088B9168u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9168u) goto L_088B9168;
    return;
L_088B9168:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    g16 = (ctx.gpr[28] + hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    g16 = (g16 + static_cast<std::uint32_t>(-24496));
    ctx.gpr[17] = (g16 - ctx.gpr[19]);
    g6 = (g4 - hot_regs.g5);
    hot_regs.g7 = (g6 < ctx.gpr[17] ? 1u : 0u);
    if (hot_regs.g7 != 0u) {
    g4 = (g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[16] = g16;
        goto L_088B91EC;
    }
    goto L_088B918C;
}
L_088B918C:
{
    std::uint32_t g17 = ctx.gpr[17];
    if (g17 == 0u) {
    g17 = (hot_regs.g5 + g17);
    ctx.gpr[17] = g17;
        goto L_088B91B0;
    }
    goto L_088B9194;
}
L_088B9194:
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088B91A4u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B91A4u) goto L_088B91A4;
    return;
L_088B91A4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    ctx.gpr[17] = (hot_regs.g5 + ctx.gpr[17]);
    goto L_088B91B0;
L_088B91B0:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088B9230;
      }
      goto L_088B91BC;
    }
L_088B91BC:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g4 - hot_regs.g4);
    g5 = (g5 + static_cast<std::uint32_t>(1));
    { const bool branch_taken = g5 == 0u;
    hot_regs.g6 = (g5 | 0u);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B91DC;
      }
      goto L_088B91CC;
    }
}
L_088B91CC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B91D8u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B91D8u) goto L_088B91D8;
    return;
L_088B91D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    goto L_088B91DC;
L_088B91DC:
{
    std::uint32_t g4 = hot_regs.g4;
    hot_regs.g5 = (ctx.gpr[16] - ctx.gpr[17]);
    g4 = (g4 - hot_regs.g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(320), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9230;
      }
      goto L_088B91EC;
    }
}
L_088B91EC:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
        goto L_088B9214;
    }
    goto L_088B91F4;
L_088B91F4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (0x088B9204u);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 36u, 0x089645DCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9204u) goto L_088B9204;
    return;
L_088B9204:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(320)));
    g4 = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(316)));
    g6 = (g6 - g4);
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    goto L_088B9214;
}
L_088B9214:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (ctx.gpr[28] + hot_regs.g6);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    g5 = (g5 + static_cast<std::uint32_t>(-24496));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(17));
    hot_regs.g31 = (0x088B9230u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = g5;
    goto L_088B8720;
}
L_088B9230:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24488));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(328), g4);
    g4 = (0u | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g4 = g4;
    goto L_088B9240;
}
L_088B9240:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(184), 0u);
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9240;
      }
      goto L_088B9254;
    }
}
L_088B9254:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_088B9288:
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
          goto L_088B9318;
      }
      goto L_088B92A4;
    }
}
L_088B92A4:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(22360));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), g4);
    hot_regs.g5 = (0u | 0u);
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g4 = g4;
    goto L_088B92B8;
}
L_088B92B8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B92C8;
      }
      goto L_088B92C4;
    }
L_088B92C4:
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(184), 0u);
    goto L_088B92C8;
L_088B92C8:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(1));
    hot_regs.g6 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B92B8;
      }
      goto L_088B92D8;
    }
}
L_088B92D8:
    hot_regs.g7 = (2188u << 16u);
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(220));
    hot_regs.g5 = (0u | 9u);
    hot_regs.g6 = (0u | 12u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    hot_regs.g31 = (0x088B92F8u);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-31036));
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 173u, 0x08B60E20u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B92F8u) goto L_088B92F8;
    return;
L_088B92F8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9304u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 486u, 0x08AC5AE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9304u) goto L_088B9304;
    return;
L_088B9304:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9318;
      }
      goto L_088B9310;
    }
L_088B9310:
    hot_regs.g31 = (0x088B9318u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9318u) goto L_088B9318;
    return;
L_088B9318:
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
L_088B932C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9334:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B933C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), hot_regs.g31);
    hot_regs.g31 = (0x088B936Cu);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 507u, 0x08AC5C90u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B936Cu) goto L_088B936C;
    return;
L_088B936C:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9380;
      }
      goto L_088B9378;
    }
L_088B9378:
    hot_regs.g31 = (0x088B9380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 466u, 0x08B65E44u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9380u) goto L_088B9380;
    return;
L_088B9380:
    hot_regs.g31 = (0x088B9388u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5876)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 679u, 0x089C6F60u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9388u) goto L_088B9388;
    return;
L_088B9388:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (hot_regs.g2 | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(g17) < 0;
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 9 ? 1u : 0u);
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B939C;
      }
      goto L_088B9394;
    }
}
L_088B9394:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B93A4;
      }
      goto L_088B939C;
    }
L_088B939C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B94E0;
      }
      goto L_088B93A4;
    }
L_088B93A4:
{
    std::uint32_t g16 = ctx.gpr[16];
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (g16 + static_cast<std::uint32_t>(184));
    ctx.gpr[20] = (g16 + static_cast<std::uint32_t>(76));
    ctx.gpr[21] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (g16 + static_cast<std::uint32_t>(72));
    ctx.gpr[23] = (hot_regs.g29 + static_cast<std::uint32_t>(20));
    goto L_088B93BC;
}
L_088B93BC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (0u | 1u);
    hot_regs.g31 = (0x088B93CCu);
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 203u, 0x08861668u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B93CCu) goto L_088B93CC;
    return;
L_088B93CC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (0u | 4u);
    g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.gpr[8] = (g5 ^ 1u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    hot_regs.g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9434;
      }
      goto L_088B93E8;
    }
}
L_088B93E8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-45));
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g4 = (hot_regs.g7 + static_cast<std::uint32_t>(45));
    f15 = std::bit_cast<float>(g4);
    f13 = std::bit_cast<float>(hot_regs.g7);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g4 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(g4)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g4 = (hot_regs.g5 + g4);
    f12 = std::bit_cast<float>(g4);
    g4 = (g4 + static_cast<std::uint32_t>(45));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f14 = std::bit_cast<float>(g4);
    { const bool branch_taken = 0u == 0u;
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
      if (branch_taken) {
          goto L_088B9490;
      }
      goto L_088B9434;
    }
}
}
L_088B9434:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(45));
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g4 = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    g6 = (hot_regs.g7 + g6);
    g6 = (g6 + static_cast<std::uint32_t>(-45));
    f13 = std::bit_cast<float>(g6);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g6 = (g6 + static_cast<std::uint32_t>(45));
    f15 = std::bit_cast<float>(g6);
    f13 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f13)));
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    g6 = (ctx.lo);
    // nop
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(g4)) * static_cast<std::int64_t>(static_cast<std::int32_t>(g6)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    g4 = (ctx.lo);
    g4 = (hot_regs.g5 + g4);
    f12 = std::bit_cast<float>(g4);
    g4 = (g4 + static_cast<std::uint32_t>(45));
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f14 = std::bit_cast<float>(g4);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f14)));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    goto L_088B9490;
}
}
L_088B9490:
    hot_regs.g31 = (0x088B9498u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 292u, 0x089D1B1Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9498u) goto L_088B9498;
    return;
L_088B9498:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088B94BC;
      }
      goto L_088B94A0;
    }
L_088B94A0:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g5);
    hot_regs.g31 = (0x088B94B4u);
    hot_regs.g5 = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B94B4u) goto L_088B94B4;
    return;
L_088B94B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B94D0;
      }
      goto L_088B94BC;
    }
L_088B94BC:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = (hot_regs.g29 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g5);
    hot_regs.g31 = (0x088B94D0u);
    hot_regs.g5 = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 121u, 0x08AF51FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B94D0u) goto L_088B94D0;
    return;
L_088B94D0:
{
    std::uint32_t g18 = ctx.gpr[18];
    g18 = (g18 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088B93BC;
      }
      goto L_088B94E0;
    }
}
L_088B94E0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B950C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B951Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 511u, 0x08AC5CC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B951Cu) goto L_088B951C;
    return;
L_088B951C:
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
L_088B9528:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9530:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9538:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9540:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    hot_regs.g31 = (0x088B9550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 605u, 0x08AC646Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9550u) goto L_088B9550;
    return;
L_088B9550:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9560;
      }
      goto L_088B9558;
    }
L_088B9558:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9564;
      }
      goto L_088B9560;
    }
L_088B9560:
    hot_regs.g2 = (0u | 1u);
    goto L_088B9564;
L_088B9564:
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
L_088B9570:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x088B9590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 640u, 0x08AAEFC8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9590u) goto L_088B9590;
    return;
L_088B9590:
    hot_regs.g31 = (0x088B9598u);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(328)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 584u, 0x08AAECA4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9598u) goto L_088B9598;
    return;
L_088B9598:
    hot_regs.g31 = (0x088B95A0u);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 632u, 0x08AAEF5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B95A0u) goto L_088B95A0;
    return;
L_088B95A0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(220));
    goto L_088B95A8;
L_088B95A8:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088B95B4u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 398u, 0x08A65C4Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B95B4u) goto L_088B95B4;
    return;
L_088B95B4:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(184), hot_regs.g2);
    g18 = (g18 + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    hot_regs.g4 = (static_cast<std::int32_t>(g18) < 9 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    g16 = (g16 + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088B95A8;
      }
      goto L_088B95CC;
    }
}
L_088B95CC:
    hot_regs.g31 = (0x088B95D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 642u, 0x08AAEFE8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B95D4u) goto L_088B95D4;
    return;
L_088B95D4:
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
L_088B95EC:
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
L_088B9600:
    hot_regs.g6 = (hot_regs.g4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9620;
      }
      goto L_088B960C;
    }
L_088B960C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    g4 = (g4 >> 1u);
    hot_regs.g6 = (g4 < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g6 == 0u;
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B960C;
      }
      goto L_088B9620;
    }
}
L_088B9620:
{
    std::uint32_t g2 = hot_regs.g2;
    g2 = (hot_regs.g5 << 3u);
    jump_target = hot_regs.g31;
    g2 = (g2 | hot_regs.g4);
    local_pc = jump_target;
    hot_regs.g2 = g2;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B962C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (1u << 16u);
    g5 = (hot_regs.g4 < g5 ? 1u : 0u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9688;
      }
      goto L_088B963C;
    }
}
L_088B963C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (256u << 16u);
    hot_regs.g6 = (hot_regs.g4 < g5 ? 1u : 0u);
    g5 = (2232u << 16u);
    { const bool branch_taken = hot_regs.g6 != 0u;
    g5 = (g5 + static_cast<std::uint32_t>(-22336));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B966C;
      }
      goto L_088B9650;
    }
}
L_088B9650:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 >> 24u);
    g4 = (g4 & 255u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g4 + hot_regs.g5);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(24));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B966C;
    }
}
L_088B966C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 >> 16u);
    g4 = (g4 & 255u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g4 = (g4 + hot_regs.g5);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(16));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B9688;
    }
}
L_088B9688:
    hot_regs.g5 = (hot_regs.g4 < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B96B8;
      }
      goto L_088B9694;
    }
L_088B9694:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B96DC;
      }
      goto L_088B969C;
    }
L_088B969C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 & 255u);
    g5 = (2232u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(-22336));
    g4 = (g4 + g5);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B96B8;
    }
}
L_088B96B8:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (g4 >> 8u);
    g4 = (g4 & 255u);
    g5 = (2232u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    g5 = (g5 + static_cast<std::uint32_t>(-22336));
    g4 = (g4 + g5);
    g2 = (aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(8));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B96E0;
      }
      goto L_088B96DC;
    }
}
L_088B96DC:
    hot_regs.g2 = (0u + static_cast<std::uint32_t>(-1));
    goto L_088B96E0;
L_088B96E0:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B96E8:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_088B970C;
      }
      goto L_088B96F8;
    }
L_088B96F8:
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 2 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g7 != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9714;
      }
      goto L_088B9704;
    }
L_088B9704:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g7 = (static_cast<std::int32_t>(hot_regs.g6) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B972C;
      }
      goto L_088B970C;
    }
L_088B970C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9714;
    }
L_088B9714:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) < 0;
    // nop
      if (branch_taken) {
          goto L_088B9788;
      }
      goto L_088B971C;
    }
L_088B971C:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) > 0;
    // nop
      if (branch_taken) {
          goto L_088B9760;
      }
      goto L_088B9724;
    }
L_088B9724:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B972C;
    }
L_088B972C:
    { const bool branch_taken = hot_regs.g7 != 0u;
    hot_regs.g6 = (static_cast<std::int32_t>(hot_regs.g6) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088B9774;
      }
      goto L_088B9734;
    }
L_088B9734:
    { const bool branch_taken = hot_regs.g6 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9788;
      }
      goto L_088B973C;
    }
L_088B973C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(4)));
    hot_regs.g2 = (0u | 0u);
    ctx.set_fpu_condition((!(std::isnan(f12) || std::isnan(f13)) && f12 == f13));
    // nop
    if (ctx.fpu_condition()) {
    hot_regs.g2 = (0u | 1u);
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_088B9758;
    }
    goto L_088B9758;
}
L_088B9758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9760;
    }
L_088B9760:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g2 = (g4 ^ g5);
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9774;
    }
}
L_088B9774:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g2 = (g4 ^ g5);
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9798;
      }
      goto L_088B9788;
    }
}
L_088B9788:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    g2 = (g4 ^ g5);
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088B9798;
}
L_088B9798:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B97A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x088B97C0u);
    hot_regs.g5 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 521u, 0x08B59DE0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B97C0u) goto L_088B97C0;
    return;
L_088B97C0:
    hot_regs.g5 = (ctx.gpr[3] | 0u);
    hot_regs.g31 = (0x088B97CCu);
    hot_regs.g4 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0215_entry, 215u, 515u, 0x08B627F0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B97CCu) goto L_088B97CC;
    return;
L_088B97CC:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088B9808;
      }
      goto L_088B97D8;
    }
L_088B97D8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(14520));
    g6 = (g6 + static_cast<std::uint32_t>(1));
    g7 = (hot_regs.g5 & 255u);
    g7 = (g6 + g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0))))));
    g7 = (g7 & 8u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B9810;
      }
      goto L_088B9800;
    }
}
L_088B9800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9830;
      }
      goto L_088B9808;
    }
L_088B9808:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9848;
      }
      goto L_088B9810;
    }
L_088B9810:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), g4);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    g7 = (hot_regs.g5 & 255u);
    g7 = (hot_regs.g6 + g7);
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0))))));
    g7 = (g7 & 8u);
    { const bool branch_taken = g7 != 0u;
    g4 = (g4 + static_cast<std::uint32_t>(1));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088B9810;
      }
      goto L_088B9830;
    }
}
L_088B9830:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9840;
      }
      goto L_088B9838;
    }
L_088B9838:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088B9848;
      }
      goto L_088B9840;
    }
L_088B9840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g2 = (0u | 1u);
    goto L_088B9848;
L_088B9848:
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
L_088B985C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    ctx.gpr[18] = (hot_regs.g4 | 0u);
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g31 = (0x088B9890u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9890u) goto L_088B9890;
    return;
L_088B9890:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088B98A0u);
    hot_regs.g6 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B98A0u) goto L_088B98A0;
    return;
L_088B98A0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), hot_regs.g2);
    g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g5 = (g5 - g4);
    g5 = (static_cast<std::int32_t>(g5) < 9 ? 1u : 0u);
    { const bool branch_taken = g5 == 0u;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B98D0;
      }
      goto L_088B98BC;
    }
}
L_088B98BC:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B98C8u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B98C8u) goto L_088B98C8;
    return;
L_088B98C8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    goto L_088B98D0;
}
L_088B98D0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), hot_regs.g4);
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
L_088B98EC:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g7);
    g6 = (0u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    g6 = (g6 + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    g6 = (g6 & 65535u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    g6 = (g29 + g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[11]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088B9924u);
    g6 = (g6 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
    goto L_088B9A78;
}
L_088B9924:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9930:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (g4 | 0u);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    hot_regs.g7 = (0u | 61u);
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g31);
    { const bool branch_taken = g4 != hot_regs.g7;
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088B997C;
      }
      goto L_088B9960;
    }
}
L_088B9960:
    hot_regs.g5 = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B9970u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 200u, 0x08B58BA0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9970u) goto L_088B9970;
    return;
L_088B9970:
    hot_regs.g4 = (ctx.gpr[16] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(hot_regs.g4 + static_cast<std::uint32_t>(-1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088B9A5C;
      }
      goto L_088B997C;
    }
L_088B997C:
    hot_regs.g5 = (0u | 64u);
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088B99DC;
      }
      goto L_088B9988;
    }
L_088B9988:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8));
    hot_regs.g31 = (0x088B9998u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 150u, 0x08B58974u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9998u) goto L_088B9998;
    return;
L_088B9998:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24456));
    hot_regs.g31 = (0x088B99A8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B99A8u) goto L_088B99A8;
    return;
L_088B99A8:
    hot_regs.g4 = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B99C8;
      }
      goto L_088B99B4;
    }
L_088B99B4:
    hot_regs.g4 = (ctx.gpr[16] - ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24452));
    hot_regs.g31 = (0x088B99C8u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B99C8u) goto L_088B99C8;
    return;
L_088B99C8:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B99D4u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B99D4u) goto L_088B99D4;
    return;
L_088B99D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9A5C;
      }
      goto L_088B99DC;
    }
L_088B99DC:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24448));
    hot_regs.g31 = (0x088B99ECu);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 66u, 0x08B58360u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B99ECu) goto L_088B99EC;
    return;
L_088B99EC:
    ctx.gpr[16] = (hot_regs.g2 | 0u);
    hot_regs.g4 = (ctx.gpr[19] + static_cast<std::uint32_t>(-17));
    hot_regs.g5 = (static_cast<std::int32_t>(hot_regs.g4) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9A04;
      }
      goto L_088B9A00;
    }
L_088B9A00:
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    goto L_088B9A04;
L_088B9A04:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24444));
    hot_regs.g31 = (0x088B9A10u);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 63u, 0x08B5831Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9A10u) goto L_088B9A10;
    return;
L_088B9A10:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (ctx.gpr[16] + ctx.gpr[17]);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(g4 + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9A44;
      }
      goto L_088B9A20;
    }
}
L_088B9A20:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9A30u);
    hot_regs.g6 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 182u, 0x08B58AE4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9A30u) goto L_088B9A30;
    return;
L_088B9A30:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24452));
    hot_regs.g31 = (0x088B9A3Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9A3Cu) goto L_088B9A3C;
    return;
L_088B9A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9A50;
      }
      goto L_088B9A44;
    }
L_088B9A44:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088B9A50u);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9A50u) goto L_088B9A50;
    return;
L_088B9A50:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24432));
    hot_regs.g31 = (0x088B9A5Cu);
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 45u, 0x08B58238u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9A5Cu) goto L_088B9A5C;
    return;
L_088B9A5C:
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
L_088B9A78:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.gpr[20] = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g6 | 0u);
    ctx.gpr[17] = (hot_regs.g4 | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088B9AB0u);
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24456));
    hot_regs.g29 = g29;
    goto L_088B985C;
}
L_088B9AB0:
    hot_regs.g4 = (ctx.gpr[20] | 0u);
    hot_regs.g31 = (0x088B9ABCu);
    hot_regs.g5 = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0213_entry, 213u, 50u, 0x08B58294u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9ABCu) goto L_088B9ABC;
    return;
L_088B9ABC:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088B9B1C;
      }
      goto L_088B9AC8;
    }
L_088B9AC8:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9AD4u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    goto L_088B985C;
L_088B9AD4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 3u));
    hot_regs.g6 = (hot_regs.g6 >> 29u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 3u));
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g31 = (0x088B9B00u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 537u, 0x088C3C94u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9B00u) goto L_088B9B00;
    return;
L_088B9B00:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g5 = (ctx.gpr[19] << 3u);
    g4 = (g4 - hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    g2 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 + static_cast<std::uint32_t>(16));
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9C8C;
      }
      goto L_088B9B1C;
    }
}
L_088B9B1C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    hot_regs.g4 = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[18] - ctx.gpr[20]);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9B38u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 314u, 0x089D1D64u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9B38u) goto L_088B9B38;
    return;
L_088B9B38:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g17 = ctx.gpr[17];
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), hot_regs.g2);
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    hot_regs.g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - hot_regs.g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9B5C;
      }
      goto L_088B9B54;
    }
}
L_088B9B54:
    hot_regs.g31 = (0x088B9B5Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9B5Cu) goto L_088B9B5C;
    return;
L_088B9B5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g5 = (0u | 115u);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = g4 == g5;
    g5 = (0u | 102u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088B9BA0;
      }
      goto L_088B9B78;
    }
}
L_088B9B78:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 100u);
      if (branch_taken) {
          goto L_088B9C2C;
      }
      goto L_088B9B80;
    }
L_088B9B80:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 99u);
      if (branch_taken) {
          goto L_088B9BDC;
      }
      goto L_088B9B88;
    }
L_088B9B88:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    hot_regs.g5 = (0u | 37u);
      if (branch_taken) {
          goto L_088B9BB8;
      }
      goto L_088B9B90;
    }
L_088B9B90:
    { const bool branch_taken = hot_regs.g4 == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088B9C74;
      }
      goto L_088B9B98;
    }
L_088B9B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BA0;
    }
L_088B9BA0:
{
    std::uint32_t g16 = ctx.gpr[16];
    g16 = (g16 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-4)));
    hot_regs.g31 = (0x088B9BB0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = g16;
    goto L_088B985C;
}
L_088B9BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BB8;
    }
L_088B9BB8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g16 = (g16 + static_cast<std::uint32_t>(4));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088B9BD4u);
    hot_regs.g5 = (g29 | 0u);
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    goto L_088B985C;
}
L_088B9BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9BDC;
    }
L_088B9BDC:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g5 = (0u | 3u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g16 = (g16 + static_cast<std::uint32_t>(4));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-4)));
    f12 = std::bit_cast<float>(g5);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B9C1C;
      }
      goto L_088B9C14;
    }
}
}
L_088B9C14:
    hot_regs.g31 = (0x088B9C1Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9C1Cu) goto L_088B9C1C;
    return;
L_088B9C1C:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9C2C;
    }
}
L_088B9C2C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g5 = (0u | 3u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    g16 = (g16 + static_cast<std::uint32_t>(4));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f12));
    g4 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(24)));
    g5 = (aot_mem.aot_load32(g17 + static_cast<std::uint32_t>(8)));
    g4 = (g4 - g5);
    g4 = (static_cast<std::int32_t>(g4) < 9 ? 1u : 0u);
    { const bool branch_taken = g4 == 0u;
    g4 = (g17 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
      if (branch_taken) {
          goto L_088B9C64;
      }
      goto L_088B9C5C;
    }
}
L_088B9C5C:
    hot_regs.g31 = (0x088B9C64u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 473u, 0x08871CECu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9C64u) goto L_088B9C64;
    return;
L_088B9C64:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    g4 = (g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9C80;
      }
      goto L_088B9C74;
    }
}
L_088B9C74:
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24428));
    hot_regs.g31 = (0x088B9C80u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_088B985C;
L_088B9C80:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088B9AB0;
      }
      goto L_088B9C8C;
    }
L_088B9C8C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9CB0:
{
    std::uint32_t g4 = hot_regs.g4;
    { const std::uint32_t vfpu_address = hot_regs.g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g4 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g4 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9CCC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = hot_regs.g6 + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(hot_regs.g7));
    jump_target = hot_regs.g31;
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[8]));
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9CEC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    { const std::uint32_t vfpu_address = g5 + static_cast<std::uint32_t>(0);
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
    g6 = (g5 + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    g6 = (g4 + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = g6 + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    g6 = (g4 + static_cast<std::uint32_t>(32));
    g5 = (g5 + static_cast<std::uint32_t>(32));
    hot_regs.g7 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(0)));
    g5 = (aot_mem.aot_load8(g5 + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g7));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g5));
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9D24:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24276), hot_regs.g4);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9D2C:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9D34:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7588), hot_regs.g4);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088B9D3C:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g4 = (50300u << 16u);
    g4 = (g4 | 32768u);
    f12 = std::bit_cast<float>(g4);
    g5 = (50170u << 16u);
    g4 = (2246u << 16u);
    f13 = std::bit_cast<float>(g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(17776), std::bit_cast<std::uint32_t>(f13));
    g4 = (g4 + static_cast<std::uint32_t>(17776));
    g6 = (50426u << 16u);
    hot_regs.f14 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(hot_regs.f14));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    g6 = (49880u << 16u);
    f12 = std::bit_cast<float>(g6);
    g6 = (50198u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(f13));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(f12));
    g6 = (50070u << 16u);
    f12 = std::bit_cast<float>(g6);
    g5 = (17597u << 16u);
    g6 = (50110u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    g5 = (g5 | 24576u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(f12));
    f13 = std::bit_cast<float>(g5);
    g6 = (17342u << 16u);
    f12 = std::bit_cast<float>(g6);
    g5 = (17658u << 16u);
    g6 = (49804u << 16u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(g6);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(f12));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(f13));
    f12 = std::bit_cast<float>(g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(f12));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
}
L_088B9DE0:
{
    float f20 = hot_regs.f20;
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-80));
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260)));
    hot_regs.g5 = (49024u << 16u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(f20));
    f20 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.set_fpu_condition((hot_regs.f12 <= f20));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), hot_regs.g31);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    hot_regs.g29 = g29;
    hot_regs.f20 = f20;
      if (branch_taken) {
          goto L_088B9F98;
      }
      goto L_088B9E24;
    }
}
}
L_088B9E24:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    g4 = (g4 & 256u);
    g4 = (0u < g4 ? 1u : 0u);
    g4 = (g4 & 255u);
    { const bool branch_taken = g4 == 0u;
    g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088B9F78;
      }
      goto L_088B9E3C;
    }
}
L_088B9E3C:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g19 = ctx.gpr[19];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (2246u << 16u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g4 = (16256u << 16u);
    hot_regs.f22 = std::bit_cast<float>(g4);
    g18 = (hot_regs.g5 + static_cast<std::uint32_t>(17776));
    g19 = (g18 + static_cast<std::uint32_t>(8));
    g4 = (0u | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(f12));
    ctx.gpr[17] = (0u | 0u);
    g18 = (g4 + g18);
    g19 = (g4 + g19);
    hot_regs.g4 = g4;
    ctx.gpr[18] = g18;
    ctx.gpr[19] = g19;
    hot_regs.f12 = f12;
    goto L_088B9E70;
}
}
L_088B9E70:
{
    float f12 = hot_regs.f12;
{
    std::uint32_t g29 = hot_regs.g29;
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(f12));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(f12));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[24] < f12));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(hot_regs.f13));
    hot_regs.f12 = f12;
      if (branch_taken) {
          goto L_088B9F48;
      }
      goto L_088B9EA4;
    }
}
}
L_088B9EA4:
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[24] <= hot_regs.f13));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088B9F48;
      }
      goto L_088B9EB8;
    }
L_088B9EB8:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    float f14 = hot_regs.f14;
    float f15 = hot_regs.f15;
    float f16 = ctx.fpr[16];
    float f24 = ctx.fpr[24];
{
    std::uint32_t g29 = hot_regs.g29;
    f14 = f24 - f12;
    f15 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    f12 = f13 - f12;
    f12 = f14 / f12;
    f16 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    f24 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    f13 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24272)));
    f16 = f16 - f15;
    { const float fs = f12; const float ft = f16; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    f12 = f15 + f12;
    f14 = f12 - f13;
    ctx.set_fpu_condition((f24 <= f14));
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
          goto L_088B9F48;
      }
      goto L_088B9EF4;
    }
}
}
L_088B9EF4:
{
    float f12 = hot_regs.f12;
    float f24 = ctx.fpr[24];
    f12 = f12 - f24;
    f12 = f12 - hot_regs.f13;
    f12 = f12 / hot_regs.f13;
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f20));
    ctx.set_fpu_condition((f24 <= f12));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
    hot_regs.f12 = f12;
    ctx.fpr[24] = f24;
      if (branch_taken) {
          goto L_088B9F28;
      }
      goto L_088B9F14;
    }
}
L_088B9F14:
{
    float f24 = ctx.fpr[24];
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.set_fpu_condition((hot_regs.f22 < f24));
    // nop
    if (ctx.fpu_condition()) {
    f24 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f22));
    ctx.fpr[24] = f24;
        goto L_088B9F28;
    }
    goto L_088B9F28;
}
L_088B9F28:
    hot_regs.f12 = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-24268)));
    hot_regs.f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f14 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    hot_regs.g31 = (0x088B9F40u);
    { const float fs = hot_regs.f12; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) hot_regs.f12 = std::bit_cast<float>(0x7FC00000u); else hot_regs.f12 = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 600u, 0x08A66CD8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088B9F40u) goto L_088B9F40;
    return;
L_088B9F40:
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(hot_regs.f12));
    goto L_088B9F48;
L_088B9F48:
{
    std::uint32_t g17 = ctx.gpr[17];
    g17 = (g17 + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    hot_regs.g4 = (static_cast<std::int32_t>(g17) < 6 ? 1u : 0u);
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = g17;
      if (branch_taken) {
          goto L_088B9E70;
      }
      goto L_088B9F5C;
    }
}
L_088B9F5C:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24260)));
    f26 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24264)));
    f12 = f12 - f26;
    { const float fs = f12; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    f26 = f26 + f12;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
      if (branch_taken) {
          goto L_088B9F90;
      }
      goto L_088B9F78;
    }
}
}
L_088B9F78:
{
    float f12 = hot_regs.f12;
    float f26 = ctx.fpr[26];
{
    std::uint32_t g28 = ctx.gpr[28];
    f12 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24256)));
    hot_regs.f13 = std::bit_cast<float>(aot_mem.aot_load32(g28 + static_cast<std::uint32_t>(-24264)));
    hot_regs.f14 = f26 - f12;
    aot_mem.aot_store32(g28 + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(f26));
    { const float fs = hot_regs.f14; const float ft = hot_regs.f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f26 = std::bit_cast<float>(0x7FC00000u); else f26 = fs * ft; }
    f26 = f12 + f26;
    hot_regs.f12 = f12;
    ctx.fpr[26] = f26;
    goto L_088B9F90;
}
}
L_088B9F90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_088B9FA0;
      }
      goto L_088B9F98;
    }
L_088B9F98:
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24260), std::bit_cast<std::uint32_t>(hot_regs.f20));
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(-24256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088B9FA0;
L_088B9FA0:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.f20 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    hot_regs.f22 = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088B9FCC:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 1u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    hot_regs.g6 = (0u | 1u);
    hot_regs.g31 = (0x088BA000u);
    hot_regs.g7 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 315u, 0x08931AF4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA000u) goto L_088BA000;
    return;
L_088BA000:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA00Cu);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA00Cu) goto L_088BA00C;
    return;
L_088BA00C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    hot_regs.g31 = (0x088BA020u);
    hot_regs.f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 659u, 0x0896ECD4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA020u) goto L_088BA020;
    return;
L_088BA020:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g2);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    hot_regs.g31 = (0x088BA030u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA030u) goto L_088BA030;
    return;
L_088BA030:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[18] | 0u);
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
L_088BA04C:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088BA068u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA068u) goto L_088BA068;
    return;
L_088BA068:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x088BA07Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA07Cu) goto L_088BA07C;
    return;
L_088BA07C:
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 3u);
    hot_regs.g31 = (0x088BA090u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA090u) goto L_088BA090;
    return;
L_088BA090:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA0B8;
      }
      goto L_088BA09C;
    }
L_088BA09C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA0B8;
      }
      goto L_088BA0A4;
    }
L_088BA0A4:
    hot_regs.g6 = (hot_regs.g4 | 0u);
    hot_regs.g5 = (ctx.gpr[16] << 16u);
    hot_regs.g4 = (ctx.gpr[17] & 255u);
    hot_regs.g31 = (0x088BA0B8u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 335u, 0x0896D36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA0B8u) goto L_088BA0B8;
    return;
L_088BA0B8:
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
L_088BA0D0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g31 = (0x088BA0FCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA0FCu) goto L_088BA0FC;
    return;
L_088BA0FC:
    ctx.gpr[17] = (2237u << 16u);
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-28736));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(hot_regs.g5 + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g31 = (0x088BA120u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 274u, 0x08B15604u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA120u) goto L_088BA120;
    return;
L_088BA120:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA138;
      }
      goto L_088BA128;
    }
L_088BA128:
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088BA134u);
    hot_regs.g5 = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0196_entry, 196u, 276u, 0x08B15624u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA134u) goto L_088BA134;
    return;
L_088BA134:
    ctx.gpr[18] = (hot_regs.g2 | 0u);
    goto L_088BA138;
L_088BA138:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088BA148u);
    hot_regs.g6 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA148u) goto L_088BA148;
    return;
L_088BA148:
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA154;
    }
L_088BA154:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    ctx.gpr[21] = (0u | 65535u);
      if (branch_taken) {
          goto L_088BA180;
      }
      goto L_088BA160;
    }
L_088BA160:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g31 = (0x088BA170u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA170u) goto L_088BA170;
    return;
L_088BA170:
{
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g5));
    goto L_088BA180;
}
L_088BA180:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = g4 != ctx.gpr[21];
    hot_regs.g6 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BA194;
      }
      goto L_088BA18C;
    }
}
L_088BA18C:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1A4;
      }
      goto L_088BA194;
    }
L_088BA194:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    hot_regs.g31 = (0x088BA1A0u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA1A0u) goto L_088BA1A0;
    return;
L_088BA1A0:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    goto L_088BA1A4;
L_088BA1A4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA1AC;
    }
L_088BA1AC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (g4 != 0u) {
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
        goto L_088BA1DC;
    }
    goto L_088BA1B8;
}
L_088BA1B8:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(17));
    hot_regs.g31 = (0x088BA1C8u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 47u, 0x08A9C6FCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA1C8u) goto L_088BA1C8;
    return;
L_088BA1C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g19 = ctx.gpr[19];
    aot_mem.aot_store32(g19 + static_cast<std::uint32_t>(96), hot_regs.g2);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(17)));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(g19 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(hot_regs.g5));
    g4 = (aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
    goto L_088BA1DC;
}
L_088BA1DC:
    { const bool branch_taken = hot_regs.g4 != ctx.gpr[21];
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_088BA1EC;
      }
      goto L_088BA1E4;
    }
L_088BA1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088BA1FC;
      }
      goto L_088BA1EC;
    }
L_088BA1EC:
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    hot_regs.g31 = (0x088BA1F8u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 192u, 0x08ADCA6Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA1F8u) goto L_088BA1F8;
    return;
L_088BA1F8:
    ctx.gpr[20] = (hot_regs.g2 | 0u);
    goto L_088BA1FC;
L_088BA1FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA220;
      }
      goto L_088BA204;
    }
L_088BA204:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA220;
      }
      goto L_088BA20C;
    }
L_088BA20C:
    hot_regs.g5 = (ctx.gpr[16] << 16u);
    hot_regs.g4 = (ctx.gpr[18] & 255u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 16u));
    hot_regs.g31 = (0x088BA220u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 335u, 0x0896D36Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA220u) goto L_088BA220;
    return;
L_088BA220:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA248:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088BA268u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA268u) goto L_088BA268;
    return;
L_088BA268:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g4 = (hot_regs.g4 << 16u);
    hot_regs.g31 = (0x088BA27Cu);
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g4) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 341u, 0x0896D3E8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA27Cu) goto L_088BA27C;
    return;
L_088BA27C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA288u);
    hot_regs.g5 = (hot_regs.g2 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA288u) goto L_088BA288;
    return;
L_088BA288:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_088BA2A0:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g31);
    hot_regs.g31 = (0x088BA2C4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA2C4u) goto L_088BA2C4;
    return;
L_088BA2C4:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x088BA2D8u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0195_entry, 195u, 200u, 0x08B10D5Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA2D8u) goto L_088BA2D8;
    return;
L_088BA2D8:
    hot_regs.g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    hot_regs.g6 = (2237u << 16u);
      if (branch_taken) {
          goto L_088BA310;
      }
      goto L_088BA2E4;
    }
L_088BA2E4:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(3))))));
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(100)));
    g6 = (aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(52)));
    g5 = (g5 ^ g6);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088BA318;
      }
      goto L_088BA308;
    }
}
L_088BA308:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_088BA31C;
      }
      goto L_088BA310;
    }
L_088BA310:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA38C;
      }
      goto L_088BA318;
    }
L_088BA318:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(112)));
    goto L_088BA31C;
L_088BA31C:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_088BA338;
      }
      goto L_088BA324;
    }
L_088BA324:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA330u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA330u) goto L_088BA330;
    return;
L_088BA330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA388;
      }
      goto L_088BA338;
    }
L_088BA338:
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.g4 = (ctx.gpr[17] + ctx.gpr[17]);
    hot_regs.g4 = (ctx.gpr[17] + hot_regs.g4);
    hot_regs.g6 = (ctx.gpr[17] << 7u);
    hot_regs.g4 = (hot_regs.g4 << 4u);
    hot_regs.g4 = (hot_regs.g6 + hot_regs.g4);
    hot_regs.g6 = (2246u << 16u);
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(17840));
    hot_regs.g31 = (0x088BA360u);
    hot_regs.g4 = (hot_regs.g4 + hot_regs.g6);
    if (rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 615u, 0x08B32E84u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA360u) goto L_088BA360;
    return;
L_088BA360:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA37C;
      }
      goto L_088BA368;
    }
L_088BA368:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA374u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA374u) goto L_088BA374;
    return;
L_088BA374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA388;
      }
      goto L_088BA37C;
    }
L_088BA37C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA388u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA388u) goto L_088BA388;
    return;
L_088BA388:
    hot_regs.g2 = (ctx.gpr[18] | 0u);
    goto L_088BA38C;
L_088BA38C:
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
L_088BA3A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088BA3C4u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA3C4u) goto L_088BA3C4;
    return;
L_088BA3C4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (g5 + g5);
    hot_regs.g7 = (g5 << 7u);
    g5 = (g5 + hot_regs.g6);
    g4 = (2246u << 16u);
    g5 = (g5 << 4u);
    g4 = (g4 + static_cast<std::uint32_t>(17840));
    g5 = (hot_regs.g7 + g5);
    g4 = (g5 + g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BA40C;
      }
      goto L_088BA3F8;
    }
}
L_088BA3F8:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA404u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA404u) goto L_088BA404;
    return;
L_088BA404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA418;
      }
      goto L_088BA40C;
    }
L_088BA40C:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA418u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA418u) goto L_088BA418;
    return;
L_088BA418:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_088BA430:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088BA450u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA450u) goto L_088BA450;
    return;
L_088BA450:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g7 = (hot_regs.g5 << 7u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(17840));
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(62)));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g31 = (0x088BA48Cu);
    hot_regs.f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(hot_regs.f12)));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 425u, 0x08806DC0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA48Cu) goto L_088BA48C;
    return;
L_088BA48C:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (ctx.gpr[17] | 0u);
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
L_088BA4A4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088BA4BCu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA4BCu) goto L_088BA4BC;
    return;
L_088BA4BC:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g5 = (0u | 2u);
    hot_regs.g31 = (0x088BA4D0u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA4D0u) goto L_088BA4D0;
    return;
L_088BA4D0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g16 + g16);
    g4 = (g16 + g4);
    hot_regs.f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    g5 = (g16 << 7u);
    g4 = (g4 << 4u);
    g4 = (g5 + g4);
    g5 = (2246u << 16u);
    g5 = (g5 + static_cast<std::uint32_t>(17840));
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(hot_regs.f13));
    g4 = (g4 + g5);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(hot_regs.g6));
    hot_regs.g2 = (0u | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA510:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    hot_regs.g31 = (0x088BA530u);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 337u, 0x0880692Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA530u) goto L_088BA530;
    return;
L_088BA530:
    { const bool branch_taken = hot_regs.g2 != 0u;
    // nop
      if (branch_taken) {
          goto L_088BA540;
      }
      goto L_088BA538;
    }
L_088BA538:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA584;
      }
      goto L_088BA540;
    }
L_088BA540:
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BA54Cu);
    hot_regs.g5 = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 360u, 0x08806A88u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA54Cu) goto L_088BA54C;
    return;
L_088BA54C:
    hot_regs.f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    hot_regs.g4 = (2246u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(17840));
    hot_regs.g5 = (std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.g6 = (hot_regs.g5 + hot_regs.g5);
    hot_regs.g7 = (hot_regs.g5 << 7u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 << 4u);
    hot_regs.g5 = (hot_regs.g7 + hot_regs.g5);
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load8(hot_regs.g4 + static_cast<std::uint32_t>(172)));
    hot_regs.g31 = (0x088BA580u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 451u, 0x08807098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA580u) goto L_088BA580;
    return;
L_088BA580:
    hot_regs.g2 = (ctx.gpr[17] | 0u);
    goto L_088BA584;
L_088BA584:
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
L_088BA598:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), hot_regs.g31);
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24240));
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BA5BC;
      }
      goto L_088BA5AC;
    }
}
L_088BA5AC:
    hot_regs.g31 = (0x088BA5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA5B4u) goto L_088BA5B4;
    return;
L_088BA5B4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24240));
    goto L_088BA5BC;
L_088BA5BC:
    hot_regs.g31 = (0x088BA5C4u);
    hot_regs.g6 = (ctx.gpr[28] + static_cast<std::uint32_t>(-24176));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 270u, 0x08885284u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA5C4u) goto L_088BA5C4;
    return;
L_088BA5C4:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g5 = (2232u << 16u);
      if (branch_taken) {
          goto L_088BA5E0;
      }
      goto L_088BA5D0;
    }
L_088BA5D0:
    hot_regs.g31 = (0x088BA5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 755u, 0x08B67230u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA5D8u) goto L_088BA5D8;
    return;
L_088BA5D8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(5892)));
    hot_regs.g5 = (2232u << 16u);
    goto L_088BA5E0;
L_088BA5E0:
    hot_regs.g6 = (0u | 0u);
    hot_regs.g31 = (0x088BA5ECu);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-21924));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 266u, 0x08885220u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA5ECu) goto L_088BA5EC;
    return;
L_088BA5EC:
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
L_088BA5F8:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    hot_regs.g31 = (0x088BA618u);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    goto L_088BA740;
}
L_088BA618:
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
L_088BA62C:
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
          goto L_088BA664;
      }
      goto L_088BA648;
    }
}
L_088BA648:
    hot_regs.g31 = (0x088BA650u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    goto L_088BA6AC;
L_088BA650:
    hot_regs.g4 = (ctx.gpr[16] & 1u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA664;
      }
      goto L_088BA65C;
    }
L_088BA65C:
    hot_regs.g31 = (0x088BA664u);
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA664u) goto L_088BA664;
    return;
L_088BA664:
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
L_088BA678:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), hot_regs.g31);
    hot_regs.g31 = (0x088BA688u);
    // nop
    hot_regs.g29 = g29;
    goto L_088BA768;
}
L_088BA688:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), hot_regs.g2);
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), hot_regs.g4);
      if (branch_taken) {
          goto L_088BA698;
      }
      goto L_088BA698;
    }
}
L_088BA698:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA6A4:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA6AC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    g16 = (g4 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = g4 == 0u;
    // nop
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BA6DC;
      }
      goto L_088BA6C8;
    }
}
L_088BA6C8:
    hot_regs.g31 = (0x088BA6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0199_entry, 199u, 245u, 0x08B213BCu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA6D0u) goto L_088BA6D0;
    return;
L_088BA6D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (0u | 1u);
      if (branch_taken) {
          goto L_088BA6E0;
      }
      goto L_088BA6DC;
    }
L_088BA6DC:
    hot_regs.g2 = (0u | 0u);
    goto L_088BA6E0;
L_088BA6E0:
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
L_088BA6F0:
{
    float f12 = hot_regs.f12;
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f12));
    hot_regs.g5 = (16256u << 16u);
    f12 = std::bit_cast<float>(hot_regs.g5);
    ctx.set_fpu_condition((f12 <= f13));
    // nop
    if (!ctx.fpu_condition()) {
    f12 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(f13));
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
        goto L_088BA70C;
    }
    goto L_088BA70C;
}
L_088BA70C:
{
    float f13 = hot_regs.f13;
    f13 = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((f13 < hot_regs.f12));
    // nop
    if (ctx.fpu_condition()) {
    f13 = std::bit_cast<float>(std::bit_cast<std::uint32_t>(hot_regs.f12));
    hot_regs.f13 = f13;
        goto L_088BA720;
    }
    goto L_088BA720;
}
L_088BA720:
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f13));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA728:
    hot_regs.g5 = (16256u << 16u);
    hot_regs.f12 = std::bit_cast<float>(0u);
    hot_regs.f13 = std::bit_cast<float>(hot_regs.g5);
    aot_mem.aot_store32(ctx.gpr[28] + static_cast<std::uint32_t>(7672), std::bit_cast<std::uint32_t>(hot_regs.f13));
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(hot_regs.f12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BA740:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), 0u);
    g5 = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), g5);
    jump_target = hot_regs.g31;
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), 0u);
    local_pc = jump_target;
    hot_regs.g5 = g5;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA768:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24164)));
    ctx.gpr[11] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(28)));
    g9 = (0u | 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (g9 | 0u);
    hot_regs.g7 = (g9 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    { const bool branch_taken = hot_regs.g2 == 0u;
    hot_regs.g5 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16965)));
    ctx.gpr[9] = g9;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BA7A8;
      }
      goto L_088BA794;
    }
}
L_088BA794:
    hot_regs.g2 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-24163)));
    ctx.gpr[3] = (static_cast<std::int32_t>(hot_regs.g6) < static_cast<std::int32_t>(hot_regs.g2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA7A8;
      }
      goto L_088BA7A4;
    }
L_088BA7A4:
    hot_regs.g6 = (hot_regs.g2 | 0u);
    goto L_088BA7A8;
L_088BA7A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA7C4;
      }
      goto L_088BA7B0;
    }
L_088BA7B0:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) >= 0;
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088BA7C4;
      }
      goto L_088BA7C0;
    }
L_088BA7C0:
    hot_regs.g6 = (0u | 0u);
    goto L_088BA7C4;
L_088BA7C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) < 0;
    // nop
      if (branch_taken) {
          goto L_088BA7D8;
      }
      goto L_088BA7CC;
    }
L_088BA7CC:
    ctx.gpr[8] = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(8)));
    goto L_088BA7D8;
L_088BA7D8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (g4 < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA7EC;
    }
}
L_088BA7EC:
{
    std::uint32_t g1 = ctx.gpr[1];
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 << 2u);
    g1 = (2232u << 16u);
    g1 = (g1 + g4);
    g1 = (aot_mem.aot_load32(g1 + static_cast<std::uint32_t>(-21840)));
    jump_target = g1;
    // nop
    local_pc = jump_target;
    ctx.gpr[1] = g1;
    hot_regs.g4 = g4;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA804:
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (0u | 180u);
    hot_regs.g7 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 0u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA818;
    }
L_088BA818:
    ctx.gpr[9] = (0u | 100u);
    ctx.gpr[8] = (0u | 220u);
    hot_regs.g7 = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 158u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA82C;
    }
L_088BA82C:
    ctx.gpr[9] = (0u | 80u);
    ctx.gpr[8] = (0u | 255u);
    hot_regs.g7 = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 138u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA840;
    }
L_088BA840:
    ctx.gpr[8] = (0u | 60u);
    ctx.gpr[9] = (0u | 255u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 200u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA854;
    }
L_088BA854:
    ctx.gpr[8] = (0u | 180u);
    ctx.gpr[9] = (0u | 255u);
    hot_regs.g7 = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 128u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA868;
    }
L_088BA868:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (0u | 255u);
    ctx.gpr[8] = (g9 | 0u);
    hot_regs.g7 = (g9 | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 240u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA87C;
    }
}
L_088BA87C:
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[8] = (0u | 180u);
    hot_regs.g7 = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (0u | 120u);
      if (branch_taken) {
          goto L_088BA890;
      }
      goto L_088BA890;
    }
L_088BA890:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    // nop
      if (branch_taken) {
          goto L_088BA978;
      }
      goto L_088BA898;
    }
L_088BA898:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16968)));
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_088BA8CC;
    }
    goto L_088BA8A8;
}
L_088BA8A8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16967)));
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    if (g4 == 0u) {
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    hot_regs.g4 = g4;
        goto L_088BA8CC;
    }
    goto L_088BA8B8;
}
L_088BA8B8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-16966)));
    g4 = (static_cast<std::int32_t>(g4) < 10 ? 1u : 0u);
    { const bool branch_taken = g4 != 0u;
    // nop
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BA978;
      }
      goto L_088BA8C8;
    }
}
L_088BA8C8:
    hot_regs.f12 = std::bit_cast<float>(hot_regs.g5);
    goto L_088BA8CC;
L_088BA8CC:
{
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
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g4 = (50047u << 16u);
    f12 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f12)));
    f13 = std::bit_cast<float>(g4);
    f13 = f12 / f13;
    g4 = (17279u << 16u);
    g5 = (0u | 255u);
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[11] = (g5 - g9);
    hot_regs.g2 = (g5 - g8);
    g5 = (g5 - g7);
    f14 = std::bit_cast<float>(g4);
    f12 = f12 / f14;
    f16 = std::bit_cast<float>(ctx.gpr[10]);
    f15 = std::bit_cast<float>(hot_regs.g6);
    f13 = f13 + f16;
    f17 = std::bit_cast<float>(ctx.gpr[11]);
    f15 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f15)));
    f19 = std::bit_cast<float>(hot_regs.g2);
    f18 = std::bit_cast<float>(g9);
    f14 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f16 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f18)));
    { const float fs = f15; const float ft = f13; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f13 = std::bit_cast<float>(0x7FC00000u); else f13 = fs * ft; }
    { const float fs = f14; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f14 = std::bit_cast<float>(0x7FC00000u); else f14 = fs * ft; }
    f19 = std::bit_cast<float>(g5);
    f19 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f19)));
    { const float fs = f16; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f15 = std::bit_cast<float>(0x7FC00000u); else f15 = fs * ft; }
    f14 = f18 + f14;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    f17 = std::bit_cast<float>(g8);
    ctx.fpr[0] = std::bit_cast<float>(g7);
    f17 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(f17)));
    f18 = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    { const float fs = f19; const float ft = f12; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) f12 = std::bit_cast<float>(0x7FC00000u); else f12 = fs * ft; }
    hot_regs.g6 = (std::bit_cast<std::uint32_t>(f13));
    f13 = f17 + f15;
    f14 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f14));
    f12 = f18 + f12;
    f13 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f13));
    g9 = (std::bit_cast<std::uint32_t>(f14));
    f12 = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(f12));
    g8 = (std::bit_cast<std::uint32_t>(f13));
    g7 = (std::bit_cast<std::uint32_t>(f12));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    hot_regs.f12 = f12;
    hot_regs.f13 = f13;
    hot_regs.f14 = f14;
    hot_regs.f15 = f15;
    ctx.fpr[16] = f16;
    ctx.fpr[17] = f17;
    ctx.fpr[18] = f18;
    ctx.fpr[19] = f19;
    goto L_088BA978;
}
}
L_088BA978:
    ctx.gpr[10] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (hot_regs.g6 & 255u);
    hot_regs.g5 = (ctx.gpr[9] & 255u);
    hot_regs.g7 = (hot_regs.g7 & 255u);
    hot_regs.g4 = (hot_regs.g29 | 0u);
    hot_regs.g31 = (0x088BA994u);
    hot_regs.g6 = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 317u, 0x08A3550Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA994u) goto L_088BA994;
    return;
L_088BA994:
    hot_regs.g31 = (0x088BA99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 268u, 0x08935094u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BA99Cu) goto L_088BA99C;
    return;
L_088BA99C:
    { const bool branch_taken = hot_regs.g2 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BA9C0;
      }
      goto L_088BA9A4;
    }
L_088BA9A4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (0u | 255u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(g4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BA9C8;
      }
      goto L_088BA9C0;
    }
}
L_088BA9C0:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-24145), static_cast<std::uint8_t>(0u));
    hot_regs.g2 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    goto L_088BA9C8;
L_088BA9C8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BA9D4:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    g6 = (hot_regs.g7 - g6);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    g8 = (g8 >> 31u);
    g6 = (g6 + g8);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 1u));
    g6 = (hot_regs.g5 + g6);
    { const bool branch_taken = static_cast<std::int32_t>(g6) < 0;
    g8 = (static_cast<std::int32_t>(g6) < 64 ? 1u : 0u);
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088BAA10;
      }
      goto L_088BA9FC;
    }
}
L_088BA9FC:
{
    std::uint32_t g5 = hot_regs.g5;
    { const bool branch_taken = ctx.gpr[8] == 0u;
    g5 = (g5 + g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BAA10;
      }
      goto L_088BAA04;
    }
}
L_088BAA04:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g7 + g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BAA84;
      }
      goto L_088BAA10;
    }
}
L_088BAA10:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g6) <= 0;
    hot_regs.g5 = (0u - hot_regs.g6);
      if (branch_taken) {
          goto L_088BAA2C;
      }
      goto L_088BAA18;
    }
L_088BAA18:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 6u));
    g5 = (g5 >> 26u);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 6u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BAA4C;
      }
      goto L_088BAA2C;
    }
}
L_088BAA2C:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 6u));
    g5 = (g5 >> 26u);
    g5 = (g5 - hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 6u));
    g5 = (0u - g5);
    g5 = (g5 + static_cast<std::uint32_t>(-1));
    hot_regs.g5 = g5;
    goto L_088BAA4C;
}
L_088BAA4C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g8 = (g5 << 2u);
    g7 = (g7 + g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g8);
    g5 = (g5 << 6u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (hot_regs.g6 - g5);
    g8 = (g8 + static_cast<std::uint32_t>(128));
    g5 = (g5 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g8);
    g5 = (g7 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_088BAA84;
}
L_088BAA84:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAA8C:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g8 = ctx.gpr[8];
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    g8 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    hot_regs.g7 = (0u - g5);
    g5 = (hot_regs.g6 - g8);
    g8 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g8 = (g8 >> 31u);
    g5 = (g5 + g8);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 1u));
    g5 = (hot_regs.g7 + g5);
    { const bool branch_taken = static_cast<std::int32_t>(g5) < 0;
    g8 = (static_cast<std::int32_t>(g5) < 64 ? 1u : 0u);
    hot_regs.g5 = g5;
    ctx.gpr[8] = g8;
      if (branch_taken) {
          goto L_088BAAD0;
      }
      goto L_088BAAB8;
    }
}
L_088BAAB8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAAD0;
      }
      goto L_088BAAC0;
    }
L_088BAAC0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (hot_regs.g7 + hot_regs.g7);
    g5 = (hot_regs.g6 + g5);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BAB44;
      }
      goto L_088BAAD0;
    }
}
L_088BAAD0:
    { const bool branch_taken = static_cast<std::int32_t>(hot_regs.g5) <= 0;
    hot_regs.g6 = (0u - hot_regs.g5);
      if (branch_taken) {
          goto L_088BAAEC;
      }
      goto L_088BAAD8;
    }
L_088BAAD8:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 6u));
    g6 = (g6 >> 26u);
    g6 = (hot_regs.g5 + g6);
    { const bool branch_taken = 0u == 0u;
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 6u));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088BAB0C;
      }
      goto L_088BAAEC;
    }
}
L_088BAAEC:
{
    std::uint32_t g6 = hot_regs.g6;
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 6u));
    g6 = (g6 >> 26u);
    g6 = (g6 - hot_regs.g5);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g6) >> 6u));
    g6 = (0u - g6);
    g6 = (g6 + static_cast<std::uint32_t>(-1));
    hot_regs.g6 = g6;
    goto L_088BAB0C;
}
L_088BAB0C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g8 = (g6 << 2u);
    g7 = (g7 + g8);
    g8 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), g7);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g8);
    g6 = (g6 << 6u);
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    g5 = (g5 - g6);
    g8 = (g8 + static_cast<std::uint32_t>(128));
    g5 = (g5 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(8), g8);
    g5 = (g7 + g5);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(0), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    goto L_088BAB44;
}
L_088BAB44:
    jump_target = hot_regs.g31;
    hot_regs.g2 = (hot_regs.g4 | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAB4C:
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
L_088BAB60:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    g6 = (2234u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(22480));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(60), g6);
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(hot_regs.g5));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(g4 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(56), 0u);
    jump_target = hot_regs.g31;
    hot_regs.g2 = (g4 | 0u);
    local_pc = jump_target;
    hot_regs.g6 = g6;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BABB4:
{
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[17] = (hot_regs.g5 | 0u);
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BAED8;
      }
      goto L_088BABDC;
    }
}
L_088BABDC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (2234u << 16u);
    g4 = (g4 + static_cast<std::uint32_t>(22480));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), g4);
    g4 = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(g4));
    g4 = (ctx.gpr[16] | 0u);
    hot_regs.g31 = (0x088BABFCu);
    hot_regs.g5 = (0u | 1u);
    hot_regs.g4 = g4;
    goto L_088BB4BC;
}
L_088BABFC:
    aot_mem.aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-4784), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (2237u << 16u);
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(-28736));
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(116));
    hot_regs.g31 = (0x088BAC14u);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 41u, 0x08934334u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAC14u) goto L_088BAC14;
    return;
L_088BAC14:
{
    std::uint32_t g16 = ctx.gpr[16];
    hot_regs.g4 = (g16 + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (g16 + static_cast<std::uint32_t>(36));
    ctx.gpr[19] = (g16 + static_cast<std::uint32_t>(24));
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (g16 + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC28;
    }
}
L_088BAC28:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    hot_regs.g7 = (hot_regs.g5 | 0u);
    { const bool branch_taken = hot_regs.g7 == hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAC48;
      }
      goto L_088BAC3C;
    }
L_088BAC3C:
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    goto L_088BAC40;
L_088BAC40:
{
    std::uint32_t g7 = hot_regs.g7;
    { const bool branch_taken = g7 != hot_regs.g6;
    g7 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
      if (branch_taken) {
          goto L_088BAC40;
      }
      goto L_088BAC48;
    }
}
L_088BAC48:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC50;
    }
L_088BAC50:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC58;
    }
L_088BAC58:
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAC68;
      }
      goto L_088BAC60;
    }
L_088BAC60:
    hot_regs.g31 = (0x088BAC68u);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAC68u) goto L_088BAC68;
    return;
L_088BAC68:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BAC70;
    }
L_088BAC70:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAC90;
      }
      goto L_088BAC84;
    }
L_088BAC84:
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(8));
    goto L_088BAC88;
L_088BAC88:
{
    std::uint32_t g6 = hot_regs.g6;
    { const bool branch_taken = g6 != hot_regs.g5;
    g6 = (g6 + static_cast<std::uint32_t>(8));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088BAC88;
      }
      goto L_088BAC90;
    }
}
L_088BAC90:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BAC98;
    }
L_088BAC98:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BACA0;
    }
L_088BACA0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACB0;
      }
      goto L_088BACA8;
    }
L_088BACA8:
    hot_regs.g31 = (0x088BACB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BACB0u) goto L_088BACB0;
    return;
L_088BACB0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACB8;
    }
L_088BACB8:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACC4;
    }
L_088BACC4:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACCC;
    }
L_088BACCC:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BACDC;
      }
      goto L_088BACD4;
    }
L_088BACD4:
    hot_regs.g31 = (0x088BACDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BACDCu) goto L_088BACDC;
    return;
L_088BACDC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088BAEC8;
      }
      goto L_088BACE4;
    }
L_088BACE4:
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BAEA0;
      }
      goto L_088BACF4;
    }
L_088BACF4:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(20));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(36));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[11] = (g29 + static_cast<std::uint32_t>(68));
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(84));
    goto L_088BAD0C;
}
L_088BAD0C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BAE94;
      }
      goto L_088BAD14;
    }
L_088BAD14:
    if (hot_regs.g6 == 0u) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(56));
        goto L_088BAE98;
    }
    goto L_088BAD1C;
L_088BAD1C:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g29 = hot_regs.g29;
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g3);
    g3 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g3);
    g3 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g3);
    g3 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g3);
    g3 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g3);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    g3 = (ctx.gpr[11] | 0u);
    g13 = (aot_mem.aot_load32(g3 + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (hot_regs.g2 | 0u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    g13 = (g13 ^ ctx.gpr[14]);
    g13 = (0u < g13 ? 1u : 0u);
    g13 = (g13 & 255u);
    if (g13 == 0u) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), hot_regs.g4);
    ctx.gpr[3] = g3;
    ctx.gpr[13] = g13;
        goto L_088BAE64;
    }
    goto L_088BAE04;
}
L_088BAE04:
    ctx.gpr[13] = (ctx.gpr[11] | 0u);
    goto L_088BAE08;
L_088BAE08:
{
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    g14 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(0)));
    g14 = (g14 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g14);
    ctx.gpr[15] = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(8)));
    if (g14 != ctx.gpr[15]) {
    g13 = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
        goto L_088BAE48;
    }
    goto L_088BAE20;
}
L_088BAE20:
{
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    g14 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(12)));
    g14 = (g14 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(12), g14);
    g14 = (aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(4), g14);
    g14 = (g14 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(8), g14);
    g14 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g13 + static_cast<std::uint32_t>(0), g14);
    g13 = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[13] = g13;
    ctx.gpr[14] = g14;
    goto L_088BAE48;
}
L_088BAE48:
{
    std::uint32_t g13 = ctx.gpr[13];
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    g13 = (g13 ^ ctx.gpr[14]);
    g13 = (0u < g13 ? 1u : 0u);
    g13 = (g13 & 255u);
    { const bool branch_taken = g13 != 0u;
    g13 = (ctx.gpr[11] | 0u);
    ctx.gpr[13] = g13;
      if (branch_taken) {
          goto L_088BAE08;
      }
      goto L_088BAE60;
    }
}
L_088BAE60:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g4);
    goto L_088BAE64;
L_088BAE64:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g5);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    hot_regs.g31 = (0x088BAE74u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAE74u) goto L_088BAE74;
    return;
L_088BAE74:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(84));
    ctx.gpr[11] = (g29 + static_cast<std::uint32_t>(68));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(36));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(20));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    goto L_088BAE94;
}
L_088BAE94:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(56));
    goto L_088BAE98;
L_088BAE98:
    { const bool branch_taken = hot_regs.g5 != hot_regs.g4;
    // nop
      if (branch_taken) {
          goto L_088BAD0C;
      }
      goto L_088BAEA0;
    }
L_088BAEA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    hot_regs.g4 = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_088BAEC8;
      }
      goto L_088BAEA8;
    }
L_088BAEA8:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (g4 == 0u) {
    g4 = (ctx.gpr[17] & 1u);
    hot_regs.g4 = g4;
        goto L_088BAEC8;
    }
    goto L_088BAEB4;
}
L_088BAEB4:
    if (hot_regs.g4 == 0u) {
    hot_regs.g4 = (ctx.gpr[17] & 1u);
        goto L_088BAEC8;
    }
    goto L_088BAEBC;
L_088BAEBC:
    hot_regs.g31 = (0x088BAEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAEC4u) goto L_088BAEC4;
    return;
L_088BAEC4:
    hot_regs.g4 = (ctx.gpr[17] & 1u);
    goto L_088BAEC8;
L_088BAEC8:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAED8;
      }
      goto L_088BAED0;
    }
L_088BAED0:
    hot_regs.g31 = (0x088BAED8u);
    hot_regs.g4 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 470u, 0x08ABE2C0u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAED8u) goto L_088BAED8;
    return;
L_088BAED8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BAEF8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(12)));
    g6 = (g6 - hot_regs.g7);
    g4 = (0u | 56u);
    ctx.gpr[8] = (0u | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g6); const std::int32_t divisor = static_cast<std::int32_t>(g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g9 = (ctx.lo);
    g9 = (ctx.gpr[8] < g9 ? 1u : 0u);
    { const bool branch_taken = g9 == 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g6 = g6;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088BAF64;
      }
      goto L_088BAF20;
    }
}
L_088BAF20:
    ctx.gpr[9] = (aot_mem.aot_load8(hot_regs.g7 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == hot_regs.g5;
    // nop
      if (branch_taken) {
          goto L_088BAF4C;
      }
      goto L_088BAF2C;
    }
L_088BAF2C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    g8 = (g8 + static_cast<std::uint32_t>(1));
    { const std::int32_t dividend = static_cast<std::int32_t>(hot_regs.g6); const std::int32_t divisor = static_cast<std::int32_t>(hot_regs.g4); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g9 = (ctx.lo);
    g9 = (g8 < g9 ? 1u : 0u);
    { const bool branch_taken = g9 != 0u;
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088BAF20;
      }
      goto L_088BAF44;
    }
}
L_088BAF44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BAF64;
      }
      goto L_088BAF4C;
    }
L_088BAF4C:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g7 + static_cast<std::uint32_t>(4));
    hot_regs.g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(16)));
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    g2 = (hot_regs.g5 ^ g4);
    { const bool branch_taken = 0u == 0u;
    g2 = (g2 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BAF68;
      }
      goto L_088BAF64;
    }
}
L_088BAF64:
    hot_regs.g2 = (0u | 1u);
    goto L_088BAF68;
L_088BAF68:
    jump_target = hot_regs.g31;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088BAF70:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (2188u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-15428));
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8616))))));
    hot_regs.g31 = (0x088BAFB0u);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 323u, 0x08B6A1E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAFB0u) goto L_088BAFB0;
    return;
L_088BAFB0:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g5 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088BAFC0u);
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 294u, 0x08B6A05Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BAFC0u) goto L_088BAFC0;
    return;
L_088BAFC0:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    g2 = (g2 ^ hot_regs.g4);
    g2 = (0u < g2 ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g2 = g2;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BAFE8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g31);
    g16 = (g4 | 0u);
    ctx.gpr[17] = (g5 | 0u);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = g4 == g5;
    g5 = (g4 | 0u);
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BB038;
      }
      goto L_088BB01C;
    }
}
L_088BB01C:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB030;
      }
      goto L_088BB024;
    }
L_088BB024:
{
    std::uint32_t g4 = hot_regs.g4;
    aot_mem.aot_store32(hot_regs.g5 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_088BB030;
}
L_088BB030:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), hot_regs.g4);
      if (branch_taken) {
          goto L_088BB130;
      }
      goto L_088BB038;
    }
L_088BB038:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    g5 = (0u | 1u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g5 = (hot_regs.g4 - g5);
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g6 >> 30u);
    g5 = (g5 + g6);
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g5) >> 2u));
    g6 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = g6 == 0u;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088BB078;
      }
      goto L_088BB068;
    }
}
L_088BB068:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(8));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
      if (branch_taken) {
          goto L_088BB084;
      }
      goto L_088BB078;
    }
}
L_088BB078:
{
    std::uint32_t g18 = ctx.gpr[18];
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(12));
    g18 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    g18 = (hot_regs.g5 + g18);
    ctx.gpr[18] = g18;
    goto L_088BB084;
}
L_088BB084:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    hot_regs.g5 = (0u | 0u);
      if (branch_taken) {
          goto L_088BB0C0;
      }
      goto L_088BB08C;
    }
L_088BB08C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[18] << 2u);
    hot_regs.g31 = (0x088BB09Cu);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB09Cu) goto L_088BB09C;
    return;
L_088BB09C:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = hot_regs.g5 != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088BB0C0;
      }
      goto L_088BB0AC;
    }
L_088BB0AC:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    hot_regs.g31 = (0x088BB0B8u);
    hot_regs.g4 = (hot_regs.g6 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB0B8u) goto L_088BB0B8;
    return;
L_088BB0B8:
    hot_regs.g5 = (hot_regs.g2 | 0u);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    goto L_088BB0C0;
L_088BB0C0:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 != hot_regs.g6;
    ctx.gpr[19] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088BB0D4;
      }
      goto L_088BB0CC;
    }
L_088BB0CC:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088BB0F0;
      }
      goto L_088BB0D4;
    }
L_088BB0D4:
    hot_regs.g5 = (hot_regs.g6 | 0u);
    ctx.gpr[20] = (hot_regs.g4 - hot_regs.g6);
    hot_regs.g4 = (ctx.gpr[19] | 0u);
    hot_regs.g31 = (0x088BB0E8u);
    hot_regs.g6 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB0E8u) goto L_088BB0E8;
    return;
L_088BB0E8:
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[20]);
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    goto L_088BB0F0;
L_088BB0F0:
    { const bool branch_taken = hot_regs.g4 == 0u;
    ctx.gpr[20] = (hot_regs.g5 | 0u);
      if (branch_taken) {
          goto L_088BB108;
      }
      goto L_088BB0F8;
    }
L_088BB0F8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g20 = ctx.gpr[20];
    aot_mem.aot_store32(g20 + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    g4 = (g4 + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = g4 != 0u;
    g20 = (g20 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    ctx.gpr[20] = g20;
      if (branch_taken) {
          goto L_088BB0F8;
      }
      goto L_088BB108;
    }
}
L_088BB108:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = hot_regs.g4 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB11C;
      }
      goto L_088BB114;
    }
L_088BB114:
    hot_regs.g31 = (0x088BB11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB11Cu) goto L_088BB11C;
    return;
L_088BB11C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    g4 = (ctx.gpr[18] << 2u);
    g4 = (ctx.gpr[19] + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(32), g4);
    hot_regs.g4 = g4;
    goto L_088BB130;
}
L_088BB130:
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088BB13Cu);
    hot_regs.g5 = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 468u, 0x08A9BB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB13Cu) goto L_088BB13C;
    return;
L_088BB13C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(48)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB15C:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (g9 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g9 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (g7 - g9);
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g7) >> 3u));
    g9 = (g9 >> 29u);
    g17 = (g7 + g9);
    g17 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(g17) >> 3u));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g7 = (g17 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BB1B8;
      }
      goto L_088BB1AC;
    }
}
L_088BB1AC:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_088BB1C0;
      }
      goto L_088BB1B8;
    }
L_088BB1B8:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_088BB1C0;
}
L_088BB1C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088BB21C;
      }
      goto L_088BB1C8;
    }
L_088BB1C8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] << 3u);
    hot_regs.g31 = (0x088BB1E0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(20), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB1E0u) goto L_088BB1E0;
    return;
L_088BB1E0:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_088BB21C;
      }
      goto L_088BB1F8;
    }
}
L_088BB1F8:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(24), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(16), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(12), hot_regs.g5);
    hot_regs.g31 = (0x088BB20Cu);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB20Cu) goto L_088BB20C;
    return;
L_088BB20C:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(24)));
    goto L_088BB21C;
}
L_088BB21C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB254;
      }
      goto L_088BB22C;
    }
L_088BB22C:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(8));
        goto L_088BB24C;
    }
    goto L_088BB238;
L_088BB238:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g9));
    g9 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), g9);
    g7 = (g7 + static_cast<std::uint32_t>(8));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    goto L_088BB24C;
}
L_088BB24C:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB22C;
      }
      goto L_088BB254;
    }
L_088BB254:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = hot_regs.g7 != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088BB28C;
      }
      goto L_088BB264;
    }
L_088BB264:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB280;
      }
      goto L_088BB270;
    }
L_088BB270:
{
    std::uint32_t g6 = hot_regs.g6;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g7 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g7 + static_cast<std::uint32_t>(4), g6);
    hot_regs.g6 = g6;
    goto L_088BB280;
}
L_088BB280:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BB2C0;
      }
      goto L_088BB28C;
    }
L_088BB28C:
    { const bool branch_taken = hot_regs.g7 == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB2BC;
      }
      goto L_088BB294;
    }
L_088BB294:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
        goto L_088BB2B4;
    }
    goto L_088BB2A0;
L_088BB2A0:
{
    std::uint32_t g9 = ctx.gpr[9];
    g9 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g9));
    g9 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), g9);
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = g9;
    goto L_088BB2B4;
}
L_088BB2B4:
    { const bool branch_taken = hot_regs.g7 != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB294;
      }
      goto L_088BB2BC;
    }
L_088BB2BC:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BB2C0;
L_088BB2C0:
    { const bool branch_taken = hot_regs.g4 != 0u;
    // nop
      if (branch_taken) {
          goto L_088BB304;
      }
      goto L_088BB2C8;
    }
L_088BB2C8:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BB304;
      }
      goto L_088BB2D8;
    }
}
L_088BB2D8:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(8));
        goto L_088BB2F8;
    }
    goto L_088BB2E4;
L_088BB2E4:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g4 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g7 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(hot_regs.g6 + static_cast<std::uint32_t>(4), g7);
    g4 = (g4 + static_cast<std::uint32_t>(8));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    goto L_088BB2F8;
}
L_088BB2F8:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088BB2D8;
      }
      goto L_088BB300;
    }
L_088BB300:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BB304;
L_088BB304:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g4 | 0u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB320;
      }
      goto L_088BB314;
    }
L_088BB314:
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(8));
    goto L_088BB318;
L_088BB318:
{
    std::uint32_t g5 = hot_regs.g5;
    { const bool branch_taken = g5 != hot_regs.g6;
    g5 = (g5 + static_cast<std::uint32_t>(8));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BB318;
      }
      goto L_088BB320;
    }
}
L_088BB320:
    { const bool branch_taken = hot_regs.g4 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB330;
      }
      goto L_088BB328;
    }
L_088BB328:
    hot_regs.g31 = (0x088BB330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 482u, 0x08ABE398u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB330u) goto L_088BB330;
    return;
L_088BB330:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g18 = ctx.gpr[18];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (ctx.gpr[17] << 3u);
    g4 = (g18 + g4);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(0), g18);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(g16 + static_cast<std::uint32_t>(8), g4);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    g18 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(44)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g4 = g4;
    ctx.gpr[16] = g16;
    ctx.gpr[18] = g18;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB360:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), hot_regs.g31);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g5);
    g6 = (2237u << 16u);
    g6 = (g6 + static_cast<std::uint32_t>(-28736));
    g6 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(100)));
    g6 = (g6 + static_cast<std::uint32_t>(96));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(8)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(16))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(g6));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(g5));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store16(g29 + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load16(g29 + static_cast<std::uint32_t>(14)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    g5 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(40)));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = g5 == g6;
    ctx.gpr[16] = (g4 | 0u);
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BB3E8;
      }
      goto L_088BB3BC;
    }
}
L_088BB3BC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (g4 == 0u) {
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
        goto L_088BB3DC;
    }
    goto L_088BB3C8;
}
L_088BB3C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g29 + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(4), g5);
    g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088BB3DC;
}
L_088BB3DC:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (g4 + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), g4);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BB408;
      }
      goto L_088BB3E8;
    }
}
L_088BB3E8:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    hot_regs.g6 = (g29 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(24));
    ctx.gpr[8] = (0u | 1u);
    hot_regs.g31 = (0x088BB408u);
    ctx.gpr[9] = (0u | 1u);
    goto L_088BB15C;
}
L_088BB408:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g31 = (0x088BB414u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 468u, 0x08A9BB08u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB414u) goto L_088BB414;
    return;
L_088BB414:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088BB428u);
    hot_regs.g6 = (hot_regs.g29 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 296u, 0x08B6A098u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB428u) goto L_088BB428;
    return;
L_088BB428:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (hot_regs.g2 | 0u);
    { const bool branch_taken = g4 != ctx.gpr[17];
    hot_regs.g5 = (g4 | 0u);
    hot_regs.g4 = g4;
      if (branch_taken) {
          goto L_088BB43C;
      }
      goto L_088BB434;
    }
}
L_088BB434:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_088BB470;
      }
      goto L_088BB43C;
    }
L_088BB43C:
    hot_regs.g4 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
    { const bool branch_taken = hot_regs.g4 == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088BB470;
      }
      goto L_088BB448;
    }
L_088BB448:
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
    goto L_088BB44C;
L_088BB44C:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    if (hot_regs.g6 == hot_regs.g7) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(4));
        goto L_088BB468;
    }
    goto L_088BB458;
L_088BB458:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(0), hot_regs.g6);
    g5 = (g5 + static_cast<std::uint32_t>(4));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    goto L_088BB468;
}
L_088BB468:
    if (hot_regs.g4 != ctx.gpr[17]) {
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(0)));
        goto L_088BB44C;
    }
    goto L_088BB470;
L_088BB470:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    g6 = (hot_regs.g4 | 0u);
    { const bool branch_taken = g6 == g6;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    hot_regs.g6 = g6;
      if (branch_taken) {
          goto L_088BB4A0;
      }
      goto L_088BB480;
    }
}
L_088BB480:
    hot_regs.g7 = (hot_regs.g4 | 0u);
    ctx.gpr[17] = (hot_regs.g6 - hot_regs.g7);
    hot_regs.g4 = (hot_regs.g5 | 0u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g31 = (0x088BB498u);
    hot_regs.g6 = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 164u, 0x08AF54A4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB498u) goto L_088BB498;
    return;
L_088BB498:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g5 = (hot_regs.g2 + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088BB4A0;
      }
      goto L_088BB4A0;
    }
L_088BB4A0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), hot_regs.g5);
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB4BC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), hot_regs.g31);
    g16 = (g4 | 0u);
    g5 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    g5 = (g5 ^ g4);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 != 0u;
    // nop
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BB52C;
      }
      goto L_088BB4E8;
    }
}
L_088BB4E8:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = hot_regs.g5 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB514;
      }
      goto L_088BB4F4;
    }
L_088BB4F4:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g5 + static_cast<std::uint32_t>(108)));
    hot_regs.g6 = (hot_regs.g4 + static_cast<std::uint32_t>(24));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    hot_regs.g4 = (hot_regs.g5 + hot_regs.g4);
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g6 + static_cast<std::uint32_t>(4)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088BB510u);
    hot_regs.g5 = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB510u) goto L_088BB510;
    return;
L_088BB510:
    hot_regs.g4 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_088BB514;
L_088BB514:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    g5 = (g5 ^ hot_regs.g4);
    g5 = (g5 < static_cast<std::uint32_t>(1) ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BB4E8;
      }
      goto L_088BB52C;
    }
}
L_088BB52C:
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
L_088BB53C:
{
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), hot_regs.g31);
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (hot_regs.g6 | 0u);
    g8 = (hot_regs.g7 - ctx.gpr[9]);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[10] = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g8); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g8 = (ctx.lo);
    { const bool branch_taken = static_cast<std::int32_t>(g8) <= 0;
    // nop
    ctx.gpr[8] = g8;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BB5F0;
      }
      goto L_088BB570;
    }
}
L_088BB570:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(132), ctx.gpr[9]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(128), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(hot_regs.g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (hot_regs.g6 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BB598u);
    hot_regs.g5 = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 154u, 0x08B68A00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB598u) goto L_088BB598;
    return;
L_088BB598:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g4 = (g6 + static_cast<std::uint32_t>(44));
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    g5 = (g9 + static_cast<std::uint32_t>(44));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (g6 + static_cast<std::uint32_t>(46));
    g5 = (g9 + static_cast<std::uint32_t>(46));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(48), g4);
    g4 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g6 + static_cast<std::uint32_t>(52), g4);
    g9 = (g9 + static_cast<std::uint32_t>(56));
    g6 = (g6 + static_cast<std::uint32_t>(56));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(124)));
    g8 = (g8 + static_cast<std::uint32_t>(-1));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = static_cast<std::int32_t>(g8) > 0;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088BB570;
      }
      goto L_088BB5EC;
    }
}
L_088BB5EC:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g4 + static_cast<std::uint32_t>(4)));
    goto L_088BB5F0;
L_088BB5F0:
    ctx.gpr[8] = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g6 == hot_regs.g7;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BB7C0;
      }
      goto L_088BB5FC;
    }
L_088BB5FC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[15] = (g29 + static_cast<std::uint32_t>(4));
    ctx.gpr[14] = (g29 + static_cast<std::uint32_t>(20));
    ctx.gpr[13] = (g29 + static_cast<std::uint32_t>(36));
    ctx.gpr[12] = (g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[3] = (g29 + static_cast<std::uint32_t>(68));
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(84));
    goto L_088BB614;
}
L_088BB614:
    { const bool branch_taken = hot_regs.g6 == 0u;
    ctx.gpr[24] = (hot_regs.g6 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088BB7B4;
      }
      goto L_088BB61C;
    }
L_088BB61C:
    if (ctx.gpr[24] == 0u) {
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(56));
        goto L_088BB7B8;
    }
    goto L_088BB624;
L_088BB624:
{
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g12 = ctx.gpr[12];
    std::uint32_t g13 = ctx.gpr[13];
    std::uint32_t g14 = ctx.gpr[14];
    std::uint32_t g15 = ctx.gpr[15];
    std::uint32_t g29 = hot_regs.g29;
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g9);
    g9 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g9);
    g9 = (aot_mem.aot_load32(g15 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g9);
    g9 = (aot_mem.aot_load32(g15 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g9);
    g9 = (aot_mem.aot_load32(g15 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g9);
    g9 = (aot_mem.aot_load32(g15 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g9);
    g9 = (aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g9);
    g9 = (aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g9);
    g9 = (aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g9);
    g9 = (aot_mem.aot_load32(g14 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g9);
    g9 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g9);
    g9 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g9);
    g9 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g9);
    g9 = (aot_mem.aot_load32(g13 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g9);
    g9 = (aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g9);
    g9 = (aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g9);
    g9 = (aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g9);
    g9 = (aot_mem.aot_load32(g12 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(96), g9);
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(100), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    g9 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (hot_regs.g2 | 0u);
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    g9 = (g9 ^ ctx.gpr[25]);
    g9 = (0u < g9 ? 1u : 0u);
    g9 = (g9 & 255u);
    if (g9 == 0u) {
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), ctx.gpr[8]);
    ctx.gpr[9] = g9;
        goto L_088BB76C;
    }
    goto L_088BB70C;
}
L_088BB70C:
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    goto L_088BB710;
L_088BB710:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g25 = ctx.gpr[25];
    g25 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    g25 = (g25 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g25);
    hot_regs.g31 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(8)));
    if (g25 != hot_regs.g31) {
    g9 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = g9;
    ctx.gpr[25] = g25;
        goto L_088BB750;
    }
    goto L_088BB728;
}
L_088BB728:
{
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g25 = ctx.gpr[25];
    g25 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(12)));
    g25 = (g25 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(12), g25);
    g25 = (aot_mem.aot_load32(g25 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(4), g25);
    g25 = (g25 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(8), g25);
    g25 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g9 + static_cast<std::uint32_t>(0), g25);
    g9 = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = g9;
    ctx.gpr[25] = g25;
    goto L_088BB750;
}
L_088BB750:
{
    std::uint32_t g9 = ctx.gpr[9];
    ctx.gpr[25] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    g9 = (g9 ^ ctx.gpr[25]);
    g9 = (0u < g9 ? 1u : 0u);
    g9 = (g9 & 255u);
    { const bool branch_taken = g9 != 0u;
    g9 = (ctx.gpr[3] | 0u);
    ctx.gpr[9] = g9;
      if (branch_taken) {
          goto L_088BB710;
      }
      goto L_088BB768;
    }
}
L_088BB768:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(120), ctx.gpr[8]);
    goto L_088BB76C;
L_088BB76C:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), hot_regs.g7);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(108), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(104), hot_regs.g4);
    hot_regs.g4 = (ctx.gpr[24] | 0u);
    hot_regs.g31 = (0x088BB788u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 121u, 0x08B6876Cu>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB788u) goto L_088BB788;
    return;
L_088BB788:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(104)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(84));
    ctx.gpr[3] = (g29 + static_cast<std::uint32_t>(68));
    ctx.gpr[12] = (g29 + static_cast<std::uint32_t>(52));
    ctx.gpr[13] = (g29 + static_cast<std::uint32_t>(36));
    ctx.gpr[14] = (g29 + static_cast<std::uint32_t>(20));
    ctx.gpr[15] = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    goto L_088BB7B4;
}
L_088BB7B4:
    hot_regs.g6 = (hot_regs.g6 + static_cast<std::uint32_t>(56));
    goto L_088BB7B8;
L_088BB7B8:
    { const bool branch_taken = hot_regs.g6 != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_088BB614;
      }
      goto L_088BB7C0;
    }
L_088BB7C0:
{
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    hot_regs.g2 = (hot_regs.g5 | 0u);
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB7D4:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(84), hot_regs.g31);
    hot_regs.g6 = (hot_regs.g5 | 0u);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g4 = (hot_regs.g29 + static_cast<std::uint32_t>(16));
    hot_regs.g5 = (2188u << 16u);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-15428));
    hot_regs.g31 = (0x088BB818u);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(8616))))));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 323u, 0x08B6A1E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB818u) goto L_088BB818;
    return;
L_088BB818:
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(16)));
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(28), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(32), hot_regs.g5);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(36), hot_regs.g6);
    hot_regs.g6 = (hot_regs.g29 + static_cast<std::uint32_t>(28));
    hot_regs.g4 = (ctx.gpr[17] | 0u);
    hot_regs.g31 = (0x088BB840u);
    hot_regs.g5 = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 321u, 0x08B6A1A8u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB840u) goto L_088BB840;
    return;
L_088BB840:
    ctx.gpr[17] = (hot_regs.g2 | 0u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088BB864;
      }
      goto L_088BB84C;
    }
L_088BB84C:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_088BB850;
L_088BB850:
    hot_regs.g4 = (ctx.gpr[18] | 0u);
    hot_regs.g31 = (0x088BB85Cu);
    hot_regs.g5 = (ctx.gpr[17] | 0u);
    goto L_088BB53C;
L_088BB85C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088BB910;
      }
      goto L_088BB864;
    }
L_088BB864:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(28)));
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(32)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), hot_regs.g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), hot_regs.g5);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), hot_regs.g6);
      if (branch_taken) {
          goto L_088BB908;
      }
      goto L_088BB884;
    }
}
L_088BB884:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    goto L_088BB888;
L_088BB888:
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    hot_regs.g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(44)));
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(hot_regs.g29 + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(hot_regs.g5));
    hot_regs.g6 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(40)));
    jump_target = hot_regs.g6;
    hot_regs.g31 = (0x088BB8ACu);
    hot_regs.g5 = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB8ACu) goto L_088BB8AC;
    return;
L_088BB8AC:
    if (hot_regs.g2 != 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
        goto L_088BB900;
    }
    goto L_088BB8B4;
L_088BB8B4:
    hot_regs.g4 = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(hot_regs.g4));
    hot_regs.g4 = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BB8C8u);
    hot_regs.g5 = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 154u, 0x08B68A00u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB8C8u) goto L_088BB8C8;
    return;
L_088BB8C8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g19 = ctx.gpr[19];
    g4 = (g17 + static_cast<std::uint32_t>(44));
    g5 = (g19 + static_cast<std::uint32_t>(44));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (g17 + static_cast<std::uint32_t>(46));
    g5 = (g19 + static_cast<std::uint32_t>(46));
    g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g5 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g4 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g5));
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(48), g4);
    g4 = (aot_mem.aot_load32(g19 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g17 + static_cast<std::uint32_t>(52), g4);
    g17 = (g17 + static_cast<std::uint32_t>(56));
    g19 = (g19 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    ctx.gpr[17] = g17;
    ctx.gpr[19] = g19;
    goto L_088BB900;
}
L_088BB900:
    if (ctx.gpr[19] != ctx.gpr[20]) {
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(56), ctx.gpr[19]);
        goto L_088BB888;
    }
    goto L_088BB908;
L_088BB908:
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088BB850;
      }
      goto L_088BB910;
    }
L_088BB910:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB930:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(8), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g4 | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    hot_regs.g4 = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    hot_regs.g31 = (0x088BB974u);
    hot_regs.g5 = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 130u, 0x08B687E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BB974u) goto L_088BB974;
    return;
L_088BB974:
{
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(g16 + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    hot_regs.g2 = (g16 | 0u);
    g16 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    ctx.gpr[16] = g16;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BB990:
    hot_regs.g29 = (hot_regs.g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(196), hot_regs.g31);
    ctx.gpr[16] = (hot_regs.g5 | 0u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(188), hot_regs.g4);
    hot_regs.g5 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    hot_regs.g5 = (hot_regs.g5 - hot_regs.g6);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 2u));
    hot_regs.g6 = (hot_regs.g6 >> 30u);
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g5) >> 2u));
    hot_regs.g5 = (hot_regs.g5 << 6u);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    hot_regs.g6 = (hot_regs.g6 - hot_regs.g7);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 1u));
    hot_regs.g7 = (hot_regs.g7 >> 31u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 1u));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g6 = (hot_regs.g6 - hot_regs.g7);
    hot_regs.g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 1u));
    hot_regs.g7 = (hot_regs.g7 >> 31u);
    hot_regs.g6 = (hot_regs.g6 + hot_regs.g7);
    hot_regs.g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(hot_regs.g6) >> 1u));
    hot_regs.g5 = (hot_regs.g5 + hot_regs.g6);
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(32), 0u);
    hot_regs.g31 = (0x088BBA34u);
    aot_mem.aot_store32(hot_regs.g4 + static_cast<std::uint32_t>(36), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0217_entry, 217u, 130u, 0x08B687E4u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BBA34u) goto L_088BBA34;
    return;
L_088BBA34:
{
    std::uint32_t g2 = hot_regs.g2;
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g4);
    g4 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(76)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(80)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g6);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g4);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(108), g7);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), g7);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g7);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(120), g7);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(108)));
    g8 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    g9 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g9);
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g7);
    g2 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(188)));
    g10 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g10);
    g10 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g10);
    g10 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g10);
    g10 = (aot_mem.aot_load32(g2 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g10);
    g10 = (g29 + static_cast<std::uint32_t>(20));
    aot_mem.aot_store8(g29 + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g9);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g7);
    g4 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g4);
    g4 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g4);
    g4 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g4);
    g4 = (aot_mem.aot_load32(g10 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    g5 = (g4 ^ g5);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    { const bool branch_taken = g5 == 0u;
    // nop
    hot_regs.g2 = g2;
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    ctx.gpr[8] = g8;
    ctx.gpr[9] = g9;
    ctx.gpr[10] = g10;
      if (branch_taken) {
          goto L_088BBBE8;
      }
      goto L_088BBB44;
    }
}
L_088BBB44:
    hot_regs.g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    goto L_088BBB48;
L_088BBB48:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g6 = (hot_regs.g4 | 0u);
      if (branch_taken) {
          goto L_088BBB5C;
      }
      goto L_088BBB50;
    }
L_088BBB50:
{
    std::uint32_t g4 = hot_regs.g4;
    g4 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(hot_regs.g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(hot_regs.g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g4));
    g4 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g4 = g4;
    goto L_088BBB5C;
}
L_088BBB5C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g4);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    if (g4 != hot_regs.g5) {
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
        goto L_088BBB98;
    }
    goto L_088BBB70;
}
L_088BBB70:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g4 = (g4 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), g4);
    g4 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), g4);
    g4 = (g4 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g4);
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g4 = g4;
    goto L_088BBB98;
}
L_088BBB98:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (hot_regs.g4 + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = g5 != hot_regs.g6;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BBBD0;
      }
      goto L_088BBBAC;
    }
}
L_088BBBAC:
{
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(16)));
    g5 = (g5 + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g5);
    g5 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(8), g5);
    g5 = (g5 + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g5);
    hot_regs.g5 = g5;
    goto L_088BBBD0;
}
L_088BBBD0:
{
    std::uint32_t g5 = hot_regs.g5;
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(156)));
    g5 = (hot_regs.g4 ^ g5);
    g5 = (0u < g5 ? 1u : 0u);
    g5 = (g5 & 255u);
    if (g5 != 0u) {
    g5 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(4)));
    hot_regs.g5 = g5;
        goto L_088BBB48;
    }
    goto L_088BBBE8;
}
L_088BBBE8:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[16] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(192)));
    hot_regs.g31 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(196)));
    jump_target = hot_regs.g31;
    g29 = (g29 + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    hot_regs.g29 = g29;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}
L_088BBBF8:
{
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g16 = ctx.gpr[16];
    std::uint32_t g17 = ctx.gpr[17];
    std::uint32_t g29 = hot_regs.g29;
    g29 = (g29 + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(180), g16);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(184), g17);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(196), hot_regs.g31);
    g16 = (hot_regs.g4 | 0u);
    hot_regs.g4 = (g9 & 255u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    g7 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(4)));
    g9 = (aot_mem.aot_load32(g16 + static_cast<std::uint32_t>(0)));
    g7 = (g7 - g9);
    g9 = (0u | 56u);
    { const std::int32_t dividend = static_cast<std::int32_t>(g7); const std::int32_t divisor = static_cast<std::int32_t>(g9); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    g17 = (ctx.lo);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(4), g17);
    g7 = (g17 < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = g7 == 0u;
    g7 = (g29 + static_cast<std::uint32_t>(4));
    hot_regs.g7 = g7;
    ctx.gpr[9] = g9;
    ctx.gpr[16] = g16;
    ctx.gpr[17] = g17;
    hot_regs.g29 = g29;
      if (branch_taken) {
          goto L_088BBC50;
      }
      goto L_088BBC44;
    }
}
L_088BBC44:
    hot_regs.g7 = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + hot_regs.g7);
      if (branch_taken) {
          goto L_088BBC58;
      }
      goto L_088BBC50;
    }
L_088BBC50:
{
    std::uint32_t g7 = hot_regs.g7;
    g7 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + g7);
    hot_regs.g7 = g7;
    goto L_088BBC58;
}
L_088BBC58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088BBCBC;
      }
      goto L_088BBC60;
    }
L_088BBC60:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    hot_regs.g4 = (ctx.gpr[17] << 6u);
    hot_regs.g5 = (ctx.gpr[17] << 3u);
    hot_regs.g4 = (hot_regs.g4 - hot_regs.g5);
    hot_regs.g31 = (0x088BBC80u);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(172), hot_regs.g4);
    if (rt.invoke_chained_direct<&recomp_unit_0174_entry, 174u, 474u, 0x08ABE308u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BBC80u) goto L_088BBC80;
    return;
L_088BBC80:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_088BBCBC;
      }
      goto L_088BBC98;
    }
}
L_088BBC98:
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(176), hot_regs.g4);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(116), hot_regs.g6);
    aot_mem.aot_store32(hot_regs.g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    hot_regs.g31 = (0x088BBCACu);
    hot_regs.g4 = (hot_regs.g7 | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0216_entry, 216u, 289u, 0x08B65438u>(ctx, &aot_mem, &hot_regs) && ctx.pc == 0x088BBCACu) goto L_088BBCAC;
    return;
L_088BBCAC:
{
    std::uint32_t g29 = hot_regs.g29;
    ctx.gpr[19] = (hot_regs.g2 | 0u);
    hot_regs.g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    hot_regs.g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    hot_regs.g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    goto L_088BBCBC;
}
L_088BBCBC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    hot_regs.g7 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = hot_regs.g7 == hot_regs.g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBD50;
      }
      goto L_088BBCCC;
    }
L_088BBCCC:
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[8] == 0u) {
    hot_regs.g7 = (hot_regs.g7 + static_cast<std::uint32_t>(56));
        goto L_088BBD48;
    }
    goto L_088BBCD8;
L_088BBCD8:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(168), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(164), g8);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g8 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (g8 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BBD00u);
    hot_regs.g5 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_088BB990;
}
L_088BBD00:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(164)));
    g5 = (g4 + static_cast<std::uint32_t>(44));
    g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(168)));
    g6 = (g7 + static_cast<std::uint32_t>(44));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (g4 + static_cast<std::uint32_t>(46));
    g6 = (g7 + static_cast<std::uint32_t>(46));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g6 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g7 = (g7 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_088BBD48;
}
L_088BBD48:
    { const bool branch_taken = hot_regs.g7 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBCCC;
      }
      goto L_088BBD50;
    }
L_088BBD50:
    ctx.gpr[10] = (aot_mem.aot_load32(hot_regs.g29 + static_cast<std::uint32_t>(0)));
    hot_regs.g7 = (0u | 1u);
    { const bool branch_taken = ctx.gpr[10] != hot_regs.g7;
    // nop
      if (branch_taken) {
          goto L_088BBDDC;
      }
      goto L_088BBD60;
    }
L_088BBD60:
    hot_regs.g7 = (ctx.gpr[19] | 0u);
    { const bool branch_taken = hot_regs.g7 == 0u;
    // nop
      if (branch_taken) {
          goto L_088BBDD0;
      }
      goto L_088BBD6C;
    }
L_088BBD6C:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(160), g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    g4 = (aot_mem.aot_load8(g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g7 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BBD90u);
    hot_regs.g5 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    goto L_088BB990;
}
L_088BBD90:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(160)));
    g5 = (g4 + static_cast<std::uint32_t>(44));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g7 = (g6 + static_cast<std::uint32_t>(44));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g5 = (g4 + static_cast<std::uint32_t>(46));
    g7 = (g6 + static_cast<std::uint32_t>(46));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_088BBDD0;
}
L_088BBDD0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = 0u == 0u;
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088BBE88;
      }
      goto L_088BBDDC;
    }
L_088BBDDC:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088BBE84;
      }
      goto L_088BBDE4;
    }
L_088BBDE4:
{
    std::uint32_t g6 = hot_regs.g6;
    hot_regs.g7 = (g6 + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (g6 + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (g6 + static_cast<std::uint32_t>(46));
    goto L_088BBDF0;
}
L_088BBDF0:
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1));
        goto L_088BBE7C;
    }
    goto L_088BBDFC;
L_088BBDFC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g11 = ctx.gpr[11];
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(176), g4);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(156), hot_regs.g7);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(152), ctx.gpr[8]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(144), ctx.gpr[10]);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(140), g11);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(116), hot_regs.g6);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(112), hot_regs.g5);
    g4 = (aot_mem.aot_load8(hot_regs.g6 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g11 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (g11 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BBE30u);
    hot_regs.g5 = (hot_regs.g7 | 0u);
    hot_regs.g4 = g4;
    goto L_088BB990;
}
L_088BBE30:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g10 = ctx.gpr[10];
    std::uint32_t g29 = hot_regs.g29;
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(140)));
    g5 = (g4 + static_cast<std::uint32_t>(44));
    ctx.gpr[8] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(152)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g5 = (g4 + static_cast<std::uint32_t>(46));
    ctx.gpr[9] = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(148)));
    g6 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g5 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g6));
    g6 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(116)));
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(48), g5);
    g5 = (aot_mem.aot_load32(g6 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g4 + static_cast<std::uint32_t>(52), g5);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(112)));
    g10 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(144)));
    hot_regs.g7 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(156)));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(176)));
    g10 = (g10 + static_cast<std::uint32_t>(-1));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    ctx.gpr[10] = g10;
    goto L_088BBE7C;
}
L_088BBE7C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBDF0;
      }
      goto L_088BBE84;
    }
L_088BBE84:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BBE88;
L_088BBE88:
    { const bool branch_taken = hot_regs.g4 != 0u;
    hot_regs.g4 = (hot_regs.g6 | 0u);
      if (branch_taken) {
          goto L_088BBF20;
      }
      goto L_088BBE90;
    }
L_088BBE90:
{
    std::uint32_t g5 = hot_regs.g5;
    hot_regs.g4 = (g5 | 0u);
    g5 = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g4 == g5;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    hot_regs.g5 = g5;
      if (branch_taken) {
          goto L_088BBF1C;
      }
      goto L_088BBEA0;
    }
}
L_088BBEA0:
    hot_regs.g6 = (ctx.gpr[19] | 0u);
    if (hot_regs.g6 == 0u) {
    hot_regs.g4 = (hot_regs.g4 + static_cast<std::uint32_t>(56));
        goto L_088BBF10;
    }
    goto L_088BBEAC;
L_088BBEAC:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(136), g4);
    g7 = (g4 | 0u);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(132), hot_regs.g5);
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(128), g6);
    g4 = (aot_mem.aot_load8(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(g4));
    g4 = (g6 + static_cast<std::uint32_t>(4));
    hot_regs.g31 = (0x088BBED0u);
    hot_regs.g5 = (g7 + static_cast<std::uint32_t>(4));
    hot_regs.g4 = g4;
    hot_regs.g7 = g7;
    goto L_088BB990;
}
L_088BBED0:
{
    std::uint32_t g4 = hot_regs.g4;
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g6 = hot_regs.g6;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g29 = hot_regs.g29;
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(128)));
    g6 = (g5 + static_cast<std::uint32_t>(44));
    g4 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(136)));
    g7 = (g4 + static_cast<std::uint32_t>(44));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g6 = (g5 + static_cast<std::uint32_t>(46));
    g7 = (g4 + static_cast<std::uint32_t>(46));
    g7 = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(g7 + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(g6 + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(g7));
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(48), g6);
    g6 = (aot_mem.aot_load32(g4 + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(g5 + static_cast<std::uint32_t>(52), g6);
    g5 = (aot_mem.aot_load32(g29 + static_cast<std::uint32_t>(132)));
    g4 = (g4 + static_cast<std::uint32_t>(56));
    hot_regs.g4 = g4;
    hot_regs.g5 = g5;
    hot_regs.g6 = g6;
    hot_regs.g7 = g7;
    goto L_088BBF10;
}
L_088BBF10:
    { const bool branch_taken = hot_regs.g4 != hot_regs.g5;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088BBEA0;
      }
      goto L_088BBF18;
    }
L_088BBF18:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088BBF1C;
L_088BBF1C:
    hot_regs.g4 = (hot_regs.g6 | 0u);
    goto L_088BBF20;
L_088BBF20:
    hot_regs.g6 = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    hot_regs.g5 = (hot_regs.g6 | 0u);
    { const bool branch_taken = hot_regs.g5 == hot_regs.g4;
    aot_mem.aot_store8(hot_regs.g29 + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 12u, 0x088BC0E0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088BBF30;
    }
L_088BBF30:
{
    std::uint32_t g29 = hot_regs.g29;
    hot_regs.g7 = (g29 + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (g29 + static_cast<std::uint32_t>(28));
    ctx.gpr[9] = (g29 + static_cast<std::uint32_t>(44));
    ctx.gpr[10] = (g29 + static_cast<std::uint32_t>(60));
    ctx.gpr[11] = (g29 + static_cast<std::uint32_t>(76));
    hot_regs.g2 = (g29 + static_cast<std::uint32_t>(92));
    goto L_088BBF48;
}
L_088BBF48:
    { const bool branch_taken = hot_regs.g5 == 0u;
    hot_regs.g6 = (hot_regs.g5 + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 9u, 0x088BC0D0u>(ctx, &aot_mem, &hot_regs); return;
      }
      goto L_088BBF50;
    }
L_088BBF50:
    if (hot_regs.g6 == 0u) {
    hot_regs.g5 = (hot_regs.g5 + static_cast<std::uint32_t>(56));
        (void)rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 10u, 0x088BC0D4u>(ctx, &aot_mem, &hot_regs); return;
    }
    goto L_088BBF58;
L_088BBF58:
{
    std::uint32_t g3 = ctx.gpr[3];
    std::uint32_t g5 = hot_regs.g5;
    std::uint32_t g7 = hot_regs.g7;
    std::uint32_t g8 = ctx.gpr[8];
    std::uint32_t g9 = ctx.gpr[9];
    std::uint32_t g29 = hot_regs.g29;
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(12), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(16), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(20), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(24), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(28), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(32), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(36), g3);
    g3 = (aot_mem.aot_load32(g5 + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(40), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(44), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(48), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(52), g3);
    g3 = (aot_mem.aot_load32(g7 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(56), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(60), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(64), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(68), g3);
    g3 = (aot_mem.aot_load32(g8 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(72), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(76), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(80), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(84), g3);
    g3 = (aot_mem.aot_load32(g9 + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(88), g3);
    g3 = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(g29 + static_cast<std::uint32_t>(92), g3);
    ctx.gpr[3] = g3;
    ctx.pc = 0x088BC000u; return;}

}

void recomp_unit_0045(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    AotHotRegisterCache hot_regs(ctx);
    recomp_unit_0045_entry(rt, ctx, 0u, aot_mem, hot_regs);
    hot_regs.flush_to(ctx);
}

void register_generated_unit_45(Runtime &runtime) {
    runtime.register_generated_unit(45u, 0x088B8000u, 16384u, &recomp_unit_0045, &recomp_unit_0045_entry);
    runtime.register_function(0x088B8000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8050u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8060u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B80F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B810Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B811Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8154u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8164u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B81F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8234u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B825Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8298u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B82F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8300u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8344u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B84F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B851Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8524u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B853Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8568u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B857Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8588u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B85F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8610u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B862Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8648u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8664u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8680u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B869Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B86FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B870Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8720u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8778u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8790u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8798u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B879Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B87FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8808u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8810u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8814u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B886Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8878u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8880u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8898u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B889Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B88F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8900u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8920u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8950u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B895Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B896Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8998u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B89FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8A64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8AFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8B9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8BF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8C98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8CF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8D98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8DF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8E9Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8EECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8F98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B8FFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9008u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9014u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9034u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9044u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B904Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B905Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B906Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9088u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9094u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B90F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9104u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9118u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9130u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9140u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B915Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9168u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B918Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B91F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9214u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9230u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9240u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B92F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9310u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B932Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9334u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B933Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B936Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9378u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9380u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9388u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9394u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B939Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B93E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9490u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B94E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B950Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B951Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9528u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9538u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9550u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9558u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9560u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9564u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9590u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B95ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9600u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B960Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9620u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B962Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B963Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9650u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B966Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9688u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9694u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B969Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B96F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9704u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B970Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9714u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B971Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9724u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B972Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9734u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B973Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9758u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9760u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9774u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9798u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B97D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9800u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9808u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9810u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9830u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9838u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9848u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B985Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9890u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B98ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9924u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9930u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9960u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9970u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B997Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9988u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9998u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B99ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9A78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9ABCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9AD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B38u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B54u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9B98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9BDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9C8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9CECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9D3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9DE0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E24u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9E70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EA4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9EF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F78u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9F98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088B9FCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA000u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA00Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA020u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA04Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA068u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA07Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA090u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA09Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA0FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA120u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA128u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA134u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA138u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA148u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA154u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA160u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA170u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA180u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA18Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA194u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA1FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA204u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA20Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA220u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA248u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA268u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA27Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA288u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA308u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA310u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA31Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA324u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA330u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA338u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA368u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA374u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA37Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA388u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA38Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA3F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA404u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA40Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA418u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA430u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA450u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA48Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA4D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA530u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA538u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA540u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA54Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA580u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA584u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA5F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA618u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA62Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA648u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA650u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA65Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA664u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA678u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA688u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA698u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6D0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA6F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA720u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA728u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA740u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA794u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7B0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7C4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA7ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA804u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA82Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA854u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA868u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA87Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA890u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA898u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8A8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA8CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA978u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA994u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA99Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9A4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BA9FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAA8Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAAECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAB60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BABFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC28u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC3Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC40u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAC98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACB8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACD4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BACF4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD0Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD14u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAD1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE04u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE08u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE74u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE94u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAE98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEA8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEB4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEC4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEC8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAED0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAED8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAEF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF2Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF4Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF64u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF68u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAF70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFB0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFC0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BAFE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB01Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB024u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB030u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB038u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB068u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB078u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB084u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB08Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB09Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0CCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB0F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB108u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB114u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB11Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB130u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB13Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB15Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1E0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB1F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB20Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB21Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB22Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB238u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB24Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB254u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB264u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB270u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB280u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB28Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB294u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2D8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2E4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB2F8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB300u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB304u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB314u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB318u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB320u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB328u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB330u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB360u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3DCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB3E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB408u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB414u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB428u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB434u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB43Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB448u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB44Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB458u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB468u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB470u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB480u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB498u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4A0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4BCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4E8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB4F4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB510u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB514u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB52Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB53Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB570u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB598u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5ECu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5F0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB5FCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB614u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB61Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB624u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB70Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB710u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB728u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB750u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB768u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB76Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB788u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7B8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7C0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB7D4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB818u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB840u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB84Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB850u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB85Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB864u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB884u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB888u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8ACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8B4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB8C8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB900u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB908u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB910u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB930u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB974u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BB990u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBA34u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB5Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB70u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBB98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBE8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBBF8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC44u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC58u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC80u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBC98u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCBCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCCCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBCD8u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD00u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD60u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD6Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBD90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDD0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDDCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDE4u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDF0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBDFCu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE7Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE84u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE88u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBE90u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEA0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBEACu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBED0u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF10u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF18u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF1Cu, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF20u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF30u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF48u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF50u, &recomp_unit_0045, "recomp_unit_0045");
    runtime.register_function(0x088BBF58u, &recomp_unit_0045, "recomp_unit_0045");
}
} // namespace psprecomp
